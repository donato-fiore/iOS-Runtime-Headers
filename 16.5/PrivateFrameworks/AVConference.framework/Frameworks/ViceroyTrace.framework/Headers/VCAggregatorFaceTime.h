// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef VCAGGREGATORFACETIME_H
#define VCAGGREGATORFACETIME_H

@class NSString;
@protocol VCAdaptiveLearningDelegate;


#import "VCAggregator.h"
#import "CallSegment.h"
#import "VCHistogram.h"

@interface VCAggregatorFaceTime : VCAggregator <VCAdaptiveLearningDelegate>

 {
    NSString *_currentSegmentKey;
    NSString *_relayServer;
    NSString *_endToEndStatus;
    int _relayType;
    NSString *_accessToken;
    CallSegment *_currentSegment;
    BOOL _currentDegradedVideoState;
    CGFloat _degradedVideoStartTime;
    CGFloat _degradedVideoDuration;
    BOOL _currentNoRemoteState;
    CGFloat _noRemoteStartTime;
    unsigned int _vcrcProfileNumber;
    int _callTotalDurationTicks;
    int _callAggregatedDurationTicks;
    CGFloat _callAverageTargetBitrate;
    CGFloat _callAverageSendBitrate;
    CGFloat _callAverageReceiveBitrate;
    int _callMaxAudioErasureCount;
    int _callMaxVideoStallCount;
    CGFloat _callAverageJitterBufferDelay;
    int _targetJBSizeChanges;
    int _maxTargetJBSizeChanges;
    int _minVideoFrameRate;
    int _callAudioTotalTimescaleCount;
    int _callAudioTotalSpeechTimescaleCount;
    int _callAudioTotalSilenceTimescaleCount;
    int _callAudioTotalExpandTimescaleCount;
    int _callAudioTotalCompressTimescaleCount;
    CGFloat _callAudioAverageTimescaleRate;
    CGFloat _callAudioAverageSilenceTimescaleRate;
    CGFloat _callAudioAverageSpeechTimescaleRate;
    unsigned int _averageJitterQueueSize;
    CGFloat _callAverageTotalVideoSendBitrate;
    CGFloat _callAverageVideoMediaSendBitrate;
    CGFloat _callAverageVideoHeaderSendBitrate;
    CGFloat _callAverageVideoFECSendBitrate;
    CGFloat _callAverageRTT;
    CGFloat _callAverageAbnormalPLR;
    unsigned int _callAbnormalPLRCount;
    unsigned int _callLBAOnCount;
    CGFloat _callPoorConnectionTotalLength;
    CGFloat _callPoorConnectionMaxLength;
    unsigned int _callPoorConnectionFrequency;
    CGFloat _callTotalVideoStallTime;
    CGFloat _lastReportedVideoStallTime;
    CGFloat _lastReportedMediaStallTime;
    CGFloat _callLastVideoResolutionChangeTime;
    unsigned int _totalConnectionTime;
    unsigned int _startConnectionTime;
    unsigned int _transportConnectionTime;
    unsigned int _totalMediaStallSaveInterval;
    int _mediaReceivedTime;
    unsigned int _mediaReceivedToProcessedTime;
    unsigned int _callDeviceRole;
    unsigned int _callTransportType;
    unsigned int _callErrorDomain;
    unsigned int _numberOfSegments;
    NSUInteger _lastReportedVideoPacketSent;
    unsigned int _lastReportedAudioPacketRecv;
    NSUInteger _VPLRAccumulator;
    unsigned int _significantOOOPacketCount;
    unsigned int _totalVideoPacketsExpected;
    unsigned int _totalFIRDemandCounter;
    unsigned int _totalFIRCounter;
    unsigned int _videoFrameDecodedButSkippedCounter;
    unsigned int _videoFrameIncompleteNextTSCounter;
    unsigned int _videoFrameTotalIncompleteCounter;
    unsigned int _decodedVideoFrameEnqueueCounter;
    unsigned int _videoFrameReceivedCounter;
    unsigned int _videoFrameExpectedCounter;
    unsigned int _videoFrameNonFECTotalCounter;
    unsigned int _videoFrameNonFECCompleteCounter;
    unsigned int _encodedVideoFrameCounter;
    unsigned int _captureVideoFrameCounter;
    unsigned int _lastReportedTotalCellDupTxDataBytes;
    unsigned int _lastReportedTotalCellDupRxDataBytes;
    unsigned int _lastReportedTotalUsedCellBudgetTxDataBytes;
    unsigned int _lastReportedTotalUsedCellBudgetRxDataBytes;
    unsigned int _lastReportedMBLRampDownCount;
    unsigned char _duplicationType;
    NSUInteger _lastReportedTotalCellTxDataBytes;
    NSUInteger _lastReportedTotalCellRxDataBytes;
    unsigned int _totalDuplicationDuration;
    BOOL _didSwitchFromOneToOne;
    BOOL _didSwitchFromGFT;
    CGFloat _oneToOneSwitchUpgradeTime;
    unsigned int _oneToOneSwitchUpgradeErrorCode;
    CGFloat _gftSwitchDowngradeTime;
    unsigned int _gftSwitchDowngradeErrorCode;
    CGFloat _duplicationStartTime;
    unsigned int _evictedFramesLikelyRecoverableCount;
    unsigned int _evictedFramesTrackedCount;
    unsigned int _evictedFramesAnalysisValidIntervals;
    CGFloat _evictedFramesAverageLatePacketDelay;
    CGFloat _evictedFramesMaxLatePacketDelay;
    VCHistogram *_evictedFramesLatePacketHist;
    unsigned int _evictedFramesRecoveredCount;
    unsigned int _lateFramesScheduledCount;
    unsigned int _fecProcessingTime;
    CGFloat _primaryConnHealthAllowedDelay;
    BOOL _receivedCaptionsMetrics;
    unsigned int _totalCollectedCaptionsRatioMetrics;
    unsigned int _longCaptionRatioCollection;
    unsigned int _maxCaptionsRatio;
    unsigned int _captionTaskCount;
    CGFloat _lastUtteranceDuration;
    VCHistogram *_captionsRatioHistogram;
    VCHistogram *_captionsRatioLongHistogram;
    VCHistogram *_captionsUtteranceHistogram;
    unsigned int _localAlertStateSwitchCount;
    unsigned int _remoteAlertStateSwitchCount;
    CGFloat _lastLocalAlertTime;
    CGFloat _lastRemoteAlertTime;
    BOOL _localAlertActive;
    BOOL _remoteAlertActive;
    unsigned char _coreMotionActivityValue;
    unsigned char _coreMotionActivityConfidence;
    VCHistogram *_callVideoSwitchPeriodHistogram;
    NSUInteger _localWRMDuplicationSwitchCount;
    NSUInteger _remoteWRMDuplicationSwitchCount;
    NSUInteger _packetSendSuccessCounter;
    NSUInteger _packetSendFailureCounter;
    int _avSyncOffsetSum;
    int _minAVSyncOffset;
    int _maxAVSyncOffset;
    unsigned int _avSyncOffsetSamplesCount;
    BOOL _isExpanseEnabled;
    BOOL _isCaptionsEnabled;
    CGFloat _handshakeStartTime;
    CGFloat _handshakeDuration;
    BOOL _isCenterStageEnabled;
    BOOL _isPortraitBlurEnabled;
    int _lastCameraCaptureWidth;
    int _lastCameraCaptureHeight;
    BOOL _isRTXTelemetryAvailable;
    NSUInteger _nacksSent;
    NSUInteger _nacksFulfilled;
    NSUInteger _nacksFulfilledOnTime;
    unsigned int _uniqueNacksSent;
    NSUInteger _lateFramesScheduledWithRTXCount;
    NSUInteger _assembledFramesWithRTXPacketsCount;
    NSUInteger _failedToAssembleFramesWithRTXPacketsCount;
    VCHistogram *_nacksPLRWithRTX;
    VCHistogram *_nacksPLRWithoutRTX;
    BOOL rtcpPSFBForLossFeedbackEnabled;
    BOOL rtcpPSFBForLtrAckEnabled;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) NSString *lastSegmentKey; // ivar: _lastSegmentKey
@property (readonly) Class superclass;


-(BOOL)isDuplicationChangedForEventType:(unsigned short)arg0 ;
-(BOOL)shouldReportWithCallErrorCode:(unsigned int)arg0 ;
-(CGFloat)markHandshakeCompletion:(id)arg0 ;
-(id)aggregatedCallReports;
-(id)aggregatedSegmentQRReport;
-(id)aggregatedSegmentReport:(int)arg0 ;
-(id)aggregatedSegmentReportInternal:(int)arg0 ;
-(id)aggregatedSessionReport;
-(id)initWithDelegate:(id)arg0 nwParentActivity:(id)arg1 conversationTimeBase:(id)arg2 ;
-(id)updatePayloadWithSingleParticipantData:(id)arg0 ;
-(void)addConnectionTiming:(id)arg0 ;
-(void)addControlChannelTelemetry:(id)arg0 ;
-(void)dealloc;
-(void)flushCurrentSegment;
-(void)flushCurrentSegment:(id)arg0 ;
-(void)markHandshakeStart:(id)arg0 ;
-(void)populateSegmentBytes:(struct tagVCAggregatorFaceTimeSegmentStatsBytes *)arg0 toPayload:(id)arg1 ;
-(void)processCameraResolution:(id)arg0 ;
-(void)processCaptionsMetrics:(id)arg0 ;
-(void)processConnectionEstablishment:(id)arg0 ;
-(void)processControlChannelEventType:(unsigned short)arg0 payload:(id)arg1 ;
-(void)processDuplication:(id)arg0 type:(unsigned short)arg1 ;
-(void)processEventWithCategory:(unsigned short)arg0 type:(unsigned short)arg1 payload:(id)arg2 ;
-(void)processRTXConfigData:(id)arg0 ;
-(void)processRtcpPSFBForResiliencyConfigData:(id)arg0 ;
-(void)reset;
-(void)reset:(id)arg0 ;
-(void)saveCallSegmentHistory;
-(void)setNWActivityReportingEnabled:(BOOL)arg0 ;
-(void)setupAdaptiveLearningWithParameters:(id)arg0 ;
-(void)startNewSegment:(id)arg0 ;
-(void)updateAVSyncOffsetSumAndCountWithValue:(int)arg0 ;
-(void)updateActiveConnectionRegistry:(id)arg0 type:(unsigned short)arg1 ;
-(void)updateAlgoMetrics:(id)arg0 type:(unsigned int)arg1 ;
-(void)updateAudioCodecAndMediaBitrate:(id)arg0 ;
-(void)updateBitrateCap:(id)arg0 ;
-(void)updateCellTech:(id)arg0 ;
-(void)updateCenterStageEnabled:(unsigned short)arg0 ;
-(void)updateConnectionTelemetry:(id)arg0 ;
-(void)updateConnectionTimes:(id)arg0 ;
-(void)updateCoreMotionActivityWithPayload:(id)arg0 ;
-(void)updateErrorCode:(id)arg0 ;
-(void)updateLateFrameStats:(id)arg0 ;
-(void)updateLinkProbingStats:(unsigned int)arg0 payload:(id)arg1 ;
-(void)updateLinkSuggestionTelemetry:(id)arg0 ;
-(void)updateNetworkSendResultStats:(id)arg0 ;
-(void)updateNetworkStats:(unsigned int)arg0 payload:(id)arg1 ;
-(void)updateNoRemoteState:(id)arg0 state:(BOOL)arg1 ;
-(void)updatePauseVideo:(id)arg0 ;
-(void)updatePortraitBlurEnabled:(unsigned short)arg0 ;
-(void)updatePrimaryConnHealthAllowedDelay:(CGFloat)arg0 ;
-(void)updateRTStats:(id)arg0 ;
-(void)updateRTXStats:(id)arg0 ;
-(void)updateRelayInfo:(id)arg0 ;
-(void)updateRoleModeTransport:(unsigned short)arg0 deviceRole:(unsigned short)arg1 transportType:(unsigned short)arg2 isInitiator:(BOOL)arg3 ;
-(void)updateSegmentStats:(id)arg0 ;
-(void)updateSwitchConfiguration:(unsigned int)arg0 payload:(id)arg1 ;
-(void)updateVCRCProfileNumber:(unsigned int)arg0 ;
-(void)updateVPCStatus:(id)arg0 ;
-(void)updateVideoQualityWithPayload:(id)arg0 ;
-(void)updateVideoResolution:(id)arg0 ;
-(void)updateVideoSwitchTimes:(id)arg0 ;
-(void)updateWRMMetrics:(unsigned int)arg0 payload:(id)arg1 ;


@end


#endif