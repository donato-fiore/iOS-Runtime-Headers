// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef _MLCGPULSTM_H
#define _MLCGPULSTM_H

@class MLCGPULayer;



@interface _MLCGPULSTM : MLCGPULayer



+(BOOL)compileWithDevice:(id)arg0 deviceOps:(id)arg1 sourceTensors:(id)arg2 resultTensor:(id)arg3 ;
+(BOOL)setOptimizerDataForDevice:(id)arg0 deviceOps:(id)arg1 inputWeights:(id)arg2 hiddenWeights:(id)arg3 biasTerms:(id)arg4 ;
+(id)layerWithDevice:(id)arg0 descriptor:(id)arg1 inputWeights:(id)arg2 hiddenWeights:(id)arg3 peepholeWeights:(id)arg4 biasTerms:(id)arg5 gateActivations:(id)arg6 outputResultActivation:(id)arg7 inferenceOnly:(BOOL)arg8 ;
+(void)setBiasOptimizerDataForMomentumMatrices:(id)arg0 velocityMatrices:(id)arg1 centerWeightMatrices:(id)arg2 momentumArray:(id)arg3 velocityArray:(id)arg4 centerWeightArray:(id)arg5 accumulatorIndex:(NSUInteger)arg6 matrixId:(NSUInteger)arg7 bias:(id)arg8 device:(id)arg9 deviceOps:(id)arg10 deviceNumber:(NSUInteger)arg11 lstmNumber:(NSUInteger)arg12 ;
+(void)setOptimizerDataForMomentumMatrices:(id)arg0 velocityMatrices:(id)arg1 centerWeightMatrices:(id)arg2 momentumArray:(id)arg3 velocityArray:(id)arg4 centerWeightArray:(id)arg5 accumulatorIndex:(NSUInteger)arg6 matrixId:(NSUInteger)arg7 weight:(id)arg8 device:(id)arg9 deviceOps:(id)arg10 deviceNumber:(NSUInteger)arg11 lstmNumber:(NSUInteger)arg12 isRecurrent:(BOOL)arg13 ;
-(id)initWithDevice:(id)arg0 descriptor:(id)arg1 inputWeights:(id)arg2 hiddenWeights:(id)arg3 peepholeWeights:(id)arg4 biasTerms:(id)arg5 gateActivations:(id)arg6 outputResultActivation:(id)arg7 inferenceOnly:(BOOL)arg8 ;


@end


#endif