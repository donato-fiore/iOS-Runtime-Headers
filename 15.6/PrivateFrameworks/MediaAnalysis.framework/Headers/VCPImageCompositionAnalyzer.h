// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef VCPIMAGECOMPOSITIONANALYZER_H
#define VCPIMAGECOMPOSITIONANALYZER_H



#import "VCPImageAnalyzer.h"

@interface VCPImageCompositionAnalyzer : VCPImageAnalyzer



-(int)analyzePixelBuffer:(struct __CVBuffer *)arg0 flags:(*NSUInteger)arg1 results:(*id)arg2 cancel:(id)arg3 ;


@end


#endif