// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef HKMEDICATIONSCHEDULECONTROL_H
#define HKMEDICATIONSCHEDULECONTROL_H

@class HKTaskServerProxyProvider, HKObserverSet<HKMedicationScheduleControlObserver>, NSString;
@protocol _HKXPCExportable, HKMedicationScheduleControlClient;

#import <Foundation/Foundation.h>


@interface HKMedicationScheduleControl : NSObject <_HKXPCExportable, HKMedicationScheduleControlClient>

 {
    HKTaskServerProxyProvider *_proxyProvider;
    HKObserverSet<HKMedicationScheduleControlObserver> *_observers;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;
@property (copy, nonatomic) id *unitTesting_didChangeObserverRegistration; // ivar: _unitTesting_didChangeObserverRegistration


+(id)clientInterface;
+(id)serverInterface;
+(id)taskIdentifier;
-(BOOL)_synchronouslyRegisterToObserveMedicationScheduleChangesWithError:(*id)arg0 ;
-(id)exportedInterface;
-(id)initWithHealthStore:(id)arg0 ;
-(id)remoteInterface;
-(void)_callUnitTestHookObserving:(BOOL)arg0 success:(BOOL)arg1 error:(id)arg2 ;
-(void)_handleAutomaticProxyReconnection;
-(void)_notifyObserversAboutReconnect;
-(void)_observeMedicationScheduleChanges:(BOOL)arg0 completion:(id)arg1 ;
-(void)_registerFirstObserver;
-(void)_unregisterLastObserver;
-(void)client_notifyForDidPruneSchduleItems:(id)arg0 ;
-(void)client_notifyForDidRescheduleMedications;
-(void)connectionInvalidated;
-(void)deleteSchedule:(id)arg0 completion:(id)arg1 ;
-(void)fetchAllSchedulesWithCompletion:(id)arg0 ;
-(void)fetchScheduleWithMedicationIdentifier:(id)arg0 completion:(id)arg1 ;
-(void)registerObserver:(id)arg0 queue:(id)arg1 ;
-(void)rescheduleMedicationsWithCompletion:(id)arg0 ;
-(void)saveSchedule:(id)arg0 completion:(id)arg1 ;
-(void)saveScheduleItems:(id)arg0 completion:(id)arg1 ;
-(void)unitTest_noOpWithCompletion:(id)arg0 ;
-(void)unregisterObserver:(id)arg0 ;
-(void)updateNotificationSent:(BOOL)arg0 scheduleItemIdentifier:(id)arg1 completion:(id)arg2 ;
-(void)updateSchedulesToLocalTimeZoneAndMaintainCalendarDatesAndTimes:(BOOL)arg0 completion:(id)arg1 ;


@end


#endif