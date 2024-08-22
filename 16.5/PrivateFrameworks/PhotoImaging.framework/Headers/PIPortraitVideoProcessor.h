// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PIPORTRAITVIDEOPROCESSOR_H
#define PIPORTRAITVIDEOPROCESSOR_H

@class CIImageProcessorKernel;



@interface PIPortraitVideoProcessor : CIImageProcessorKernel



+(BOOL)allowCompressedInputsAndOutputs;
+(BOOL)allowPartialOutputRegion;
+(BOOL)outputIsOpaque;
+(BOOL)processWithInputs:(id)arg0 arguments:(id)arg1 output:(id)arg2 error:(*id)arg3 ;
+(BOOL)synchronizeInputs;
+(id)applyWithInputImage:(id)arg0 disparityImage:(id)arg1 inputPixelBuffer:(id)arg2 disparityPixelBuffer:(id)arg3 globalMetadata:(id)arg4 timedMetadata:(id)arg5 aperture:(id)arg6 focusedDisparity:(id)arg7 quality:(id)arg8 debugMode:(id)arg9 isHDR:(BOOL)arg10 error:(*id)arg11 ;
+(int)formatForInputAtIndex:(int)arg0 ;
+(int)outputFormat;
+(struct CGRect )roiForInput:(int)arg0 arguments:(id)arg1 outputRect:(struct CGRect )arg2 ;
+(void)_configureRGBColorTexture:(id)arg0 format:(int)arg1 isHDR:(BOOL)arg2 ;
+(void)_updateRenderState:(id)arg0 withLegacyCameraInfo:(id)arg1 ;


@end


#endif