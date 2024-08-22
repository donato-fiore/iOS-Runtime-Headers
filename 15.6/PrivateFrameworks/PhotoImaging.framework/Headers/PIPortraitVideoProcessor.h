// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef PIPORTRAITVIDEOPROCESSOR_H
#define PIPORTRAITVIDEOPROCESSOR_H

@class CIImageProcessorKernel;



@interface PIPortraitVideoProcessor : CIImageProcessorKernel



+(BOOL)allowPartialOutputRegion;
+(BOOL)outputIsOpaque;
+(BOOL)processWithInputs:(id)arg0 arguments:(id)arg1 output:(id)arg2 error:(*id)arg3 ;
+(BOOL)synchronizeInputs;
+(id)applyWithInputImage:(id)arg0 disparityImage:(id)arg1 globalMetadata:(id)arg2 timedMetadata:(id)arg3 aperture:(id)arg4 focusedDisparity:(id)arg5 quality:(id)arg6 debugMode:(id)arg7 isHDR:(BOOL)arg8 error:(*id)arg9 ;
+(int)formatForInputAtIndex:(int)arg0 ;
+(int)outputFormat;
+(struct CGRect )roiForInput:(int)arg0 arguments:(id)arg1 outputRect:(struct CGRect )arg2 ;
+(void)_updateRenderState:(id)arg0 withLegacyCameraInfo:(id)arg1 ;


@end


#endif