// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef PIPORTRAITVIDEOPROCESSOR_H
#define PIPORTRAITVIDEOPROCESSOR_H

@class CIImageProcessorKernel;



@interface PIPortraitVideoProcessor : CIImageProcessorKernel



+(BOOL)allowPartialOutputRegion;
+(BOOL)outputIsOpaque;
+(BOOL)processWithInputs:(id)arg0 arguments:(id)arg1 output:(id)arg2 error:(*id)arg3 ;
+(BOOL)synchronizeInputs;
+(id)applyWithRenderPipeline:(id)arg0 renderState:(id)arg1 globalRenderingMetadata:(id)arg2 timedRenderingMetadata:(id)arg3 inputImage:(id)arg4 disparityImage:(id)arg5 aperture:(id)arg6 focusedDisparity:(id)arg7 error:(*id)arg8 ;
+(int)formatForInputAtIndex:(int)arg0 ;
+(int)outputFormat;
+(struct CGRect )roiForInput:(int)arg0 arguments:(id)arg1 outputRect:(struct CGRect )arg2 ;


@end


#endif