// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef CIFACEMASKKERNEL_H
#define CIFACEMASKKERNEL_H



#import "CIImageProcessorKernel.h"

@interface CIFaceMaskKernel : CIImageProcessorKernel



+(BOOL)hasValidBuffers;
+(BOOL)hasValidPipelines;
+(BOOL)processWithInputs:(id)arg0 arguments:(id)arg1 output:(id)arg2 error:(*id)arg3 ;
+(BOOL)synchronizeInputs;
+(int)formatForInputAtIndex:(int)arg0 ;
+(int)outputFormat;
+(struct CGRect )roiForInput:(int)arg0 arguments:(id)arg1 outputRect:(struct CGRect )arg2 ;
+(void)allocateBuffers:(id)arg0 ;
+(void)allocateBuffersIfNeeded:(id)arg0 ;
+(void)compilePipelines:(id)arg0 ;
+(void)compilePipelinesIfNeeded:(id)arg0 ;
+(void)releaseBuffers;
+(void)releasePipelines;


@end


#endif