// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef INPAINTINGSINGLEPASSFILTER_H
#define INPAINTINGSINGLEPASSFILTER_H



#import "CIImageProcessorKernel.h"

@interface InpaintingSinglePassFilter : CIImageProcessorKernel



+(BOOL)allowPartialOutputRegion;
+(BOOL)allowSRGBTranferFuntionOnInputAtIndex:(int)arg0 ;
+(BOOL)allowSRGBTranferFuntionOnOutput;
+(BOOL)processWithInputs:(id)arg0 arguments:(id)arg1 output:(id)arg2 error:(*id)arg3 ;
+(BOOL)synchronizeInputs;
+(id)performInpaintingAndBlendingOnSRGBImage:(id)arg0 usingThresholdedMask:(id)arg1 blendingRadius:(int)arg2 inpaintingResourceDescriptor:(id)arg3 espressoResources:(id)arg4 executionContext:(id)arg5 ;
+(id)performSinglePassInpaintingPipelineOnImage:(id)arg0 usingMask:(id)arg1 boundingBox:(struct CGRect )arg2 additionalParameters:(id)arg3 espressoResources:(id)arg4 executionContext:(id)arg5 ;
+(id)runInpaintingNeuralNetworkOnSRGBImage:(id)arg0 usingThresholdedMask:(id)arg1 inpaintingResourceDescriptor:(id)arg2 espressoResources:(id)arg3 executionContext:(id)arg4 error:(*id)arg5 ;
+(int)formatForInputAtIndex:(int)arg0 ;
+(int)outputFormat;
+(struct CGRect )roiForInput:(int)arg0 arguments:(id)arg1 outputRect:(struct CGRect )arg2 ;


@end


#endif