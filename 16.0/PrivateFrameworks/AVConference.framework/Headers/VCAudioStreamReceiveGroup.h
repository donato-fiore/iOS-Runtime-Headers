// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef VCAUDIOSTREAMRECEIVEGROUP_H
#define VCAUDIOSTREAMRECEIVEGROUP_H

@class TimingCollection;
@protocol VCAudioStreamGroup, VCMediaStreamSyncSource;


#import "VCMediaStreamReceiveGroup.h"
#import "VCAudioStreamGroupCommon.h"
#import "VCAudioCaptionsCoordinator.h"

@interface VCAudioStreamReceiveGroup : VCMediaStreamReceiveGroup <VCAudioStreamGroup>

 {
    VCAudioStreamGroupCommon *_common;
    tagVCAudioStreamGroupPriorityInfo _mediaPriorityInfo;
    *unk _didPullSamplesCallback;
    *void _didPullSamplesCallbackContext;
    BOOL _receivingEndToEndStream;
    float _averageOutputPower;
    NSUInteger _speakerProcsCalled;
    NSUInteger _syncTargetCalled;
    TimingCollection *_perfTimers;
    BOOL _haveReportedPerfTimers;
}


@property (retain, nonatomic) VCAudioCaptionsCoordinator *captionsCoordinator; // ivar: _captionsCoordinator
@property (readonly, nonatomic) int deviceRole;
@property (nonatomic, setter=setMuted:) BOOL isMuted;
@property (setter=setPowerSpectrumEnabled:) BOOL isPowerSpectrumEnabled;
@property (readonly) NSObject<VCMediaStreamSyncSource> *syncSource;


-(BOOL)addSyncDestination:(id)arg0 ;
-(BOOL)configureStreams;
-(BOOL)isAudioExpected;
-(BOOL)removeSyncDestination:(id)arg0 ;
-(id)initWithConfig:(id)arg0 ;
-(id)startCapture;
-(id)stopCapture;
-(id)willStart;
-(void)collectAndLogChannelMetrics:(struct ? *)arg0 ;
-(void)dealloc;
-(void)didStart;
-(void)didStop;
-(void)mediaStream:(id)arg0 didReceiveNewMediaKeyIndex:(id)arg1 ;
-(void)reportParticipantsPerfTimingsOnce;
-(void)setActiveStreamIDs:(id)arg0 ;
-(void)setMuteOnStreams;
-(void)setOptedInStreamID:(id)arg0 ;
-(void)setReportingAgent:(struct opaqueRTCReporting *)arg0 ;
-(void)vcMediaStream:(id)arg0 didReceiveFirstFrameWithTime:(struct ? )arg1 ;
-(void)vcMediaStream:(id)arg0 didSwitchToAudioStreamWithID:(unsigned short)arg1 ;
-(void)vcMediaStream:(id)arg0 remoteMediaStalled:(BOOL)arg1 duration:(CGFloat)arg2 ;


@end


#endif