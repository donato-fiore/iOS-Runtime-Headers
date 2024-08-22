// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef VCAGGREGATOR_H
#define VCAGGREGATOR_H

@class NSString, NSDate, NSMutableArray, WiFiP2PAWDLStateMonitor, NSDictionary, NSNumber;
@protocol VCAdaptiveLearningDelegate, OS_dispatch_queue, VCAggregatorDelegate, OS_nw_activity, OS_os_transaction;

#import <Foundation/Foundation.h>

#import "TimingCollection.h"
#import "VCAlgosStreamingScorer.h"
#import "VCAdaptiveLearning.h"
#import "VCHistogram.h"
#import "VCAlgosStreamingScoreAggregator.h"

@interface VCAggregator : NSObject <VCAdaptiveLearningDelegate>

 {
    int _interval;
    int _frequency;
    NSString *_localInterfaceType;
    NSString *_remoteInterfaceType;
    NSString *_connectionType;
    BOOL _isDuplicationEnabled;
    unsigned int _remoteSwitches;
    unsigned int _negotiatedSwitches;
    BOOL _remoteFaceTimeSwitchesAvailable;
    unsigned int _currentWidth;
    unsigned int _switchIntoDupCount;
    TimingCollection *_cameraTimers;
    unsigned char _momentCaptureTotal;
    unsigned char _momentCaptureFailure;
    NSObject<OS_dispatch_queue> *_stateQueue;
    NSObject<OS_dispatch_queue> *_notificationQueue;
    id<VCAggregatorDelegate> *_delegate;
    id *_periodicAggregationOccuredHandler;
    VCAlgosStreamingScorer *_algosScorerDefault;
    NSObject<OS_nw_activity> *_sessionNwActivity;
    NSObject<OS_nw_activity> *_nwActivity;
    BOOL _useNwActivitySubmitMetrics;
    NSDate *_conversationTimeBase;
    int _startDate;
    NSInteger _onceAggregatedReportsToken;
    BOOL _isNWActivityReportingEnabled;
    NSMutableArray *_idsReportingBlobs;
    BOOL _reportRateControlExperiment;
    unsigned char _rateControlExperimentVersion;
    unsigned char _rateControlExperimentGroupIndex;
    unsigned int _nackGeneratorConfigVersion;
    BOOL _serverPacketRetransmissionsForVideoEnabled;
    BOOL _serverPacketRetransmissionsExtraDelayBudgetEnabled;
    int _transportType;
    BOOL _shouldReportLowLatencyInterfaceStatistics;
    BOOL _rtcpPSFBForLossFeedbackEnabled;
    BOOL _rtcpPSFBForLtrAckEnabled;
    BOOL _isInitiator;
    unsigned int _lastReportedSuddenBandwidthDropCount;
    VCAdaptiveLearning *_adaptiveLearning;
    unsigned char _linkPreferSuggestion;
    unsigned char _linkConfidenceScore;
    unsigned char _linkPreferDecision;
    unsigned char _linkIPPreference;
    unsigned int _callErrorCode;
    unsigned int _callDetailedErrorCode;
    unsigned int _noRemoteAtCallEnd;
    unsigned int _remoteNoRemoteAtCallEnd;
    unsigned int _initialRampUpTime;
    int _initialBitrateDelta;
    int _initialBitrate;
    int _initialBitrateDeltaAfterSwitch;
    NSUInteger _lastReportedTotalWifiTxDataBytes;
    NSUInteger _lastReportedTotalWifiRxDataBytes;
    unsigned int _wifiToCellHandoverCount;
    unsigned int _cellToWifiHandoverCount;
    CGFloat _callMaxMediaStallTime;
    CGFloat _callTotalMediaStallTime;
    unsigned int _callTotalMediaStallCount;
    unsigned short _currentAudioCodecPayload;
    unsigned int _currentAudioMediaBitrate;
    CGFloat _lastAudioTierStatsUpdate;
    CGFloat _maxVideoStallInterval;
    CGFloat _averageTotalVideoRecvBitrate;
    unsigned int _maxJitterQueueSize;
    CGFloat _timeWeightedJitterQueueSize;
    unsigned int _averageJitterQueueSizeChanges;
    unsigned int _isVPCEnabled;
    CGFloat _minVPCProcessingTime;
    CGFloat _maxVPCProcessingTime;
    CGFloat _averageVPCProcessingTimeSum;
    unsigned int _averageVPCProcessingTimeCounter;
    unsigned int _dynamicDupeLinkCount;
    CGFloat _rttMeanTotalDelta;
    unsigned char _plrTierTotalDelta;
    CGFloat _averageJitterErasuresRate;
    CGFloat _averageAudioErasuresRate;
    CGFloat _averageSpeechErasureRate;
    unsigned int _vcrcProfileNumber;
    NSUInteger _VPLRAccumulator;
    unsigned int _REDState;
    unsigned char _wifiAssistState;
    VCHistogram *_lossPattern;
    CGFloat _averageAbnormalBPL;
    unsigned int _abnormalBPLCount;
    CGFloat _averageAbnormalRTT;
    unsigned int _abnormalRTTCount;
    unsigned int _overshootSendBitrate;
    unsigned int _undershootSendBitrate;
    unsigned int _overUtilizedBandwidth;
    unsigned int _underUtilizedBandwidth;
    unsigned int _localAlertStateSwitchCount;
    unsigned int _remoteAlertStateSwitchCount;
    unsigned int _maxVideoFrameErasureCount;
    unsigned int _accumVideoFrameErasureCount;
    NSUInteger _audioRemoteReceivedPacketCount;
    NSUInteger _audioSentPacketCount;
    NSUInteger _lastReportedAudioPacketSent;
    NSUInteger _lastReportedRemoteAudioPacketsReceived;
    CGFloat _maxAudioStallInterval;
    CGFloat _totalAudioStallTime;
    CGFloat _lastReportedAudioStallTime;
    unsigned int _maxConsAudioErasureCount;
    int _thermalTimeToModerate;
    int _thermalTimeToHeavy;
    CGFloat _lastUsedTimestamp;
    NSObject<OS_os_transaction> *_transaction;
}


@property (readonly) VCHistogram *JBQSizeDeltaAudLarger; // ivar: _JBQSizeDeltaAudLarger
@property (readonly) VCHistogram *JBQSizeDeltaVidLarger; // ivar: _JBQSizeDeltaVidLarger
@property (readonly) VCHistogram *TVidCodecPayload; // ivar: _TVidCodecPayload
@property (readonly) VCHistogram *TVidMedBR; // ivar: _TVidMedBR
@property (readonly) VCHistogram *WANVJBQSize; // ivar: _WANVJBQSize
@property (copy) NSString *activeConnectionRegistry; // ivar: _activeConnectionRegistry
@property (readonly) VCAlgosStreamingScoreAggregator *algosScoreAggregator; // ivar: _algosScoreAggregator
@property (readonly) VCHistogram *audioCodecPayload; // ivar: _audioCodecPayload
@property (readonly) VCHistogram *audioMediaBitrate; // ivar: _audioMediaBitrate
@property (readonly) unsigned int callMode; // ivar: _callMode
@property (readonly, copy) NSString *debugDescription;
@property (readonly) NSObject<VCAggregatorDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned int direction; // ivar: _direction
@property (readonly) NSUInteger hash;
@property (readonly) BOOL isOneToOneMode; // ivar: _isOneToOneMode
@property unsigned int linkProbingVersion; // ivar: _linkProbingVersion
@property (retain, nonatomic) WiFiP2PAWDLStateMonitor *lowLatencyInterfaceMonitor; // ivar: _lowLatencyInterfaceMonitor
@property (retain, nonatomic) NSDictionary *lowLatencyInterfaceStatistics; // ivar: _lowLatencyInterfaceStatistics
@property (readonly) *NSInteger onceAggregatedReportsToken;
@property unsigned int remoteLinkProbingVersion; // ivar: _remoteLinkProbingVersion
@property (copy) NSString *remoteOSBuild; // ivar: _remoteOSBuild
@property (readonly) NSString *sessionID; // ivar: _sessionID
@property (readonly) NSNumber *streamToken; // ivar: _streamToken
@property (readonly) Class superclass;
@property (readonly) *__CFDictionary symptomsOccurrences; // ivar: _symptomsOccurrences


+(id)connectionCategoryForType:(id)arg0 ;
+(id)interfaceCategoryForType:(id)arg0 ;
-(BOOL)didUpdateStringFrom:(*id)arg0 toString:(id)arg1 ;
-(BOOL)isApplePersonalHotspot;
-(BOOL)isLocalInterfaceTypeForSegment:(id)arg0 equalTo:(id)arg1 ;
-(BOOL)serverPacketRetransmissionsExtraDelayBudgetEnabled;
-(BOOL)serverPacketRetransmissionsForVideoEnabled;
-(CGFloat)microFromPayload:(id)arg0 ;
-(id)aggregatedCallReports;
-(id)aggregatedSegmentQRReport;
-(id)aggregatedSegmentReport:(int)arg0 ;
-(id)aggregatedSessionReport;
-(id)duplicationIndicator;
-(id)initWithDelegate:(id)arg0 nwParentActivity:(id)arg1 ;
-(id)initWithDelegate:(id)arg0 nwParentActivity:(id)arg1 conversationTimeBase:(id)arg2 ;
-(id)segmentNameOneToOne;
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
-(struct __WiFiDeviceClient *)copyCurrentWiFiDevice;
-(unsigned int)RTPeriod;
-(unsigned int)nackGeneratorConfigVersion;
-(void)addCameraMetricsToReportDictionary:(id)arg0 totalDuration:(int)arg1 ;
-(void)addIDSTelemetry:(id)arg0 ;
-(void)addLowLatencyInterfaceStatisticsToPayload:(id)arg0 ;
-(void)addThermalMetricsToReportDictionary:(id)arg0 ;
-(void)addVPCTelemetry:(id)arg0 ;
-(void)dealloc;
-(void)flushCurrentSegment;
-(void)initializeAudioCodecAndBitRateTelemetry;
-(void)initializeLowLatencyInterfaceStatistics;
-(void)initializeVideoJitterBufferTelemetry;
-(void)migrateValueForKey:(struct __CFString *)arg0 from:(id)arg1 to:(id)arg2 withKey:(struct __CFString *)arg3 ;
-(void)processEventWithCategory:(unsigned short)arg0 type:(unsigned short)arg1 payload:(id)arg2 ;
-(void)processIDSReportingBlob:(id)arg0 ;
-(void)saveCallSegmentHistory;
-(void)segmentFECReport:(id)arg0 parameters:(struct tagVCFECSegmentReportParameters *)arg1 ;
-(void)setNWActivityReportingEnabled:(BOOL)arg0 ;
-(void)setPeriodicAggregationOccuredHandler:(id)arg0 ;
-(void)setupAdaptiveLearningWithParameters:(id)arg0 ;
-(void)updateActiveConnectionRegistry:(id)arg0 type:(unsigned short)arg1 ;
-(void)updateAdaptiveLearningStats:(unsigned int)arg0 payload:(id)arg1 ;
-(void)updateHandoverCount:(id)arg0 withPreviousSegmentKey:(id)arg1 ;
-(void)updateRateControlExperiment:(id)arg0 type:(unsigned short)arg1 ;
-(void)updateRateControlExperimentCall:(id)arg0 ;
-(void)updateSegment:(id)arg0 TBR:(int)arg1 ISBTR:(int)arg2 SATXBR:(int)arg3 SARBR:(int)arg4 BWE:(int)arg5 ;
-(void)updateSymptomCount:(unsigned int)arg0 ;
-(void)updateThermalMetricsFromPayload:(id)arg0 ;
-(void)updateVPCStats:(id)arg0 ;
-(void)updateVideoFECStats:(id)arg0 fecStats:(id)arg1 callLossPattern:(id)arg2 segmentLossPattern:(id)arg3 segmentLossHistogram:(id)arg4 segmentLossFecHistogram:(id)arg5 ;


@end


#endif