// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef CALLSEGMENT_H
#define CALLSEGMENT_H

@class NSString, NSDate, NSNumber, NSMutableDictionary;
@protocol OS_nw_activity, VCAdaptiveLearningDelegate;

#import <Foundation/Foundation.h>

#import "VCHistogram.h"
#import "VCHistogram2D.h"

@interface CallSegment : NSObject {
    unsigned int _audioFlushPercent;
    unsigned int _videoFlushPercent;
    NSString *_relayServer;
    int _relayType;
    NSString *_accessToken;
    unsigned char _duplicationType;
    int _interval;
    int _frequency;
    ? _linkProbingConfig;
    NSObject<OS_nw_activity> *_nwActivity;
    BOOL _useNwActivitySubmitMetrics;
    BOOL _isNWActivityReportingEnabled;
    NSDate *_conversationTimeBase;
    int _startDate;
    id<VCAdaptiveLearningDelegate> *_delegate;
}


@property unsigned int BBQueueTooLargeCount; // ivar: _BBQueueTooLargeCount
@property unsigned int BBRateTooLowCount; // ivar: _BBRateTooLowCount
@property (copy) NSNumber *IPVersion; // ivar: _IPVersion
@property (readonly) VCHistogram *JBQSize; // ivar: _JBQSize
@property (readonly) VCHistogram *JBQSizeDeltaAudLarger; // ivar: _JBQSizeDeltaAudLarger
@property (readonly) VCHistogram *JBQSizeDeltaVidLarger; // ivar: _JBQSizeDeltaVidLarger
@property (readonly) VCHistogram *JBTarget; // ivar: _JBTarget
@property (readonly) VCHistogram *JBUnclippedTarget; // ivar: _JBUnclippedTarget
@property (readonly) VCHistogram *PLR; // ivar: _PLR
@property (readonly) VCHistogram *RBR; // ivar: _RBR
@property (readonly) VCHistogram *REDDiscardedCount; // ivar: _REDDiscardedCount
@property (readonly) VCHistogram *REDErasureCompensationRate; // ivar: _REDErasureCompensationRate
@property (readonly) VCHistogram *REDMaxDelay; // ivar: _REDMaxDelay
@property (readonly) VCHistogram *REDNumPayloadsUsed; // ivar: _REDNumPayloadsUsed
@property (readonly) VCHistogram *REDReceivedCount; // ivar: _REDReceivedCount
@property (readonly) VCHistogram *RTT; // ivar: _RTT
@property (readonly) VCHistogram *SBR; // ivar: _SBR
@property (readonly) VCHistogram *TBR; // ivar: _TBR
@property (readonly) VCHistogram *TVidCodecPayload; // ivar: _TVidCodecPayload
@property (readonly) VCHistogram *TVidMedBR; // ivar: _TVidMedBR
@property (readonly) VCHistogram *VPLR; // ivar: _VPLR
@property NSUInteger VPLRAccumulator; // ivar: _VPLRAccumulator
@property (readonly) VCHistogram *WANVJBQSize; // ivar: _WANVJBQSize
@property (readonly) VCHistogram *abnormalBPL; // ivar: _abnormalBPL
@property (readonly) VCHistogram *abnormalPLR; // ivar: _abnormalPLR
@property (readonly) VCHistogram *abnormalRTT; // ivar: _abnormalRTT
@property (copy) NSString *activeConnectionRegistry; // ivar: _activeConnectionRegistry
@property int adjustedDuration; // ivar: _adjustedDuration
@property (readonly) VCHistogram *audioCodecPayload; // ivar: _audioCodecPayload
@property (readonly) VCHistogram *audioErasures; // ivar: _audioErasures
@property NSUInteger audioFlushPacketCount; // ivar: _audioFlushPacketCount
@property (readonly) VCHistogram *audioMediaBitrate; // ivar: _audioMediaBitrate
@property unsigned int audioRecvPacketCount; // ivar: _audioRecvPacketCount
@property NSUInteger audioSentPacketCount; // ivar: _audioSentPacketCount
@property unsigned int avSyncOffsetSamplesCount; // ivar: _avSyncOffsetSamplesCount
@property int avSyncOffsetSum; // ivar: _avSyncOffsetSum
@property CGFloat averageAudioErasuresRate; // ivar: _averageAudioErasuresRate
@property CGFloat averageBWE; // ivar: _averageBWE
@property CGFloat averageJitterErasuresRate; // ivar: _averageJitterErasuresRate
@property unsigned int averageJitterQueueSize; // ivar: _averageJitterQueueSize
@property unsigned int averageJitterQueueSizeChanges; // ivar: _averageJitterQueueSizeChanges
@property CGFloat averageRTT; // ivar: _averageRTT
@property CGFloat averageReceiveBitrate; // ivar: _averageReceiveBitrate
@property CGFloat averageSendBitrate; // ivar: _averageSendBitrate
@property CGFloat averageSpeechErasuresRate; // ivar: _averageSpeechErasuresRate
@property CGFloat averageTargetBitrate; // ivar: _averageTargetBitrate
@property CGFloat averageTotalVideoRecvBitrate; // ivar: _averageTotalVideoRecvBitrate
@property CGFloat averageTotalVideoSendBitrate; // ivar: _averageTotalVideoSendBitrate
@property CGFloat averageVideoFECSendBitrate; // ivar: _averageVideoFECSendBitrate
@property CGFloat averageVideoHeaderSendBitrate; // ivar: _averageVideoHeaderSendBitrate
@property CGFloat averageVideoMediaSendBitrate; // ivar: _averageVideoMediaSendBitrate
@property unsigned int callDeviceRole; // ivar: _callDeviceRole
@property unsigned int callMode; // ivar: _callMode
@property unsigned int callTransportType; // ivar: _callTransportType
@property unsigned int captureVideoFrameCounter; // ivar: _captureVideoFrameCounter
@property (readonly) VCHistogram *continuousHighPLRReportCount; // ivar: _continuousHighPLRReportCount
@property (readonly) VCHistogram *continuousHighRTTPLRReportCount; // ivar: _continuousHighRTTPLRReportCount
@property (readonly) VCHistogram *continuousHighRTTReportCount; // ivar: _continuousHighRTTReportCount
@property unsigned char coreMotionActivityConfidence; // ivar: _coreMotionActivityConfidence
@property unsigned char coreMotionActivityValue; // ivar: _coreMotionActivityValue
@property unsigned int decodedVideoFrameEnqueueCounter; // ivar: _decodedVideoFrameEnqueueCounter
@property (copy) NSString *duplicationConnectionConfig; // ivar: _duplicationConnectionConfig
@property (copy) NSString *duplicationConnectionFamily; // ivar: _duplicationConnectionFamily
@property CGFloat duplicationMaxNoRemotePacketTime; // ivar: _duplicationMaxNoRemotePacketTime
@property CGFloat duplicationMaxRemoteNoRemotePacketTime; // ivar: _duplicationMaxRemoteNoRemotePacketTime
@property int duration; // ivar: _duration
@property unsigned int dynamicDupeLinkCount; // ivar: _dynamicDupeLinkCount
@property unsigned int encodedVideoFrameCounter; // ivar: _encodedVideoFrameCounter
@property unsigned int errorCode; // ivar: _errorCode
@property unsigned int evictedFramesAnalysisValidIntervals; // ivar: _evictedFramesAnalysisValidIntervals
@property CGFloat evictedFramesAverageLatePacketDelay; // ivar: _evictedFramesAverageLatePacketDelay
@property (readonly) VCHistogram *evictedFramesLatePacketDelayHist; // ivar: _evictedFramesLatePacketDelayHist
@property unsigned int evictedFramesLikelyRecoverableCount; // ivar: _evictedFramesLikelyRecoverableCount
@property CGFloat evictedFramesMaxLatePacketDelay; // ivar: _evictedFramesMaxLatePacketDelay
@property unsigned int evictedFramesRecoveredCount; // ivar: _evictedFramesRecoveredCount
@property unsigned int evictedFramesTrackedCount; // ivar: _evictedFramesTrackedCount
@property unsigned int fecProcessingTime; // ivar: _fecProcessingTime
@property (readonly) NSMutableDictionary *fecStatsDict; // ivar: _fecStatsDict
@property (readonly) VCHistogram *framerate; // ivar: _framerate
@property unsigned int highPLRReportCounter; // ivar: _highPLRReportCounter
@property unsigned int highRTTPLRReportCounter; // ivar: _highRTTPLRReportCounter
@property unsigned int highRTTReportCounter; // ivar: _highRTTReportCounter
@property BOOL is5GHz; // ivar: _is5GHz
@property BOOL isCenterStageEnabled; // ivar: _isCenterStageEnabled
@property BOOL isInitiator; // ivar: _isInitiator
@property BOOL isLocalCelltechDirty; // ivar: _isLocalCelltechDirty
@property (copy) NSNumber *isLocalExpensive; // ivar: _isLocalExpensive
@property BOOL isPortraitBlurEnabled; // ivar: _isPortraitBlurEnabled
@property (copy) NSNumber *isRemoteExpensive; // ivar: _isRemoteExpensive
@property (readonly) VCHistogram *jitterErasures; // ivar: _jitterErasures
@property NSUInteger lastReportedTotalCellDupRxDataBytes; // ivar: _lastReportedTotalCellDupRxDataBytes
@property NSUInteger lastReportedTotalCellDupTxDataBytes; // ivar: _lastReportedTotalCellDupTxDataBytes
@property NSUInteger lastReportedTotalCellRxDataBytes; // ivar: _lastReportedTotalCellRxDataBytes
@property NSUInteger lastReportedTotalCellTxDataBytes; // ivar: _lastReportedTotalCellTxDataBytes
@property NSUInteger lastReportedTotalUsedCellBudgetRxDataBytes; // ivar: _lastReportedTotalUsedCellBudgetRxDataBytes
@property NSUInteger lastReportedTotalUsedCellBudgetTxDataBytes; // ivar: _lastReportedTotalUsedCellBudgetTxDataBytes
@property NSUInteger lastReportedTotalWifiRxDataBytes; // ivar: _lastReportedTotalWifiRxDataBytes
@property NSUInteger lastReportedTotalWifiTxDataBytes; // ivar: _lastReportedTotalWifiTxDataBytes
@property unsigned int lateFramesScheduledCount; // ivar: _lateFramesScheduledCount
@property (readonly) VCHistogram *latency; // ivar: _latency
@property unsigned char linkConfidenceScore; // ivar: _linkConfidenceScore
@property unsigned char linkIPPreference; // ivar: _linkIPPreference
@property unsigned char linkPreferDecision; // ivar: _linkPreferDecision
@property unsigned char linkPreferSuggestion; // ivar: _linkPreferSuggestion
@property unsigned int localAlertStateSwitchCount; // ivar: _localAlertStateSwitchCount
@property (copy) NSNumber *localCelltech; // ivar: _localCelltech
@property (readonly) VCHistogram2D *lossHistogram; // ivar: _lossHistogram
@property (readonly) VCHistogram *lossPattern; // ivar: _lossPattern
@property int maxAVSyncOffset; // ivar: _maxAVSyncOffset
@property CGFloat maxAudioStallInterval; // ivar: _maxAudioStallInterval
@property unsigned int maxBWE; // ivar: _maxBWE
@property (readonly) VCHistogram *maxConsAudioErasuresHistogram; // ivar: _maxConsAudioErasuresHistogram
@property unsigned int maxConsecutiveAudioErasures; // ivar: _maxConsecutiveAudioErasures
@property unsigned int maxJitterQueueSize; // ivar: _maxJitterQueueSize
@property CGFloat maxMediaStallTime; // ivar: _maxMediaStallTime
@property (copy) NSNumber *maxNegotiatedDownlinkBitrate; // ivar: _maxNegotiatedDownlinkBitrate
@property (copy) NSNumber *maxNegotiatedUplinkBitrate; // ivar: _maxNegotiatedUplinkBitrate
@property CGFloat maxNoRemotePacketsInterval; // ivar: _maxNoRemotePacketsInterval
@property CGFloat maxVideoStallInterval; // ivar: _maxVideoStallInterval
@property (readonly) VCHistogram *mediaStall; // ivar: _mediaStall
@property unsigned int mediaStallCount; // ivar: _mediaStallCount
@property int minAVSyncOffset; // ivar: _minAVSyncOffset
@property unsigned int minBWE; // ivar: _minBWE
@property unsigned int negotiatedSwitches; // ivar: _negotiatedSwitches
@property unsigned int overUtilizedBandwidth; // ivar: _overUtilizedBandwidth
@property unsigned int overshootSendBitrate; // ivar: _overshootSendBitrate
@property NSUInteger packetSendFailureCounter; // ivar: _packetSendFailureCounter
@property NSUInteger packetSendSuccessCounter; // ivar: _packetSendSuccessCounter
@property unsigned char plrTierTotalDelta; // ivar: _plrTierTotalDelta
@property (readonly) VCHistogram *poorConnection; // ivar: _poorConnection
@property unsigned int poorConnectionFrequency; // ivar: _poorConnectionFrequency
@property CGFloat poorConnectionMaxLength; // ivar: _poorConnectionMaxLength
@property CGFloat poorConnectionTotalLength; // ivar: _poorConnectionTotalLength
@property (readonly) NSString *previousSegmentName; // ivar: _previousSegmentName
@property CGFloat primaryConnHealthAllowedDelay; // ivar: _primaryConnHealthAllowedDelay
@property unsigned int remoteAlertStateSwitchCount; // ivar: _remoteAlertStateSwitchCount
@property (copy) NSNumber *remoteCelltech; // ivar: _remoteCelltech
@property BOOL remoteFaceTimeSwitchesAvailable; // ivar: _remoteFaceTimeSwitchesAvailable
@property (copy) NSString *remoteOSBuild; // ivar: _remoteOSBuild
@property unsigned int remoteSwitches; // ivar: _remoteSwitches
@property CGFloat rttMeanTotalDelta; // ivar: _rttMeanTotalDelta
@property (readonly) NSString *segmentName; // ivar: _segmentName
@property unsigned int significantOOOPacketCount; // ivar: _significantOOOPacketCount
@property CGFloat speechErasureTotalTime; // ivar: _speechErasureTotalTime
@property (readonly) VCHistogram *speechErasures; // ivar: _speechErasures
@property (copy) NSString *suggestedLinkTypeCombo; // ivar: _suggestedLinkTypeCombo
@property CGFloat timeWeightedJitterQueueSize; // ivar: _timeWeightedJitterQueueSize
@property CGFloat totalAudioStallTime; // ivar: _totalAudioStallTime
@property NSUInteger totalCellDupRxDataBytes; // ivar: _totalCellDupRxDataBytes
@property NSUInteger totalCellDupTxDataBytes; // ivar: _totalCellDupTxDataBytes
@property NSUInteger totalCellRxDataBytes; // ivar: _totalCellRxDataBytes
@property NSUInteger totalCellTxDataBytes; // ivar: _totalCellTxDataBytes
@property unsigned int totalFIRCounter; // ivar: _totalFIRCounter
@property unsigned int totalFIRDemandCounter; // ivar: _totalFIRDemandCounter
@property unsigned int totalMBLRampDownCount; // ivar: _totalMBLRampDownCount
@property CGFloat totalMediaStallTime; // ivar: _totalMediaStallTime
@property CGFloat totalNoRemotePacketsTime; // ivar: _totalNoRemotePacketsTime
@property unsigned int totalSuddenBandwidthDropCount; // ivar: _totalSuddenBandwidthDropCount
@property NSUInteger totalUsedCellBudgetRxDataBytes; // ivar: _totalUsedCellBudgetRxDataBytes
@property NSUInteger totalUsedCellBudgetTxDataBytes; // ivar: _totalUsedCellBudgetTxDataBytes
@property unsigned int totalVideoPacketsExpected; // ivar: _totalVideoPacketsExpected
@property CGFloat totalVideoStallTime; // ivar: _totalVideoStallTime
@property NSUInteger totalWifiRxDataBytes; // ivar: _totalWifiRxDataBytes
@property NSUInteger totalWifiTxDataBytes; // ivar: _totalWifiTxDataBytes
@property unsigned int underUtilizedBandwidth; // ivar: _underUtilizedBandwidth
@property unsigned int undershootSendBitrate; // ivar: _undershootSendBitrate
@property unsigned int vcrcProfileNumber; // ivar: _vcrcProfileNumber
@property (readonly) VCHistogram *videoEncodingBitrate; // ivar: _videoEncodingBitrate
@property NSUInteger videoFlushPacketCount; // ivar: _videoFlushPacketCount
@property unsigned int videoFrameDecodedButSkippedCounter; // ivar: _videoFrameDecodedButSkippedCounter
@property unsigned int videoFrameExpectedCounter; // ivar: _videoFrameExpectedCounter
@property unsigned int videoFrameIncompleteNextTSCounter; // ivar: _videoFrameIncompleteNextTSCounter
@property unsigned int videoFrameNonFECCompleteCounter; // ivar: _videoFrameNonFECCompleteCounter
@property unsigned int videoFrameNonFECTotalCounter; // ivar: _videoFrameNonFECTotalCounter
@property unsigned int videoFrameReceivedCounter; // ivar: _videoFrameReceivedCounter
@property unsigned int videoFrameTotalIncompleteCounter; // ivar: _videoFrameTotalIncompleteCounter
@property (readonly) VCHistogram *videoJitter; // ivar: _videoJitter
@property (readonly) VCHistogram *videoQualityScore; // ivar: _videoQualityScore
@property (readonly) VCHistogram *videoResolution; // ivar: _videoResolution
@property NSUInteger videoSentPacketCount; // ivar: _videoSentPacketCount
@property (readonly) VCHistogram *videoStall; // ivar: _videoStall
@property NSNumber *wrmLinkTypeCellServingCellType; // ivar: _wrmLinkTypeCellServingCellType
@property NSNumber *wrmLinkTypeCellSignalBar; // ivar: _wrmLinkTypeCellSignalBar
@property NSNumber *wrmLinkTypeCellSignalStrength; // ivar: _wrmLinkTypeCellSignalStrength
@property NSNumber *wrmLinkTypeChangeReasonCode; // ivar: _wrmLinkTypeChangeReasonCode
@property NSNumber *wrmLinkTypeSuggestion; // ivar: _wrmLinkTypeSuggestion
@property NSNumber *wrmLinkTypeWifiCCA; // ivar: _wrmLinkTypeWifiCCA
@property NSNumber *wrmLinkTypeWifiPacketLoss; // ivar: _wrmLinkTypeWifiPacketLoss
@property NSNumber *wrmLinkTypeWifiRSSI; // ivar: _wrmLinkTypeWifiRSSI
@property NSNumber *wrmLinkTypeWifiRSSIThreshold; // ivar: _wrmLinkTypeWifiRSSIThreshold
@property NSNumber *wrmLinkTypeWifiRemoteRSSIThreshold; // ivar: _wrmLinkTypeWifiRemoteRSSIThreshold
@property NSNumber *wrmLinkTypeWifiSNR; // ivar: _wrmLinkTypeWifiSNR


+(id)connectionCategoryForType:(id)arg0 ;
+(id)interfaceCategoryForType:(id)arg0 ;
+(id)newSegmentNameWithComponents:(id)arg0 remoteInterface:(id)arg1 connectionType:(id)arg2 duplicationIndicator:(id)arg3 ;
-(id)celltechTelemetry;
-(id)duplicationCategoryForSegmentName:(id)arg0 ;
-(id)initWithDictionary:(id)arg0 ;
-(id)initWithSegmentName:(id)arg0 previousSegmentName:(id)arg1 mode:(unsigned short)arg2 deviceRole:(unsigned short)arg3 transportType:(unsigned short)arg4 relayServer:(id)arg5 relayType:(unsigned short)arg6 accessToken:(id)arg7 duplicationType:(unsigned char)arg8 switchConfig:(id)arg9 linkProbingConfig:(struct ? )arg10 nwActivity:(id)arg11 conversationTimeBase:(id)arg12 isInitiator:(BOOL)arg13 delegate:(id)arg14 ;
-(id)segmentFECReport;
-(id)segmentQRReport;
-(id)segmentReport;
-(unsigned int)RTPeriod;
-(void)addSegmentWRMReportStats:(id)arg0 ;
-(void)assertCleanCellTech;
-(void)changeDuplicationWithType:(unsigned short)arg0 payload:(id)arg1 ;
-(void)dealloc;
-(void)merge:(id)arg0 ;
-(void)setNWActivityReportingEnabled:(BOOL)arg0 ;


@end


#endif