// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PIAPERTUREREDEYEPROCESSORKERNEL_H
#define PIAPERTUREREDEYEPROCESSORKERNEL_H

@class CIImageProcessorKernel;



@interface PIApertureRedEyeProcessorKernel : CIImageProcessorKernel



+(BOOL)processWithInputs:(id)arg0 arguments:(id)arg1 output:(id)arg2 error:(*id)arg3 ;
+(int)formatForInputAtIndex:(int)arg0 ;
+(int)outputFormat;
+(struct ? )ROIForCenterPoint:(struct CGPoint )arg0 radius:(CGFloat)arg1 ;
+(struct CGRect )roiForInput:(int)arg0 arguments:(id)arg1 outputRect:(struct CGRect )arg2 ;
+(void)convertFixed16:(*unsigned short)arg0 toFloat:(*float)arg1 count:(NSUInteger)arg2 ;
+(void)convertFloat:(*float)arg0 toFixed16:(*unsigned short)arg1 count:(NSUInteger)arg2 ;


@end


#endif