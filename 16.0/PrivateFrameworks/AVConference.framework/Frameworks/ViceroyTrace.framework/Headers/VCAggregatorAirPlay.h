// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef VCAGGREGATORAIRPLAY_H
#define VCAGGREGATORAIRPLAY_H

@class NSMutableDictionary, NSString;


#import "VCAggregator.h"
#import "VCHistogram.h"

@interface VCAggregatorAirPlay : VCAggregator {
    CGFloat _sessionTotalDuration;
    CGFloat _lastReportedVideoStallTime;
    CGFloat _totalVideoStallTime;
    CGFloat _maxVideoStallInterval;
    int _videoStallCount;
    int _avgFramerate;
    int _averageReceiveBitrate;
    int _averageSendBitrate;
    int _maxSendBitrate;
    int _averageTargetBitrate;
    int _maxTargetBitrate;
    int _maxPLR;
    int _totalFIRCounter;
    int _videoWidth;
    int _videoHeight;
    int _codec;
    int _averageVideoTxMetadataOverheadBitrate;
    int _averageVideoRxMetadataOverheadBitrate;
    CGFloat _averageExpirationTime;
    CGFloat _maxExpirationTime;
    CGFloat _averageWiFiPacketDelay;
    CGFloat _averageMaxAverageWiFiPacketDelay;
    unsigned int _averageWiFiThroughput;
    unsigned int _totalNACKCounter;
    unsigned int _averageBurstyPacketLossCount;
    unsigned int _maxBurstyPacketLossCount;
    unsigned int _averagePacketLossRate;
    unsigned int _averageBandwidthEstimation;
    unsigned int _maxBandwidthEstimation;
    unsigned int _averageJitterQueueSize;
    unsigned int _averageJitterQueueSizeChanges;
    CGFloat _timeSpentWithNonZeroJitterQueueSize;
    CGFloat _timeWeightedJitterQueueSize;
    unsigned int _maxJitterQueueSize;
    CGFloat _averagePlaybackOffset;
    CGFloat _maxPlaybackOffset;
    unsigned int _mediaCaptureJitterTotal;
    unsigned int _mediaCaptureBufferRateTotal;
    unsigned int _averageRoundTripTime;
    unsigned int _maxRoundTripTime;
    unsigned int _averageHIDEventLatencySampleCount;
    unsigned int _averageHIDEventLatency;
    unsigned int _maxHIDEventLatency;
    unsigned int _minHIDEventLatency;
    unsigned int _videoFrameNonFECTotalCounter;
    unsigned int _videoFrameNonFECCompleteCounter;
    unsigned int _videoFrameDisplayedCounter;
    unsigned int _decodedVideoFrameEnqueueCounter;
    unsigned int _videoFrameReceivedCounter;
    unsigned int _videoFrameExpectedCounter;
    unsigned int _rtcpTimeoutCount;
    unsigned int _evictedFramesLikelyRecoverableCount;
    unsigned int _evictedFramesTrackedCount;
    unsigned int _evictedFramesAnalysisValidIntervals;
    CGFloat _evictedFramesAverageLatePacketDelay;
    unsigned int _evictedFramesRecoveredCount;
    unsigned int _accumVideoFrameErasureCount;
    unsigned int _maxVideoFrameErasureCount;
    unsigned int _maxVideoStallCount;
    unsigned int _minVideoFrameRate;
    VCHistogram *_RBR;
    VCHistogram *_TBR;
    VCHistogram *_SBR;
    VCHistogram *_VST;
    VCHistogram *_PLR;
    VCHistogram *_BPL;
    VCHistogram *_EXT;
    VCHistogram *_BWE;
    VCHistogram *_VJS;
    VCHistogram *_RTT;
    VCHistogram *_HEL;
    NSMutableDictionary *_fecStatsDict;
    int _twoPtFourGhzChannelCount;
    int _fiveGhzChannelCount;
    int _dfsChannelCount;
    int _inactiveSlotCount;
    ? _channelSequenceStats;
    ? _previousChannelSequenceStats;
    NSString *_remoteOSBuildVersion;
    NSString *_remoteFrameworkVersion;
    NSString *_remoteDeviceModel;
}


@property (copy, nonatomic) NSString *channelSequence; // ivar: _channelSequence
@property (retain, nonatomic) NSString *previousChannelSequence; // ivar: _previousChannelSequence
@property (copy, nonatomic) NSString *segmentName; // ivar: _segmentName


-(id)aggregatedSegmentReport:(int)arg0 ;
-(id)composeSegmentReport:(int)arg0 ;
-(id)initWithDelegate:(id)arg0 ;
-(id)initWithDelegate:(id)arg0 options:(id)arg1 ;
-(id)sessionFECReport;
-(void)composeChannelSequenceReport:(id)arg0 ;
-(void)composeReceiverReport:(id)arg0 ;
-(void)composeSenderReport:(id)arg0 ;
-(void)composeSystemInfoReport:(id)arg0 ;
-(void)dealloc;
-(void)flushCurrentSegment;
-(void)processEventWithCategory:(unsigned short)arg0 type:(unsigned short)arg1 payload:(id)arg2 ;
-(void)processMediaCaptureRealtimeStats:(id)arg0 ;
-(void)processRealtimeStats:(id)arg0 ;
-(void)processRealtimeStatsPart1:(id)arg0 ;
-(void)processRealtimeStatsPart2:(id)arg0 ;
-(void)processRealtimeStatsPart3:(id)arg0 ;
-(void)processRealtimeStatsPart4:(id)arg0 ;
-(void)processRealtimeStatsPart5:(id)arg0 ;
-(void)processRealtimeStatsPart6:(id)arg0 ;
-(void)reset;
-(void)startNewSegment;
-(void)updateReceiverVideoStreamConfiguration:(id)arg0 ;
-(void)updateSenderVideoStreamConfiguration:(id)arg0 ;
-(void)updateVideoFECStats:(id)arg0 ;
-(void)updateVideoStreamInfo:(id)arg0 ;


@end


#endif