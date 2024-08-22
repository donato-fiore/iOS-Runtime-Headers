// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef MULTIWAYCALL_H
#define MULTIWAYCALL_H

@class NSString, NSMutableDictionary;

#import <Foundation/Foundation.h>


@interface MultiwayCall : NSObject {
    int _interval;
    int _frequency;
    NSUInteger _downlinkOptedInRateSum;
    NSUInteger _downlinkOptedInRateUpdateCounter;
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
@property NSUInteger assembledFramesWithRTXPacketsCount; // ivar: _assembledFramesWithRTXPacketsCount
@property unsigned int averageJitterbufferLength; // ivar: _averageJitterbufferLength
@property CGFloat connectionTime; // ivar: _connectionTime
@property unsigned int decryptionTimeoutCount; // ivar: _decryptionTimeoutCount
@property NSUInteger downlinkOptedInBitrateSwitchCount; // ivar: _downlinkOptedInBitrateSwitchCount
@property unsigned int downlinkTargetBitrateSwitchCount; // ivar: _downlinkTargetBitrateSwitchCount
@property int duration; // ivar: _duration
@property NSUInteger failedToAssembleFramesWithRTXPacketsCount; // ivar: _failedToAssembleFramesWithRTXPacketsCount
@property BOOL hasWebParticipant; // ivar: _hasWebParticipant
@property BOOL isAudioEnabled; // ivar: _isAudioEnabled
@property BOOL isExpanseEnabled; // ivar: _isExpanseEnabled
@property BOOL isFullSize; // ivar: _isFullSize
@property BOOL isRTXTelemetryAvailable; // ivar: _isRTXTelemetryAvailable
@property BOOL isScreenEnabled; // ivar: _isScreenEnabled
@property BOOL isVideoEnabled; // ivar: _isVideoEnabled
@property NSUInteger lateFramesScheduledWithRTXCount; // ivar: _lateFramesScheduledWithRTXCount
@property (readonly, getter=isLive) BOOL live; // ivar: _live
@property int mkmRecoveryAttemptCount; // ivar: _mkmRecoveryAttemptCount
@property NSUInteger nacksFulfilled; // ivar: _nacksFulfilled
@property NSUInteger nacksFulfilledOnTime; // ivar: _nacksFulfilledOnTime
@property NSUInteger nacksSent; // ivar: _nacksSent
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
-(CGFloat)markHandshakeCompletion:(CGFloat)arg0 ;
-(CGFloat)significantVideoStallTotalTime:(id)arg0 ;
-(NSUInteger)actualBitrateSum;
-(NSUInteger)downlinkOptedInRateSum;
-(id)initCallWithRemoteParticipantID:(id)arg0 ;
-(id)videoDegradedTotalCounter:(id)arg0 ;
-(unsigned int)RTPeriod;
-(unsigned int)actualBitrateUpdateCounter;
-(unsigned int)downlinkOptedInRateUpdateCounter;
-(unsigned short)audioErasureCount:(id)arg0 ;
-(unsigned short)maxAudioErasureCount:(id)arg0 ;
-(unsigned short)maxJBTargetSizeChanges:(id)arg0 ;
-(unsigned short)maxVideoStallCount:(id)arg0 ;
-(unsigned short)minVideoFrameRate:(id)arg0 ;
-(unsigned short)significantVideoStallCount:(id)arg0 ;
-(void)addAudioStreamGroupTelemetry:(id)arg0 streamGroupID:(id)arg1 ;
-(void)addControlChannelTelemetry:(id)arg0 timestamp:(CGFloat)arg1 ;
-(void)addRTXStreamGroupTelemetry:(id)arg0 streamGroupID:(id)arg1 ;
-(void)addStreamGroupTelemetry:(id)arg0 ;
-(void)addVideoStreamGroupTelemetry:(id)arg0 streamGroupID:(id)arg1 ;
-(void)dealloc;
-(void)finalizeCall:(CGFloat)arg0 ;
-(void)incrementAudioStreamSwitchCounterForStreamGroup:(id)arg0 ;
-(void)incrementVideoStreamSwitchCounterForStreamGroup:(id)arg0 ;
-(void)markHandshakeStart:(CGFloat)arg0 ;
-(void)processActualBitrateRateChange:(unsigned int)arg0 ;
-(void)processDownlinkOptedInRateChange:(unsigned int)arg0 ;
-(void)processStreamData:(id)arg0 streamGroupID:(id)arg1 ;
-(void)processVideoDegraded:(BOOL)arg0 streamGroup:(id)arg1 timestamp:(CGFloat)arg2 ;
-(void)processVideoDegraded:(BOOL)arg0 timestamp:(CGFloat)arg1 ;
-(void)updatePerfTimingWithFirstVideoFrameProcessingDelta:(CGFloat)arg0 firstMediaReceivedDelta:(CGFloat)arg1 firstMKIDelta:(CGFloat)arg2 totalMediaStallSaveDelta:(CGFloat)arg3 streamGroupID:(id)arg4 ;


@end


#endif