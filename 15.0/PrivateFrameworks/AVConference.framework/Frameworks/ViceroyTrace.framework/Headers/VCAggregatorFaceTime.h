// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef VCAGGREGATORFACETIME_H
#define VCAGGREGATORFACETIME_H

@class NSString;
@protocol VCAdaptiveLearningDelegate;


#import "VCAggregator.h"
#import "CallSegment.h"
#import "VCHistogram.h"
#import "VCAdaptiveLearning.h"

@interface VCAggregatorFaceTime : VCAggregator <VCAdaptiveLearningDelegate>

 {
    NSString *_remoteInterfaceType;
    NSString *_currentSegmentKey;
    NSString *_lastSegmentKey;
    NSString *_relayServer;
    NSString *_endToEndStatus;
    int _relayType;
    NSString *_accessToken;
    NSString *_remoteOSBuild;
    CallSegment *_currentSegment;
    unsigned int _currentWidth;
    BOOL _currentDegradedVideoState;
    CGFloat _degradedVideoStartTime;
    CGFloat _degradedVideoDuration;
    BOOL _currentNoRemoteState;
    CGFloat _noRemoteStartTime;
    unsigned int _vcrcProfileNumber;
    int _callTotalDurationTicks;
    int _callAggregatedDurationTicks;
    CGFloat _callAverageAudioErasuresRate;
    CGFloat _callAverageTargetBitrate;
    CGFloat _callAverageSendBitrate;
    CGFloat _callAverageReceiveBitrate;
    int _callMaxAudioErasureCount;
    int _callMaxVideoStallCount;
    CGFloat _callAverageJitterBufferDelay;
    int _targetJBSizeChanges;
    int _maxTargetJBSizeChanges;
    int _minVideoFrameRate;
    int _accumVideoFrameErasureCount;
    int _maxVideoFrameErasureCount;
    unsigned int _averageJitterQueueSize;
    unsigned int _averageJitterQueueSizeChanges;
    unsigned int _maxJitterQueueSize;
    CGFloat _timeWeightedJitterQueueSize;
    CGFloat _callAverageTotalVideoSendBitrate;
    CGFloat _callAverageVideoMediaSendBitrate;
    CGFloat _callAverageVideoHeaderSendBitrate;
    CGFloat _callAverageVideoFECSendBitrate;
    CGFloat _callAverageTotalVideoRecvBitrate;
    CGFloat _callAverageRTT;
    CGFloat _callAverageAbnormalRTT;
    unsigned int _callAbnormalRTTCount;
    CGFloat _callAverageAbnormalPLR;
    unsigned int _callAbnormalPLRCount;
    CGFloat _callAverageAbnormalBPL;
    unsigned int _callAbnormalBPLCount;
    CGFloat _callPoorConnectionTotalLength;
    CGFloat _callPoorConnectionMaxLength;
    unsigned int _callPoorConnectionFrequency;
    CGFloat _callTotalVideoStallTime;
    CGFloat _callTotalMediaStallTime;
    CGFloat _callMaxMediaStallTime;
    CGFloat _callMaxVideoStallInterval;
    CGFloat _callTotalAudioStallTime;
    CGFloat _callMaxAudioStallInterval;
    CGFloat _lastReportedAudioStallTime;
    CGFloat _lastReportedVideoStallTime;
    CGFloat _lastReportedMediaStallTime;
    CGFloat _callLastVideoResolutionChangeTime;
    unsigned int _noRemoteAtCallEnd;
    unsigned int _callTotalMediaStallCount;
    unsigned int _remoteNoRemoteAtCallEnd;
    unsigned int _totalConnectionTime;
    unsigned int _startConnectionTime;
    unsigned int _transportConnectionTime;
    unsigned int _mediaConnectionTime;
    unsigned int _callMode;
    unsigned int _callDeviceRole;
    unsigned int _callTransportType;
    unsigned int _callErrorCode;
    unsigned int _callDetailedErrorCode;
    unsigned int _callErrorDomain;
    unsigned int _numberOfSegments;
    unsigned int _REDState;
    unsigned char _wifiAssistState;
    NSUInteger _lastReportedAudioPacketSent;
    NSUInteger _lastReportedVideoPacketSent;
    unsigned int _lastReportedAudioPacketRecv;
    NSUInteger _VPLRAccumulator;
    unsigned int _initialRampUpTime;
    int _initialBitrateDelta;
    int _initialBitrate;
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
    unsigned int _overshootSendBitrate;
    unsigned int _undershootSendBitrate;
    unsigned int _overUtilizedBandwidth;
    unsigned int _underUtilizedBandwidth;
    unsigned int _negotiatedSwitches;
    unsigned int _remoteSwitches;
    unsigned int _lastReportedTotalCellDupTxDataBytes;
    unsigned int _lastReportedTotalCellDupRxDataBytes;
    unsigned int _lastReportedTotalUsedCellBudgetTxDataBytes;
    unsigned int _lastReportedTotalUsedCellBudgetRxDataBytes;
    unsigned int _lastReportedMBLRampDownCount;
    unsigned int _lastReportedSuddenBandwidthDropCount;
    unsigned char _duplicationType;
    NSUInteger _lastReportedTotalCellTxDataBytes;
    NSUInteger _lastReportedTotalCellRxDataBytes;
    NSUInteger _lastReportedTotalWifiTxDataBytes;
    NSUInteger _lastReportedTotalWifiRxDataBytes;
    unsigned int _totalDuplicationDuration;
    unsigned int _wifiToCellHandoverCount;
    unsigned int _cellToWifiHandoverCount;
    BOOL _isDuplicationEnabled;
    BOOL _remoteFaceTimeSwitchesAvailable;
    BOOL _didSwitchFromOneToOne;
    CGFloat _oneToOneSwitchUpgradeTime;
    CGFloat _duplicationStartTime;
    unsigned int _evictedFramesLikelyRecoverableCount;
    unsigned int _evictedFramesTrackedCount;
    unsigned int _evictedFramesAnalysisValidIntervals;
    CGFloat _evictedFramesAverageLatePacketDelay;
    unsigned int _lateFramesScheduledCount;
    unsigned int _fecProcessingTime;
    VCHistogram *_lossPattern;
    CGFloat _primaryConnHealthAllowedDelay;
    unsigned int _linkProbingVersion;
    unsigned int _remoteLinkProbingVersion;
    unsigned int _localAlertStateSwitchCount;
    unsigned int _remoteAlertStateSwitchCount;
    CGFloat _lastLocalAlertTime;
    CGFloat _lastRemoteAlertTime;
    BOOL _localAlertActive;
    BOOL _remoteAlertActive;
    unsigned int _dynamicDupeLinkCount;
    CGFloat _rttMeanTotalDelta;
    unsigned char _plrTierTotalDelta;
    unsigned char _coreMotionActivityValue;
    unsigned char _coreMotionActivityConfidence;
    unsigned int _isVPCEnabled;
    CGFloat _minVPCProcessingTime;
    CGFloat _maxVPCProcessingTime;
    CGFloat _averageVPCProcessingTimeSum;
    unsigned int _averageVPCProcessingTimeCounter;
    VCHistogram *_callVideoSwitchPeriodHistogram;
    VCAdaptiveLearning *_adaptiveLearning;
    NSUInteger _localWRMDuplicationSwitchCount;
    NSUInteger _remoteWRMDuplicationSwitchCount;
    int _avSyncOffsetSum;
    int _minAVSyncOffset;
    int _maxAVSyncOffset;
    unsigned int _avSyncOffsetSamplesCount;
}


@property (readonly) VCHistogram *JBQSizeDeltaAudLarger; // ivar: _JBQSizeDeltaAudLarger
@property (readonly) VCHistogram *JBQSizeDeltaVidLarger; // ivar: _JBQSizeDeltaVidLarger
@property (readonly) VCHistogram *WANVJBQSize; // ivar: _WANVJBQSize
@property (copy) NSString *activeConnectionRegistry; // ivar: _activeConnectionRegistry
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(BOOL)isDuplicationChangedForEventType:(unsigned short)arg0 ;
-(BOOL)isLocalInterfaceTypeForSegment:(id)arg0 equalTo:(id)arg1 ;
-(BOOL)shouldReportWithCallErrorCode:(unsigned int)arg0 ;
-(id)aggregatedCallReports;
-(id)aggregatedSegmentQRReport;
-(id)aggregatedSegmentReport:(int)arg0 ;
-(id)aggregatedSessionReport;
-(id)duplicationIndicator;
-(id)initWithDelegate:(id)arg0 nwParentActivity:(id)arg1 conversationTimeBase:(id)arg2 ;
-(id)updatePayloadWithSingleParticipantData:(id)arg0 ;
-(int)adaptiveLearningState;
-(int)initialSettledBitrate;
-(int)learntBitrateForSegment:(id)arg0 defaultValue:(int)arg1 ;
-(int)longTermAverageBWEForSegment:(id)arg0 ;
-(int)longTermAverageISBRForSegment:(id)arg0 ;
-(int)longTermAverageSARBRForSegment:(id)arg0 ;
-(int)longTermAverageSATXBRForSegment:(id)arg0 ;
-(int)longTermAverageTBRForSegment:(id)arg0 ;
-(int)previousISBRForSegment:(id)arg0 ;
-(int)shortTermAverageBWEForSegment:(id)arg0 ;
-(int)shortTermAverageISBRForSegment:(id)arg0 ;
-(int)shortTermAverageSARBRForSegment:(id)arg0 ;
-(int)shortTermAverageSATXBRForSegment:(id)arg0 ;
-(int)shortTermAverageTBRForSegment:(id)arg0 ;
-(void)addVPCTelemetry:(id)arg0 ;
-(void)dealloc;
-(void)flushCurrentSegment;
-(void)initAdaptiveLearningWithParameters:(id)arg0 ;
-(void)processEventWithCategory:(unsigned short)arg0 type:(unsigned short)arg1 payload:(id)arg2 ;
-(void)reset;
-(void)saveCallSegmentHistory;
-(void)setNWActivityReportingEnabled:(BOOL)arg0 ;
-(void)startNewSegment;
-(void)updateAVSyncOffsetSumAndCountWithValue:(int)arg0 ;
-(void)updateAdaptiveLearningStats:(unsigned int)arg0 payload:(id)arg1 ;
-(void)updateAlgoMetrics:(unsigned int)arg0 ;
-(void)updateBitrateCap:(id)arg0 ;
-(void)updateCellTech:(id)arg0 ;
-(void)updateConnectionTelemetry:(id)arg0 ;
-(void)updateConnectionTimes:(id)arg0 ;
-(void)updateCoreMotionActivityWithPayload:(id)arg0 ;
-(void)updateErrorCode:(id)arg0 ;
-(void)updateLinkProbingStats:(unsigned int)arg0 payload:(id)arg1 ;
-(void)updateNetworkStats:(unsigned int)arg0 payload:(id)arg1 ;
-(void)updateNoRemoteState:(BOOL)arg0 ;
-(void)updatePauseVideo:(BOOL)arg0 ;
-(void)updatePrimaryConnHealthAllowedDelay:(CGFloat)arg0 ;
-(void)updateRTStats:(id)arg0 ;
-(void)updateRelayInfo:(id)arg0 ;
-(void)updateRoleModeTransport:(unsigned short)arg0 deviceRole:(unsigned short)arg1 transportType:(unsigned short)arg2 ;
-(void)updateSegment:(id)arg0 TBR:(int)arg1 ISBTR:(int)arg2 SATXBR:(int)arg3 SARBR:(int)arg4 BWE:(int)arg5 ;
-(void)updateSwitchConfiguration:(unsigned int)arg0 payload:(id)arg1 ;
-(void)updateVCRCProfileNumber:(unsigned int)arg0 ;
-(void)updateVPCStats:(id)arg0 ;
-(void)updateVPCStatus:(id)arg0 ;
-(void)updateVideoFECStats:(id)arg0 ;
-(void)updateVideoQualityWithPayload:(id)arg0 ;
-(void)updateVideoResolution:(id)arg0 ;
-(void)updateVideoSwitchTimes;
-(void)updateWRMMetrics:(unsigned int)arg0 payload:(id)arg1 ;


@end


#endif