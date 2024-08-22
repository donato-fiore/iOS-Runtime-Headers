// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef VCPVIDEOPIXELSTABILIZER_H
#define VCPVIDEOPIXELSTABILIZER_H



#import "VCPVideoStabilizer.h"

@interface VCPVideoPixelStabilizer : VCPVideoStabilizer {
    *void _analysisSessionRef;
}




-(id)init;
-(int)analyzeFrame:(struct __CVBuffer *)arg0 withTimestamp:(struct ? )arg1 andDuration:(struct ? )arg2 flags:(*NSUInteger)arg3 ;
-(int)convertAnalysisResult;
-(void)dealloc;


@end


#endif