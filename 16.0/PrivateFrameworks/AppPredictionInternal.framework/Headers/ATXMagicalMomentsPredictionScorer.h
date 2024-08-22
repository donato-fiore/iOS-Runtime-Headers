// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef ATXMAGICALMOMENTSPREDICTIONSCORER_H
#define ATXMAGICALMOMENTSPREDICTIONSCORER_H

@class NSArray, NSCountedSet, NSMutableDictionary, NSString, NSMutableOrderedSet;

#import <Foundation/Foundation.h>


@interface ATXMagicalMomentsPredictionScorer : NSObject {
    NSArray *_correlatedEvents;
    NSCountedSet *_relevantAppLaunches;
    NSUInteger _totalRelevantLaunchesForAllBundleIds;
    NSCountedSet *_globalAppLaunches;
    NSMutableDictionary *_numUniqueAnchorOccurrencesPerCandidate;
    NSMutableDictionary *_relevanceWeightsByIdentifier;
    NSString *_topScoringIdentifier;
    NSMutableOrderedSet *_dateSetForDecay;
    NSMutableDictionary *_cumulativeScoresWithDecayedWeightsByIdentifier;
    CGFloat _totalScaledCumulativeScoresForAllBundleIds;
    NSMutableDictionary *_finalPredictionConfidences;
}




-(BOOL)subExpertCanMakeHighConfidencePredictions;
-(BOOL)subExpertCanMakeHighConfidencePredictionsForBundleId:(id)arg0 ;
-(BOOL)subExpertHasObservedEnoughLaunchesForMultipleAppsToMakePredictions;
-(BOOL)subExpertHasObservedEnoughLaunchesForOneAppToMakePredictions;
-(BOOL)subExpertHasWitnessedEnoughRelevantAppLaunches;
-(CGFloat)maximumRelevanceWeightForMMScoring;
-(CGFloat)minimumRelevanceWeightForMMScoring;
-(CGFloat)scalingFactorFromTopPrediction;
-(NSUInteger)minimumNumberOfDaysOfObservationsRequiredForSubExpertToMakePredictions;
-(NSUInteger)minimumNumberOfGlobalObservationsOfBundleIdForMMScoring;
-(NSUInteger)minimumNumberOfRelevantObservationsOfBundleIdForMMScoring;
-(NSUInteger)minimumNumberOfUniqueAnchorOccurrencesForBundleIdForMMScoring;
-(NSUInteger)totalRelevantLaunchesForAllBundleIds;
-(id)cumulativeScoresWithDecayedWeightsByIdentifier;
-(id)dateSetForDecay;
-(id)generatePredictions;
-(id)getPredictionsFromFinalConfidences;
-(id)initWithCorrelatedEvents:(id)arg0 andGlobalAppLaunchCountedSet:(id)arg1 ;
-(id)relevanceScoreForBundleId:(id)arg0 ;
-(id)relevanceWeightsByIdentifier;
-(id)relevantAppLaunches;
-(id)startOfDayForDate:(id)arg0 ;
-(id)topScoringIdentifier;
-(void)computeModelConfidences;
-(void)computeRelevanceScoresForAllRelevantBundleIds;
-(void)computeTimeDecayedCumulativeScores;
-(void)getRelevantAppLaunchCountsAndDateSetFromCorrelationData;
-(void)scaleAllScoresWithTopScoringFactor;


@end


#endif