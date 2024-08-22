// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef VCVIDEOTRANSMITTERDEFAULT_H
#define VCVIDEOTRANSMITTERDEFAULT_H

@class NSString;
@protocol VCVideoReceiverFeedbackDelegate;


#import "VCVideoTransmitterBase.h"

@interface VCVideoTransmitterDefault : VCVideoTransmitterBase <VCVideoReceiverFeedbackDelegate>

 {
    unsigned int _audioTimestampRate;
    BOOL _transmitterMode;
    BOOL _isRTTBasedFIRThrottlingEnabled;
    BOOL _canLocalResizePIP;
    BOOL _canRemoteResizePIP;
    CGSize _remoteScreenPortraitAspectRatio;
    CGSize _remoteScreenLandscapeAspectRatio;
    CGSize _remoteExpectedPortraitAspectRatio;
    CGSize _remoteExpectedLandscapeAspectRatio;
    CGFloat _lastSentVideoHostTime;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;
@property (readonly) *tagHANDLE videoTransmitterHandle; // ivar: _videoTransmitterHandle


+(void)setupBandwidthEstimationOptions:(struct tagBWEOPTION *)arg0 ;
+(void)setupBandwidthEstimationOptions:(struct tagBWEOPTION *)arg0 featureString:(id)arg1 ;
-(BOOL)setEncodingMode:(int)arg0 ;
-(CGFloat)minKeyFrameGenerationIntervalForMode:(int)arg0 ;
-(id)initWithConfig:(id)arg0 ;
-(unsigned int)setTemporaryMaximumBitrate:(unsigned int)arg0 ;
-(void)collectChannelMetrics:(struct ? *)arg0 interval:(float)arg1 ;
-(void)dealloc;
-(void)generateKeyFrameWithFIRType:(int)arg0 ;
-(void)handleActiveConnectionChange:(id)arg0 ;
-(void)handleThermalLevelChange:(int)arg0 ;
-(void)setFECRatio:(CGFloat)arg0 ;
-(void)setFECRedundancyVector:(struct ? *)arg0 ;
-(void)setHighestActiveQualityIndex:(unsigned int)arg0 ;
-(void)setIsEndToEndBasedBandwidthProbingEnabled:(BOOL)arg0 ;
-(void)setIsServerBasedBandwidthProbingEnabled:(BOOL)arg0 ;
-(void)setKeyFrameOnlyStreamID:(unsigned short)arg0 ;
-(void)setMediaSuggestion:(struct VCRateControlMediaSuggestion *)arg0 ;
-(void)setStreamIDs:(*unsigned short)arg0 numOfStreamIDs:(unsigned char)arg1 repairedStreamIDs:(*unsigned short)arg2 numOfRepairedStreamIDs:(unsigned char)arg3 ;
-(void)setTargetBitrate:(unsigned int)arg0 ;
-(void)setTemporalBitrateArray:(id)arg0 ;
-(void)setUpAspectRatios:(BOOL)arg0 ;
-(void)setUpAspectRatiosFromFeatureListString:(char *)arg0 ;
-(void)startVideo;
-(void)stopVideo;
-(void)updateWindowState:(int)arg0 isLocal:(BOOL)arg1 windowRect:(struct CGRect )arg2 ;


@end


#endif