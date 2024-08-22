// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef VCVIDEOQUALITYINFO_H
#define VCVIDEOQUALITYINFO_H



#import "VCObject.h"

@interface VCVideoQualityInfo : VCObject {
    CGFloat _lastGoodVideoQualityTime;
    CGFloat _lastBadVideoQualityTime;
    CGFloat _lastVideoQualityDegradedSwitchTime;
    CGFloat _firstDegradedMeasure;
    CGFloat _videoDegradedThreshold;
    CGFloat _videoImprovedThreshold;
    CGFloat _videoMinFrameRate;
    BOOL _shouldUseExitHysteresis;
}


@property (readonly, nonatomic) BOOL isVideoQualityDegraded; // ivar: _isVideoQualityDegraded
@property (nonatomic) BOOL videoIsExpected; // ivar: _videoIsExpected


-(BOOL)updateWithCurrentFramerate:(CGFloat)arg0 bitrate:(CGFloat)arg1 time:(CGFloat)arg2 ;
-(id)init;
-(void)dealloc;
-(void)resetLastGoodVideoQualityTime:(CGFloat)arg0 ;


@end


#endif