// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef HMIDESTRAINER_H
#define HMIDESTRAINER_H

@class HMFObject, NSString, NSURL;
@protocol HMFLogging;


#import "HMIDESDataset.h"

@interface HMIDESTrainer : HMFObject <HMFLogging>



@property (readonly) HMIDESDataset *data; // ivar: _data
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) NSURL *networkPath; // ivar: _networkPath
@property (readonly) Class superclass;


+(id)logCategory;
-(float)preTrainingInferenceOutputDictionary:(id)arg0 preTrainingtrainingLossKeyName:(id)arg1 error:(*id)arg2 ;
-(id)getParametersFromLayers:(id)arg0 fromTask:(id)arg1 error:(*id)arg2 ;
-(id)inferenceInputs:(id)arg0 inferenceOutputs:(id)arg1 trainingInputs:(id)arg2 trainingOutputs:(id)arg3 learningRate:(id)arg4 error:(*id)arg5 ;
-(id)initWithTrainingNetworkPath:(id)arg0 data:(id)arg1 error:(*id)arg2 ;
-(id)trainLayers:(id)arg0 epochs:(NSUInteger)arg1 fromTask:(id)arg2 shouldCalculatePreTrainingLoss:(BOOL)arg3 error:(*id)arg4 ;


@end


#endif