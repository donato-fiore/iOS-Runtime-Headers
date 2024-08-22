// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef VCPBLURANALYZER_H
#define VCPBLURANALYZER_H



#import "VCPImageAnalyzer.h"

@interface VCPBlurAnalyzer : VCPImageAnalyzer



-(float)computeRegionSharpness:(char *)arg0 width:(int)arg1 height:(int)arg2 stride:(NSInteger)arg3 ;
-(int)computeSharpnessScore:(*float)arg0 forObjects:(id)arg1 inImage:(struct __CVBuffer *)arg2 ;


@end


#endif