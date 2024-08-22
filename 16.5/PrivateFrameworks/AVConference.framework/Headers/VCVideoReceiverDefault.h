// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef VCVIDEORECEIVERDEFAULT_H
#define VCVIDEORECEIVERDEFAULT_H



#import "VCVideoReceiverBase.h"
#import "VCVideoStreamRateAdaptationFeedbackOnly.h"
#import "VCDisplayLink.h"
#import "VideoAttributes.h"

@interface VCVideoReceiverDefault : VCVideoReceiverBase {
    *tagHANDLE _videoReceiverHandle;
    *tagHANDLE _videoTransmitterHandle;
    NSInteger _streamToken;
    *void _controlInfoGenerator;
    BOOL receivedFirstRemoteFrame;
    CGFloat _lastKeyFrameRequestTime;
    unsigned short _lastKeyFrameRequestStreamID;
    VCVideoStreamRateAdaptationFeedbackOnly *_rateAdaptation;
    VCDisplayLink *_displayLink;
    BOOL _notifyDelegateVideoAttributeChanges;
    BOOL _lastLocalPortrait;
    BOOL _lastRemotePortrait;
    CGSize _remoteScreenPortraitAspectRatio;
    CGSize _remoteScreenLandscapeAspectRatio;
    CGSize _remoteExpectedPortraitAspectRatio;
    CGSize _remoteExpectedLandscapeAspectRatio;
    BOOL _remoteSupportsExpectedAspectRatio;
    BOOL _canLocalResizePIP;
    BOOL _canRemoteResizePIP;
    NSUInteger _cvoExtensionID;
    BOOL _forceZeroRegionOfInterestOrigin;
    BOOL _pendingVideoAttributesUpdateOnModeChange;
}


@property (nonatomic) int mode;
@property (retain) VideoAttributes *remoteVideoAttributes; // ivar: remoteVideoAttributes
@property (nonatomic) BOOL shouldEnableFaceZoom; // ivar: _shouldEnableFaceZoom
@property (nonatomic) BOOL shouldEnableMLEnhance; // ivar: _shouldEnableMLEnhance
@property (nonatomic) BOOL shouldUpdateRemoteScreenAttributes; // ivar: _shouldUpdateRemoteScreenAttributes
@property tagVCVideoReceiverConfig videoReceiverConfig; // ivar: _videoReceiverConfig


-(?)initWithConfig:(?)arg0 delegate:(?)arg1 reportingAgent:(?)arg2 statisticsCollectortransmitterHandle;
-(BOOL)initializeDisplayLink;
-(CGFloat)lastReceivedVideoRTCPPacketTime;
-(CGFloat)lastReceivedVideoRTPPacketTime;
-(CGFloat)roundTripTime;
-(float)lastLastVideoStallDuration;
-(int)oneToOneStreamIndex;
-(unsigned int)lastDisplayedFrameRTPTimestamp;
-(void)cleanUpDisplayLink;
-(void)collectChannelMetrics:(struct ? *)arg0 interval:(float)arg1 ;
-(void)dealloc;
-(void)didSwitchFromStreamID:(unsigned short)arg0 toStreamID:(unsigned short)arg1 ;
-(void)handleActiveConnectionChange:(id)arg0 ;
-(void)handleKeyFrameRequestWithSizeAndFistMBs:(*unsigned short)arg0 count:(int)arg1 didReceiveRTCPFB:(BOOL)arg2 didReceiveFIR:(BOOL)arg3 ;
-(void)handleRemoteFrame:(struct __CVBuffer *)arg0 timestamp:(struct ? )arg1 cameraStatusBits:(unsigned char)arg2 ;
-(void)handleRequestingKeyFrameGenerationWithStreamID:(unsigned short)arg0 firType:(int)arg1 ;
-(void)handleSampleBuffer:(struct opaqueCMSampleBuffer *)arg0 ;
-(void)pauseVideo;
-(void)rtcpSendIntervalElapsed;
-(void)setEnableCVO:(BOOL)arg0 cvoExtensionID:(NSUInteger)arg1 ;
-(void)setEnableRateAdaptation:(BOOL)arg0 maxBitrate:(unsigned int)arg1 minBitrate:(unsigned int)arg2 adaptationInterval:(CGFloat)arg3 ;
-(void)setFeedbackDelegate:(id)arg0 ;
-(void)setSynchronizer:(id)arg0 ;
-(void)setTargetStreamID:(unsigned short)arg0 ;
-(void)setUpRemoteAspectRatios;
-(void)setUpRemoteAspectRatiosForPayload:(int)arg0 ;
-(void)setUpRemoteAspectRatiosFromFreatureListString:(char *)arg0 ;
-(void)startVideo;
-(void)stopVideo;
-(void)updateSourcePlayoutTimestamp:(struct ? *)arg0 ;


@end


#endif