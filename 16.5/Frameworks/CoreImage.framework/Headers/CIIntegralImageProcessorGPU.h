// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef CIINTEGRALIMAGEPROCESSORGPU_H
#define CIINTEGRALIMAGEPROCESSORGPU_H



#import "CIImageProcessorKernel.h"

@interface CIIntegralImageProcessorGPU : CIImageProcessorKernel



+(BOOL)canReduceOutputChannels;
+(BOOL)processWithInputs:(id)arg0 arguments:(id)arg1 output:(id)arg2 error:(*id)arg3 ;
+(int)outputFormat;


@end


#endif