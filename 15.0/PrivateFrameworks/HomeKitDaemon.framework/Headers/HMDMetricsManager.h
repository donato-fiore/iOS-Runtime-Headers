// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef HMDMETRICSMANAGER_H
#define HMDMETRICSMANAGER_H

@class HMFUnfairLock, NSMutableArray, NSString, NSArray, NSUUID;
@protocol HMFMessageReceiver, HMDLogEventDailyProvider, OS_dispatch_queue;

#import <Foundation/Foundation.h>

#import "HMDConfigurationLogEvent.h"
#import "HMDCloudSyncLogEventsAnalyzer.h"
#import "HMDCoreAnalyticsLogObserver.h"
#import "HMDLogEventDailyScheduler.h"
#import "HMDLogEventErrorEventsAnalyzer.h"
#import "HMDEventCountersManager.h"
#import "HMDEventFlagsManager.h"
#import "HMDLogEventHAPMetricsEventAnalyzer.h"
#import "HMDHomeManager.h"
#import "HMDLogEventDispatcher.h"
#import "HMDMessageDispatcher.h"
#import "HMDLogEventMessageEventsAnalyzer.h"
#import "HMDLogEventProcessLaunchAnalyzer.h"
#import "HMDLogEventProcessMemoryEventsAnalyzer.h"
#import "HMDLogEventReachabilityEventsAnalyzer.h"
#import "HMDLogEventUserActivityAnalyzer.h"

@interface HMDMetricsManager : NSObject <HMFMessageReceiver, HMDLogEventDailyProvider>

 {
    HMFUnfairLock *_lock;
}


@property (readonly, nonatomic) NSMutableArray *aggregationAnalysisEventContributingAnalyzers; // ivar: _aggregationAnalysisEventContributingAnalyzers
@property (readonly, nonatomic) HMDConfigurationLogEvent *cachedConfiguration; // ivar: _cachedConfiguration
@property (readonly, nonatomic) HMDCloudSyncLogEventsAnalyzer *cloudSyncLogEventsAnalyzer; // ivar: _cloudSyncLogEventsAnalyzer
@property (readonly, nonatomic) HMDCoreAnalyticsLogObserver *coreAnalyticsLogObserver; // ivar: _coreAnalyticsLogObserver
@property (readonly, nonatomic) HMDLogEventDailyScheduler *dailyScheduler; // ivar: _dailyScheduler
@property (readonly, copy) NSString *debugDescription;
@property (readonly) BOOL demoModeConfigured;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) HMDLogEventErrorEventsAnalyzer *errorEventsAnalyzer; // ivar: _errorEventsAnalyzer
@property (readonly, nonatomic) HMDEventCountersManager *eventCounters; // ivar: _eventCounters
@property (readonly, nonatomic) HMDEventFlagsManager *eventFlags; // ivar: _eventFlags
@property (readonly, nonatomic) HMDLogEventHAPMetricsEventAnalyzer *hapEventsAnalyzer; // ivar: _hapEventsAnalyzer
@property (readonly) NSUInteger hash;
@property (weak) HMDHomeManager *homeManager; // ivar: _homeManager
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
-(id)currentDataSyncStateDescription;
-(id)homeKitAggregationAnalysisLogEvent;
-(id)init;
-(id)initWithMessageDispatcher:(id)arg0 logEventDispatcher:(id)arg1 dailyScheduler:(id)arg2 eventCounters:(id)arg3 eventFlags:(id)arg4 ;
-(id)logHomeKitAggregationAnalysisSummary;
-(id)logHomeKitErrorAggregationSummary;
-(id)messageDestination;
-(void)_handleFetchEventCounters:(id)arg0 ;
-(void)_handleLogEventDailySchedulerStatusRequest:(id)arg0 ;
-(void)_handleLogEventDailySchedulerSubmitRequest:(id)arg0 ;
-(void)_registerForMessages;
-(void)addAnalyzer:(id)arg0 toListOfAggregationAnalysisEventContributing:(id)arg1 ;
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