// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef VCAGGREGATORMULTIWAY_H
#define VCAGGREGATORMULTIWAY_H

@class NSString, NSMutableDictionary, NSMutableArray, NSNumber, NSDictionary;
@protocol SegmentStatsDelegate;


#import "VCAggregator.h"
#import "UplinkSegment.h"
#import "DownlinkSegment.h"
#import "VCHistogram.h"

@interface VCAggregatorMultiway : VCAggregator <SegmentStatsDelegate>

 {
    NSString *_currentUplinkSegmentKey;
    unsigned int _currentUplinkSegmentStreamGroups;
    UplinkSegment *_currentUplinkSegment;
    NSString *_currentDownlinkSegmentKey;
    unsigned int _currentDownlinkSegmentStreamGroups;
    DownlinkSegment *_currentDownlinkSegment;
    NSMutableDictionary *_internalErrors;
    NSMutableDictionary *_streamGroupStats;
    unsigned int _participantCounter;
    CGFloat _lastParticipantNumberChangeTime;
    CGFloat _numberOfParticipantsDuration;
    CGFloat _totalParticipantMeasuredTime;
    unsigned int _webParticipantCounter;
    CGFloat _numberOfWebParticipantsDuration;
    unsigned int _numberOfUplinkSegments;
    unsigned int _numberOfDownlinkSegments;
    unsigned int _sessionTotalDurationTicks;
    unsigned int _sessionAggregatedDurationTicks;
    unsigned int _sessionUplinkTargetBitrateSwitchCount;
    NSUInteger _sessionUplinkBWEstimationSum;
    unsigned int _sessionUplinkBWEstimationCounter;
    NSUInteger _sessionDownlinkBWEstimationSum;
    unsigned int _sessionDownlinkBWEstimationCounter;
    NSUInteger _sessionUplinkTargetBitrateSum;
    unsigned int _sessionUplinkTargetBitrateCounter;
    NSUInteger _sessionDownlinkTargetBitrateSum;
    unsigned int _sessionDownlinkTargetBitrateCounter;
    NSUInteger _sessionUplinkActualBitrateSum;
    unsigned int _sessionUplinkActualBitrateCounter;
    NSUInteger _sessionDownlinkActualBitrateSum;
    unsigned int _sessionDownlinkActualBitrateCounter;
    NSUInteger _sessionDownlinkRoundTripTimeSum;
    unsigned int _sessionDownlinkRoundTripTimeCounter;
    NSUInteger _sessionDownlinkTotalPacketsReceivedSum;
    NSUInteger _sessionDownlinkTotalLostSum;
    NSUInteger _sessionUplinkTotalPacketsSentSum;
    NSUInteger _sessionUplinkTotalLostSum;
    unsigned int _sessionUplinkLBAOnCount;
    unsigned int _sessionDownlinkLBAOnCount;
    unsigned int _sessionEndReason;
    unsigned int _sessionDetailedEndReason;
    unsigned int _sessionErrorDomain;
    unsigned int _lastReportedDownlinkPacketsReceived;
    unsigned int _lastReportedDownlinkBytesReceived;
    unsigned int _lastReportedUplinkPacketsReceived;
    unsigned int _lastReportedUplinkPacketsSent;
    unsigned int _lastReportedUplinkBytesSent;
    unsigned int _videoDegradedMaxPercentOfParticipant;
    unsigned int _significantVideoStallMaxPercentOfParticipant;
    unsigned int _significantAudioErasureMaxPercentOfParticipant;
    unsigned int _totalDuplicationTicks;
    unsigned int _fecProcessingTime;
    CGFloat _sessionCreatedTime;
    CGFloat _primaryConnHealthAllowedDelay;
    BOOL _isFullsizeUI;
    BOOL _isGridView;
    BOOL _isUplinkScreenEnabled;
    BOOL _reportScreenUpgrade;
    BOOL _isFullScreenCapture;
    NSUInteger _totalCellTxDataBytes;
    NSUInteger _totalCellRxDataBytes;
    NSUInteger _totalCellDupTxDataBytes;
    NSUInteger _totalCellDupRxDataBytes;
    NSUInteger _localWRMDuplicationSwitchCount;
    NSUInteger _remoteWRMDuplicationSwitchCount;
    unsigned int _localSwitches;
    unsigned int _sessionAggregatedScreenUplinkDurationTicks;
    BOOL _sessionAggregatedScreenLocalParticipantEnabled;
    BOOL _isSessionFromOneToOneMode;
    BOOL _isSessionGoingToOneToOneMode;
    CGFloat _switchToOneToOneTime;
    CGFloat _switchFromOneToOneTime;
    unsigned int _oneToOneSwitchUpgradeErrorCode;
    unsigned int _gftSwitchDowngradeErrorCode;
    BOOL _isExpanseEnabled;
    BOOL _isCaptionsEnabled;
    BOOL _isCenterStageEnabled;
    BOOL _isPortraitBlurEnabled;
    int _lastCameraCaptureWidth;
    int _lastCameraCaptureHeight;
    BOOL _receivedCaptionsMetrics;
    unsigned int _totalCollectedCaptionsRatioMetrics;
    unsigned int _longCaptionRatioCollection;
    unsigned int _maxCaptionsRatio;
    unsigned int _captionTaskCount;
    CGFloat _lastUtteranceDuration;
    CGFloat _lastReportedAudioPauseTime;
    CGFloat _lastReportedVideoPacketSentCount;
    VCHistogram *_captionsRatioHistogram;
    VCHistogram *_captionsRatioLongHistogram;
    VCHistogram *_captionsUtteranceHistogram;
    NSUInteger _packetSendSuccessCounter;
    NSUInteger _packetSendFailureCounter;
    unsigned char _coreMotionActivityValue;
    unsigned char _coreMotionActivityConfidence;
    BOOL _isLocalCelltechDirty;
    unsigned int _lastReportedMBLRampDownCount;
    unsigned int _lastReportedSuddenBandwidthDropCount;
    unsigned int _vcrcProfileNumber;
    unsigned char _linkIPPreference;
    NSMutableArray *_videoEnabledState;
    NSMutableArray *_videoEnabledDuration;
}


@property (copy) NSNumber *IPVersion; // ivar: _IPVersion
@property (readonly) NSDictionary *calls; // ivar: _calls
@property BOOL currentNoRemoteState; // ivar: _currentNoRemoteState
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (copy) NSNumber *isLocalExpensive; // ivar: _isLocalExpensive
@property (copy) NSNumber *isRemoteExpensive; // ivar: _isRemoteExpensive
@property (copy) NSNumber *localCelltech; // ivar: _localCelltech
@property (copy) NSNumber *maxNegotiatedDownlinkBitrate; // ivar: _maxNegotiatedDownlinkBitrate
@property (copy) NSNumber *maxNegotiatedUplinkBitrate; // ivar: _maxNegotiatedUplinkBitrate
@property CGFloat noRemoteStartTime; // ivar: _noRemoteStartTime
@property (copy) NSNumber *remoteCelltech; // ivar: _remoteCelltech
@property (copy) NSString *suggestedLinkTypeCombo; // ivar: _suggestedLinkTypeCombo
@property (readonly) Class superclass;


-(BOOL)currentUISize;
-(BOOL)isAllowlistedEvent:(unsigned short)arg0 ;
-(BOOL)isApplePersonalHotspot;
-(BOOL)isDuplicationChanged:(BOOL)arg0 ;
-(BOOL)isParticipantLive:(id)arg0 ;
-(BOOL)shouldConnectionEstablishmentStartNewSegment:(id)arg0 ;
-(CGFloat)audioErasureTotalTime:(id)arg0 ;
-(CGFloat)averageJitterBufferDelay:(id)arg0 ;
-(CGFloat)avgJBTargetSizeChanges:(id)arg0 ;
-(CGFloat)significantVideoStallTotalTime:(id)arg0 ;
-(CGFloat)timeWeightedNumberOfParticipantsWebOnly:(BOOL)arg0 ;
-(id)aggregatedCallReports;
-(id)aggregatedDownlinkSegmentReport;
-(id)aggregatedSegmentQRReport;
-(id)aggregatedSegmentReport:(int)arg0 ;
-(id)aggregatedSessionReport;
-(id)aggregatedUplinkSegmentReport;
-(id)downlinkSegmentKey;
-(id)initWithDelegate:(id)arg0 creationOptions:(struct ? *)arg1 ;
-(id)interfaceTypeIndicator;
-(id)uplinkSegmentKey;
-(unsigned int)RTPeriod;
-(unsigned int)audioErasureCount:(id)arg0 ;
-(unsigned int)currentDegragedParticipantCount;
-(unsigned int)getActiveStreamGroups:(id)arg0 direction:(int)arg1 ;
-(unsigned int)numberOfWebParticipants;
-(unsigned int)significantVideoStallCount:(id)arg0 ;
-(unsigned short)maxAudioErasureCount:(id)arg0 ;
-(unsigned short)maxJBTargetSizeChanges:(id)arg0 ;
-(unsigned short)maxVideoStallCount:(id)arg0 ;
-(unsigned short)minVideoFrameRate:(id)arg0 ;
-(void)addAdaptiveLearningTelemetry:(id)arg0 ;
-(void)addCellByteCountStats:(id)arg0 ;
-(void)addLocalParticipnt:(CGFloat)arg0 ;
-(void)addMediaQueueStats:(id)arg0 ;
-(void)addNewCall:(id)arg0 isWebUser:(BOOL)arg1 ;
-(void)addPerStreamGroupIDStats:(id)arg0 ;
-(void)addStreamGroupTelemetryForCall:(id)arg0 callReport:(id)arg1 ;
-(void)addUplinkStreamGroupTelemetry:(id)arg0 ;
-(void)addUplinkVideoStreamGroupTelemetry:(id)arg0 streamGroupID:(id)arg1 ;
-(void)applyKnownMetricsToNewSegment:(id)arg0 ;
-(void)audioEnabled:(id)arg0 ;
-(void)calculateDownlinkTelemetry:(id)arg0 downlinkRTT:(unsigned int)arg1 ;
-(void)calculateStreamTelemetry:(id)arg0 totalReceiveRate:(*unsigned int)arg1 audioPacketsSent:(*unsigned int)arg2 totalAudioPacketsFlushed:(*unsigned int)arg3 ;
-(void)calculateUplinkTelemetry:(id)arg0 ;
-(void)checkForNewSegmentBasedOnActiveStreamGroups:(id)arg0 ;
-(void)dealloc;
-(void)expanseEnabled:(id)arg0 withType:(unsigned short)arg1 ;
-(void)finalizeCall:(id)arg0 ;
-(void)flushCurrentDownlinkSegment;
-(void)flushCurrentSegment;
-(void)flushCurrentUplinkSegment;
-(void)populateSegmentBytes:(struct tagVCAggregatorFaceTimeSegmentStatsBytes *)arg0 toPayload:(id)arg1 ;
-(void)processActiveTemporalTiers:(id)arg0 ;
-(void)processActualBitrateChange:(id)arg0 ;
-(void)processAudioStreamSwitch:(id)arg0 ;
-(void)processCameraResolution:(id)arg0 ;
-(void)processCaptionsMetrics:(id)arg0 ;
-(void)processControlChannelEventType:(unsigned short)arg0 payload:(id)arg1 ;
-(void)processDecryptionTimeoutEvent:(id)arg0 ;
-(void)processDownlinkActualBitrate:(unsigned int)arg0 ;
-(void)processDownlinkBWEstimation:(unsigned int)arg0 ;
-(void)processDownlinkOptedInRateChange:(id)arg0 ;
-(void)processDownlinkRoundTripTime:(unsigned int)arg0 ;
-(void)processDownlinkTargetBitrate:(unsigned int)arg0 ;
-(void)processEventWithCategory:(unsigned short)arg0 type:(unsigned short)arg1 payload:(id)arg2 ;
-(void)processInternalErrorDetected:(unsigned short)arg0 payload:(id)arg1 ;
-(void)processMKMRecoveryRequestEventForParticipant:(id)arg0 ;
-(void)processMediaQueueTelemetry:(id)arg0 ;
-(void)processParticipantTimingInfo:(id)arg0 ;
-(void)processRTEvent:(id)arg0 ;
-(void)processRTXConfigData:(id)arg0 ;
-(void)processRTXStreamData:(id)arg0 streamGroupID:(id)arg1 ;
-(void)processRateControllerTelemetry:(id)arg0 ;
-(void)processRtcpPSFBForResiliencyConfigData:(id)arg0 ;
-(void)processSessionInit:(CGFloat)arg0 ;
-(void)processSessionStart:(CGFloat)arg0 ;
-(void)processSessionStreamStats:(id)arg0 ;
-(void)processStatsForNumberOfParticipants:(unsigned int)arg0 webParticipants:(unsigned int)arg1 ;
-(void)processUILayout:(id)arg0 ;
-(void)processUISizeEventForParticipant:(id)arg0 isFullSize:(BOOL)arg1 ;
-(void)processUplinkActualBitrate:(unsigned int)arg0 ;
-(void)processUplinkBWEstimation:(unsigned int)arg0 ;
-(void)processUplinkStreamData:(id)arg0 streamGroupID:(id)arg1 ;
-(void)processUplinkTargetBitrate:(unsigned int)arg0 ;
-(void)processVideoDegraded:(BOOL)arg0 payload:(id)arg1 ;
-(void)processVideoStreamSwitch:(id)arg0 ;
-(void)remoteVideoEnabled:(id)arg0 ;
-(void)resetDownlinkSegmentWithStreamGroups:(unsigned int)arg0 ;
-(void)resetUplinkSegmentWithStreamGroups:(unsigned int)arg0 ;
-(void)saveCallSegmentHistory;
-(void)screenEnabled:(id)arg0 ;
-(void)setNWActivityReportingEnabled:(BOOL)arg0 ;
-(void)setupAdaptiveLearningWithParameters:(id)arg0 ;
-(void)startDownlinkSegmentWithStreamGroups:(unsigned int)arg0 ;
-(void)startUplinkSegmentWithStreamGroups:(unsigned int)arg0 ;
-(void)storeToReport:(id)arg0 value:(id)arg1 key:(struct __CFString *)arg2 streamGroup:(id)arg3 ;
-(void)transferSegmentStateToNewDownlinkSegment:(id)arg0 fromPreviousDownlinkSegment:(id)arg1 ;
-(void)updateActiveConnectionRegistry:(id)arg0 type:(unsigned short)arg1 ;
-(void)updateAlgoMetrics:(unsigned int)arg0 payload:(id)arg1 ;
-(void)updateAudioCodecAndMediaBitrate:(id)arg0 ;
-(void)updateBitrateCap:(id)arg0 ;
-(void)updateCallStreamGroupTickCount:(id)arg0 streamData:(id)arg1 ;
-(void)updateCellTech:(id)arg0 ;
-(void)updateCenterStageEnabled:(unsigned short)arg0 ;
-(void)updateConnectionTelemetry:(id)arg0 ;
-(void)updateCoreMotionActivityWithPayload:(id)arg0 ;
-(void)updateErrorCode:(id)arg0 withType:(unsigned short)arg1 ;
-(void)updateLinkProbingStats:(unsigned int)arg0 payload:(id)arg1 ;
-(void)updateLinkSuggestionTelemetry:(id)arg0 ;
-(void)updateNetworkSendResultStats:(id)arg0 ;
-(void)updateNoRemoteState:(id)arg0 state:(BOOL)arg1 ;
-(void)updatePortraitBlurEnabled:(unsigned short)arg0 ;
-(void)updatePrimaryConnHealthAllowedDelay:(CGFloat)arg0 ;
-(void)updateRateControlExperimentCall:(id)arg0 ;
-(void)updateRoleModeTransport:(unsigned short)arg0 deviceRole:(unsigned short)arg1 transportType:(unsigned short)arg2 isInitiator:(BOOL)arg3 ;
-(void)updateSegmentStatsWifiTxRx:(id)arg0 ;
-(void)updateSwitchConfiguration:(id)arg0 ;
-(void)updateVCRCProfileNumber:(id)arg0 ;
-(void)updateVPCStatus:(id)arg0 ;
-(void)updateVideoQualityWithPayload:(id)arg0 participantID:(id)arg1 ;
-(void)updateWRMMetrics:(unsigned int)arg0 payload:(id)arg1 ;
-(void)videoEnabled:(id)arg0 ;


@end


#endif