// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef _DKNEXTALARMFORTOPOFFPROTECTIONMONITOR_H
#define _DKNEXTALARMFORTOPOFFPROTECTIONMONITOR_H

@class DKMonitor, MTAlarmManager, EKEventStore, NSDate;
@protocol OS_os_log;



@interface _DKNextAlarmForTopOffProtectionMonitor : DKMonitor

@property (retain, nonatomic) MTAlarmManager *alarmManager; // ivar: _alarmManager
@property (retain, nonatomic) EKEventStore *eventStore; // ivar: _eventStore
@property (nonatomic) BOOL isPluggedIn; // ivar: _isPluggedIn
@property (retain, nonatomic) NSObject<OS_os_log> *log; // ivar: _log
@property (retain, nonatomic) NSDate *nextEarliestEvent; // ivar: _nextEarliestEvent
@property (nonatomic) int pluggedInToken; // ivar: _pluggedInToken


+(BOOL)shouldMergeUnchangedEvents;
+(id)_eventWithState:(id)arg0 ;
+(id)entitlements;
+(id)eventStream;
-(id)nextAlarm;
-(id)nextCalendarEvent;
-(void)handleAlarmsDidChangeNotification:(id)arg0 ;
-(void)handleCalendarEventsChanged:(id)arg0 ;
-(void)recordNextEvent;
-(void)registerForChanges;
-(void)start;
-(void)stop;
-(void)updateCurrentState;


@end


#endif