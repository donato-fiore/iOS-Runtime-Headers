// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef MULTIWAYCALL_H
#define MULTIWAYCALL_H

@class NSString, NSMutableDictionary;

#import <Foundation/Foundation.h>


@interface MultiwayCall : NSObject {
    int _interval;
    int _frequency;
    NSUInteger _downlinkRateSum;
    unsigned int _downlinkRateUpdateCounter;
    NSUInteger _actualBitrateSum;
    unsigned int _actualBitrateUpdateCounter;
    unsigned int _videoStreamSwitchCount;
    unsigned int _audioStreamSwitchCount;
    unsigned int _averageReceiveFramerate;
    BOOL _isVideoDegraded;
    unsigned int _videoDegradedTotalCounter;
    CGFloat _videoDegradedTotalTime;
    CGFloat _videoDegradedStartTime;
    CGFloat _handshakeStartTime;
    CGFloat _handshakeDuration;
}


@property int adjustedDuration; // ivar: _adjustedDuration
@property unsigned int averageJitterbufferLength; // ivar: _averageJitterbufferLength
@property CGFloat connectionTime; // ivar: _connectionTime
@property unsigned int decryptionTimeoutCount; // ivar: _decryptionTimeoutCount
@property unsigned int downlinkTargetBitrateSwitchCount; // ivar: _downlinkTargetBitrateSwitchCount
@property int duration; // ivar: _duration
@property BOOL hasWebParticipant; // ivar: _hasWebParticipant
@property BOOL isAudioEnabled; // ivar: _isAudioEnabled
@property BOOL isExpanseEnabled; // ivar: _isExpanseEnabled
@property BOOL isFullSize; // ivar: _isFullSize
@property BOOL isScreenEnabled; // ivar: _isScreenEnabled
@property BOOL isVideoEnabled; // ivar: _isVideoEnabled
@property (readonly, getter=isLive) BOOL live; // ivar: _live
@property int mkmRecoveryAttemptCount; // ivar: _mkmRecoveryAttemptCount
@property unsigned char rateControlExperimentGroupIndexRemote; // ivar: _rateControlExperimentGroupIndexRemote
@property unsigned char rateControlExperimentVersionRemote; // ivar: _rateControlExperimentVersionRemote
@property (readonly) NSString *remoteParticipantID; // ivar: _remoteParticipantID
@property BOOL reportRateControlExperimentRemote; // ivar: _reportRateControlExperimentRemote
@property int startDate; // ivar: _startDate
@property (readonly) NSMutableDictionary *streamGroupStats; // ivar: _streamGroupStats
@property (readonly) NSMutableDictionary *streamGroups; // ivar: _streamGroups
@property unsigned int timeToHearFirstRemoteAudioFrame; // ivar: _timeToHearFirstRemoteAudioFrame


-(BOOL)isVideoDegraded;
-(CGFloat)audioErasureTotalTime:(id)arg0 ;
-(CGFloat)avgJBDelay:(id)arg0 ;
-(CGFloat)avgJBTargetSizeChanges:(id)arg0 ;
-(CGFloat)markHandshakeCompletion;
-(CGFloat)significantVideoStallTotalTime:(id)arg0 ;
-(NSUInteger)actualBitrateSum;
-(NSUInteger)downlinkRateSum;
-(id)initCallWithRemoteParticipantID:(id)arg0 ;
-(id)videoDegradedTotalCounter:(id)arg0 ;
-(unsigned int)RTPeriod;
-(unsigned int)actualBitrateUpdateCounter;
-(unsigned int)downlinkRateUpdateCounter;
-(unsigned short)audioErasureCount:(id)arg0 ;
-(unsigned short)maxAudioErasureCount:(id)arg0 ;
-(unsigned short)maxJBTargetSizeChanges:(id)arg0 ;
-(unsigned short)maxVideoStallCount:(id)arg0 ;
-(unsigned short)minVideoFrameRate:(id)arg0 ;
-(unsigned short)significantVideoStallCount:(id)arg0 ;
-(void)addAudioStreamGroupTelemetry:(id)arg0 streamGroupID:(id)arg1 ;
-(void)addControlChannelTelemetry:(id)arg0 ;
-(void)addStreamGroupTelemetry:(id)arg0 ;
-(void)addVideoStreamGroupTelemetry:(id)arg0 streamGroupID:(id)arg1 ;
-(void)dealloc;
-(void)finalizeCall;
-(void)incrementAudioStreamSwitchCounterForStreamGroup:(id)arg0 ;
-(void)incrementVideoStreamSwitchCounterForStreamGroup:(id)arg0 ;
-(void)markHandshakeStart;
-(void)processActualBitrateRateChange:(unsigned int)arg0 ;
-(void)processDownlinkRateChange:(unsigned int)arg0 ;
-(void)processVideoDegraded:(BOOL)arg0 ;
-(void)processVideoDegraded:(BOOL)arg0 streamGroup:(id)arg1 ;
-(void)updatePerfTimingWithFirstVideoFrameProcessingDelta:(CGFloat)arg0 firstMediaReceivedDelta:(CGFloat)arg1 firstMKIDelta:(CGFloat)arg2 streamGroupID:(id)arg3 ;


@end


#endif