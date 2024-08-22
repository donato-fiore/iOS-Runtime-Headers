// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef FLOWANALYTICSENGINE_H
#define FLOWANALYTICSENGINE_H

@class UsageAnalytics, ProcessAnalytics, AppAnalytics, ObjectAnalytics, NSMutableDictionary, NWUsageManager, NSDate, NWUsageTargetSelector, NSString, NSDictionary;
@protocol ProxyAnalyticsDelegate, NWUsageManagerDelegate, CellThroughputAdviserDelegate, ManagedEventInfoProtocol, OS_dispatch_source;


#import "AnalyticsEngineCore.h"
#import "CellThroughputAdviser.h"
#import "RepeatedConnFailureDetector.h"
#import "CoreTelephonyShim.h"
#import "CellularStateRelay.h"
#import "NetworkAnalyticsStateRelay.h"
#import "ProxyAnalytics.h"

@interface FlowAnalyticsEngine : AnalyticsEngineCore <ProxyAnalyticsDelegate, NWUsageManagerDelegate, CellThroughputAdviserDelegate, ManagedEventInfoProtocol>

 {
    UsageAnalytics *uspace;
    ProcessAnalytics *pspace;
    AppAnalytics *aspace;
    ObjectAnalytics *calspace;
    NSMutableDictionary *processCache;
    NSMutableDictionary *appState;
    NSMutableDictionary *appCompactState;
    BOOL trackingRequiredForBaseband;
    NSMutableDictionary *pluginToBundleCache;
    NSMutableDictionary *audioBundleCache;
    NSMutableDictionary *webBrowserBundleCache;
    NSMutableDictionary *allAppEndpoints;
    NSMutableDictionary *resolvedAppEndpoints;
    NSMutableDictionary *determinedTrackersFromAPICount;
    NWUsageManager *nstatUsageManager;
    BOOL nstatUsageManagerConfigured;
    int cellularInterfaceIndex;
    NSDate *lastCellularThresholdRefreshTime;
    NWUsageTargetSelector *cellThresholdTargetSelector;
    NWUsageTargetSelector *cellRNFPeriodEndTargetSelector;
    NSString *networkUsageTraceFileRootName;
    int networkUsageTraceFileFD;
    *ct_green_tea_logger_s _greenTeaLogger;
    NSUInteger logStateHandle;
    NSObject<OS_dispatch_source> *siginfo;
    unsigned int pdpBitmap;
    id *dataUsageRefreshCompletionBlock;
    int dataUsageRefreshCompletionNumWaiting;
    NSDate *lastFullRefreshTime;
    id *tetherObserver;
    BOOL isTetherActive;
    id *algosScoreObserver;
    id *appStateChangeObserver;
    id *cellTCCapabilityObserver;
    id *transferSizeObserver;
    id *assetDownloadObserver;
    id *sizeableBackgroundTransferObserver;
    id *cellThroughputAdvisoryReqObserver;
    CellThroughputAdviser *cellThroughputAdviser;
    NSString *throughputAdviserTraceFileRootName;
    NSDictionary *throughputAdviserConfigurationParameters;
    NSObject<OS_dispatch_source> *throughputAdvicePollingTimer;
    NWUsageTargetSelector *throughputAdviceTargetSelector;
    CGFloat throughputAdvicePollingInterval;
    NSUInteger assetDownloadProcessId;
    RepeatedConnFailureDetector *repeatedConnFailureDetector;
    NSMutableDictionary *flowCache;
    NSMutableDictionary *flowInstant;
    id *flowObserver;
    id *relayReadyObserver;
    ObjectAnalytics *fspace;
    ObjectAnalytics *lfpspace;
    ObjectAnalytics *domspace;
    ObjectAnalytics *expspace;
    ObjectAnalytics *epspace;
    NSObject<OS_dispatch_source> *flushOldFlowRecordsTimer;
    BOOL isScreenDark;
    NSDate *screenDarkTimestamp;
    BOOL isScreenLocked;
    char _nrFrequencyBand;
    id *userSwitchObserver;
    id *domainResolvingObserver;
    id *userAppTrackingObserver;
    id *userEndpointTrackingObserver;
    BOOL appTrackingEnabled;
    BOOL endpointTrackingEnabled;
    NSMutableDictionary *snapshotFlowUUIDs;
    NSMutableDictionary *trackedSourceIDs;
    CGFloat domainUsageBucketDuration;
    NSUInteger usageCoalescingSpanSecs;
    NSUInteger usageWindowUnitsCount;
    NSUInteger outcomeArrayLogEntryCount;
    BOOL flowCountExceededThreshold;
    BOOL thunderingHerdFlowCountExceededThreshold;
    NSMutableDictionary *estAwdMetricsDict;
    NSUInteger trackedFlowCountSincePrimaryInterfaceChanged;
    CoreTelephonyShim *ctShim;
}


@property (retain) CellularStateRelay *cellRelay; // ivar: _cellRelay
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) BOOL delegateToProxyAnalytics; // ivar: _delegateToProxyAnalytics
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) NSMutableDictionary *flowWatchers; // ivar: _flowWatchers
@property (readonly) NSUInteger hash;
@property BOOL haveCalendar; // ivar: _haveCalendar
@property BOOL haveTypicalUsage; // ivar: _haveTypicalUsage
@property (retain) NetworkAnalyticsStateRelay *mostRecentPrimaryRelay; // ivar: _mostRecentPrimaryRelay
@property (retain, nonatomic) ProxyAnalytics *proxyAnalytics; // ivar: _proxyAnalytics
@property (readonly) Class superclass;
@property (retain) NetworkAnalyticsStateRelay *wifiRelay; // ivar: _wifiRelay


+(BOOL)appBundleIdentifierIsWebBrowser:(id)arg0 ;
+(BOOL)hasAnyForegroundApp;
+(id)appBundleIdentifierFromAuditToken:(struct ? )arg0 ;
+(id)appBundleIdentifierFromBundleIdentifier:(id)arg0 ;
+(id)foregroundAppKeys;
+(id)queue;
+(id)sharedInstance;
// +(void)appsWithFlowsPassingTest:(id)arg0 replyQueue:(unk)arg1 reply:(id)arg2  ;
+(void)checkForegroundStateForProcessWithUUID:(id)arg0 replyQueue:(id)arg1 reply:(id)arg2 ;
+(void)endRNFPeriod;
+(void)identifierForUUID:(id)arg0 replyQueue:(id)arg1 reply:(id)arg2 ;
+(void)performAppEndpointTrackingPeriodicActivityWithReply:(id)arg0 ;
+(void)performAppExperiencePeriodicActivityWithReply:(id)arg0 ;
+(void)performAppPeriodicActivityWithReply:(id)arg0 ;
+(void)performAppTrackingActionWithOptions:(id)arg0 userId:(unsigned int)arg1 reply:(id)arg2 ;
+(void)performAppTrackingPeriodicActivityWithReply:(id)arg0 ;
+(void)recentUsageForApps:(id)arg0 replyQueue:(id)arg1 reply:(id)arg2 ;
+(void)refreshDataUsageFor:(id)arg0 withCallback:(id)arg1 ;
+(void)summaryAppDomainUsageBy:(unsigned int)arg0 reply:(id)arg1 ;
+(void)workspaceSaveWithCallback:(id)arg0 ;
-(BOOL)_appBundleIdentifierIsWebBrowser:(id)arg0 ;
-(BOOL)_bundleBackgroundAudioCapable:(id)arg0 ;
-(BOOL)_handlesFlowEntity:(id)arg0 ;
-(BOOL)_handlesProcEntity:(id)arg0 ;
-(BOOL)_hasAnyForegroundApp;
-(BOOL)_initializeLocalCache;
-(BOOL)_isLiveFlowPerfinScope:(id)arg0 forTime:(id)arg1 andTag:(id)arg2 ;
-(BOOL)_isLiveUsageInRollingWindow:(id)arg0 forTime:(id)arg1 ;
-(BOOL)_isLiveUsageinScope:(id)arg0 forTime:(id)arg1 ;
-(BOOL)_processNameIsValid:(id)arg0 ;
-(BOOL)_requiresUserValidationPredicateForEntity:(id)arg0 ;
-(BOOL)_shouldProcessDomainInfoForBundleID:(id)arg0 implicit:(*id)arg1 knownToLaunchServices:(*BOOL)arg2 ignoredInLaunchServices:(*BOOL)arg3 isWebBrowser:(*BOOL)arg4 ;
-(BOOL)_shouldSendStatisticsReport:(id)arg0 ;
-(BOOL)domainInfoProcessingForSnapshot:(id)arg0 process:(id)arg1 attributedName:(id)arg2 remoteAddress:(id)arg3 isWebBrowser:(BOOL)arg4 ;
-(BOOL)handlesEntity:(id)arg0 ;
-(BOOL)isSnapshotFlowUUIDStored:(id)arg0 ;
-(CGFloat)_usageFingerprintForBundleName:(id)arg0 ;
-(NSUInteger)_clearStaleAppEndpointRecords;
-(NSUInteger)_clearStaleNetDomainsRecords;
-(NSUInteger)_clearUninstalledAppEntries;
-(NSUInteger)_liveUsageCountForProcess:(id)arg0 subscriberTag:(id)arg1 ;
-(NSUInteger)_pruneAppExperienceRecords;
-(NSUInteger)_submitAppDomainUsageRecordInfoAnalytics;
-(NSUInteger)_submitAppEndpointRecordInfoAnalytics;
-(id)_appDomainUsageBy:(unsigned int)arg0 bundleName:(id)arg1 forDomain:(id)arg2 domainOwner:(id)arg3 domainType:(unsigned short)arg4 domainClassification:(short)arg5 context:(id)arg6 contextVerificationType:(unsigned short)arg7 initiatedType:(unsigned int)arg8 ;
-(id)_appEndpointsInProcess:(id)arg0 ;
-(id)_appExperienceForApp:(id)arg0 forTime:(id)arg1 ;
-(id)_attemptConvertingPluginNameToContainingAppName:(id)arg0 ;
-(id)_fetchFromFlowCacheWithName:(id)arg0 ;
-(id)_fetchFromProcCacheWithName:(id)arg0 ;
-(id)_flowFetchForName:(id)arg0 ;
-(id)_foregroundAppKeys;
-(id)_has1stPartyImpliedBundleNameBehavior:(id)arg0 ;
-(id)_liveUsageFetchForProcess:(id)arg0 ;
-(id)_parseEvent:(id)arg0 withGeneration:(*id)arg1 ;
-(id)_processFetchForName:(id)arg0 bundle:(id)arg1 shouldFillMiss:(BOOL)arg2 ;
-(id)_repurposeAppEndpointRecords:(id)arg0 ;
-(id)_trafficEnvelopeToTier:(CGFloat)arg0 ;
-(id)getOption:(id)arg0 ;
-(id)initWithWorkspace:(id)arg0 params:(id)arg1 queue:(id)arg2 ;
-(id)setOption:(id)arg0 ;
-(int)_performQueryOnEntityFromInstantFlowCache:(id)arg0 target:(id)arg1 pred:(id)arg2 found:(*id)arg3 ;
-(int)_performQueryOnEntityFromProcCache:(id)arg0 target:(id)arg1 pred:(id)arg2 found:(*id)arg3 ;
-(int)performQueryOnEntityFromCache:(id)arg0 pred:(id)arg1 altpred:(*id)arg2 actions:(id)arg3 found:(*id)arg4 ;
-(void)_algosScoreFor:(id)arg0 score:(CGFloat)arg1 ;
-(void)_applyCountsTo:(id)arg0 fromLiveUsage:(id)arg1 mustReset:(BOOL)arg2 ;
// -(void)_appsWithFlowsPassingTest:(id)arg0 replyQueue:(unk)arg1 reply:(id)arg2  ;
-(void)_archiveAppEndpointsForUserId:(unsigned int)arg0 bundleName:(id)arg1 ;
-(void)_archiveRecord:(id)arg0 ;
-(void)_calendarUsageForApp:(id)arg0 givenLastRun:(id)arg1 ;
-(void)_changedForegroundState:(BOOL)arg0 forBundle:(id)arg1 ;
-(void)_checkCellExcessUsageActions:(NSUInteger)arg0 previous:(NSUInteger)arg1 snapshot:(id)arg2 ;
-(void)_checkForegroundStateForProcessWithUUID:(id)arg0 replyQueue:(id)arg1 reply:(id)arg2 ;
-(void)_clearAppDomainAndEndpointTrackingForUserWithID:(unsigned int)arg0 ;
-(void)_compactUsageForApp:(id)arg0 intervalType:(int)arg1 givenLastRun:(id)arg2 ;
-(void)_didReceiveSnapshot:(id)arg0 ;
-(void)_dumpState;
-(void)_endRNFPeriod;
-(void)_evalDomainTrackingDropOf:(id)arg0 ;
-(void)_fetchAppEndpointsRecordForUserId:(unsigned int)arg0 bundleName:(id)arg1 ;
-(void)_generateFlowAnomalySymptom:(unsigned int)arg0 currentUsage:(NSUInteger)arg1 snapshot:(id)arg2 ;
-(void)_generateInfoForId:(NSUInteger)arg0 context:(char *)arg1 uuid:(id)arg2 completionBlock:(id)arg3 ;
-(void)_handleAppTrackingNotification:(id)arg0 ;
-(void)_handleApplicationNotificationCompactForBundleName:(id)arg0 edgeMode:(BOOL)arg1 ;
-(void)_handleApplicationNotificationStateChangedForBundleName:(id)arg0 edgeMode:(BOOL)arg1 intervalType:(int)arg2 ;
-(void)_handleEndpointTrackingNotification:(id)arg0 ;
-(void)_handleSnapshot:(id)arg0 ;
-(void)_handleSnapshotForDomains:(id)arg0 ;
-(void)_insertProcCache:(id)arg0 underName:(id)arg1 ;
-(void)_liveUsagePackForProcess:(id)arg0 subscriberTag:(id)arg1 ;
-(void)_logExcessCellUsage:(NSInteger)arg0 snapshot:(id)arg1 ;
-(void)_newCoreMediaAssetDownloadEvent:(id)arg0 ;
-(void)_newExpectedTransfer:(id)arg0 ;
-(void)_newFlowData:(id)arg0 ;
-(void)_noteSizeableBackgroundTransferEvent:(id)arg0 ;
-(void)_performAppEndpointTrackingPeriodicTasksWithReply:(id)arg0 ;
-(void)_performAppExperiencePeriodicTasksWithReply:(id)arg0 ;
-(void)_performAppPeriodicTasksWithReply:(id)arg0 ;
-(void)_performAppTrackingPeriodicTasksWithReply:(id)arg0 ;
-(void)_performSimplePeriodicAppDomainUsageAnalytics;
-(void)_pruneFlowHistory;
-(void)_recentUsageForApps:(id)arg0 replyQueue:(id)arg1 reply:(id)arg2 ;
-(void)_refreshDataUsageFor:(id)arg0 withCallback:(id)arg1 ;
-(void)_refreshFullDataUsage;
-(void)_refreshFullDataUsageComplete;
-(void)_refreshFullDataUsageWithCallback:(id)arg0 ;
-(void)_removeAllInfoForProcess:(id)arg0 withUUID:(id)arg1 ;
-(void)_removeFromProcCache:(id)arg0 ;
-(void)_removeInfoFromWorkspaceForProcess:(id)arg0 ;
-(void)_removeOldFlowRecords;
-(void)_reportDomainTrackingDropFor:(id)arg0 withCause:(NSUInteger)arg1 detail:(id)arg2 ;
-(void)_reportThresholdedFlowCount:(NSUInteger)arg0 threshold:(NSUInteger)arg1 ;
-(void)_resolveAppEndpointsForUserId:(unsigned int)arg0 bundleName:(id)arg1 ;
-(void)_saveAndUnloadSelectState;
-(void)_sendStatisticsReport:(id)arg0 ;
-(void)_startFlowMonitoring;
-(void)_startMonitoringNetworkInterface:(int)arg0 usingThreshold:(NSUInteger)arg1 ;
-(void)_stopMonitoringNetworkInterface:(int)arg0 ;
-(void)_summaryAppDomainUsageBy:(unsigned int)arg0 reply:(id)arg1 ;
-(void)_updateAppEndpoints:(id)arg0 type:(NSUInteger)arg1 userId:(unsigned int)arg2 bundleName:(id)arg3 flowClosing:(BOOL)arg4 ;
-(void)_updateDeterminedTrackersFromAPICountForUserId:(unsigned int)arg0 bundleName:(id)arg1 increment:(NSUInteger)arg2 ;
-(void)_updateLiveUsage:(id)arg0 wifiIn:(NSInteger)arg1 wifiOut:(NSInteger)arg2 cellIn:(NSInteger)arg3 cellOut:(NSInteger)arg4 wiredIn:(NSInteger)arg5 wiredOut:(NSInteger)arg6 xIn:(NSInteger)arg7 xOut:(NSInteger)arg8 isJumboFlow:(BOOL)arg9 closing:(BOOL)arg10 ;
-(void)_updateTetheringUsage:(BOOL)arg0 ;
-(void)clearAppDomainUsage:(id)arg0 ;
-(void)clearAppDomainUsageForUserWithID:(unsigned int)arg0 ;
-(void)clearAppEndpoints:(id)arg0 ;
-(void)clearAppEndpointsForUserWithID:(unsigned int)arg0 ;
-(void)createAppEndpointsStorageForUserId:(unsigned int)arg0 ;
-(void)createSnapshotFor:(id)arg0 pred:(id)arg1 actions:(id)arg2 reply:(id)arg3 ;
-(void)dealloc;
-(void)endpointMaintenanceOnClose:(id)arg0 ;
-(void)generateInfoForId:(NSUInteger)arg0 context:(char *)arg1 uuid:(id)arg2 completionBlock:(id)arg3 ;
-(void)getNetworkBitmapsWithNames:(id)arg0 startTime:(NSUInteger)arg1 endTime:(NSUInteger)arg2 reply:(id)arg3 ;
-(void)handleLaunchServicesApplicationUnregistration:(id)arg0 ;
-(void)identifierForUUID:(id)arg0 queue:(id)arg1 reply:(id)arg2 ;
-(void)identifierForUUID:(id)arg0 reply:(id)arg1 ;
-(void)logOutcomeArray:(id)arg0 ;
-(void)observeValueForKeyPath:(id)arg0 ofObject:(id)arg1 change:(id)arg2 context:(*void)arg3 ;
-(void)performAppEndpointTrackingPeriodicTasksComplete:(id)arg0 error:(id)arg1 ;
-(void)performAppExperiencePeriodicTasksComplete:(id)arg0 error:(id)arg1 ;
-(void)performAppPeriodicTasksComplete:(id)arg0 error:(id)arg1 ;
-(void)performAppTrackingActionWithOptions:(id)arg0 userId:(unsigned int)arg1 reply:(id)arg2 ;
-(void)performAppTrackingPeriodicTasksComplete:(id)arg0 error:(id)arg1 ;
-(void)performQueryOnEntity:(id)arg0 fetchRequestProperties:(id)arg1 pred:(id)arg2 sort:(id)arg3 actions:(id)arg4 service:(id)arg5 connection:(id)arg6 reply:(id)arg7 ;
-(void)performQueryPostProcessing:(id)arg0 actions:(id)arg1 processOutcome:(id)arg2 ;
// -(void)performThresholdingOn:(id)arg0 forKey:(id)arg1 andValue:(id)arg2 connection:(id)arg3 createdBlock:(*id)arg4 hitBlock:(unk)arg5 errorBlock:(id)arg6  ;
-(void)postAWDMetric:(id)arg0 withIdentifier:(unsigned int)arg1 ;
-(void)relayAudioVideoStatus:(unsigned int)arg0 rxThroughput:(CGFloat)arg1 txThroughput:(CGFloat)arg2 at:(CGFloat)arg3 reset:(BOOL)arg4 ;
-(void)relayCellThroughputAdvice:(unsigned int)arg0 at:(CGFloat)arg1 ;
-(void)removeSnapshotFlowUUIDsForSourceKey:(id)arg0 ;
-(void)resetDataFor:(id)arg0 nameKind:(id)arg1 ;
-(void)sendPowerLogReport:(id)arg0 isStart:(BOOL)arg1 ;
-(void)setPollingRate:(CGFloat)arg0 ;
-(void)setTimerCallbackWithDelay:(CGFloat)arg0 context:(id)arg1 ;
-(void)startObservingLaunchServices;
-(void)stopObservingLaunchServices;
-(void)storeSnapshotFlowUUID:(id)arg0 forSourceKey:(id)arg1 ;
-(void)submitAppEndpointToDateSPICallMetric;
-(void)submitNetworkDomainUsageToDateSPICallMetric;
-(void)updateEffectiveUserId:(id)arg0 ;
-(void)usageManager:(id)arg0 didReceiveGenericSnapshot:(id)arg1 ;
-(void)usageManager:(id)arg0 thresholdReachedOn:(unsigned int)arg1 ;
-(void)workspaceSaveWithCallback:(id)arg0 ;


@end


#endif