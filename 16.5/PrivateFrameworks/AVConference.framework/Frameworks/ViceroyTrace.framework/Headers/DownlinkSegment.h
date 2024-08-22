// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef DOWNLINKSEGMENT_H
#define DOWNLINKSEGMENT_H

@class NSMutableDictionary;


#import "MultiwaySegment.h"
#import "VCHistogram.h"

@interface DownlinkSegment : MultiwaySegment {
    CGFloat _averageAudioErasuresSum;
    CGFloat _averageAudioErasuresCounter;
    CGFloat _poorConnectionTotalLength;
    unsigned int _poorConnectionFrequency;
}


@property (readonly) VCHistogram *JBQSize; // ivar: _JBQSize
@property (readonly) VCHistogram *JBQSizeDeltaAudLarger; // ivar: _JBQSizeDeltaAudLarger
@property (readonly) VCHistogram *JBQSizeDeltaVidLarger; // ivar: _JBQSizeDeltaVidLarger
@property (readonly) VCHistogram *JBTarget; // ivar: _JBTarget
@property (readonly) VCHistogram *JBUnclippedTarget; // ivar: _JBUnclippedTarget
@property (readonly) VCHistogram *RBR; // ivar: _RBR
@property (readonly) VCHistogram *REDDiscardedCount; // ivar: _REDDiscardedCount
@property (readonly) VCHistogram *REDErasureCompensationRate; // ivar: _REDErasureCompensationRate
@property (readonly) VCHistogram *REDReceivedCount; // ivar: _REDReceivedCount
@property (readonly) VCHistogram *VPLR; // ivar: _VPLR
@property NSUInteger VPLRAccumulator; // ivar: _VPLRAccumulator
@property (readonly) VCHistogram *WANVJBQSize; // ivar: _WANVJBQSize
@property (readonly) VCHistogram *abnormalBPL; // ivar: _abnormalBPL
@property (readonly) VCHistogram *abnormalPLR; // ivar: _abnormalPLR
@property (readonly) VCHistogram *abnormalRTT; // ivar: _abnormalRTT
@property (readonly) VCHistogram *audioErasures; // ivar: _audioErasures
@property NSUInteger audioRemoteReceivedPacketCount; // ivar: _audioRemoteReceivedPacketCount
@property NSUInteger audioSentPacketCount; // ivar: _audioSentPacketCount
@property NSUInteger averageAudioErasuresRate; // ivar: _averageAudioErasuresRate
@property CGFloat averageBWE; // ivar: _averageBWE
@property CGFloat averageBWESum; // ivar: _averageBWESum
@property CGFloat averageJitterErasuresRate; // ivar: _averageJitterErasuresRate
@property NSUInteger averageJitterQueueSizeChanges; // ivar: _averageJitterQueueSizeChanges
@property CGFloat averageReceiveBitrate; // ivar: _averageReceiveBitrate
@property CGFloat averageSpeechErasuresRate; // ivar: _averageSpeechErasuresRate
@property CGFloat averageTotalVideoRecvBitrate; // ivar: _averageTotalVideoRecvBitrate
@property (readonly) VCHistogram *continuousHighPLRReportCount; // ivar: _continuousHighPLRReportCount
@property (readonly) VCHistogram *continuousHighRTTPLRReportCount; // ivar: _continuousHighRTTPLRReportCount
@property (readonly) VCHistogram *continuousHighRTTReportCount; // ivar: _continuousHighRTTReportCount
@property (readonly) NSMutableDictionary *downlinkParticipantStats; // ivar: _downlinkParticipantStats
@property unsigned int evictedFramesAnalysisValidIntervals; // ivar: _evictedFramesAnalysisValidIntervals
@property CGFloat evictedFramesAverageLatePacketDelay; // ivar: _evictedFramesAverageLatePacketDelay
@property (readonly) VCHistogram *evictedFramesLatePacketDelayHist; // ivar: _evictedFramesLatePacketDelayHist
@property CGFloat evictedFramesMaxLatePacketDelay; // ivar: _evictedFramesMaxLatePacketDelay
@property unsigned int evictedFramesRecoveredCount; // ivar: _evictedFramesRecoveredCount
@property unsigned int evictedFramesTrackedCount; // ivar: _evictedFramesTrackedCount
@property unsigned int fecProcessingTime; // ivar: _fecProcessingTime
@property (readonly) VCHistogram *framerate; // ivar: _framerate
@property unsigned int highPLRReportCounter; // ivar: _highPLRReportCounter
@property unsigned int highRTTPLRReportCounter; // ivar: _highRTTPLRReportCounter
@property unsigned int highRTTReportCounter; // ivar: _highRTTReportCounter
@property BOOL isRTXTelemetryAvailable; // ivar: _isRTXTelemetryAvailable
@property (readonly) VCHistogram *jitterErasures; // ivar: _jitterErasures
@property NSUInteger lastReportedTotalCellDupRxDataBytes; // ivar: _lastReportedTotalCellDupRxDataBytes
@property NSUInteger lastReportedTotalCellRxDataBytes; // ivar: _lastReportedTotalCellRxDataBytes
@property NSUInteger lastReportedTotalUsedCellBudgetRxDataBytes; // ivar: _lastReportedTotalUsedCellBudgetRxDataBytes
@property NSUInteger lastReportedTotalWifiRxDataBytes; // ivar: _lastReportedTotalWifiRxDataBytes
@property unsigned int lateFramesScheduledCount; // ivar: _lateFramesScheduledCount
@property (readonly) VCHistogram *latency; // ivar: _latency
@property unsigned int maxBWE; // ivar: _maxBWE
@property (readonly) VCHistogram *maxConsAudioErasuresHistogram; // ivar: _maxConsAudioErasuresHistogram
@property unsigned int maxConsecutiveAudioErasures; // ivar: _maxConsecutiveAudioErasures
@property unsigned int maxJitterQueueSize; // ivar: _maxJitterQueueSize
@property CGFloat maxMediaStallTime; // ivar: _maxMediaStallTime
@property CGFloat maxNoRemotePacketsInterval; // ivar: _maxNoRemotePacketsInterval
@property (readonly) VCHistogram *mediaStall; // ivar: _mediaStall
@property unsigned int minBWE; // ivar: _minBWE
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
@property BOOL rtcpPSFBForLossFeedbackEnabled; // ivar: _rtcpPSFBForLossFeedbackEnabled
@property BOOL rtcpPSFBForLtrAckEnabled; // ivar: _rtcpPSFBForLtrAckEnabled
@property BOOL serverPacketRetransmissionsExtraDelayBudgetEnabled; // ivar: _serverPacketRetransmissionsExtraDelayBudgetEnabled
@property BOOL serverPacketRetransmissionsForVideoEnabled; // ivar: _serverPacketRetransmissionsForVideoEnabled
@property unsigned int significantOOOPacketCount; // ivar: _significantOOOPacketCount
@property (readonly) VCHistogram *silenceTimescaleRate; // ivar: _silenceTimescaleRate
@property CGFloat speechErasureTotalTime; // ivar: _speechErasureTotalTime
@property (readonly) VCHistogram *speechErasures; // ivar: _speechErasures
@property (readonly) VCHistogram *speechTimescaleRate; // ivar: _speechTimescaleRate
@property CGFloat timeWeightedJitterQueueSize; // ivar: _timeWeightedJitterQueueSize
@property (readonly) VCHistogram *timescaleRate; // ivar: _timescaleRate
@property NSUInteger totalCellDupRxDataBytes; // ivar: _totalCellDupRxDataBytes
@property NSUInteger totalCellRxDataBytes; // ivar: _totalCellRxDataBytes
@property unsigned int totalFIRDemandCounter; // ivar: _totalFIRDemandCounter
@property CGFloat totalMediaStallTime; // ivar: _totalMediaStallTime
@property CGFloat totalNoRemotePacketsTime; // ivar: _totalNoRemotePacketsTime
@property NSUInteger totalUsedCellBudgetRxDataBytes; // ivar: _totalUsedCellBudgetRxDataBytes
@property NSUInteger totalWifiRxDataBytes; // ivar: _totalWifiRxDataBytes
@property unsigned int vcrcProfileNumber; // ivar: _vcrcProfileNumber
@property unsigned int videoFrameDecodedButSkippedCounter; // ivar: _videoFrameDecodedButSkippedCounter
@property unsigned int videoFrameNonFECCompleteCounter; // ivar: _videoFrameNonFECCompleteCounter
@property unsigned int videoFrameNonFECTotalCounter; // ivar: _videoFrameNonFECTotalCounter
@property unsigned int videoFrameTotalIncompleteCounter; // ivar: _videoFrameTotalIncompleteCounter
@property (readonly) VCHistogram *videoJitter; // ivar: _videoJitter
@property (readonly) VCHistogram *videoQualityScore; // ivar: _videoQualityScore
@property (readonly) VCHistogram *videoResolution; // ivar: _videoResolution
@property (readonly) VCHistogram *videoStall; // ivar: _videoStall


-(id)callStatsForParticipant:(id)arg0 ;
-(id)initWithSegmentName:(id)arg0 previousSegmentName:(id)arg1 segmentStreamGroups:(unsigned int)arg2 previousSegmentStreamGroups:(unsigned int)arg3 nwActivity:(id)arg4 localSwitches:(unsigned int)arg5 conversationTimeBase:(id)arg6 delegate:(id)arg7 ;
-(id)segmentReport:(CGFloat)arg0 ;
-(void)accumulateAudioPerStreamGroupStats:(id)arg0 streamGroupStats:(id)arg1 ;
-(void)accumulateRTXPerStreamGroupStats:(id)arg0 streamGroupStats:(id)arg1 streamGroup:(id)arg2 ;
-(void)accumulateVideoPerStreamGroupStats:(id)arg0 streamGroupStats:(id)arg1 ;
-(void)addCellByteCountStats:(id)arg0 ;
-(void)addCelltechTelemetryToDictionary:(id)arg0 ;
-(void)addPerStreamGroupStats:(id)arg0 timestamp:(CGFloat)arg1 ;
-(void)dealloc;
-(void)finalizeVideoStreamGroupStats:(id)arg0 timestamp:(CGFloat)arg1 ;
-(void)processAudioErasureValue:(unsigned int)arg0 ;
-(void)processAudioStreamData:(id)arg0 streamGroupStats:(id)arg1 ;
-(void)processRTXStreamData:(id)arg0 streamGroupStats:(id)arg1 ;
-(void)processStreamData:(id)arg0 forParticipant:(id)arg1 streamGroup:(id)arg2 ;
-(void)processVideoDegraded:(BOOL)arg0 forParticipant:(id)arg1 streamGroup:(id)arg2 timestamp:(CGFloat)arg3 ;
-(void)processVideoStreamData:(id)arg0 streamGroupStats:(id)arg1 ;
-(void)reportAudioPerStreamGroupStats:(id)arg0 streamGroup:(id)arg1 accumulatedStreamGroupStats:(id)arg2 ;
-(void)reportRTXPerStreamGroupStats:(id)arg0 streamGroup:(id)arg1 accumulatedStreamGroupStats:(id)arg2 ;
-(void)reportVideoPerStreamGroupStats:(id)arg0 streamGroup:(id)arg1 accumulatedStreamGroupStats:(id)arg2 ;
-(void)resetVideoDegradedForAllParticipants:(CGFloat)arg0 ;
-(void)updateDownlinkSegmentStats:(id)arg0 withSegmentBytes:(struct tagVCAggregatorFaceTimeSegmentStatsBytes *)arg1 ;
-(void)updateMinimumAndMaximumAVSyncOffset:(id)arg0 streamGroupStats:(id)arg1 ;


@end


#endif