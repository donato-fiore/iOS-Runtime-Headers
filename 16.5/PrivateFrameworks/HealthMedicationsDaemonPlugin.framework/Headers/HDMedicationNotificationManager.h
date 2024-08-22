// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef HDMEDICATIONNOTIFICATIONMANAGER_H
#define HDMEDICATIONNOTIFICATIONMANAGER_H

@class HDProfile, HDRestorableAlarm, NSDate, HKCalendarCache;
@protocol OS_dispatch_queue;

#import <Foundation/Foundation.h>


@interface HDMedicationNotificationManager : NSObject {
    HDProfile *_profile;
    NSObject<OS_dispatch_queue> *_queue;
    HDRestorableAlarm *_restorableAlarm;
    HDRestorableAlarm *_expirationAlarm;
    NSDate *_dateAnchor;
    HKCalendarCache *_calendarCache;
}


@property (copy, nonatomic) id *unitTesting_didAddUNNotificationHandler; // ivar: _unitTesting_didAddUNNotificationHandler
@property (copy, nonatomic) id *unitTesting_didRemoveDeliveredNotification; // ivar: _unitTesting_didRemoveDeliveredNotification
@property (retain, nonatomic) HDRestorableAlarm *unitTesting_expirationAlarm; // ivar: _unitTesting_expirationAlarm
@property (nonatomic) NSObject<OS_dispatch_queue> *unitTesting_expirationAlarmQueue; // ivar: _unitTesting_expirationAlarmQueue
@property (retain, nonatomic) HDRestorableAlarm *unitTesting_restorableAlarm; // ivar: _unitTesting_restorableAlarm
@property (nonatomic) NSObject<OS_dispatch_queue> *unitTesting_restorableAlarmQueue; // ivar: _unitTesting_restorableAlarmQueue


-(BOOL)_rescheduleMedicationsFromDate:(id)arg0 error:(*id)arg1 ;
-(BOOL)rescheduleMedicationsWithError:(*id)arg0 ;
-(BOOL)scheduleMedicationsFromDate:(id)arg0 error:(*id)arg1 ;
-(id)_notInteractedDoseEventsForScheduleItems:(id)arg0 transaction:(id)arg1 ;
-(id)init;
-(id)initWithProfile:(id)arg0 ;
-(id)medicationsAppSourceEntityWithError:(*id)arg0 ;
-(id)pruneAllScheduleItemsBeforeDate:(id)arg0 createDoseEvents:(BOOL)arg1 error:(*id)arg2 ;
-(id)unitTesting_activeSchedulesFromDate:(id)arg0 transaction:(id)arg1 error:(*id)arg2 ;
-(void)_queue_alarm:(id)arg0 didReceiveDueEvents:(id)arg1 ;


@end


#endif