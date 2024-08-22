// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef MLPPOOLINGLAYER_H
#define MLPPOOLINGLAYER_H



#import "MLPConvolutionBase.h"

@interface MLPPoolingLayer : MLPConvolutionBase



-(id)backward:(id)arg0 inputGradient:(id)arg1 ;
-(id)forward:(id)arg0 input:(id)arg1 labels:(id)arg2 runInference:(BOOL)arg3 ;
-(id)generateNode:(id)arg0 model:(id)arg1 weightIter:(*NSUInteger)arg2 ;
-(id)initWithName:(id)arg0 inputLength:(NSUInteger)arg1 inputChannels:(NSUInteger)arg2 kernelWidth:(NSUInteger)arg3 kernelHeight:(NSUInteger)arg4 kernelStride:(NSUInteger)arg5 ;
-(id)initWithName:(id)arg0 parameters:(struct ? *)arg1 ;
-(id)initWithName:(id)arg0 previousLayer:(id)arg1 kernelWidth:(NSUInteger)arg2 kernelHeight:(NSUInteger)arg3 kernelStride:(NSUInteger)arg4 ;
-(void)createKernel;


@end


#endif