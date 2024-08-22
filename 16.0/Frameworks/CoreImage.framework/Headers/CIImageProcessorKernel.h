// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef CIIMAGEPROCESSORKERNEL_H
#define CIIMAGEPROCESSORKERNEL_H


#import <Foundation/Foundation.h>


@interface CIImageProcessorKernel : NSObject



+(BOOL)allowCompressedInputsAndOutputs;
+(BOOL)allowPartialOutputRegion;
+(BOOL)allowSRGBTranferFuntionOnInputAtIndex:(int)arg0 ;
+(BOOL)allowSRGBTranferFuntionOnOutput;
+(BOOL)canOutputLossyCompressed;
+(BOOL)canReduceOutputChannels;
+(BOOL)outputIsOpaque;
+(BOOL)processWithInputs:(id)arg0 arguments:(id)arg1 output:(id)arg2 error:(*id)arg3 ;
+(BOOL)skipFormatChecks;
+(BOOL)synchronizeInputs;
+(NSUInteger)_digestForArgs:(id)arg0 ;
+(id)applyWithExtent:(struct CGRect )arg0 inputs:(id)arg1 arguments:(id)arg2 error:(*id)arg3 ;
+(int)formatForInputAtIndex:(int)arg0 ;
+(int)formatForInputAtIndex:(int)arg0 arguments:(id)arg1 ;
+(int)outputFormat;
+(int)outputFormatWithArguments:(id)arg0 ;
+(struct CGRect )roiForInput:(int)arg0 arguments:(id)arg1 outputRect:(struct CGRect )arg2 ;


@end


#endif