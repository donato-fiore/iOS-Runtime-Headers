// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef UPLINKSEGMENT_H
#define UPLINKSEGMENT_H

@class NSMutableDictionary, NSNumber;


#import "MultiwaySegment.h"
#import "VCHistogram.h"

@interface UplinkSegment : MultiwaySegment {
    NSMutableDictionary *_streamQualityAggregator;
    NSMutableDictionary *_streamGroupStats;
    unsigned int _audioFlushPacketCount;
    unsigned int _audioSentPacketCount;
}


@property unsigned int BBQueueTooLargeCount; // ivar: _BBQueueTooLargeCount
@property unsigned int BBRateTooLowCount; // ivar: _BBRateTooLowCount
@property (readonly) VCHistogram *REDMaxDelay; // ivar: _REDMaxDelay
@property (readonly) VCHistogram *REDNumPayloadsUsed; // ivar: _REDNumPayloadsUsed
@property (readonly) VCHistogram *SBR; // ivar: _SBR
@property (readonly) VCHistogram *audioCodecPayload; // ivar: _audioCodecPayload
@property (readonly) VCHistogram *audioMediaBitrate; // ivar: _audioMediaBitrate
@property CGFloat averageSendBitrate; // ivar: _averageSendBitrate
@property BOOL isCenterStageEnabled; // ivar: _isCenterStageEnabled
@property BOOL isFullScreenCapture; // ivar: _isFullScreenCapture
@property BOOL isPortraitBlurEnabled; // ivar: _isPortraitBlurEnabled
@property (nonatomic) BOOL isUplinkScreenEnabled; // ivar: _isUplinkScreenEnabled
@property NSUInteger lastReportedTotalCellDupTxDataBytes; // ivar: _lastReportedTotalCellDupTxDataBytes
@property NSUInteger lastReportedTotalCellTxDataBytes; // ivar: _lastReportedTotalCellTxDataBytes
@property NSUInteger lastReportedTotalUsedCellBudgetTxDataBytes; // ivar: _lastReportedTotalUsedCellBudgetTxDataBytes
@property NSUInteger lastReportedTotalWifiTxDataBytes; // ivar: _lastReportedTotalWifiTxDataBytes
@property CGFloat maxAudioStallInterval; // ivar: _maxAudioStallInterval
@property unsigned int overUtilizedBandwidth; // ivar: _overUtilizedBandwidth
@property unsigned int overshootSendBitrate; // ivar: _overshootSendBitrate
@property NSUInteger packetSendFailureCounter; // ivar: _packetSendFailureCounter
@property NSUInteger packetSendSuccessCounter; // ivar: _packetSendSuccessCounter
@property CGFloat totalAudioPauseTime; // ivar: _totalAudioPauseTime
@property NSUInteger totalCellDupTxDataBytes; // ivar: _totalCellDupTxDataBytes
@property NSUInteger totalCellTxDataBytes; // ivar: _totalCellTxDataBytes
@property NSUInteger totalUsedCellBudgetTxDataBytes; // ivar: _totalUsedCellBudgetTxDataBytes
@property NSUInteger totalWifiTxDataBytes; // ivar: _totalWifiTxDataBytes
@property unsigned int underUtilizedBandwidth; // ivar: _underUtilizedBandwidth
@property unsigned int undershootSendBitrate; // ivar: _undershootSendBitrate
@property (readonly) VCHistogram *videoCodecPayload; // ivar: _videoCodecPayload
@property (readonly) VCHistogram *videoEncodingBitrate; // ivar: _videoEncodingBitrate
@property NSUInteger videoFlushPacketCount; // ivar: _videoFlushPacketCount
@property (readonly) VCHistogram *videoMediaBitrate; // ivar: _videoMediaBitrate
@property NSUInteger videoSentPacketCount; // ivar: _videoSentPacketCount
@property NSNumber *wrmLinkTypeCellServingCellType; // ivar: _wrmLinkTypeCellServingCellType
@property NSNumber *wrmLinkTypeCellSignalBar; // ivar: _wrmLinkTypeCellSignalBar
@property NSNumber *wrmLinkTypeCellSignalStrength; // ivar: _wrmLinkTypeCellSignalStrength
@property NSNumber *wrmLinkTypeChangeReasonCode; // ivar: _wrmLinkTypeChangeReasonCode
@property NSNumber *wrmLinkTypeSuggestion; // ivar: _wrmLinkTypeSuggestion
@property NSNumber *wrmLinkTypeWifiCCA; // ivar: _wrmLinkTypeWifiCCA
@property NSNumber *wrmLinkTypeWifiPacketLoss; // ivar: _wrmLinkTypeWifiPacketLoss
@property NSNumber *wrmLinkTypeWifiRSSI; // ivar: _wrmLinkTypeWifiRSSI
@property NSNumber *wrmLinkTypeWifiSNR; // ivar: _wrmLinkTypeWifiSNR


-(id)calculateBitrate:(id)arg0 sumKey:(id)arg1 counterKey:(id)arg2 ;
-(id)calculateFramerate:(id)arg0 forKey:(id)arg1 ;
-(id)initWithSegmentName:(id)arg0 previousSegmentName:(id)arg1 segmentStreamGroups:(unsigned int)arg2 previousSegmentStreamGroups:(unsigned int)arg3 nwActivity:(id)arg4 localSwitches:(unsigned int)arg5 conversationTimeBase:(id)arg6 delegate:(id)arg7 ;
-(id)segmentReport;
-(unsigned int)audioFlushPercent;
-(void)addCellByteCountStats:(id)arg0 ;
-(void)addCelltechTelemetryToDictionary:(id)arg0 ;
-(void)addMediaQueueStats:(id)arg0 ;
-(void)addSegmentWRMReportStats:(id)arg0 ;
-(void)collectStreamQualityAggregator:(id)arg0 ;
-(void)collectStreamTemporalStats:(id)arg0 ;
-(void)dealloc;
-(void)processAudioPacketsFlushed:(unsigned int)arg0 audioPacketsSent:(unsigned int)arg1 ;
-(void)processBitrateEvent:(id)arg0 forMetrics:(id)arg1 withStreamGroup:(id)arg2 withQuality:(id)arg3 sumKey:(id)arg4 counterKey:(id)arg5 ;
-(void)processFramerateEvent:(id)arg0 forMetrics:(id)arg1 withStreamGroup:(id)arg2 withQuality:(id)arg3 sumKey:(id)arg4 ;
-(void)processMediaQueueTelemetry:(id)arg0 ;
-(void)processVideoTransmitterStats:(id)arg0 ;
-(void)updateAdaptiveLearningSegment;
-(void)updateUplinkSegmentStats:(id)arg0 withSegmentBytes:(struct tagVCAggregatorFaceTimeSegmentStatsBytes *)arg1 ;


@end


#endif