// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef _MLCCPUFULLYCONNECTED_H
#define _MLCCPUFULLYCONNECTED_H

@class MLCCPULayer;



@interface _MLCCPUFullyConnected : MLCCPULayer



+(BOOL)compileWithDevice:(id)arg0 deviceOps:(id)arg1 sourceTensors:(id)arg2 resultTensor:(id)arg3 ;
+(BOOL)compileWithDevice:(id)arg0 deviceOps:(id)arg1 sourceTensors:(id)arg2 resultTensor:(id)arg3 fusedBatchNormAndNeuron:(BOOL)arg4 ;
+(id)layerWithDevice:(id)arg0 weights:(id)arg1 biasTerms:(id)arg2 convolutionDescriptor:(id)arg3 neuronDescriptor:(id)arg4 fusedBatchNormAndNeuronLayers:(BOOL)arg5 mean:(id)arg6 variance:(id)arg7 beta:(id)arg8 gamma:(id)arg9 varianceEpsilon:(float)arg10 momentum:(float)arg11 opType:(int)arg12 ;
+(id)layerWithDevice:(id)arg0 weights:(id)arg1 biasTerms:(id)arg2 convolutionDescriptor:(id)arg3 neuronDescriptor:(id)arg4 opType:(int)arg5 ;
-(id)initWithDevice:(id)arg0 weights:(id)arg1 biasTerms:(id)arg2 convolutionDescriptor:(id)arg3 neuronDescriptor:(id)arg4 fusedBatchNormAndNeuronLayers:(BOOL)arg5 mean:(id)arg6 variance:(id)arg7 beta:(id)arg8 gamma:(id)arg9 varianceEpsilon:(float)arg10 momentum:(float)arg11 opType:(int)arg12 ;


@end


#endif