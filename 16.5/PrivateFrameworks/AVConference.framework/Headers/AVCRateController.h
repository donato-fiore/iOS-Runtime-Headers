// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef AVCRATECONTROLLER_H
#define AVCRATECONTROLLER_H

@class NSString;
@protocol VCRateSharingClient, AVCRateControllerDelegate, OS_nw_activity, VCRateControlAlgorithm;

#import <Foundation/Foundation.h>

#import "VCRateControlServerBag.h"
#import "AVCBasebandCongestionDetector.h"
#import "AVCRateControlFeedbackController.h"
#import "VCRateControlMediaController.h"
#import "VCNWConnectionCongestionDetector.h"
#import "AVCStatisticsCollector.h"

@interface AVCRateController : NSObject <VCRateSharingClient>

 {
    *OpaqueFigCFWeakReference _rateControllerDelegateWeak;
    id<AVCRateControllerDelegate> *_rateControllerDelegate;
    tagVCRateControlAlgorithmConfig _algorithmConfigCache;
    BOOL _didCacheAlgorithmConfig;
    unsigned int _actualBitrate;
    unsigned int _wifiTxMediaBitrate;
    unsigned int _wifiNonAVCTxMediaBitrate;
    unsigned int _initialBitrate;
    CGFloat _initialRampUpStartTime;
    BOOL _initialRampUpDeltaReported;
    unsigned int _rateChangeCounter;
    unsigned int _roundTripTimeMilliseconds;
    CGFloat _packetLossPercentage;
    CGFloat _packetLossPercentageVideo;
    CGFloat _packetLossPercentageAudio;
    CGFloat _sumPLR;
    CGFloat _sumPLRVideo;
    unsigned int _sumOverUtilizedBandwidth;
    unsigned int _sumUnderUtilizedBandwidth;
    unsigned int _sumOverShootSendBitrate;
    unsigned int _sumUnderShootSendBitrate;
    unsigned int _sumWorstRecentRTTInMillisecond;
    unsigned int _sumWorstRecentBurstLoss;
    unsigned int _countPeriodicTaskUpdate;
    unsigned int _totalPacketsReceived;
    unsigned int _totalPacketsSent;
    unsigned int _totalBytesSent;
    unsigned int _totalBytesReceived;
    unsigned int _burstPacketLoss;
    unsigned int _owrd;
    BOOL _isNetworkCongested;
    *void _logDump;
    *void _logFeedbackDump;
    *void _logBasebandDump;
    *void _logNWDump;
    *void _logBWEDump;
    BOOL _isRateControlDumpFileEnabled;
    BOOL _isBWEDumpFileEnabled;
    NSString *_dumpID;
    BOOL _isPeriodicLoggingEnabled;
    BOOL _isBasebandEnabled;
    BOOL _isForSimulation;
    BOOL _isUplink;
    BOOL _useExternalThread;
    BOOL _didConfigured;
    CGFloat _lastDefaultsReadTime;
    int _forcedTargetBitrate;
    int _forcedMaxBitrate;
    int _forcedTargetBitrateFromTestMonitor;
    int _forcedMaxBitrateFromTestMonitor;
    *OpaqueFigCFWeakReference _reportingAgentWeak;
    *opaqueRTCReporting _reportingAgentStrong;
    int _reportingModuleID;
    unsigned int _lastReportFlushedVideoPacketCount;
    unsigned int _lastReportFlushedAudioPacketCount;
    CGFloat _lastTimeTargetBitrateOvershootRecorded;
    CGFloat _lastTimeUnexpectedLowTargetBitrateRecorded;
    CGFloat _lastTimeUnexpectedRampUpFrozenRecorded;
    unsigned int _lastRecordedTargetBitrate;
    unsigned int _lastReportedBandwidthEstimation;
    unsigned int _totalSuddenBandwidthDropCount;
    unsigned int _totalMBLRampDownCount;
    CGFloat _lastTimeSustainedHighUplinkPacketLossReported;
    CGFloat _lastTimeSustainedHighDownlinkPacketLossReported;
    CGFloat _lastTimeServerStatsActivityRecorded;
    BOOL _isNoServerStatsIdleActivityReported;
    BOOL _shouldReportDipFromInitialRampUp;
    unsigned int _remotePacketReceivedAudio;
    unsigned int _remotePacketReceivedVideo;
    VCRateControlServerBag *_serverBag;
    int _btNotificationHandlerIndex;
    NSObject<OS_nw_activity> *_parentNWActivity;
    NSObject<OS_nw_activity> *_noServerStatsUplinkNwActivity;
    NSObject<OS_nw_activity> *_noServerStatsDownlinkNwActivity;
    BOOL _useNWConnectionNotification;
    BOOL _useBTNotificationMonitor;
    BOOL _isRegisteredForRateSharing;
    os_unfair_lock_s _registrationLock;
    _opaque_pthread_mutex_t _mutex;
    id<VCRateControlAlgorithm> *_rateControlAlgorithm;
}


@property (readonly, nonatomic) tagVCRateControlAlgorithmConfig algorithmConfig;
@property (retain, nonatomic) AVCBasebandCongestionDetector *basebandCongestionDetector; // ivar: _basebandCongestionDetector
@property (readonly, nonatomic) AVCRateControlConfig configuration; // ivar: _configuration
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic) unsigned int estimatedBandwidthCap; // ivar: _estimatedBandwidthCap
@property (nonatomic) unsigned int expectedBitrate; // ivar: _expectedBitrate
@property (retain, nonatomic) AVCRateControlFeedbackController *feedbackController; // ivar: _feedbackController
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) BOOL isStarted;
@property (readonly, nonatomic) unsigned int maxTargetBitrate; // ivar: _maxTargetBitrate
@property (retain, nonatomic) VCRateControlMediaController *mediaController; // ivar: _mediaController
@property (readonly, nonatomic) unsigned int minTargetBitrate; // ivar: _minTargetBitrate
@property (retain, nonatomic) VCNWConnectionCongestionDetector *nwConnectionCongestionDetector; // ivar: _nwConnectionCongestionDetector
@property (readonly, nonatomic) unsigned int nwNotificationProcessed; // ivar: _nwNotificationProcessed
@property (nonatomic, getter=isPaused) BOOL paused; // ivar: _paused
@property (readonly, nonatomic) tagAVCRateControlExperimentConfig rateControlExperimentConfig;
@property (readonly) id *reportingAgent; // ivar: _reportingAgent
@property (retain, nonatomic) AVCStatisticsCollector *statisticsCollector; // ivar: _statisticsCollector
@property (readonly) Class superclass;
@property (readonly, nonatomic) unsigned int targetBitrate; // ivar: _targetBitrate
@property (nonatomic) unsigned int targetBitrateCap; // ivar: _targetBitrateCap


-(BOOL)isRadioTechnologyOnCellular:(unsigned int)arg0 ;
-(BOOL)isRadioTechnologyOnNewerThanLTE:(unsigned int)arg0 ;
-(BOOL)isRadioTechnologyOnWiFiOrLTEAndNewer:(unsigned int)arg0 ;
-(BOOL)shouldReportInitialRampUpDelta;
-(BOOL)start;
-(BOOL)stop;
-(id)indicatorFromRadioTech:(unsigned int)arg0 ;
-(id)initWithDelegate:(id)arg0 dumpID:(id)arg1 isUplink:(BOOL)arg2 reportingAgent:(id)arg3 ;
-(id)initWithDelegate:(id)arg0 params:(struct tagVCRateControlParams *)arg1 ;
-(int)initialBitrateTierFromLearntBitrateWithLocalTechnology:(unsigned int)arg0 remoteTech:(unsigned int)arg1 defaultTier:(int)arg2 ;
-(int)initialTierIndexForFaceTimeWithMaxTierIndex:(int)arg0 ;
-(int)maxTierBelowBitrate:(unsigned int)arg0 maxTierIndex:(int)arg1 minTierIndex:(int)arg2 ;
-(int)minTierAboveBitrate:(unsigned int)arg0 maxTierIndex:(int)arg1 minTierIndex:(int)arg2 ;
-(int)multiwayMaxTierFromServerBag;
-(unsigned int)loadDefaultVCRCFeatureFlags:(unsigned int)arg0 ;
-(unsigned int)radioAccessTechnologyFromAVConferenceCellTech:(int)arg0 isCellular:(BOOL)arg1 ;
-(unsigned int)rateControlModeFromAVConferenceOperatingMode:(int)arg0 ;
-(void)accumulateStatsForPeriodicTaskUpdate;
-(void)applyCachedAlgorithmConfig:(struct tagVCRateControlAlgorithmConfig *)arg0 ;
-(void)applyServerBagEmergencyTierConfig:(struct tagVCRateControlAlgorithmConfig *)arg0 ;
-(void)applyServerBagFastRampUpConfig:(struct tagVCRateControlAlgorithmConfig *)arg0 ;
-(void)applyServerBagGroupConfig:(struct tagVCRateControlAlgorithmConfig *)arg0 ;
-(void)applyServerBagLossBasedAdaptationConfig:(struct tagVCRateControlAlgorithmConfig *)arg0 ;
-(void)applyServerBagMainControlConfig:(struct tagVCRateControlAlgorithmConfig *)arg0 ;
-(void)applyServerBagNoRampUpGroupConfig:(struct tagVCRateControlAlgorithmConfig *)arg0 ;
-(void)applyServerBagNotificationGroupConfig:(struct tagVCRateControlAlgorithmConfig *)arg0 ;
-(void)applyServerBagOscillationAvoidanceConfig:(struct tagVCRateControlAlgorithmConfig *)arg0 ;
-(void)applyServerBagPauseResumeConfig:(struct tagVCRateControlAlgorithmConfig *)arg0 ;
-(void)applyServerBagProfileConfig:(struct tagVCRateControlAlgorithmConfig *)arg0 ;
-(void)applyServerBagRampDownGroupConfig:(struct tagVCRateControlAlgorithmConfig *)arg0 ;
-(void)calculateWiFiNonAVCTxBitrateWithStatistics:(struct tagVCStatisticsMessage )arg0 ;
-(void)checkAndReportAbnormalSymptoms;
-(void)checkOffChannelActivityWithStatistics:(struct tagVCStatisticsMessage )arg0 ;
-(void)cleanupNwActivity;
-(void)completeAndReleaseNwActivity:(id)arg0 withReason:(int)arg1 ;
-(void)configure:(struct AVCRateControlConfig )arg0 ;
-(void)configureAlgorithmWithRestart:(BOOL)arg0 ;
-(void)configureInternal:(struct AVCRateControlConfig )arg0 ;
-(void)configureVCRateControlAlgorithmWithConfiguration:(struct tagVCRateControlAlgorithmConfig )arg0 ;
-(void)configureWithOperatingMode:(int)arg0 isLocalCellular:(BOOL)arg1 localCellTech:(int)arg2 isRemoteCellular:(BOOL)arg3 remoteCellTech:(int)arg4 bitrateCapKbps:(unsigned int)arg5 isTrafficBursty:(BOOL)arg6 featureFlags:(unsigned int)arg7 ;
-(void)createBWEDumpFile:(id)arg0 ;
-(void)createBasebandLogDumpFile;
-(void)createLogDumpFiles:(id)arg0 ;
-(void)createNWConnectionLogDumpFile;
-(void)createVCRateControlAlgorithmWithConfiguration:(struct tagVCRateControlAlgorithmConfig )arg0 ;
-(void)dealloc;
-(void)deregisterForRateSharing;
-(void)deregisterPeriodicTask;
-(void)doRateControlWithBasebandStatistics:(struct tagVCStatisticsMessage )arg0 ;
-(void)doRateControlWithNWConnectionStatistics:(struct tagVCStatisticsMessage )arg0 ;
-(void)doRateControlWithStatistics:(struct tagVCStatisticsMessage )arg0 ;
-(void)getRealTimeStats:(struct __CFDictionary *)arg0 ;
-(void)getRealTimeStatsForServerBasedRxOnly:(struct __CFDictionary *)arg0 ;
-(void)getRealTimeStatsForServerBasedTxOnly:(struct __CFDictionary *)arg0 ;
-(void)getRealTimeStatsForiPadCompanion:(struct __CFDictionary *)arg0 ;
-(void)handleAbnormalRateAdaptationSymptomReport:(CGFloat)arg0 ;
-(void)handleNoServerStatsSymptomReport:(CGFloat)arg0 ;
-(void)handleSignificantPacketLossSymptomReport:(CGFloat)arg0 ;
-(void)loadDefaultSettings;
-(void)periodicTask:(*void)arg0 ;
-(void)printBasebandNotificationStatistics:(struct tagVCStatisticsMessage )arg0 ;
-(void)printFeedbackMessage:(struct tagVCStatisticsMessage )arg0 ;
-(void)printNWConnectionStatistics:(struct tagVCStatisticsMessage )arg0 ;
-(void)printRateControllerHealthPrint;
-(void)pushNoServerStatsToNwActivity:(BOOL)arg0 ;
-(void)registerForRateSharing:(unsigned int)arg0 ;
-(void)registerPeriodicTask;
-(void)registerStatisticsChangeHandlers;
-(void)releaseAllLogDumpFiles;
-(void)releaseLogDumpFile:(**void)arg0 ;
-(void)reportInitialRampUpDeltas;
-(void)reportNetworkStatisticsWithArrivalTime:(CGFloat)arg0 ;
-(void)reportRateControlExperiment;
-(void)reportTargetBitrateChange:(unsigned int)arg0 rateChangeCounter:(unsigned int)arg1 ;
-(void)resetStatsForPeriodicTaskReport;
-(void)setBtNotificationMonitor;
-(void)setDefaultAlgorithmConfiguration:(struct tagVCRateControlAlgorithmConfig *)arg0 ;
-(void)setShareProfile:(id)arg0 ;
-(void)updateInitialBitrateFromDefaultWithAlgorithmConfig:(struct tagVCRateControlAlgorithmConfig *)arg0 ;


@end


#endif