// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef INPAINTINGMEMBRANEGENERATION_H
#define INPAINTINGMEMBRANEGENERATION_H



#import "CIImageProcessorKernel.h"

@interface InpaintingMembraneGeneration : CIImageProcessorKernel



+(BOOL)allowPartialOutputRegion;
+(BOOL)allowSRGBTranferFuntionOnInputAtIndex:(int)arg0 ;
+(BOOL)allowSRGBTranferFuntionOnOutput;
+(BOOL)initializeMembraneModelForResolution:(int)arg0 error:(*id)arg1 ;
+(BOOL)processWithInputs:(id)arg0 arguments:(id)arg1 output:(id)arg2 error:(*id)arg3 ;
+(BOOL)synchronizeInputs;
+(id)fillSmoothMembraneForSRGBImage:(id)arg0 andMask:(id)arg1 error:(*id)arg2 ;
+(id)getMembraneModelForResolution:(int)arg0 error:(*id)arg1 ;
+(int)formatForInputAtIndex:(int)arg0 ;
+(int)outputFormat;
+(int)selectMembraneProcessingResolutionBasedOnImageSize:(struct CGSize )arg0 ;
+(struct CGRect )roiForInput:(int)arg0 arguments:(id)arg1 outputRect:(struct CGRect )arg2 ;


@end


#endif