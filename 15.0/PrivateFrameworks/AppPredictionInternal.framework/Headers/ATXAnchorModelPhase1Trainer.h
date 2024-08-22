// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef ATXANCHORMODELPHASE1TRAINER_H
#define ATXANCHORMODELPHASE1TRAINER_H

@class NSString;
@protocol ATXAnchorModelPhase1TrainerProtocol, ATXPETEventTracker2Protocol;

#import <Foundation/Foundation.h>

#import "ATXAnchor.h"
#import "ATXAnchorModelDataStoreWrapper.h"
#import "ATXAnchorModelHyperParameters.h"

@interface ATXAnchorModelPhase1Trainer : NSObject <ATXAnchorModelPhase1TrainerProtocol>

 {
    ATXAnchor *_anchor;
    ATXAnchorModelDataStoreWrapper *_storeWrapper;
    ATXAnchorModelHyperParameters *_hyperParameters;
    id<ATXPETEventTracker2Protocol> *_tracker;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(BOOL)candidateSatisfiesAllThresholds:(id)arg0 trainingResult:(id)arg1 ;
-(BOOL)candidateUniqueAnchorOccurrencesIsAtLeastMinimum:(NSInteger)arg0 candidateId:(id)arg1 trainingResult:(id)arg2 ;
-(BOOL)classConditionalProbabilityOfAnchorIsAtLeastMinimum:(CGFloat)arg0 candidateId:(id)arg1 trainingResult:(id)arg2 ;
-(BOOL)posteriorProbabilityConditionedOnAnchorIsAtLeastMinimum:(CGFloat)arg0 candidateId:(id)arg1 trainingResult:(id)arg2 ;
-(CGFloat)anchorPopularityForCandidate:(id)arg0 ;
-(CGFloat)classConditionalProbabilityOfAnchorForCandidate:(id)arg0 ;
-(CGFloat)globalPopularityForCandidate:(id)arg0 ;
-(CGFloat)posteriorProbabilityConditionedOnAnchorForCandidate:(id)arg0 ;
-(CGFloat)standardDeviationOfNumbers:(id)arg0 ;
-(CGFloat)standardDeviationOfSecondsAfterAnchorForFirstOccurrenceOfCandidateId:(id)arg0 ;
-(id)init;
-(id)initForAnchor:(id)arg0 ;
-(id)initForAnchor:(id)arg0 anchorModelDataStoreWrapper:(id)arg1 hyperParameters:(id)arg2 tracker:(id)arg3 ;
-(id)selectedPredictionCandidates;
-(id)trainPhase1;
-(id)uniqueCandidateIdsThatOccurredAfterAnchor;
-(void)_logPredictionsFilteredDuringPhase1WithCandidateIdsToConsider:(id)arg0 selectedCandidates:(id)arg1 ;


@end


#endif