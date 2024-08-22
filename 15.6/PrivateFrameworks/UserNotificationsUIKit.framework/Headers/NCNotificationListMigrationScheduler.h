// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef NCNOTIFICATIONLISTMIGRATIONSCHEDULER_H
#define NCNOTIFICATIONLISTMIGRATIONSCHEDULER_H

@class NSDate, NSDateFormatter, NSMutableDictionary, PCPersistentTimer;
@protocol NCNotificationListMigrationSchedulerDelegate, OS_dispatch_queue;

#import <Foundation/Foundation.h>


@interface NCNotificationListMigrationScheduler : NSObject

@property (retain, nonatomic) NSDate *currentlyScheduledDate; // ivar: _currentlyScheduledDate
@property (retain, nonatomic) NSDateFormatter *dateFormatter; // ivar: _dateFormatter
@property (weak, nonatomic) NSObject<NCNotificationListMigrationSchedulerDelegate> *delegate; // ivar: _delegate
@property (copy, nonatomic) NSDate *migrationDateForNotificationDigest; // ivar: _migrationDateForNotificationDigest
@property (retain, nonatomic) NSMutableDictionary *migrationDatesForNotificationRequests; // ivar: _migrationDatesForNotificationRequests
@property (retain, nonatomic) PCPersistentTimer *scheduleTimer; // ivar: _scheduleTimer
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *scheduleTimerQueue; // ivar: _scheduleTimerQueue
@property (readonly, copy, nonatomic) NSDate *upcomingScheduledMigrationDate;


-(id)_nextScheduleDateForMigration;
-(id)_notificationRequestMatchingRequest:(id)arg0 ;
-(id)initWithDelegate:(id)arg0 ;
-(void)_handleTimeOrLocaleChange:(id)arg0 ;
-(void)_migrationTimerFiredForTimer:(id)arg0 ;
-(void)_scheduleMigrationTimerForDate:(id)arg0 ;
-(void)_sendDigestMigrationSignalIfNecessary;
-(void)_sendNotificationRequestMigrationSignalIfNecessary;
-(void)_updateMigrationScheduleTimer;
-(void)addMigrationForNotificationRequests:(id)arg0 forDate:(id)arg1 ;
-(void)removeMigrationForNotificationRequest:(id)arg0 ;


@end


#endif