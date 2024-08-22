// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef _EKALARMENGINE_H
#define _EKALARMENGINE_H

@class NSDate, NSTimer, NSDateFormatter, RTRoutineManager, EKTimedEventStorePurger, NSString;
@protocol CLLocationManagerDelegate, OS_dispatch_queue;

#import <Foundation/Foundation.h>


@interface _EKAlarmEngine : NSObject <CLLocationManagerDelegate>

 {
    int _lastDBSequence;
    NSObject<OS_dispatch_queue> *_dispatchQueue;
    NSDate *_nextFireDate;
    NSDate *_lastCheckpoint;
    BOOL _populating;
    NSDate *_populateStart;
    NSTimer *_syncTimer;
    BOOL _pendingChanges;
    BOOL _needsAlarmTablePopulation;
    NSDateFormatter *_dateFormatter;
    RTRoutineManager *_routineManager;
    NSDate *_tomorrow;
    BOOL _shouldUpdateWithForceForAlarmTable;
    EKTimedEventStorePurger *_timedEventStorePurger;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


+(id)requestedDarwinNotifications;
+(id)sharedInstance;
-(BOOL)_haveAlarmsChanged:(id)arg0 ;
-(BOOL)_isAlarmAcknowledgedWithAcknowledgedDate:(id)arg0 fireDate:(id)arg1 ;
-(BOOL)_isDataProtected;
-(BOOL)_populateAlarmTable:(id)arg0 ;
-(id)_alertInfoAlarmIDFromEKAlarm:(id)arg0 ;
-(id)_alertInfoAlarmIDFromSideAlarm:(id)arg0 ;
-(id)_dateFormatter;
-(id)_eventStore;
-(id)init;
-(void)_calendarNotificationSettingChanged;
-(void)_databaseChanged;
-(void)_installTimerWithFireDate:(id)arg0 ;
-(void)_killSyncTimer;
-(void)_killTimer;
-(void)_notifyAlarmsFired:(id)arg0 ;
-(void)_populateFinished;
-(void)_protectedDataDidBecomeAvailable;
-(void)_rescheduleTimer;
-(void)_resetSyncTimer;
-(void)_simulatedOffsetChanged:(id)arg0 ;
-(void)_storeAlarms:(id)arg0 nextScheduleLimit:(id)arg1 eventStore:(id)arg2 ;
-(void)_syncDidEnd;
-(void)_syncDidStart;
-(void)_syncTimerFired:(id)arg0 ;
-(void)_timeDidChangeSignificantly;
-(void)_timeZoneChanged:(id)arg0 ;
-(void)_timerFired;
-(void)_updateWithForceForAlarmTable:(BOOL)arg0 ;
-(void)dealloc;
-(void)didRegisterForAlarms;
-(void)handleDarwinNotification:(id)arg0 ;
-(void)receivedAlarmNamed:(id)arg0 ;
-(void)start;


@end


#endif