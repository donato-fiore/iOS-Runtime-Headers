// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef HDMEDICATIONSCHEDULEMANAGER_H
#define HDMEDICATIONSCHEDULEMANAGER_H

@class HDProfile, HKObserverSet<HDMedicationScheduleObserver>, HDXPCGatedActivity, HDAssertion, NSNumber;
@protocol HDProfileReadyObserver, OS_dispatch_queue;

#import <Foundation/Foundation.h>

#import "HDMedicationNotificationManager.h"
#import "HDMedicationTimeZoneManager.h"

@interface HDMedicationScheduleManager : NSObject <HDProfileReadyObserver>

 {
    HDProfile *_profile;
    NSObject<OS_dispatch_queue> *_queue;
    HKObserverSet<HDMedicationScheduleObserver> *_observers;
    HDMedicationNotificationManager *_notificationManager;
    HDMedicationTimeZoneManager *_timeZoneManager;
    HDXPCGatedActivity *_gatedRescheduleActivity;
    NSInteger _gatedRescheduleRetryCount;
    BOOL _gatedRescheduleRetryAbort;
    HDAssertion *_accessibilityAssertion;
    os_unfair_lock_s _lock;
}


@property (retain, nonatomic) NSNumber *_unitTesting_activity_result; // ivar: __unitTesting_activity_result
@property (readonly, nonatomic) NSInteger _unitTesting_gatedRescheduleRetryCount;
@property (readonly, nonatomic) HDMedicationNotificationManager *notificationManager;
@property (copy, nonatomic) id *unitTesting_willTriggerGatedActivity; // ivar: _unitTesting_willTriggerGatedActivity


-(BOOL)_updateSchedulesToTimeZone:(id)arg0 maintainCalendarDatesAndTimes:(BOOL)arg1 error:(*id)arg2 ;
-(BOOL)deleteMedicationSchedule:(id)arg0 error:(*id)arg1 ;
-(BOOL)insertMedicationSchedule:(id)arg0 error:(*id)arg1 ;
-(BOOL)insertMedicationSchedules:(id)arg0 error:(*id)arg1 ;
-(BOOL)insertMedicationSchedules:(id)arg0 syncProvenance:(NSInteger)arg1 error:(*id)arg2 ;
-(BOOL)medicationSchedule:(*id)arg0 identifier:(id)arg1 error:(*id)arg2 ;
-(BOOL)medicationSchedule:(*id)arg0 medicationIdentifier:(id)arg1 error:(*id)arg2 ;
-(BOOL)pruneAllScheduleItemsBeforeDate:(id)arg0 createDoseEvents:(BOOL)arg1 error:(*id)arg2 ;
-(BOOL)rescheduleMedicationsWithError:(*id)arg0 ;
-(BOOL)scheduleMedicationsFromDate:(id)arg0 error:(*id)arg1 ;
-(BOOL)updateNotificationSent:(BOOL)arg0 scheduleItemIdentifier:(id)arg1 error:(*id)arg2 ;
-(BOOL)updateSchedulesToLocalTimeZoneAndMaintainCalendarDatesAndTimes:(BOOL)arg0 error:(*id)arg1 ;
-(id)deletedSchedulesWithError:(*id)arg0 ;
-(id)initWithProfile:(id)arg0 ;
-(id)medicationSchedulesWithError:(*id)arg0 ;
-(id)medicationSchedulesWithPredicate:(id)arg0 transaction:(id)arg1 error:(*id)arg2 ;
-(void)dealloc;
-(void)profileDidBecomeReady:(id)arg0 ;
-(void)registerObserver:(id)arg0 queue:(id)arg1 ;
-(void)rescheduleMedicationsWithSyncProvenance:(NSInteger)arg0 ;
-(void)triggerGatedRescheduleWithMaximumDelay:(CGFloat)arg0 completion:(id)arg1 ;
-(void)unregisterObserver:(id)arg0 ;


@end


#endif