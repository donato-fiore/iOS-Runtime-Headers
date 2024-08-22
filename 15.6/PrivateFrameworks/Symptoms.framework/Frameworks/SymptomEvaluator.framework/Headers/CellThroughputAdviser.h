// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef CELLTHROUGHPUTADVISER_H
#define CELLTHROUGHPUTADVISER_H

@class NSMutableSet, NSMutableDictionary, NSSet;
@protocol CellThroughputAdviserDelegate, OS_dispatch_queue;

#import <Foundation/Foundation.h>

#import "WiFiViabilityMonitor.h"
#import "AWDSymptomsCellularSDMAdviceChange.h"
#import "FlowOracle.h"
#import "FlowScrutinizer.h"

@interface CellThroughputAdviser : NSObject {
    BOOL _pollInProgress;
    unsigned int _reportedAdvice;
    NSUInteger _reportedCause;
    NSUInteger _initiallyReportedCause;
    unsigned int _wifiViability;
    int _traceFD;
    BOOL _traceVerbose;
    BOOL _avUseCasesSupported;
    CGFloat _lastStateUpdate;
    CGFloat _lastActivityStatsUpdate;
    CGFloat _sampleStartTime;
    CGFloat _lastHighInterfaceUse;
    CGFloat _lastTransferSizeUsageTimestamp;
    CGFloat _lastAssetDownloadUsageTimestamp;
    CGFloat _lastBackgroundTransferNotifiedTimestamp;
    CGFloat _lastBackgroundTransferUsageTimestamp;
    CGFloat _lastHighInterfaceUseDampeningInterval;
    CGFloat _lastHighTransferSizeDampeningInterval;
    CGFloat _lastPromotedTransferSizeDampeningInterval;
    CGFloat _totalActiveTime;
    CGFloat _totalDisabledTime;
    CGFloat _totalQuiesceTime;
    CGFloat _totalInferredSleepTime;
    CGFloat _inactivityTimeoutForQuiesce;
    CGFloat _lastAudioVideoReport;
    CGFloat _minTimeIntervalBetweenAVThroughputReport;
    NSUInteger _numPolls;
    CGFloat _lastPollTime;
    CGFloat _pollIntervalHistogramResetTime;
    unsigned int _pollIntervalHistogram;
    CGFloat _minTransferSizeThroughputForUpgrade;
    CGFloat _minDisplayOnTransferSizeThroughputForUpgrade;
    CGFloat _minTransferSizeThroughputForContinuedUpgradeSub6;
    CGFloat _minTransferSizeThroughputForContinuedUpgradeMmWave;
    CGFloat _minTransferSizeThroughputForContinuedUpgradeRequest;
    CGFloat _minAssetDownloadThroughputForUpgrade;
    CGFloat _minAssetDownloadThroughputForContinuedUpgradeRequest;
    CGFloat _minAssetDownloadThroughputForContinuedUpgradeSub6;
    CGFloat _minAssetDownloadThroughputForContinuedUpgradeMmWave;
    CGFloat _maxAssetDownloadDurationBelowThreshold;
    CGFloat _minBackgroundTransferThroughputForUpgrade;
    CGFloat _minBackgroundTransferThroughputForContinuedUpgradeRequest;
    CGFloat _minBackgroundTransferThroughputForContinuedUpgradeSub6;
    CGFloat _minBackgroundTransferThroughputForContinuedUpgradeMmWave;
    CGFloat _maxBackgroundTransferDurationBelowThreshold;
    NSMutableSet *_backgroundTransfers;
    unsigned int _numLowerTransferThresholdFlowsForUpperThreshold;
    unsigned int _numDisplayOnLowerTransferThresholdFlowsForUpperThreshold;
    unsigned int _adviceForSustainedHighInterfaceThroughput;
    unsigned int _adviceForModestAVFlows;
    unsigned int _adviceForModestAVFlowsLowerCertainty;
    unsigned int _adviceForBusyAVFlows;
    unsigned int _adviceForBusyAVFlowsLowerCertainty;
    unsigned int _stateLogLevel;
    unsigned int _stateLogLevelForVerbose;
    unsigned int _dispatchAfterSeqno;
    unsigned int _powerLogSeqno;
    unsigned int _AWDMetricSeqno;
    CGFloat _AWDTimeOfLastReport;
    BOOL _quiesced;
    WiFiViabilityMonitor *_wifiViabilityMonitor;
    NSMutableDictionary *_pendingDispatchAfterBlocks;
    NSMutableDictionary *_pendingPowerLogReport;
    AWDSymptomsCellularSDMAdviceChange *_pendingAWDAdviceChangeReport;
    NSSet *_previousSampleContributors;
    NSSet *_prevAWDInitiators;
    BOOL _previousIsScreenDark;
    BOOL _previousIsScreenLocked;
    NSMutableSet *_pendingDelayDetails;
}


@property (nonatomic) unsigned int adminAdviceOverride; // ivar: _adminAdviceOverride
@property (weak, nonatomic) NSObject<CellThroughputAdviserDelegate> *delegate; // ivar: _delegate
@property (nonatomic) BOOL enabled; // ivar: _enabled
@property (readonly, nonatomic) CGFloat exploreExploitLearningRatioForHighTransferSize; // ivar: _exploreExploitLearningRatioForHighTransferSize
@property (retain, nonatomic) FlowOracle *flowOracle; // ivar: _flowOracle
@property (retain, nonatomic) FlowScrutinizer *flowScrutinizer; // ivar: _flowScrutinizer
@property (nonatomic) BOOL isScreenDark; // ivar: _isScreenDark
@property (nonatomic) BOOL isScreenLocked; // ivar: _isScreenLocked
@property (nonatomic) char nrFrequencyBand; // ivar: _nrFrequencyBand
@property (nonatomic) CGFloat propertyChangeTimestamp; // ivar: _propertyChangeTimestamp
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *queue; // ivar: _queue
@property (nonatomic) unsigned int targetAdviceLevel; // ivar: _targetAdviceLevel


+(id)sharedInstance;
-(BOOL)_AWDActionForNewAdvice:(unsigned int)arg0 cause:(NSUInteger)arg1 at:(CGFloat)arg2 ;
-(BOOL)_powerLogActionForNewAdvice:(unsigned int)arg0 cause:(NSUInteger)arg1 at:(CGFloat)arg2 ;
-(BOOL)checkBackgroundTransferCauses:(*NSUInteger)arg0 ;
-(BOOL)checkCoreMediaAssetDownloadCauses:(*NSUInteger)arg0 ;
-(BOOL)checkLibnetcoreLargeTransferCauses:(*NSUInteger)arg0 andOptOuts:(*NSUInteger)arg1 ;
-(BOOL)encodingRepresentsInt:(id)arg0 ;
-(BOOL)encodingRepresentsNSString:(id)arg0 ;
-(BOOL)encodingRepresentsNSTimeInterval:(id)arg0 ;
-(BOOL)encodingRepresentsNSUUID:(id)arg0 ;
-(BOOL)encodingRepresentsUint64:(id)arg0 ;
-(CGFloat)_minRequiredBackgroundTransferThroughputForCurrentRadioState;
-(CGFloat)_minRequiredCoreMediaAssetDownloadThroughputForCurrentRadioState;
-(CGFloat)_minRequiredLargeTransferThroughputForCurrentRadioState;
-(CGFloat)encodingToNSTimeInterval:(id)arg0 ;
-(NSInteger)configItemToLongLong:(id)arg0 ;
-(NSUInteger)_backgroundTransferActiveCauseForCurrentRadioState;
-(NSUInteger)_backgroundTransferHysteresisCauseForCurrentRadioState;
-(NSUInteger)_coreMediaAssetDownloadActiveCauseForCurrentRadioState;
-(NSUInteger)_coreMediaAssetDownloadHysteresisCauseForCurrentRadioState;
-(NSUInteger)_largeTransferContinuesCauseForCurrentRadioState;
-(NSUInteger)_largeTransferFinalHysteresisCauseForCurrentRadioState;
-(NSUInteger)_largeTransferHysteresisCauseForCurrentRadioState;
-(NSUInteger)encodingToUint64:(id)arg0 ;
-(id)_causeInitiators:(NSUInteger)arg0 ;
-(id)_getCombinedStateAt:(CGFloat)arg0 ;
-(id)_getState:(BOOL)arg0 ;
-(id)_initiatorNameSetFromCauseArray:(id)arg0 ;
-(id)currentAWDSymptomsCellularSDMPollingStatistics;
-(id)currentAWDSymptomsCellularSDMTimeStatistics;
-(id)encodingToNSString:(id)arg0 ;
-(id)encodingToNSUUID:(id)arg0 ;
-(id)getStateAt:(CGFloat)arg0 ;
-(id)init;
-(id)jsonForAWDReport:(id)arg0 ;
-(id)jsonForClassification:(id)arg0 ;
-(id)jsonForInt:(int)arg0 ;
-(id)jsonForNSString:(id)arg0 ;
-(id)jsonForSnapshot:(id)arg0 ;
-(id)jsonForTimeInterval:(CGFloat)arg0 indent:(int)arg1 ;
-(id)jsonForUUID:(id)arg0 ;
-(id)jsonForUint64:(NSUInteger)arg0 ;
-(int)configureInstance:(id)arg0 ;
-(int)encodingToInt:(id)arg0 ;
-(unsigned int)determineAdvice:(*NSUInteger)arg0 ;
-(unsigned int)determineNonCoreMediaRxThroughput:(*CGFloat)arg0 txThroughput:(*CGFloat)arg1 ;
-(void)_AWDCollectLatestLinkThroughput:(id)arg0 ;
-(void)_assessActivityStateForQuiesce;
-(void)_checkPendingTimers:(CGFloat)arg0 ;
-(void)_configureFlowOracleThresholds;
-(void)_dispatchAfterDelay:(CGFloat)arg0 block:(id)arg1 ;
-(void)_dumpArray:(id)arg0 ;
-(void)_finishPowerLogCollection;
-(void)_initiatorArray:(id)arg0 addOriginNameWithForegroundPrefix:(id)arg1 ;
-(void)_refreshAdvice:(int)arg0 ;
-(void)_startPowerLogCollectionFor:(unsigned int)arg0 ;
-(void)_traceCall:(char *)arg0 ;
-(void)_traceCall:(char *)arg0 param1:(id)arg1 ;
-(void)_traceCall:(char *)arg0 param1:(id)arg1 param2:(id)arg2 ;
-(void)_traceCall:(char *)arg0 param1:(id)arg1 param2:(id)arg2 param3:(id)arg3 ;
-(void)_traceCall:(char *)arg0 param1:(id)arg1 param2:(id)arg2 param3:(id)arg3 param4:(id)arg4 ;
-(void)_traceCall:(char *)arg0 param1:(id)arg1 param2:(id)arg2 param3:(id)arg3 param4:(id)arg4 param5:(id)arg5 ;
-(void)_traceDelegateCall:(char *)arg0 param1:(unsigned int)arg1 at:(CGFloat)arg2 ;
-(void)_traceDelegateCall:(char *)arg0 param1:(unsigned int)arg1 param2:(unsigned int)arg2 param3:(unsigned int)arg3 param4:(unsigned int)arg4 at:(CGFloat)arg5 ;
-(void)_traceDelegateCall:(char *)arg0 param1Id:(id)arg1 at:(CGFloat)arg2 ;
-(void)_traceDelegateCall:(char *)arg0 param1Interval:(CGFloat)arg1 at:(CGFloat)arg2 ;
-(void)_traceDelegateCall:(char *)arg0 param1Interval:(CGFloat)arg1 param2:(NSUInteger)arg2 ;
-(void)_traceSetter:(char *)arg0 intval:(int)arg1 ;
-(void)_traceSetter:(char *)arg0 stringVal:(id)arg1 ;
-(void)_traceStateAt:(CGFloat)arg0 ;
-(void)didPollFlowsAt:(CGFloat)arg0 ;
-(void)dumpStateAt:(CGFloat)arg0 verbose:(BOOL)arg1 ;
-(void)noteAdviceForMetrics:(unsigned int)arg0 cause:(NSUInteger)arg1 ;
-(void)noteCoreMediaAssetDownloadEvent:(NSUInteger)arg0 downloadUUID:(id)arg1 onBehalfOf:(id)arg2 duration:(CGFloat)arg3 at:(CGFloat)arg4 ;
-(void)noteExpectedTransfer:(NSUInteger)arg0 dueTo:(int)arg1 flowUUID:(id)arg2 at:(CGFloat)arg3 ;
-(void)noteFlowSnapshot:(id)arg0 withClassification:(id)arg1 ;
-(void)notePollIntervalForMetrics:(CGFloat)arg0 ;
-(void)noteSizeableBackgroundTransferEventName:(id)arg0 event:(NSUInteger)arg1 downloadSizeBytes:(NSUInteger)arg2 uploadSizeBytes:(NSUInteger)arg3 at:(CGFloat)arg4 ;
-(void)performAction:(id)arg0 verbose:(BOOL)arg1 ;
-(void)performActivityStatsTimekeeping;
-(void)postAWDMetric:(id)arg0 withIdentifier:(unsigned int)arg1 ;
-(void)quiesce;
-(void)reportPeriodicAWDStatistics;
-(void)restoreDefaults;
-(void)setPollingRate:(CGFloat)arg0 ;
-(void)setTimerCallbackWithSimulatedDelay:(CGFloat)arg0 context:(id)arg1 ;
-(void)timerCallbackWithContext:(id)arg0 at:(CGFloat)arg1 ;
-(void)unquiesce;
-(void)willPollFlows;


@end


#endif