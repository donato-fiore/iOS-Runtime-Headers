// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef HMDMETRICSMANAGER_H
#define HMDMETRICSMANAGER_H

@class HMFUnfairLock, NSString, NSMutableArray, NSArray, NSUUID;
@protocol HMFMessageReceiver, HMDLogEventDailyProvider, HMDCoreAnalyticsLogObserverDataSource, HMDHouseholdMetricsDataSource, OS_dispatch_queue;

#import <Foundation/Foundation.h>

#import "HMDConfigurationLogEvent.h"
#import "HMDCloudSyncLogEventsAnalyzer.h"
#import "HMDCoreAnalyticsLogObserver.h"
#import "HMDEventCountersManager.h"
#import "HMDLogEventDailyScheduler.h"
#import "HMDLogEventElectionEventsAnalyzer.h"
#import "HMDLogEventErrorEventsAnalyzer.h"
#import "HMDTimeBasedFlagsManager.h"
#import "HMDLogEventHAPMetricsEventAnalyzer.h"
#import "HMDHomeManager.h"
#import "HMDHouseholdMetricsManager.h"
#import "HMDLogEventDispatcher.h"
#import "HMDMessageDispatcher.h"
#import "HMDLogEventMessageEventsAnalyzer.h"
#import "HMDLogEventProcessLaunchAnalyzer.h"
#import "HMDLogEventProcessMemoryEventsAnalyzer.h"
#import "HMDLogEventReachabilityEventsAnalyzer.h"
#import "HMDLogEventUserActivityAnalyzer.h"

@interface HMDMetricsManager : NSObject <HMFMessageReceiver, HMDLogEventDailyProvider, HMDCoreAnalyticsLogObserverDataSource, HMDHouseholdMetricsDataSource>

 {
    HMFUnfairLock *_lock;
}


@property (readonly, nonatomic) NSString *PRKitDateString; // ivar: _PRKitDateString
@property (readonly, nonatomic) NSString *PRKitUUIDString; // ivar: _PRKitUUIDString
@property (readonly, nonatomic) NSMutableArray *aggregationAnalysisEventContributingAnalyzers; // ivar: _aggregationAnalysisEventContributingAnalyzers
@property (readonly, nonatomic) HMDConfigurationLogEvent *cachedConfiguration; // ivar: _cachedConfiguration
@property (readonly, nonatomic) HMDCloudSyncLogEventsAnalyzer *cloudSyncLogEventsAnalyzer; // ivar: _cloudSyncLogEventsAnalyzer
@property (readonly, nonatomic) HMDCoreAnalyticsLogObserver *coreAnalyticsLogObserver; // ivar: _coreAnalyticsLogObserver
@property (readonly, nonatomic) HMDEventCountersManager *countersManager; // ivar: _countersManager
@property (readonly, nonatomic) HMDLogEventDailyScheduler *dailyScheduler; // ivar: _dailyScheduler
@property (readonly, copy) NSString *debugDescription;
@property (readonly) BOOL demoModeConfigured;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) HMDLogEventElectionEventsAnalyzer *electionEventsAnalyzer; // ivar: _electionEventsAnalyzer
@property (readonly, nonatomic) HMDLogEventErrorEventsAnalyzer *errorEventsAnalyzer; // ivar: _errorEventsAnalyzer
@property (readonly, nonatomic) HMDTimeBasedFlagsManager *flagsManager; // ivar: _flagsManager
@property (readonly, nonatomic) HMDLogEventHAPMetricsEventAnalyzer *hapEventsAnalyzer; // ivar: _hapEventsAnalyzer
@property (readonly) NSUInteger hash;
@property (weak) HMDHomeManager *homeManager; // ivar: _homeManager
@property (readonly, nonatomic) HMDHouseholdMetricsManager *householdMetricsManager; // ivar: _householdMetricsManager
@property (readonly, nonatomic) HMDLogEventDispatcher *logEventDispatcher; // ivar: _logEventDispatcher
@property (readonly, nonatomic) NSArray *logEventProviderDailySubmissionBlocks;
@property (readonly, nonatomic) HMDMessageDispatcher *messageDispatcher; // ivar: _messageDispatcher
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *messageReceiveQueue;
@property (readonly, nonatomic) NSUUID *messageTargetUUID;
@property (readonly, nonatomic) HMDLogEventMessageEventsAnalyzer *messagingEventsAnalyzer; // ivar: _messagingEventsAnalyzer
@property BOOL metricsCollectionStarted; // ivar: _metricsCollectionStarted
@property (readonly, nonatomic) HMDLogEventProcessLaunchAnalyzer *processLaunchEventsAnalyzer; // ivar: _processLaunchEventsAnalyzer
@property (readonly, nonatomic) HMDLogEventProcessMemoryEventsAnalyzer *processMemoryEventsAnalyzer; // ivar: _processMemoryEventsAnalyzer
@property (readonly, nonatomic) HMDLogEventReachabilityEventsAnalyzer *reachabilityEventsAnalyzer; // ivar: _reachabilityEventsAnalyzer
@property (readonly) Class superclass;
@property (readonly, nonatomic) HMDLogEventUserActivityAnalyzer *userActivityEventsAnalyzer; // ivar: _userActivityEventsAnalyzer


+(id)coreAnalyticsLogEventClasses;
+(id)namespaceUUID;
-(id)cachedHomeConfigurationForHomeUUID:(id)arg0 ;
-(id)currentDataSyncStateDescription;
-(id)currentDeviceProductInfo;
-(id)devicesOnCurrentAccount;
-(id)homeKitAggregationAnalysisLogEvent;
-(id)homes;
-(id)init;
-(id)initWithMessageDispatcher:(id)arg0 logEventDispatcher:(id)arg1 dailyScheduler:(id)arg2 countersManager:(id)arg3 flagsManager:(id)arg4 ;
-(id)logHomeKitAggregationAnalysisSummary;
-(id)logHomeKitErrorAggregationSummary;
-(id)messageDestination;
-(void)_handleFetchEventCounters:(id)arg0 ;
-(void)_handleLogEventDailySchedulerStatusRequest:(id)arg0 ;
-(void)_handleLogEventDailySchedulerSubmitRequest:(id)arg0 ;
-(void)_handleResetEventCounters:(id)arg0 ;
-(void)_registerForMessages;
-(void)addAnalyzer:(id)arg0 toListOfAggregationAnalysisEventContributing:(id)arg1 ;
-(void)addRateTrigger:(id)arg0 forEventName:(id)arg1 requestGroup:(id)arg2 atThreshold:(NSUInteger)arg3 windowSize:(NSUInteger)arg4 ;
-(void)addThresholdTrigger:(id)arg0 forEventName:(id)arg1 requestGroup:(id)arg2 atThreshold:(NSUInteger)arg3 ;
-(void)configureHAPMetricsDispatcher:(id)arg0 ;
-(void)homeKitConfigurationChanged;
-(void)logHomeConfiguration;
-(void)populateHomeKitAggregationAnalysisLogEvent:(id)arg0 ;
-(void)presentRadarDialog:(id)arg0 withPostIntervalLimit:(CGFloat)arg1 ;
-(void)registerTriggers;
-(void)resetHomeKitAggregationAnalysisContext;
-(void)startAnalyzers;
-(void)startCoreAnalyticsObserver:(id)arg0 ;
-(void)startMetricsCollection;
-(void)startMetricsCollectionWithDailyScheduler:(id)arg0 ;
-(void)submitDailyAggregationAnalysisEvents;


@end


#endif