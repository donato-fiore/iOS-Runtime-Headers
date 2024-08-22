// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PISEGMENTATIONINWARDFILLPROCESSOR_H
#define PISEGMENTATIONINWARDFILLPROCESSOR_H

@class CIImageProcessorKernel;



@interface PISegmentationInwardFillProcessor : CIImageProcessorKernel



+(BOOL)outputIsOpaque;
+(BOOL)processWithInputs:(id)arg0 arguments:(id)arg1 output:(id)arg2 error:(*id)arg3 ;
+(BOOL)synchronizeInputs;
+(int)formatForInputAtIndex:(int)arg0 ;


@end


#endif