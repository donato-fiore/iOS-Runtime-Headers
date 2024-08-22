// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef HMDNETWORKOBSERVER_H
#define HMDNETWORKOBSERVER_H

@class HMFTimer, NSString, HMFWifiNetworkAssociation, NSNotificationCenter, NSMutableDictionary, HMFWiFiManager;
@protocol HMFTimerDelegate, HMMLogEventObserver, HMDLogEventDailyTaskRunner, HMDCurrentResidentDeviceDataSource, HMMLogEventDispatching;

#import <Foundation/Foundation.h>

#import "HMDEventCountersManager.h"
#import "HMDLogEventDailyScheduler.h"
#import "HMDMetricsDateProvider.h"

@interface HMDNetworkObserver : NSObject <HMFTimerDelegate, HMMLogEventObserver, HMDLogEventDailyTaskRunner>



@property (readonly) HMFTimer *changeDebounceTimer; // ivar: _changeDebounceTimer
@property (readonly) NSUInteger collectionStartSeconds; // ivar: _collectionStartSeconds
@property (readonly, weak, nonatomic) HMDEventCountersManager *countersManager; // ivar: _countersManager
@property (readonly, weak, nonatomic) NSObject<HMDCurrentResidentDeviceDataSource> *currentHomeDataSource; // ivar: _currentHomeDataSource
@property (readonly, weak, nonatomic) HMDLogEventDailyScheduler *dailyScheduler; // ivar: _dailyScheduler
@property (readonly, weak, nonatomic) HMDMetricsDateProvider *dateProvider; // ivar: _dateProvider
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, weak, nonatomic) NSObject<HMMLogEventDispatching> *logEventDispatcher; // ivar: _logEventDispatcher
@property (readonly, nonatomic) HMFWifiNetworkAssociation *networkAssociation; // ivar: _networkAssociation
@property (nonatomic) os_unfair_lock_s networkAssociationLock; // ivar: _networkAssociationLock
@property (readonly, weak, nonatomic) NSNotificationCenter *notificationCenter; // ivar: _notificationCenter
@property (readonly, nonatomic) NSUInteger numAPChanges; // ivar: _numAPChanges
@property (readonly, nonatomic) NSUInteger numGatewayChanges; // ivar: _numGatewayChanges
@property (readonly, nonatomic) NSUInteger numReadErrors; // ivar: _numReadErrors
@property (readonly, nonatomic) NSUInteger numReadWrites; // ivar: _numReadWrites
@property (readonly, nonatomic) NSUInteger numWifiAssociations; // ivar: _numWifiAssociations
@property (readonly, nonatomic) NSUInteger numWifiDisassociations; // ivar: _numWifiDisassociations
@property (readonly, nonatomic) NSUInteger numWriteErrors; // ivar: _numWriteErrors
@property (readonly, nonatomic) BOOL started; // ivar: _started
@property (readonly) Class superclass;
@property (readonly, nonatomic) id *tickBlock; // ivar: _tickBlock
@property (readonly, nonatomic) NSMutableDictionary *topSessionErrors; // ivar: _topSessionErrors
@property (readonly, nonatomic) NSMutableDictionary *topWriteErrors; // ivar: _topWriteErrors
@property (nonatomic) BOOL wifiAssociated; // ivar: _wifiAssociated
@property (readonly, weak, nonatomic) HMFWiFiManager *wifiManager; // ivar: _wifiManager


+(id)supportedEventClasses;
-(id)_keyOfLargestCountInHistogram:(id)arg0 ;
-(id)counterGroupForName:(id)arg0 homeUUID:(id)arg1 date:(id)arg2 ;
-(id)initWithLogEventDispatcher:(id)arg0 countersManager:(id)arg1 dailyScheduler:(id)arg2 currentHomeDataSource:(id)arg3 dateProvider:(id)arg4 ;
-(id)initWithLogEventDispatcher:(id)arg0 countersManager:(id)arg1 dailyScheduler:(id)arg2 currentHomeDataSource:(id)arg3 dateProvider:(id)arg4 wifiManager:(id)arg5 notificationCenter:(id)arg6 changeDebounceTimer:(id)arg7 tickBlock:(id)arg8 ;
-(id)logEventForHomeWithUUID:(id)arg0 associatedWithDate:(id)arg1 ;
-(void)_clearNonPersistentCounters;
-(void)_handleAccessorySessionEvent:(id)arg0 ;
-(void)_handleCurrentNetworkChangedNotification:(id)arg0 ;
-(void)_handleReadWriteLogEvent:(id)arg0 ;
-(void)_incrementError:(id)arg0 forHistogram:(id)arg1 byValue:(NSUInteger)arg2 ;
-(void)checkNetworkChange;
-(void)deleteCountersAfterDate:(id)arg0 ;
-(void)deleteCountersBeforeDate:(id)arg0 ;
-(void)didReceiveEventFromDispatcher:(id)arg0 ;
-(void)runDailyTask;
-(void)start;
-(void)stop;
-(void)timerDidFire:(id)arg0 ;


@end


#endif