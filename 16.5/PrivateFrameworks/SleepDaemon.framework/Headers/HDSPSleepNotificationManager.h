// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef HDSPSLEEPNOTIFICATIONMANAGER_H
#define HDSPSLEEPNOTIFICATIONMANAGER_H

@class NSString, NSArray;
@protocol HDSPGoodMorningAlertObserver, HDSPEnvironmentAware, HDSPSleepEventHandler, HDSPSleepEventProvider, HDSPSleepScheduleModelObserver, HDSPSleepActionObserver, HDSPSleepNotificationPublisher, HDSPSleepScheduleStateObserver, HDSPTimeChangeObserver, HDSPSleepEventDelegate;

#import <Foundation/Foundation.h>

#import "HDSPEnvironment.h"

@interface HDSPSleepNotificationManager : NSObject <HDSPGoodMorningAlertObserver, HDSPEnvironmentAware, HDSPSleepEventHandler, HDSPSleepEventProvider, HDSPSleepScheduleModelObserver, HDSPSleepActionObserver, HDSPSleepNotificationPublisher, HDSPSleepScheduleStateObserver, HDSPTimeChangeObserver>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, weak, nonatomic) HDSPEnvironment *environment; // ivar: _environment
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) NSArray *notificationPublishers; // ivar: _notificationPublishers
@property (readonly, copy, nonatomic) NSString *providerIdentifier;
@property (weak, nonatomic) NSObject<HDSPSleepEventDelegate> *sleepEventDelegate; // ivar: _sleepEventDelegate
@property (readonly) Class superclass;


-(BOOL)_bedtimeOrWindDownNotificationsEnabled;
-(id)_bedtimeNotificationEventAfterDate:(id)arg0 ;
-(id)_sleepScheduleModel;
-(id)_windDownNotificationEventAfterDate:(id)arg0 ;
-(id)eventIdentifiers;
-(id)initWithEnvironment:(id)arg0 ;
-(id)initWithEnvironment:(id)arg0 notificationPublishers:(id)arg1 ;
-(id)upcomingEventsDueAfterDate:(id)arg0 ;
-(void)_bedtimeOrWindDownNotificationEventIsDue:(id)arg0 ;
-(void)_rescheduleEvents;
-(void)_tearDownBedtimeReminder;
-(void)_tearDownChargingReminder;
-(void)_tearDownMorningNotification;
-(void)_tearDownWakeDetectionNotification;
-(void)_tearDownWindDownReminder;
-(void)bedtimeReminderWasConfirmed;
-(void)bedtimeReminderWasDismissed;
-(void)dismissAlertForGoodMorning;
-(void)environmentDidBecomeReady:(id)arg0 ;
-(void)environmentWillBecomeReady:(id)arg0 ;
-(void)goodMorningWasDismissed;
-(void)presentAlertForGoodMorning;
-(void)publishNotificationForEvent:(id)arg0 userInfo:(id)arg1 ;
-(void)significantTimeChangeDetected:(id)arg0 ;
-(void)sleepEventIsDue:(id)arg0 ;
-(void)sleepScheduleModelManager:(id)arg0 didUpdateSleepSchedule:(id)arg1 ;
-(void)sleepScheduleStateDidChange:(NSUInteger)arg0 previousState:(NSUInteger)arg1 reason:(NSUInteger)arg2 ;
-(void)tearDownNotificationForEventIdentifier:(id)arg0 ;
-(void)tearDownNotifications;
-(void)wakeNotificationWasConfirmed;
-(void)wakeNotificationWasDismissed;


@end


#endif