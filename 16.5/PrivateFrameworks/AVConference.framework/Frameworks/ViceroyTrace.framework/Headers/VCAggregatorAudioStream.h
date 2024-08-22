// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef VCAGGREGATORAUDIOSTREAM_H
#define VCAGGREGATORAUDIOSTREAM_H

@class NSString;


#import "VCAggregator.h"

@interface VCAggregatorAudioStream : VCAggregator {
    unsigned int _mode;
    CGFloat _sessionTotalDuration;
    CGFloat _maxHostTimeJumpSize;
    CGFloat _totalHostTimeJumpSize;
    int _countHostTimeJumped;
    unsigned int _mediaCaptureJitterTotal;
    unsigned int _mediaCaptureBufferRateTotal;
    CGFloat _totalAudioErasureTime;
    unsigned int _audioErasureCount;
    unsigned int _maxAudioErasureCount;
    CGFloat _averageJitterBufferDelay;
    unsigned int _averageJitterBufferDelayCount;
    CGFloat _maxJBTargetSizeChanges;
    CGFloat _avgJBTargetSizeChanges;
    unsigned int _avgJBTargetSizeChangesCount;
    int _twoPtFourGhzChannelCount;
    int _fiveGhzChannelCount;
    int _dfsChannelCount;
    int _inactiveSlotCount;
    ? _channelSequenceStats;
    ? _previousChannelSequenceStats;
    unsigned int _rtcpTimeoutCount;
}


@property (copy, nonatomic) NSString *channelSequence; // ivar: _channelSequence
@property (retain, nonatomic) NSString *previousChannelSequence; // ivar: _previousChannelSequence
@property (retain, nonatomic) NSString *remoteDeviceModel; // ivar: _remoteDeviceModel
@property (retain, nonatomic) NSString *remoteOSBuildVersion; // ivar: _remoteOSBuildVersion


-(id)aggregatedCallReport;
-(id)aggregatedCallReports;
-(id)aggregatedSessionReport;
-(id)initWithDelegate:(id)arg0 ;
-(id)initWithDelegate:(id)arg0 withMode:(unsigned int)arg1 ;
-(void)aggregateAudioPlaybackRealtimeStats:(id)arg0 ;
-(void)aggregateChannelSequenceReport:(id)arg0 ;
-(void)aggregateMediCaptureRealtimeStats:(id)arg0 ;
-(void)aggregateRealtimeStats:(id)arg0 ;
-(void)aggregateSystemInfoReport:(id)arg0 ;
-(void)allModesProcessEventWithCategory:(unsigned short)arg0 type:(unsigned short)arg1 payload:(id)arg2 ;
-(void)allModesProcessRealtimeStats:(id)arg0 ;
-(void)dealloc;
-(void)processAudioPlaybackRealtimeStats:(id)arg0 ;
-(void)processAudioStreamStart:(id)arg0 ;
-(void)processChannelSequenceStats:(id)arg0 ;
-(void)processEventWithCategory:(unsigned short)arg0 type:(unsigned short)arg1 payload:(id)arg2 ;
-(void)processMediaCaptureRealtimeStats:(id)arg0 ;
-(void)processTransportInfo:(id)arg0 ;
-(void)remoteMicProcessEventWithCategory:(unsigned short)arg0 type:(unsigned short)arg1 payload:(id)arg2 ;
-(void)remoteMicProcessRealtimeStats:(id)arg0 ;
-(void)screenSharingProcessEventWithCategory:(unsigned short)arg0 payload:(id)arg1 ;
-(void)telephonyCallingProcessEventWithCategory:(unsigned short)arg0 type:(unsigned short)arg1 payload:(id)arg2 ;
-(void)telephonyCallingProcessRealtimeStatsTelephonyCalling:(id)arg0 ;
-(void)updateAudioStreamHostTimeJumpSizeStats:(id)arg0 ;


@end


#endif