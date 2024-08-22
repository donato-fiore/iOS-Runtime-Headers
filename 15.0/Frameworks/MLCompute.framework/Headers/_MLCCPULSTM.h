// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef _MLCCPULSTM_H
#define _MLCCPULSTM_H

@class MLCCPULayer;



@interface _MLCCPULSTM : MLCCPULayer



+(BOOL)compileWithDevice:(id)arg0 deviceOps:(id)arg1 sourceTensors:(id)arg2 resultTensor:(id)arg3 ;
+(BOOL)setOptimizerDataForDevice:(id)arg0 deviceOps:(id)arg1 dataForInputWeights:(id)arg2 dataForHiddenWeights:(id)arg3 dataForPeepholeWeights:(id)arg4 dataForBias:(id)arg5 ;
+(id)layerWithDevice:(id)arg0 lstmDescriptor:(id)arg1 inputWeights:(id)arg2 hiddenWeights:(id)arg3 peepholeWeights:(id)arg4 biasTerms:(id)arg5 gateActivations:(id)arg6 ouputResultActivation:(id)arg7 inferenceOnly:(BOOL)arg8 ;
-(id)initWithDevice:(id)arg0 lstmDescriptor:(id)arg1 inputWeights:(id)arg2 hiddenWeights:(id)arg3 peepholeWeights:(id)arg4 biasTerms:(id)arg5 gateActivations:(id)arg6 outputResultActivation:(id)arg7 inferenceOnly:(BOOL)arg8 ;


@end


#endif