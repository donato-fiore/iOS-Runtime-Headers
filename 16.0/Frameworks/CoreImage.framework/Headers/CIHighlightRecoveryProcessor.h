// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef CIHIGHLIGHTRECOVERYPROCESSOR_H
#define CIHIGHLIGHTRECOVERYPROCESSOR_H



#import "CIImageProcessorKernel.h"

@interface CIHighlightRecoveryProcessor : CIImageProcessorKernel



+(BOOL)allowPartialOutputRegion;
+(BOOL)processWithInputs:(id)arg0 arguments:(id)arg1 output:(id)arg2 error:(*id)arg3 ;
+(BOOL)synchronizeInputs;
+(id)compilePipelineForDevice:(id)arg0 functionName:(id)arg1 constantValues:(id)arg2 ;
+(id)functionConstantValuesTuningParameters:(id)arg0 ;
+(int)formatForInputAtIndex:(int)arg0 ;
+(int)outputFormat;
+(struct CGRect )roiForInput:(int)arg0 arguments:(id)arg1 outputRect:(struct CGRect )arg2 ;


@end


#endif