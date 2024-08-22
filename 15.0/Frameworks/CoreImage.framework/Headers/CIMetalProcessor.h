// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef CIMETALPROCESSOR_H
#define CIMETALPROCESSOR_H



#import "CIImageProcessorKernel.h"

@interface CIMetalProcessor : CIImageProcessorKernel



+(BOOL)allowPartialOutputRegion;
+(BOOL)allowSRGBTranferFuntionOnInputAtIndex:(int)arg0 ;
+(BOOL)allowSRGBTranferFuntionOnOutput;
+(BOOL)processWithInputs:(id)arg0 arguments:(id)arg1 output:(id)arg2 error:(*id)arg3 ;
+(BOOL)synchronizeInputs;
+(int)formatForInputAtIndex:(int)arg0 ;
+(int)outputFormat;
+(struct CGRect )roiForInput:(int)arg0 arguments:(id)arg1 outputRect:(struct CGRect )arg2 ;
+(void)setFilterParams:(id)arg0 arguments:(id)arg1 filter:(id)arg2 ;
+(void)setFilterParamsAndImages:(id)arg0 arguments:(id)arg1 filter:(id)arg2 ;


@end


#endif