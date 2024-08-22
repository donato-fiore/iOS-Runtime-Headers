// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef _MLCCPUCONVOLUTION_H
#define _MLCCPUCONVOLUTION_H

@class MLCCPULayer;



@interface _MLCCPUConvolution : MLCCPULayer



+(BOOL)compileWithDevice:(id)arg0 deviceOps:(id)arg1 sourceTensors:(id)arg2 resultTensor:(id)arg3 convolutionTranspose:(BOOL)arg4 ;
+(id)createBNNSNDArrayDescriptorForDescriptor:(id)arg0 biasDelta:(id)arg1 dataType:(int)arg2 ;
+(id)createBNNSNDArrayDescriptorForDescriptor:(id)arg0 weightsDelta:(id)arg1 fullyConnected:(BOOL)arg2 dataType:(int)arg3 ;
+(id)layerWithDevice:(id)arg0 weights:(id)arg1 biasTerms:(id)arg2 convolutionDescriptor:(id)arg3 neuronDescriptor:(id)arg4 ;
-(id)initWithDevice:(id)arg0 weights:(id)arg1 biasTerms:(id)arg2 convolutionDescriptor:(id)arg3 neuronDescriptor:(id)arg4 ;


@end


#endif