// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef _MLCGPUFULLYCONNECTED_H
#define _MLCGPUFULLYCONNECTED_H

@class MLCGPULayer;



@interface _MLCGPUFullyConnected : MLCGPULayer



+(id)layerWithDevice:(id)arg0 weights:(id)arg1 biasTerms:(id)arg2 descriptor:(id)arg3 neuronDescriptor:(id)arg4 ;
+(void)setGradientComputeWeightsAndBiasOnly:(id)arg0 deviceOps:(id)arg1 ;
-(id)initWithDevice:(id)arg0 weights:(id)arg1 biasTerms:(id)arg2 descriptor:(id)arg3 neuronDescriptor:(id)arg4 ;


@end


#endif