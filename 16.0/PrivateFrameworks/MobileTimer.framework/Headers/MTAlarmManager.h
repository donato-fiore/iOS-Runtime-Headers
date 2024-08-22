// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef MTALARMMANAGER_H
#define MTALARMMANAGER_H

@class NSNotificationCenter;

#import <Foundation/Foundation.h>

#import "MTAlarmCache.h"
#import "MTXPCConnectionProvider.h"
#import "MTAlarmManagerExportedObject.h"
#import "MTMetrics.h"

@interface MTAlarmManager : NSObject

@property (retain, nonatomic) MTAlarmCache *cache; // ivar: _cache
@property (readonly, nonatomic) MTXPCConnectionProvider *connectionProvider; // ivar: _connectionProvider
@property (retain, nonatomic) MTAlarmManagerExportedObject *exportedObject; // ivar: _exportedObject
@property (retain, nonatomic) MTMetrics *metrics; // ivar: _metrics
@property (retain, nonatomic) NSNotificationCenter *notificationCenter; // ivar: _notificationCenter


+(id)_filterSleepAlarmOverrides:(id)arg0 date:(id)arg1 ;
+(id)_filteredAlarms:(id)arg0 afterDate:(id)arg1 maxCount:(NSUInteger)arg2 filter:(id)arg3 ;
+(id)_sortedAlarms:(id)arg0 date:(id)arg1 includeBedtimeNotification:(BOOL)arg2 ;
+(id)assistantSyncNotificationName;
+(void)warmUp;
-(NSUInteger)alarmCount;
-(NSUInteger)alarmCountIncludingSleepAlarm:(BOOL)arg0 ;
-(NSUInteger)firingAlarmCount;
-(NSUInteger)indexForAlarm:(id)arg0 ;
-(id)_alarmWithIDStringAsync:(id)arg0 ;
-(id)_alarmsIncludingSleepAlarm:(BOOL)arg0 doSynchronous:(BOOL)arg1 ;
// -(id)_initWithConnectionProvidingBlock:(id)arg0 metrics:(unk)arg1  ;
// -(id)_initWithConnectionProvidingBlock:(id)arg0 metrics:(unk)arg1 notificationCenter:(id)arg2  ;
-(id)_nextAlarmsForDate:(id)arg0 maxCount:(NSUInteger)arg1 includeSleepAlarm:(BOOL)arg2 includeBedtimeNotification:(BOOL)arg3 doSynchronous:(BOOL)arg4 ;
-(id)_nextAlarmsInRange:(id)arg0 maxCount:(NSUInteger)arg1 includeSleepAlarm:(BOOL)arg2 includeBedtimeNotification:(BOOL)arg3 doSynchronous:(BOOL)arg4 ;
-(id)_sortedNextAlarmsAfterDate:(id)arg0 includeSleepAlarm:(BOOL)arg1 includeBedtimeNotification:(BOOL)arg2 ;
-(id)_sortedNextAlarmsAfterDate:(id)arg0 includeSleepAlarm:(BOOL)arg1 includeBedtimeNotification:(BOOL)arg2 doSynchronous:(BOOL)arg3 ;
-(id)addAlarm:(id)arg0 ;
-(id)alarmAtIndex:(NSUInteger)arg0 ;
-(id)alarmWithIDString:(id)arg0 ;
-(id)alarmWithIDString:(id)arg0 includeSleep:(BOOL)arg1 ;
-(id)alarms;
-(id)alarmsIncludingSleepAlarm:(BOOL)arg0 ;
-(id)alarmsSync;
-(id)alarmsSyncIncludingSleepAlarm:(BOOL)arg0 ;
-(id)dismissAlarmWithIdentifier:(id)arg0 ;
-(id)dismissAlarmWithIdentifier:(id)arg0 dismissAction:(NSUInteger)arg1 ;
-(id)init;
-(id)initWithConnectionProvider:(id)arg0 metrics:(id)arg1 ;
-(id)initWithConnectionProvider:(id)arg0 metrics:(id)arg1 notificationCenter:(id)arg2 ;
-(id)initWithMetrics:(id)arg0 ;
-(id)nextAlarm;
-(id)nextAlarmSync;
-(id)nextAlarmsForDate:(id)arg0 maxCount:(NSUInteger)arg1 ;
-(id)nextAlarmsForDate:(id)arg0 maxCount:(NSUInteger)arg1 includeBedtimeNotification:(BOOL)arg2 ;
-(id)nextAlarmsForDate:(id)arg0 maxCount:(NSUInteger)arg1 includeSleepAlarm:(BOOL)arg2 ;
-(id)nextAlarmsForDate:(id)arg0 maxCount:(NSUInteger)arg1 includeSleepAlarm:(BOOL)arg2 includeBedtimeNotification:(BOOL)arg3 ;
-(id)nextAlarmsForDateSync:(id)arg0 maxCount:(NSUInteger)arg1 ;
-(id)nextAlarmsForDateSync:(id)arg0 maxCount:(NSUInteger)arg1 includeBedtimeNotification:(BOOL)arg2 ;
-(id)nextAlarmsForDateSync:(id)arg0 maxCount:(NSUInteger)arg1 includeSleepAlarm:(BOOL)arg2 ;
-(id)nextAlarmsForDateSync:(id)arg0 maxCount:(NSUInteger)arg1 includeSleepAlarm:(BOOL)arg2 includeBedtimeNotification:(BOOL)arg3 ;
-(id)nextAlarmsInRange:(id)arg0 maxCount:(NSUInteger)arg1 includeSleepAlarm:(BOOL)arg2 ;
-(id)nextAlarmsInRange:(id)arg0 maxCount:(NSUInteger)arg1 includeSleepAlarm:(BOOL)arg2 includeBedtimeNotification:(BOOL)arg3 ;
-(id)nextAlarmsInRangeSync:(id)arg0 maxCount:(NSUInteger)arg1 includeSleepAlarm:(BOOL)arg2 ;
-(id)nextAlarmsInRangeSync:(id)arg0 maxCount:(NSUInteger)arg1 includeSleepAlarm:(BOOL)arg2 includeBedtimeNotification:(BOOL)arg3 ;
-(id)nextSleepAlarm;
-(id)removeAlarm:(id)arg0 ;
-(id)resetSleepAlarmSnoozeState;
-(id)sleepAlarm;
-(id)sleepAlarmSync;
-(id)sleepAlarms;
-(id)sleepAlarmsSync;
-(id)snoozeAlarmWithIdentifier:(id)arg0 ;
-(id)snoozeAlarmWithIdentifier:(id)arg0 snoozeAction:(NSUInteger)arg1 ;
-(id)updateAlarm:(id)arg0 ;
-(id)updateSleepAlarms;
-(void)_getCachedAlarmsWithFuture:(id)arg0 finishBlock:(id)arg1 ;
-(void)checkIn;
-(void)dealloc;
-(void)reconnect;


@end


#endif