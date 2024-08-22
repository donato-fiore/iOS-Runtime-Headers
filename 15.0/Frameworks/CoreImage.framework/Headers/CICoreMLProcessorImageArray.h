// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef CICOREMLPROCESSORIMAGEARRAY_H
#define CICOREMLPROCESSORIMAGEARRAY_H



#import "CIImageProcessorKernel.h"

@interface CICoreMLProcessorImageArray : CIImageProcessorKernel



+(BOOL)processWithInputs:(id)arg0 arguments:(id)arg1 output:(id)arg2 error:(*id)arg3 ;
+(int)formatForInputAtIndex:(int)arg0 ;
+(int)outputFormat;
+(struct CGRect )roiForInput:(int)arg0 arguments:(id)arg1 outputRect:(struct CGRect )arg2 ;


@end


#endif