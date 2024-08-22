// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef HDMEDICATIONSCHEDULECONTROLSERVER_H
#define HDMEDICATIONSCHEDULECONTROLSERVER_H

@class HDStandardTaskServer;
@protocol HDMedicationScheduleObserver;



@interface HDMedicationScheduleControlServer : HDStandardTaskServer <HDMedicationScheduleObserver>

 {
    os_unfair_lock_s _lock;
    BOOL _shouldObserveChanges;
}


@property (copy, nonatomic) id *hkt_willTriggerNanoSyncHandler; // ivar: _hkt_willTriggerNanoSyncHandler


+(BOOL)validateConfiguration:(id)arg0 client:(id)arg1 error:(*id)arg2 ;
+(Class)configurationClass;
+(id)createTaskServerWithUUID:(id)arg0 configuration:(id)arg1 client:(id)arg2 delegate:(id)arg3 error:(*id)arg4 ;
+(id)taskIdentifier;
-(BOOL)insertMedicationScheduleItems:(id)arg0 error:(*id)arg1 ;
-(id)exportedInterface;
-(id)initWithUUID:(id)arg0 configuration:(id)arg1 client:(id)arg2 delegate:(id)arg3 ;
-(id)remoteInterface;
-(void)remote_deleteSchedule:(id)arg0 completion:(id)arg1 ;
-(void)remote_fetchAllSchedulesWithCompletion:(id)arg0 ;
-(void)remote_fetchScheduleWithMedicationIdentifier:(id)arg0 completion:(id)arg1 ;
-(void)remote_observeMedicationScheduleChanges:(BOOL)arg0 completion:(id)arg1 ;
-(void)remote_rescheduleMedicationsWithCompletion:(id)arg0 ;
-(void)remote_saveSchedule:(id)arg0 completion:(id)arg1 ;
-(void)remote_saveScheduleItems:(id)arg0 completion:(id)arg1 ;
-(void)remote_updateNotificationSent:(BOOL)arg0 scheduleItemIdentifier:(id)arg1 completion:(id)arg2 ;
-(void)remote_updateSchedulesToLocalTimeZoneAndMaintainCalendarDatesAndTimes:(BOOL)arg0 completion:(id)arg1 ;
-(void)scheduleManager:(id)arg0 didPruneScheduleItems:(id)arg1 ;
-(void)scheduleManagerDidRescheduleMedications:(id)arg0 ;


@end


#endif