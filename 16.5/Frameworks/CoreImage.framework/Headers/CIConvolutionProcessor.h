// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef CICONVOLUTIONPROCESSOR_H
#define CICONVOLUTIONPROCESSOR_H



#import "CIImageProcessorKernel.h"

@interface CIConvolutionProcessor : CIImageProcessorKernel



+(BOOL)allowCompressedInputsAndOutputs;
+(BOOL)allowSRGBTranferFuntionOnInputAtIndex:(int)arg0 ;
+(BOOL)allowSRGBTranferFuntionOnOutput;
+(BOOL)canReduceOutputChannels;
+(BOOL)processWithInputs:(id)arg0 arguments:(id)arg1 output:(id)arg2 error:(*id)arg3 ;
+(BOOL)synchronizeInputs;
+(id)applyBoxToImage:(id)arg0 width:(int)arg1 height:(int)arg2 ;
+(id)applyConToImage:(id)arg0 width:(int)arg1 height:(int)arg2 bias:(CGFloat)arg3 weights:(id)arg4 ;
+(int)formatForInputAtIndex:(int)arg0 ;
+(int)outputFormat;
+(struct CGRect )roiForInput:(int)arg0 arguments:(id)arg1 outputRect:(struct CGRect )arg2 ;


@end


#endif