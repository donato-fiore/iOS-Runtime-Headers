// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef VCVIDEOSTREAMRECEIVEGROUP_H
#define VCVIDEOSTREAMRECEIVEGROUP_H

@class NSNumber;
@protocol VCRedundancyControllerDelegate;


#import "VCMediaStreamReceiveGroup.h"
#import "VCRedundancyControllerVideo.h"

@interface VCVideoStreamReceiveGroup : VCMediaStreamReceiveGroup <VCRedundancyControllerDelegate>

 {
    uint8_t _videoPriority;
    unsigned char _lastVideoPriority;
    BOOL _isVideoDegraded;
    CGFloat _isVideoDegradedStartTime;
    BOOL _haveReportedPerfTimers;
    BOOL _isProcessingVideoOptIn;
    NSNumber *_previousOptedInStreamID;
    VCRedundancyControllerVideo *_videoRedundancyController;
    BOOL _isRedundancyRequested;
    BOOL _isMediaSuspended;
    CGFloat _lastVideoExpectationSwitch;
    BOOL _isVideoExpected;
    BOOL _didReportExtendedPoorConnection;
    BOOL _shouldConvertSourceRTPTimestamp;
    NSUInteger _syncUpdateCalled;
}


@property (nonatomic) BOOL isRemoteMediaStalled; // ivar: _isRemoteMediaStalled
@property (readonly, nonatomic) unsigned int lastDisplayedFrameRTPTimestamp;
@property (nonatomic, getter=isRemoteVideoEnabled) BOOL remoteVideoEnabled; // ivar: _remoteVideoEnabled
@property (nonatomic, getter=isRemoteVideoPaused) BOOL remoteVideoPaused; // ivar: _remoteVideoPaused
@property (nonatomic) BOOL shouldEnableMLEnhance; // ivar: _shouldEnableMLEnhance
@property (nonatomic) unsigned char videoQuality; // ivar: _videoQuality
@property (nonatomic) unsigned int visibilityIndex; // ivar: _visibilityIndex


-(BOOL)isVideoExpected;
-(BOOL)isVisible;
-(BOOL)setSyncSource:(id)arg0 ;
-(id)initWithConfig:(id)arg0 ;
-(id)setupRedundancyController;
-(id)willStart;
-(void)checkForExtendedPoorConnection;
-(void)collectAndLogChannelMetrics:(struct ? *)arg0 ;
-(void)dealloc;
-(void)didStart;
-(void)mediaStream:(id)arg0 didReceiveNewMediaKeyIndex:(id)arg1 ;
-(void)redundancyController:(id)arg0 redundancyIntervalDidChange:(CGFloat)arg1 ;
-(void)redundancyController:(id)arg0 redundancyPercentageDidChange:(unsigned int)arg1 ;
-(void)redundancyController:(id)arg0 redundancyVectorDidChange:(struct ? )arg1 ;
-(void)reportParticipantsPerfTimingsOnce;
-(void)resetDidReceiveFirstFrame;
-(void)resetPerfTimers;
-(void)setActiveStreamIDs:(id)arg0 ;
-(void)setMediaSuspended:(BOOL)arg0 forStreamToken:(id)arg1 ;
-(void)setOptedInStreamID:(id)arg0 ;
-(void)setShouldEnableFaceZoom:(BOOL)arg0 ;
-(void)setVideoDegraded:(BOOL)arg0 ;
-(void)setupVideoPriority;
-(void)updateShouldEnableFaceZoom;
-(void)updateVideoExpected;
-(void)updateVideoPriority:(unsigned char)arg0 ;
-(void)vcMediaStream:(id)arg0 didReceiveFirstFrameWithTime:(struct ? )arg1 ;
-(void)vcMediaStream:(id)arg0 didSwitchFromStreamID:(unsigned short)arg1 toStreamID:(unsigned short)arg2 ;
-(void)vcMediaStream:(id)arg0 priorityDidChange:(unsigned char)arg1 ;
-(void)vcMediaStream:(id)arg0 remoteMediaStalled:(BOOL)arg1 duration:(CGFloat)arg2 ;
-(void)vcMediaStream:(id)arg0 requestKeyFrameGenerationWithStreamID:(unsigned short)arg1 firType:(int)arg2 ;
-(void)willStop;


@end


#endif