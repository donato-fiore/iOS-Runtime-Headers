// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef _MLCGPUMHATTENTION_H
#define _MLCGPUMHATTENTION_H

@class MLCGPULayer;



@interface _MLCGPUMHAttention : MLCGPULayer



+(BOOL)compileWithDevice:(id)arg0 deviceOps:(id)arg1 sourceTensors:(id)arg2 resultTensor:(id)arg3 ;
+(BOOL)setMHAOptimizerDataForDevice:(NSUInteger)arg0 deviceOps:(id)arg1 dataForWeights:(id)arg2 dataForBias:(id)arg3 momentumArray:(id)arg4 velocityArray:(id)arg5 centerWeightArray:(id)arg6 weightIndex:(NSUInteger)arg7 targetIndex:(NSUInteger)arg8 attnBias:(BOOL)arg9 ;
+(BOOL)setOptimizerDataForDevice:(id)arg0 deviceOps:(id)arg1 dataForWeights:(id)arg2 dataForBias:(id)arg3 ;
+(id)layerWithDevice:(id)arg0 desciptor:(id)arg1 weights:(id)arg2 bias:(id)arg3 attnBias:(id)arg4 inferenceOnly:(BOOL)arg5 ;
-(id)initWithDevice:(id)arg0 desciptor:(id)arg1 weights:(id)arg2 bias:(id)arg3 attnBias:(id)arg4 inferenceOnly:(BOOL)arg5 ;


@end


#endif