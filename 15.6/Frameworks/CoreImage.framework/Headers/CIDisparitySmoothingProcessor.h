// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef CIDISPARITYSMOOTHINGPROCESSOR_H
#define CIDISPARITYSMOOTHINGPROCESSOR_H



#import "CIImageProcessorKernel.h"

@interface CIDisparitySmoothingProcessor : CIImageProcessorKernel



+(BOOL)hasValidPipelines;
+(BOOL)outputIsOpaque;
+(BOOL)processWithInputs:(id)arg0 arguments:(id)arg1 output:(id)arg2 error:(*id)arg3 ;
+(BOOL)synchronizeInputs;
+(int)formatForInputAtIndex:(int)arg0 ;
+(int)outputFormat;
+(struct CGRect )roiForInput:(int)arg0 arguments:(id)arg1 outputRect:(struct CGRect )arg2 ;
+(void)compilePipelines:(id)arg0 ;
+(void)compilePipelinesIfNeeded:(id)arg0 ;
+(void)releasePipelines;


@end


#endif