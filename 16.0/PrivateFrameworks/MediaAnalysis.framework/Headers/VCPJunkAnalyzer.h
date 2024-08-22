// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef VCPJUNKANALYZER_H
#define VCPJUNKANALYZER_H



#import "VCPImageAnalyzer.h"

@interface VCPJunkAnalyzer : VCPImageAnalyzer



-(int)analyzePixelBuffer:(struct __CVBuffer *)arg0 flags:(*NSUInteger)arg1 results:(*id)arg2 cancel:(id)arg3 ;


@end


#endif