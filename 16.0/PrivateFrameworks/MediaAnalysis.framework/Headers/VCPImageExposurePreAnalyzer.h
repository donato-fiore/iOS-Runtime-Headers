// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef VCPIMAGEEXPOSUREPREANALYZER_H
#define VCPIMAGEEXPOSUREPREANALYZER_H



#import "VCPImageAnalyzer.h"

@interface VCPImageExposurePreAnalyzer : VCPImageAnalyzer

@property (readonly, nonatomic) float exposureScore; // ivar: _exposureScore


-(float)computeNoiseLevel:(char *)arg0 width:(int)arg1 height:(int)arg2 stride:(NSInteger)arg3 textureness:(char *)arg4 ;
-(float)computeRegionNoise:(char *)arg0 blockTextureness:(char *)arg1 average:(char *)arg2 width:(int)arg3 height:(int)arg4 stride:(NSInteger)arg5 ;
-(int)analyzePixelBuffer:(struct __CVBuffer *)arg0 flags:(*NSUInteger)arg1 results:(*id)arg2 cancel:(id)arg3 ;


@end


#endif