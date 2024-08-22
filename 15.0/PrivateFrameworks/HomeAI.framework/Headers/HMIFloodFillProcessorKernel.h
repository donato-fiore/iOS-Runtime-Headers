// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef HMIFLOODFILLPROCESSORKERNEL_H
#define HMIFLOODFILLPROCESSORKERNEL_H

@class CIImageProcessorKernel;



@interface HMIFloodFillProcessorKernel : CIImageProcessorKernel



+(BOOL)processWithInputs:(id)arg0 arguments:(id)arg1 output:(id)arg2 error:(*id)arg3 ;
+(int)formatForInputAtIndex:(int)arg0 ;
+(int)outputFormat;


@end


#endif