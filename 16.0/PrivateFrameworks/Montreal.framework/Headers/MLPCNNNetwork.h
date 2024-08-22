// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef MLPCNNNETWORK_H
#define MLPCNNNETWORK_H



#import "MLPNetwork.h"

@interface MLPCNNNetwork : MLPNetwork



-(NSUInteger)runInference:(id)arg0 databatch:(id)arg1 inferredResult:(id)arg2 semaphore:(id)arg3 ;
-(float)computeLoss:(id)arg0 ;
-(id)computeInference:(id)arg0 ;
-(id)initWithLayers:(id)arg0 ;
-(void)createLayerKernels;
// -(void)runTraining:(id)arg0 databatch:(id)arg1 iteration:(NSUInteger)arg2 lossCallback:(id)arg3 semaphore:(unk)arg4  ;
-(void)setOptimizerParams:(id)arg0 ;


@end


#endif