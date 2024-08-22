// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef MTLEGACYMANAGER_H
#define MTLEGACYMANAGER_H

@class NSArray, NSString, UNUserNotificationCenter;
@protocol OS_dispatch_queue;

#import <Foundation/Foundation.h>

#import "Alarm.h"

@interface MTLegacyManager : NSObject

@property (retain, nonatomic) NSArray *alarms; // ivar: _alarms
@property (nonatomic) CGFloat defaultDuration; // ivar: _defaultDuration
@property (copy, nonatomic) NSString *defaultSound; // ivar: _defaultSound
@property (nonatomic) BOOL loaded; // ivar: _loaded
@property (retain, nonatomic) UNUserNotificationCenter *notificationCenter; // ivar: _notificationCenter
@property (nonatomic) BOOL purged; // ivar: _purged
@property (retain, nonatomic) NSArray *scheduledNotifications; // ivar: _scheduledNotifications
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *serializer; // ivar: _serializer
@property (retain, nonatomic) Alarm *sleepAlarm; // ivar: _sleepAlarm


+(NSUInteger)repeatScheduleFromOldAlarm:(id)arg0 ;
+(id)_bundleIDForUNSchedule;
+(id)_numberFromString:(id)arg0 ;
+(id)alarmFromOldAlarm:(id)arg0 ;
+(id)sharedManager;
+(id)soundFromOldAlarm:(id)arg0 ;
-(BOOL)_discardOldAlarms;
-(BOOL)_discardOldTimers;
-(BOOL)_discardOldVersion;
-(BOOL)_upgrade;
-(BOOL)_upgradeAlarms;
-(BOOL)_upgradeIfNeverAttempted;
-(BOOL)_upgradeTimers;
-(id)_copyLegacyAlarmsFromPreferences;
-(id)_copyLegacySleepAlarmFromPreferences;
-(id)init;
-(void)_cancelNotifications;
-(void)_loadAlarms;
-(void)_loadScheduledNotifications;
-(void)_loadTimerDefaults;
-(void)_loadUserPreferences;
-(void)_purgeAlarmsAndTimers;
-(void)_reconcileAlarmsAndNotifications;
-(void)_upgradeFromSpringboardDefaults;
-(void)cancelNotifications;
-(void)loadLegacyData;
-(void)purgeLegacyData;


@end


#endif