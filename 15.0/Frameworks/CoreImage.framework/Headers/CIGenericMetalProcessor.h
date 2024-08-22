// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef CIGENERICMETALPROCESSOR_H
#define CIGENERICMETALPROCESSOR_H



#import "CIImageProcessorKernel.h"

@interface CIGenericMetalProcessor : CIImageProcessorKernel



+(BOOL)outputIsOpaque;
+(BOOL)processWithInputs:(id)arg0 arguments:(id)arg1 output:(id)arg2 error:(*id)arg3 ;
+(BOOL)skipFormatChecks;
+(BOOL)synchronizeInputs;
+(id)applyWithExtent:(struct CGRect )arg0 inputs:(id)arg1 arguments:(id)arg2 error:(*id)arg3 ;
+(id)applyWithExtent:(struct CGRect )arg0 shader:(id)arg1 inputs:(id)arg2 arguments:(id)arg3 error:(*id)arg4 ;
+(id)applyWithExtent:(struct CGRect )arg0 shader:(id)arg1 inputs:(id)arg2 className:(id)arg3 arguments:(id)arg4 error:(*id)arg5 ;
+(id)applyWithExtent:(struct CGRect )arg0 shader:(id)arg1 inputs:(id)arg2 insetRects:(id)arg3 arguments:(id)arg4 error:(*id)arg5 ;
+(id)applyWithExtent:(struct CGRect )arg0 shader:(id)arg1 inputs:(id)arg2 roiMethods:(id)arg3 insetRects:(id)arg4 scaleFactors:(id)arg5 arguments:(id)arg6 error:(*id)arg7 ;
+(id)applyWithExtent:(struct CGRect )arg0 shader:(id)arg1 inputs:(id)arg2 scaleFactors:(id)arg3 arguments:(id)arg4 error:(*id)arg5 ;
+(int)formatForInputAtIndex:(int)arg0 ;
+(struct CGRect )roiForInput:(int)arg0 arguments:(id)arg1 outputRect:(struct CGRect )arg2 ;


@end


#endif