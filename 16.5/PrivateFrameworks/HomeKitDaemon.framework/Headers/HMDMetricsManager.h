// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef HMDMETRICSMANAGER_H
#define HMDMETRICSMANAGER_H

@class NSMutableArray, NSString, NSArray, NSUUID;
@protocol HMFMessageReceiver, HMDLogEventDailyTaskRunner, HMMLogEventDispatchingDataSource, HMDCoreAnalyticsLogObserverDataSource, HMDHouseholdMetricsDataSource, HMDCurrentResidentDeviceDataSource, HMDLogEventAnalyzerDataSource, HMDMetricsDeviceStateProvider, HMDEWSLogging, HMMLogEventDispatching, HMMLogEventSubmitting, OS_dispatch_queue;

#import <Foundation/Foundation.h>

#import "HMDMetricsAccessoryDetailsManager.h"
#import "HMDAppleAccountManager.h"
#import "HMDLogEventBulletinNotificationsAnalyzer.h"
#import "HMDConfigurationLogEvent.h"
#import "HMDCloudSyncLogEventsAnalyzer.h"
#import "HMDCoreAnalyticsLogObserver.h"
#import "HMDCoreDataLogEventsAnalyzer.h"
#import "HMDEventCountersManager.h"
#import "HMDDevice.h"
#import "HMDLogEventDailyScheduler.h"
#import "HMDMetricsDateProvider.h"
#import "HMDMetricsDeviceStateManager.h"
#import "HMDDiagnosticReporterLogObserver.h"
#import "HMDLogEventElectionEventsAnalyzer.h"
#import "HMDLogEventErrorEventsAnalyzer.h"
#import "HMDLogEventCountingAnalyzer.h"
#import "HMDLogEventAccessoryFirmwareUpdateEventAnalyzer.h"
#import "HMDTimeBasedFlagsManager.h"
#import "HMDLogEventHAPMetricsEventAnalyzer.h"
#import "HMDHH2AutoMigrationEligibilityLogEventSubmitter.h"
#import "HMDHH2MigrationLogEventsAnalyzer.h"
#import "HMDHomeManager.h"
#import "HMDHouseholdMetricsManager.h"
#import "HMDMessageDispatcher.h"
#import "HMDLogEventMessageEventsAnalyzer.h"
#import "HMDNetworkObserver.h"
#import "HMDPowerLogObserver.h"
#import "HMDLogEventProcessLaunchAnalyzer.h"
#import "HMDLogEventProcessMemoryEventsAnalyzer.h"
#import "HMDLogEventReachabilityEventsAnalyzer.h"
#import "HMDThreadNetworkObserver.h"
#import "HMDMetricsTTRManager.h"
#import "HMDLogEventUserActivityAnalyzer.h"

@interface HMDMetricsManager : NSObject <HMFMessageReceiver, HMDLogEventDailyTaskRunner, HMMLogEventDispatchingDataSource, HMDCoreAnalyticsLogObserverDataSource, HMDHouseholdMetricsDataSource, HMDCurrentResidentDeviceDataSource, HMDLogEventAnalyzerDataSource>

 {
    NSMutableArray *_configurationObservers;
    os_unfair_lock_s _lock;
}


@property (readonly, nonatomic) NSString *PRKitDateString; // ivar: _PRKitDateString
@property (readonly, nonatomic) NSString *PRKitUUIDString; // ivar: _PRKitUUIDString
@property (readonly, nonatomic) HMDMetricsAccessoryDetailsManager *accessoryDetailsManager; // ivar: _accessoryDetailsManager
@property (readonly, nonatomic) HMDAppleAccountManager *accountManager; // ivar: _accountManager
@property (readonly, nonatomic) NSMutableArray *aggregationAnalysisEventContributingAnalyzers; // ivar: _aggregationAnalysisEventContributingAnalyzers
@property (readonly, nonatomic) HMDLogEventBulletinNotificationsAnalyzer *bulletinNotificationsAnalyzer; // ivar: _bulletinNotificationsAnalyzer
@property (readonly, copy, nonatomic) HMDConfigurationLogEvent *cachedConfiguration; // ivar: _cachedConfiguration
@property (readonly, nonatomic) HMDCloudSyncLogEventsAnalyzer *cloudSyncLogEventsAnalyzer; // ivar: _cloudSyncLogEventsAnalyzer
@property (readonly, copy, nonatomic) NSArray *configurationObservers;
@property (readonly, nonatomic) HMDCoreAnalyticsLogObserver *coreAnalyticsLogObserver; // ivar: _coreAnalyticsLogObserver
@property (readonly, nonatomic) HMDCoreDataLogEventsAnalyzer *coreDataLogEventsAnalyzer; // ivar: _coreDataLogEventsAnalyzer
@property (readonly, nonatomic) HMDEventCountersManager *countersManager; // ivar: _countersManager
@property (readonly, nonatomic) HMDDevice *currentDevice;
@property (readonly, nonatomic) HMDLogEventDailyScheduler *dailyScheduler; // ivar: _dailyScheduler
@property (readonly, nonatomic) HMDMetricsDateProvider *dateProvider; // ivar: _dateProvider
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) HMDMetricsDeviceStateManager *deviceStateManager; // ivar: _deviceStateManager
@property (readonly, nonatomic) NSObject<HMDMetricsDeviceStateProvider> *deviceStateProvider;
@property (readonly, nonatomic) NSArray *devicesOnCurrentAccount;
@property (readonly, nonatomic) HMDDiagnosticReporterLogObserver *diagnosticReporterLogObserver; // ivar: _diagnosticReporterLogObserver
@property (readonly, nonatomic) HMDLogEventElectionEventsAnalyzer *electionEventsAnalyzer; // ivar: _electionEventsAnalyzer
@property (readonly, nonatomic) HMDLogEventErrorEventsAnalyzer *errorEventsAnalyzer; // ivar: _errorEventsAnalyzer
@property (readonly, nonatomic) HMDLogEventCountingAnalyzer *eventCountingAnalyzer; // ivar: _eventCountingAnalyzer
@property (readonly, weak, nonatomic) NSObject<HMDEWSLogging> *ewsLogger; // ivar: _ewsLogger
@property (readonly, nonatomic) HMDLogEventAccessoryFirmwareUpdateEventAnalyzer *firmwareUpdateEventsAnalyzer; // ivar: _firmwareUpdateEventsAnalyzer
@property (readonly, nonatomic) HMDTimeBasedFlagsManager *flagsManager; // ivar: _flagsManager
@property (readonly, nonatomic) HMDLogEventHAPMetricsEventAnalyzer *hapEventsAnalyzer; // ivar: _hapEventsAnalyzer
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) HMDHH2AutoMigrationEligibilityLogEventSubmitter *hh2AutoMigrationEligibilitySubmitter; // ivar: _hh2AutoMigrationEligibilitySubmitter
@property (readonly, nonatomic) HMDHH2MigrationLogEventsAnalyzer *hh2MigrationAnalyzer; // ivar: _hh2MigrationAnalyzer
@property (readonly, nonatomic) NSArray *homeDataSources;
@property (weak) HMDHomeManager *homeManager; // ivar: _homeManager
@property (readonly, nonatomic) NSUUID *homeUUIDForCurrentResidentDevice;
@property (readonly, nonatomic) HMDHouseholdMetricsManager *householdMetricsManager; // ivar: _householdMetricsManager
@property (readonly, nonatomic) BOOL isDemoModeConfigured;
@property (readonly) BOOL isSubmissionEnabled;
@property (readonly, nonatomic) NSObject<HMMLogEventDispatching> *logEventDispatcher; // ivar: _logEventDispatcher
@property (readonly, nonatomic) NSObject<HMMLogEventSubmitting> *logEventSubmitter;
@property (readonly, nonatomic) HMDMessageDispatcher *messageDispatcher; // ivar: _messageDispatcher
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *messageReceiveQueue;
@property (readonly, nonatomic) NSUUID *messageTargetUUID;
@property (readonly, nonatomic) HMDLogEventMessageEventsAnalyzer *messagingEventsAnalyzer; // ivar: _messagingEventsAnalyzer
@property BOOL metricsCollectionStarted; // ivar: _metricsCollectionStarted
@property (readonly, nonatomic) HMDNetworkObserver *networkObserver; // ivar: _networkObserver
@property (readonly, nonatomic) HMDPowerLogObserver *powerLogObserver; // ivar: _powerLogObserver
@property (readonly, nonatomic) HMDLogEventProcessLaunchAnalyzer *processLaunchEventsAnalyzer; // ivar: _processLaunchEventsAnalyzer
@property (readonly, nonatomic) HMDLogEventProcessMemoryEventsAnalyzer *processMemoryEventsAnalyzer; // ivar: _processMemoryEventsAnalyzer
@property (readonly, nonatomic) HMDLogEventReachabilityEventsAnalyzer *reachabilityEventsAnalyzer; // ivar: _reachabilityEventsAnalyzer
@property (readonly) Class superclass;
@property (readonly, nonatomic) HMDThreadNetworkObserver *threadNetworkObserver; // ivar: _threadNetworkObserver
@property (readonly, nonatomic) HMDMetricsTTRManager *ttrManager; // ivar: _ttrManager
@property (readonly, nonatomic) HMDLogEventUserActivityAnalyzer *userActivityEventsAnalyzer; // ivar: _userActivityEventsAnalyzer


+(id)namespaceUUID;
-(id)cachedHomeConfigurationForHomeUUID:(id)arg0 ;
-(id)homeKitAggregationAnalysisLogEvent;
-(id)homes;
-(id)init;
-(id)initWithMessageDispatcher:(id)arg0 accountManager:(id)arg1 logEventDispatcher:(id)arg2 dailyScheduler:(id)arg3 dateProvider:(id)arg4 countersManager:(id)arg5 flagsManager:(id)arg6 ewsLogger:(id)arg7 deviceStateManager:(id)arg8 hh2AutoMigrationEligibilitySubmitter:(id)arg9 ;
-(id)logHomeKitAggregationAnalysisSummary;
-(id)logHomeKitErrorAggregationSummary;
-(id)messageDestination;
-(void)_handleFetchEventCounters:(id)arg0 ;
-(void)_handleLogEventDailySchedulerStatusRequest:(id)arg0 ;
-(void)_handleLogEventDailySchedulerSubmitRequest:(id)arg0 ;
-(void)_handleResetEventCounters:(id)arg0 ;
-(void)_registerForMessages;
-(void)addAnalyzer:(id)arg0 toListOfAggregationAnalysisEventContributing:(id)arg1 ;
-(void)addConfigurationChangedObserver:(id)arg0 ;
-(void)addRateTrigger:(id)arg0 forEventName:(id)arg1 requestGroup:(id)arg2 atThreshold:(NSUInteger)arg3 windowSize:(NSUInteger)arg4 ;
-(void)addTTRThresholdTrigger:(id)arg0 forEventName:(id)arg1 requestGroup:(id)arg2 atThreshold:(NSUInteger)arg3 ;
-(void)addThresholdTrigger:(id)arg0 forEventName:(id)arg1 requestGroup:(id)arg2 atThreshold:(NSUInteger)arg3 ;
-(void)addThresholdTrigger:(id)arg0 forEventName:(id)arg1 requestGroup:(id)arg2 atThreshold:(NSUInteger)arg3 uploadImmediately:(BOOL)arg4 ;
-(void)configureHAPMetricsDispatcher:(id)arg0 ;
-(void)homeKitConfigurationChanged;
-(void)logHomeConfiguration;
-(void)registerEWSTriggers;
-(void)registerTTRTriggers;
-(void)registerTaggedLoggingProcessors;
-(void)resetHomeKitAggregationAnalysisContext;
-(void)runDailyTask;
-(void)startAnalyzers;
-(void)startCoreAnalyticsObserver:(id)arg0 ;
-(void)startMetricsCollection;
-(void)startMetricsCollectionWithDailyScheduler:(id)arg0 ;
-(void)submitCurrentUserSettings;
-(void)submitDailyAggregationAnalysisEvents;
-(void)updateWidgetStatusInCachedConfiguration;
-(void)waitToCompleteCurrentlyQueuedTasks;


@end


#endif