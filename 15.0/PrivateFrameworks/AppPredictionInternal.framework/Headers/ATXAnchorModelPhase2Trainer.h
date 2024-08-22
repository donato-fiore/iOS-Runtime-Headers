// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef ATXANCHORMODELPHASE2TRAINER_H
#define ATXANCHORMODELPHASE2TRAINER_H

@class NSString;
@protocol ATXAnchorModelPhase2TrainerProtocol;

#import <Foundation/Foundation.h>

#import "ATXAnchor.h"
#import "ATXAnchorModelDataStoreWrapper.h"
#import "ATXAnchorModelHyperParameters.h"

@interface ATXAnchorModelPhase2Trainer : NSObject <ATXAnchorModelPhase2TrainerProtocol>

 {
    ATXAnchor *_anchor;
    ATXAnchorModelDataStoreWrapper *_storeWrapper;
    ATXAnchorModelHyperParameters *_hyperParameters;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(NSInteger)candidateClassifierType;
-(id)initForAnchor:(id)arg0 ;
-(id)initForAnchor:(id)arg0 anchorModelDataStoreWrapper:(id)arg1 ;
-(id)trainClassifierForCandidateId:(id)arg0 candidateType:(id)arg1 ;
-(id)trainGamePlayKitDecisionTreeCandidateClassifierForCandidate:(id)arg0 candidateType:(id)arg1 ;
-(id)trainNaivePositiveCandidateClassifierForCandidate:(id)arg0 candidateType:(id)arg1 ;
-(id)trainPhase2ForCandidate:(id)arg0 candidateType:(id)arg1 ;
-(id)trainStrictContextMatchCandidateClassifierForCandidate:(id)arg0 candidateType:(id)arg1 ;


@end


#endif