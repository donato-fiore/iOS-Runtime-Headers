// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef VCAGGREGATORMULTIWAY_H
#define VCAGGREGATORMULTIWAY_H

@class NSString, NSMutableDictionary;
@protocol SegmentStatsDelegate;


#import "VCAggregator.h"
#import "UplinkSegment.h"
#import "DownlinkSegment.h"

@interface VCAggregatorMultiway : VCAggregator <SegmentStatsDelegate>

 {
    NSString *_currentUplinkSegmentKey;
    unsigned int _currentUplinkSegmentStreamGroups;
    UplinkSegment *_currentUplinkSegment;
    NSString *_currentDownlinkSegmentKey;
    unsigned int _currentDownlinkSegmentStreamGroups;
    DownlinkSegment *_currentDownlinkSegment;
    NSMutableDictionary *_calls;
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
    CGFloat _sessionCreatedTime;
    BOOL _isFullsizeUI;
    BOOL _isGridView;
    BOOL _isDuplicationEnabled;
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
    BOOL _isExpanseEnabled;
    BOOL _isCenterStageEnabled;
    BOOL _isPortraitBlurEnabled;
    int _lastCameraCaptureWidth;
    int _lastCameraCaptureHeight;
    NSUInteger _packetSendSuccessCounter;
    NSUInteger _packetSendFailureCounter;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(BOOL)currentUISize;
-(BOOL)isAllowlistedEvent:(unsigned short)arg0 ;
-(BOOL)isDuplicationChanged:(BOOL)arg0 ;
-(BOOL)isParticipantLive:(id)arg0 ;
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
-(id)initWithDelegate:(id)arg0 nwParentActivity:(id)arg1 conversationTimeBase:(id)arg2 ;
-(id)interfaceTypeIndicator;
-(int)adaptiveLearningState;
-(int)initialSettledBitrate;
-(int)learntBitrateForSegment:(id)arg0 defaultValue:(int)arg1 ;
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
-(void)addCellByteCountStats:(id)arg0 ;
-(void)addMediaQueueStats:(id)arg0 ;
-(void)addNewCall:(id)arg0 isWebUser:(BOOL)arg1 ;
-(void)addPerStreamGroupIDStats:(id)arg0 ;
-(void)addStreamGroupTelemetryForCall:(id)arg0 callReport:(id)arg1 ;
-(void)audioEnabled:(id)arg0 ;
-(void)checkForNewSegmentBasedOnActiveStreamGroups:(id)arg0 ;
-(void)dealloc;
-(void)expanseEnabled:(id)arg0 withType:(unsigned short)arg1 ;
-(void)finalizeCall:(id)arg0 ;
-(void)flushCurrentDownlinkSegment;
-(void)flushCurrentSegment;
-(void)flushCurrentUplinkSegment;
-(void)initAdaptiveLearningWithParameters:(id)arg0 ;
-(void)processActiveTemporalTiers:(id)arg0 ;
-(void)processActualBitrateChange:(id)arg0 ;
-(void)processAudioStreamSwitch:(id)arg0 ;
-(void)processCameraResolution:(id)arg0 ;
-(void)processControlChannelEventType:(unsigned short)arg0 payload:(id)arg1 ;
-(void)processDecryptionTimeoutEvent:(id)arg0 ;
-(void)processDownlinkActualBitrate:(unsigned int)arg0 ;
-(void)processDownlinkBWEstimation:(unsigned int)arg0 ;
-(void)processDownlinkRateChange:(id)arg0 ;
-(void)processDownlinkRoundTripTime:(unsigned int)arg0 ;
-(void)processDownlinkTargetBitrate:(unsigned int)arg0 ;
-(void)processEventWithCategory:(unsigned short)arg0 type:(unsigned short)arg1 payload:(id)arg2 ;
-(void)processInternalErrorDetectedWithCode:(id)arg0 ;
-(void)processMKMRecoveryRequestEventForParticipant:(id)arg0 ;
-(void)processMediaQueueTelemetry:(id)arg0 ;
-(void)processParticipantTimingInfo:(id)arg0 ;
-(void)processRTEvent:(id)arg0 ;
-(void)processSessionInit;
-(void)processSessionStart;
-(void)processStatsForNumberOfParticipants:(unsigned int)arg0 webParticipants:(unsigned int)arg1 ;
-(void)processUILayout:(id)arg0 ;
-(void)processUISizeEventForParticipant:(id)arg0 isFullSize:(BOOL)arg1 ;
-(void)processUplinkActualBitrate:(unsigned int)arg0 ;
-(void)processUplinkBWEstimation:(unsigned int)arg0 ;
-(void)processUplinkTargetBitrate:(unsigned int)arg0 ;
-(void)processVideoDegraded:(BOOL)arg0 participantID:(id)arg1 ;
-(void)processVideoDegraded:(BOOL)arg0 participantID:(id)arg1 streamGroup:(id)arg2 ;
-(void)processVideoStreamSwitch:(id)arg0 ;
-(void)resetDownlinkSegmentWithStreamGroups:(unsigned int)arg0 ;
-(void)resetUplinkSegmentWithStreamGroups:(unsigned int)arg0 ;
-(void)saveCallSegmentHistory;
-(void)screenEnabled:(id)arg0 ;
-(void)setNWActivityReportingEnabled:(BOOL)arg0 ;
-(void)startDownlinkSegmentWithStreamGroups:(unsigned int)arg0 ;
-(void)startUplinkSegmentWithStreamGroups:(unsigned int)arg0 ;
-(void)storeToReport:(id)arg0 value:(id)arg1 key:(struct __CFString *)arg2 streamGroup:(id)arg3 ;
-(void)transferSegmentStateToNewDownlinkSegment:(id)arg0 fromPreviousDownlinkSegment:(id)arg1 ;
-(void)updateAlgoMetrics:(unsigned int)arg0 participantID:(id)arg1 ;
-(void)updateCallStreamGroupTickCount:(id)arg0 streamData:(id)arg1 ;
-(void)updateCenterStageEnabled:(unsigned short)arg0 ;
-(void)updateNetworkSendResultStats:(id)arg0 ;
-(void)updatePortraitBlurEnabled:(unsigned short)arg0 ;
-(void)updateRateControlExperimentCall:(id)arg0 ;
-(void)updateSegment:(id)arg0 TBR:(int)arg1 ISBTR:(int)arg2 SATXBR:(int)arg3 SARBR:(int)arg4 BWE:(int)arg5 ;
-(void)updateVideoQualityWithPayload:(id)arg0 participantID:(id)arg1 ;
-(void)updateWRMMetrics:(unsigned int)arg0 payload:(id)arg1 ;
-(void)videoEnabled:(id)arg0 ;


@end


#endif