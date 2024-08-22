// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef FBSPROCESSOR_H
#define FBSPROCESSOR_H



#import "CIImageProcessorKernel.h"

@interface FBSProcessor : CIImageProcessorKernel



+(BOOL)allowPartialOutputRegion;
+(BOOL)skipFormatChecks;
+(BOOL)synchronizeInputs;
+(int)formatForInputAtIndex:(int)arg0 ;
+(int)outputFormat;
+(struct CGRect )roiForInput:(int)arg0 arguments:(id)arg1 outputRect:(struct CGRect )arg2 ;


@end


#endif