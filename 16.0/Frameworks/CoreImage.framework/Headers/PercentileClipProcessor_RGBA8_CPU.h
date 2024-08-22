// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PERCENTILECLIPPROCESSOR_RGBA8_CPU_H
#define PERCENTILECLIPPROCESSOR_RGBA8_CPU_H



#import "CIImageProcessorKernel.h"

@interface PercentileClipProcessor_RGBA8_CPU : CIImageProcessorKernel



+(BOOL)allowPartialOutputRegion;
+(BOOL)canReduceOutputChannels;
+(BOOL)processWithInputs:(id)arg0 arguments:(id)arg1 output:(id)arg2 error:(*id)arg3 ;
+(int)formatForInputAtIndex:(int)arg0 ;
+(int)outputFormat;
+(struct CGPoint )centerInImg:(id)arg0 fromRect:(struct CGRect )arg1 toRect:(struct CGRect )arg2 offset:(struct CGPoint )arg3 ;
+(struct CGRect )roiForInput:(int)arg0 arguments:(id)arg1 outputRect:(struct CGRect )arg2 ;


@end


#endif