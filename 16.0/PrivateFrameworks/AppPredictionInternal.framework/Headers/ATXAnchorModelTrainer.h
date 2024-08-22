// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef ATXANCHORMODELTRAINER_H
#define ATXANCHORMODELTRAINER_H

@class NSDate, NSString;
@protocol ATXAnchorModelTrainerProtocol, ATXAnchorModelDataStoreWrapperProtocol;

#import <Foundation/Foundation.h>

#import "ATXXPCActivity.h"
#import "ATXAnchorModelHyperParameters.h"

@interface ATXAnchorModelTrainer : NSObject <ATXAnchorModelTrainerProtocol>

 {
    ATXXPCActivity *_xpcActivity;
    id<ATXAnchorModelDataStoreWrapperProtocol> *_dataStoreWrapper;
    ATXAnchorModelHyperParameters *_hyperparameters;
    NSDate *_trainingStartDate;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(BOOL)anchorWasRecentlyTrained:(id)arg0 ;
-(id)anchorsToIncludeInTraining;
-(id)candidateTypeFromCandidateId:(id)arg0 ;
-(id)init;
-(id)initWithXPCActivity:(id)arg0 ;
-(id)initWithXPCActivity:(id)arg0 dataStoreWrapper:(id)arg1 ;
-(id)trainAnchorModel:(id)arg0 ;
-(id)trainAnchorModel:(id)arg0 phase1Trainer:(id)arg1 phase2Trainer:(id)arg2 phase3Trainer:(id)arg3 ;
-(id)trainModelPerCandidateSelectedInPhase1:(id)arg0 phase2Trainer:(id)arg1 phase3Trainer:(id)arg2 phase1Results:(id)arg3 ;
-(void)train;


@end


#endif