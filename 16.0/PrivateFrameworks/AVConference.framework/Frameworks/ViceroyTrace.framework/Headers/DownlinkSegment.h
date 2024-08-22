// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef DOWNLINKSEGMENT_H
#define DOWNLINKSEGMENT_H

@class NSMutableDictionary;


#import "MultiwaySegment.h"
#import "VCHistogram.h"

@interface DownlinkSegment : MultiwaySegment

@property (readonly) NSMutableDictionary *downlinkParticipantStats; // ivar: _downlinkParticipantStats
@property BOOL isRTXTelemetryAvailable; // ivar: _isRTXTelemetryAvailable
@property unsigned int nackGeneratorConfigVersion; // ivar: _nackGeneratorConfigVersion
@property NSUInteger nacksFulfilled; // ivar: _nacksFulfilled
@property NSUInteger nacksFulfilledOnTime; // ivar: _nacksFulfilledOnTime
@property (readonly) VCHistogram *nacksPLRWithRTX; // ivar: _nacksPLRWithRTX
@property (readonly) VCHistogram *nacksPLRWithoutRTX; // ivar: _nacksPLRWithoutRTX
@property (readonly) VCHistogram *nacksRTXLateTime; // ivar: _nacksRTXLateTime
@property (readonly) VCHistogram *nacksRTXMediaBitRate; // ivar: _nacksRTXMediaBitRate
@property (readonly) VCHistogram *nacksRTXResponseTime; // ivar: _nacksRTXResponseTime
@property (readonly) VCHistogram *nacksRTXRetransmittedMediaBitRate; // ivar: _nacksRTXRetransmittedMediaBitRate
@property NSUInteger nacksSent; // ivar: _nacksSent
@property BOOL serverPacketRetransmissionsExtraDelayBudgetEnabled; // ivar: _serverPacketRetransmissionsExtraDelayBudgetEnabled
@property BOOL serverPacketRetransmissionsForVideoEnabled; // ivar: _serverPacketRetransmissionsForVideoEnabled
@property NSUInteger totalCellDupRxDataBytes; // ivar: _totalCellDupRxDataBytes
@property NSUInteger totalCellRxDataBytes; // ivar: _totalCellRxDataBytes


-(id)callStatsForParticipant:(id)arg0 ;
-(id)initWithSegmentName:(id)arg0 previousSegmentName:(id)arg1 segmentStreamGroups:(unsigned int)arg2 previousSegmentStreamGroups:(unsigned int)arg3 nwActivity:(id)arg4 localSwitches:(unsigned int)arg5 conversationTimeBase:(id)arg6 delegate:(id)arg7 ;
-(id)segmentReport:(CGFloat)arg0 ;
-(void)accumulateAudioPerStreamGroupStats:(id)arg0 streamGroupStats:(id)arg1 ;
-(void)accumulateRTXPerStreamGroupStats:(id)arg0 streamGroupStats:(id)arg1 streamGroup:(id)arg2 ;
-(void)accumulateVideoPerStreamGroupStats:(id)arg0 streamGroupStats:(id)arg1 ;
-(void)addCellByteCountStats:(id)arg0 ;
-(void)addPerStreamGroupStats:(id)arg0 timestamp:(CGFloat)arg1 ;
-(void)dealloc;
-(void)finalizeVideoStreamGroupStats:(id)arg0 timestamp:(CGFloat)arg1 ;
-(void)processAudioStreamData:(id)arg0 streamGroupStats:(id)arg1 ;
-(void)processRTXStreamData:(id)arg0 streamGroupStats:(id)arg1 ;
-(void)processStreamData:(id)arg0 forParticipant:(id)arg1 streamGroup:(id)arg2 ;
-(void)processVideoDegraded:(BOOL)arg0 forParticipant:(id)arg1 streamGroup:(id)arg2 timestamp:(CGFloat)arg3 ;
-(void)processVideoStreamData:(id)arg0 streamGroupStats:(id)arg1 ;
-(void)reportAudioPerStreamGroupStats:(id)arg0 streamGroup:(id)arg1 accumulatedStreamGroupStats:(id)arg2 ;
-(void)reportRTXPerStreamGroupStats:(id)arg0 streamGroup:(id)arg1 accumulatedStreamGroupStats:(id)arg2 ;
-(void)reportVideoPerStreamGroupStats:(id)arg0 streamGroup:(id)arg1 accumulatedStreamGroupStats:(id)arg2 ;
-(void)resetVideoDegradedForAllParticipants:(CGFloat)arg0 ;
-(void)updateMinimumAndMaximumAVSyncOffset:(id)arg0 streamGroupStats:(id)arg1 ;


@end


#endif