// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef MLPSEQNETWORK_H
#define MLPSEQNETWORK_H

@class NSString;
@protocol MLPLearningRateDecayHandlerDelegate;


#import "MLPNetwork.h"
#import "MLPLearningRateDecayHandler.h"

@interface MLPSeqNetwork : MLPNetwork <MLPLearningRateDecayHandlerDelegate>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (retain) MLPLearningRateDecayHandler *seqLearningRateDecayHandler; // ivar: _seqLearningRateDecayHandler
@property (readonly) Class superclass;


-(NSUInteger)runInference:(id)arg0 databatch:(id)arg1 inferredResult:(id)arg2 semaphore:(id)arg3 ;
-(float)computeLoss:(id)arg0 ;
-(id)computeInference:(id)arg0 ;
-(id)initWithLayers:(id)arg0 ;
-(void)createLayerKernels;
-(void)decayHandler:(id)arg0 didUpdateLearningRate:(float)arg1 ;
// -(void)runTraining:(id)arg0 databatch:(id)arg1 iteration:(NSUInteger)arg2 lossCallback:(id)arg3 semaphore:(unk)arg4  ;
-(void)setOptimizerParams:(id)arg0 ;


@end


#endif