// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef ATXANCHORMODELHYPERPARAMETERS_H
#define ATXANCHORMODELHYPERPARAMETERS_H

@class NSDictionary;

#import <Foundation/Foundation.h>


@interface ATXAnchorModelHyperParameters : NSObject {
    NSDictionary *_parameters;
}




+(id)sharedInstance;
-(CGFloat)highBlendingConfidenceScoreThreshold;
-(CGFloat)idleTimeEndAnchorMinimumSecondsForBeingIdle;
-(CGFloat)maxDurationForAnchorModelPredictionInSecondsForPhase3;
-(CGFloat)maxSecondsSinceCandidateOccurrenceToConsiderCandidateForPrediction;
-(CGFloat)maxTrainingAgeInSecondsToConsiderForRetraining;
-(CGFloat)maxValueForParameterKey:(id)arg0 ;
-(CGFloat)mediumBlendingConfidenceScoreThreshold;
-(CGFloat)minClassConditionalProbabilityForCandidateForPhase1;
-(CGFloat)minClassConditionalProbabilityForHighConfidencePredictionForAnchor:(id)arg0 ;
-(CGFloat)minClassConditionalProbabilityForMediumConfidencePredictionForAnchor:(id)arg0 ;
-(CGFloat)minDurationForAnchorModelPredictionInSecondsForPhase3;
-(CGFloat)minPosteriorProbabilityForCandidateForPhase1;
-(CGFloat)minPosteriorProbabilityForHighConfidencePredictionForAnchor:(id)arg0 ;
-(CGFloat)minPosteriorProbabilityForMediumConfidencePredictionForAnchor:(id)arg0 ;
-(CGFloat)minPosteriorProbabilityToIgnoreClassConditionalProbabilityForCandidateForPhase1;
-(CGFloat)minValueForParameterKey:(id)arg0 ;
-(CGFloat)modelWeightForParameterKey:(id)arg0 ;
-(CGFloat)percentileForEndOffsetFromAnchorForPhase3;
-(CGFloat)percentileForStartOffsetFromAnchorForPhase3;
-(CGFloat)ratioForLeafNodeDecision;
-(CGFloat)secondsBeforeHistoricalStartDateToPredictCandidate;
-(NSInteger)candidateClassifierTypeForPhase2;
-(NSInteger)minNumUniqueAnchorOccurrencesWithUniqueCandidateOccurrencesForHighConfidencePredictionForAnchor:(id)arg0 ;
-(NSInteger)minNumUniqueAnchorOccurrencesWithUniqueCandidateOccurrencesForMediumConfidencePredictionForAnchor:(id)arg0 ;
-(NSInteger)minUniqueAnchorOccurrencesForAnchorForPhase1;
-(id)abGroup;
-(id)anchorsDisabledForHomescreen;
-(id)enabledAnchors;
-(id)init;
-(id)knownAnchorClasses;


@end


#endif