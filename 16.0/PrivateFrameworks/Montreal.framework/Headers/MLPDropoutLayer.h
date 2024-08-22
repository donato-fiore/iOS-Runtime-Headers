// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef MLPDROPOUTLAYER_H
#define MLPDROPOUTLAYER_H



#import "MLPImageLayer.h"

@interface MLPDropoutLayer : MLPImageLayer

@property (readonly) float dropoutRatio; // ivar: _dropoutRatio


-(id)backward:(id)arg0 index:(id)arg1 inputGradient:(id)arg2 ;
-(id)backward:(id)arg0 inputGradient:(id)arg1 ;
-(id)forward:(id)arg0 input:(id)arg1 index:(id)arg2 runInference:(BOOL)arg3 ;
-(id)forward:(id)arg0 input:(id)arg1 labels:(id)arg2 runInference:(BOOL)arg3 ;
-(id)generateNode:(id)arg0 model:(id)arg1 weightIter:(*NSUInteger)arg2 ;
-(id)initWithName:(id)arg0 inputLength:(NSUInteger)arg1 inputChannels:(NSUInteger)arg2 dropoutRatio:(float)arg3 ;
-(id)initWithName:(id)arg0 parameters:(struct ? *)arg1 ;
-(id)initWithName:(id)arg0 previousLayer:(id)arg1 dropoutRatio:(float)arg2 ;
-(id)seqBackward:(id)arg0 dataBatch:(id)arg1 inputGradient:(id)arg2 ;
-(id)seqForward:(id)arg0 input:(id)arg1 dataBatch:(id)arg2 runInference:(BOOL)arg3 ;
-(void)createKernel;
-(void)updatePreviousLayer:(id)arg0 nextLayer:(id)arg1 network:(id)arg2 ;


@end


#endif