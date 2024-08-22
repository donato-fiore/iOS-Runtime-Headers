// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef HMDTHREADNETWORKOBSERVER_H
#define HMDTHREADNETWORKOBSERVER_H

@class NSDate, NSMutableDictionary, NSString, NSNotificationCenter;
@protocol HMMLogEventObserver, HMDLogEventDailyTaskRunner, HMDCurrentResidentDeviceDataSource, HMMLogEventDispatching;

#import <Foundation/Foundation.h>

#import "HMDEventCountersManager.h"
#import "HMDMetricsDateProvider.h"

@interface HMDThreadNetworkObserver : NSObject <HMMLogEventObserver, HMDLogEventDailyTaskRunner>



@property (readonly, weak, nonatomic) HMDEventCountersManager *countersManager; // ivar: _countersManager
@property (readonly, nonatomic) NSUInteger curReport_maxSimuIPPrefixes; // ivar: _curReport_maxSimuIPPrefixes
@property (readonly, nonatomic) NSUInteger curReport_numAdvertisedBRs; // ivar: _curReport_numAdvertisedBRs
@property (readonly, nonatomic) NSUInteger curReport_numAppleBRs; // ivar: _curReport_numAppleBRs
@property (readonly, nonatomic) NSUInteger curReport_numThirdPartyBRs; // ivar: _curReport_numThirdPartyBRs
@property (readonly, nonatomic) NSUInteger curReport_numThreadNetworks; // ivar: _curReport_numThreadNetworks
@property (nonatomic) NSUInteger curReport_readErrorCount; // ivar: _curReport_readErrorCount
@property (nonatomic) NSUInteger curReport_readWritesCount; // ivar: _curReport_readWritesCount
@property (readonly, nonatomic) NSUInteger curReport_reportDuration; // ivar: _curReport_reportDuration
@property (readonly, nonatomic) NSUInteger curReport_rxSuccess; // ivar: _curReport_rxSuccess
@property (readonly, nonatomic) NSUInteger curReport_rxTotal; // ivar: _curReport_rxTotal
@property (readonly, nonatomic) CGFloat curReport_threadNetworkDownDuration; // ivar: _curReport_threadNetworkDownDuration
@property (readonly, nonatomic) NSDate *curReport_threadNetworkLastDownTime; // ivar: _curReport_threadNetworkLastDownTime
@property (readonly, nonatomic) NSDate *curReport_threadNetworkLastUpTime; // ivar: _curReport_threadNetworkLastUpTime
@property (readonly, nonatomic) BOOL curReport_threadNetworkUp; // ivar: _curReport_threadNetworkUp
@property (readonly, nonatomic) CGFloat curReport_threadNetworkUpDuration; // ivar: _curReport_threadNetworkUpDuration
@property (readonly, nonatomic) NSMutableDictionary *curReport_topReadWriteErrors; // ivar: _curReport_topReadWriteErrors
@property (readonly, nonatomic) NSMutableDictionary *curReport_topSessionErrors; // ivar: _curReport_topSessionErrors
@property (readonly, nonatomic) NSUInteger curReport_txDelayAvg; // ivar: _curReport_txDelayAvg
@property (readonly, nonatomic) NSUInteger curReport_txSuccess; // ivar: _curReport_txSuccess
@property (readonly, nonatomic) NSUInteger curReport_txTotal; // ivar: _curReport_txTotal
@property (nonatomic) NSUInteger curReport_writeErrorCount; // ivar: _curReport_writeErrorCount
@property (readonly, weak, nonatomic) NSObject<HMDCurrentResidentDeviceDataSource> *currentHomeDataSource; // ivar: _currentHomeDataSource
@property (readonly, nonatomic) BOOL dailyReportingRegistered; // ivar: _dailyReportingRegistered
@property (readonly, weak, nonatomic) HMDMetricsDateProvider *dateProvider; // ivar: _dateProvider
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, weak, nonatomic) NSObject<HMMLogEventDispatching> *logEventDispatcher; // ivar: _logEventDispatcher
@property (readonly, weak, nonatomic) NSNotificationCenter *notificationCenter; // ivar: _notificationCenter
@property (readonly, nonatomic) BOOL started; // ivar: _started
@property (readonly) Class superclass;


+(id)supportedEventClasses;
-(id)_keyOfLargestCountInHistogram:(id)arg0 ;
-(id)counterGroupForName:(id)arg0 homeUUID:(id)arg1 date:(id)arg2 ;
-(id)initWithLogEventDispatcher:(id)arg0 countersManager:(id)arg1 dailyScheduler:(id)arg2 currentHomeDataSource:(id)arg3 dateProvider:(id)arg4 ;
-(id)initWithLogEventDispatcher:(id)arg0 countersManager:(id)arg1 dailyScheduler:(id)arg2 currentHomeDataSource:(id)arg3 dateProvider:(id)arg4 notificationCenter:(id)arg5 ;
-(id)logEventForHomeWithUUID:(id)arg0 associatedWithDate:(id)arg1 isDailySummary:(BOOL)arg2 ;
-(void)_handleAccessorySessionEvent:(id)arg0 ;
-(void)_handleReadWriteLogEvent:(id)arg0 ;
-(void)_incrementError:(id)arg0 forHistogram:(id)arg1 byValue:(NSUInteger)arg2 ;
-(void)_injectThreadNetworkStateForTestingWithNumAdvertisedBRs:(NSUInteger)arg0 numAppleBRs:(NSUInteger)arg1 numThirdPartyBRs:(NSUInteger)arg2 numThreadNetworks:(NSUInteger)arg3 maxSimuIPPrefixesDetected:(NSUInteger)arg4 txTotal:(NSUInteger)arg5 txSuccess:(NSUInteger)arg6 txDelayAvg:(NSUInteger)arg7 rxTotal:(NSUInteger)arg8 rxSuccess:(NSUInteger)arg9 reportDuration:(NSUInteger)arg10 reportDate:(id)arg11 reportDailySummary:(BOOL)arg12 ;
-(void)_runLoggingForDate:(id)arg0 isDailySummary:(BOOL)arg1 ;
-(void)_setDailyScheduler:(id)arg0 ;
-(void)_updateDailyCountersAndResetCurrentReportStatsForHomeWithUUID:(id)arg0 associatedWithDate:(id)arg1 ;
-(void)deleteCountersAfterDate:(id)arg0 ;
-(void)deleteCountersBeforeDate:(id)arg0 ;
-(void)didReceiveEventFromDispatcher:(id)arg0 ;
-(void)runDailyTask;
-(void)start;
-(void)stop;


@end


#endif