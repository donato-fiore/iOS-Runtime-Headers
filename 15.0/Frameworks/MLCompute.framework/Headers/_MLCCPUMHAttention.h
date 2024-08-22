// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef _MLCCPUMHATTENTION_H
#define _MLCCPUMHATTENTION_H

@class MLCCPULayer;



@interface _MLCCPUMHAttention : MLCCPULayer



+(BOOL)compileWithDevice:(id)arg0 deviceOps:(id)arg1 sourceTensors:(id)arg2 resultTensor:(id)arg3 ;
+(BOOL)setOptimizerDataForDevice:(id)arg0 deviceOps:(id)arg1 dataForWeights:(id)arg2 dataForBias:(id)arg3 ;
+(id)layerWithDevice:(id)arg0 descriptor:(id)arg1 weights:(id)arg2 bias:(id)arg3 attnBias:(id)arg4 inferenceOnly:(BOOL)arg5 ;
-(id)initWithDevice:(id)arg0 descriptor:(id)arg1 weights:(id)arg2 bias:(id)arg3 attnBias:(id)arg4 inferenceOnly:(BOOL)arg5 ;


@end


#endif