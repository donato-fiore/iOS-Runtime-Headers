// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef HDSPSLEEPEVENTSCHEDULER_H
#define HDSPSLEEPEVENTSCHEDULER_H

@class NSString, HKSPObserverSet, NSHashTable, NSDate, HKSPSleepEvent, HKSPThrottler;
@protocol HDSPEventScheduleDelegate, HDSPSleepScheduleModelObserver, HDSPTimeChangeObserver, HDSPSleepEventDelegate, HDSPDiagnosticsProvider, HDSPEnvironmentAware, HDSPEventScheduler;

#import <Foundation/Foundation.h>

#import "HDSPEnvironment.h"
#import "HDSPSleepEventList.h"

@interface HDSPSleepEventScheduler : NSObject <HDSPEventScheduleDelegate, HDSPSleepScheduleModelObserver, HDSPTimeChangeObserver, HDSPSleepEventDelegate, HDSPDiagnosticsProvider, HDSPEnvironmentAware>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, weak, nonatomic) HDSPEnvironment *environment; // ivar: _environment
@property (readonly, nonatomic) HKSPObserverSet *eventHandlers; // ivar: _eventHandlers
@property (readonly, nonatomic) NSHashTable *eventProviders; // ivar: _eventProviders
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) NSDate *lastEventTriggerDate;
@property (retain, nonatomic) HKSPSleepEvent *lastStandardSleepEvent; // ivar: _lastStandardSleepEvent
@property (readonly, nonatomic) NSHashTable *pendingEventProviders; // ivar: _pendingEventProviders
@property (readonly, nonatomic) os_unfair_lock_s scheduleLock; // ivar: _scheduleLock
@property (readonly, nonatomic) NSObject<HDSPEventScheduler> *scheduler; // ivar: _scheduler
@property (readonly, nonatomic) HDSPSleepEventList *sleepEvents; // ivar: _sleepEvents
@property (readonly) Class superclass;
@property (readonly, nonatomic) HKSPThrottler *throttler; // ivar: _throttler


-(BOOL)_lock_shouldScheduleEvents;
-(BOOL)_shouldNotifyHandler:(id)arg0 forEvent:(id)arg1 ;
-(id)_allSleepEvents;
-(id)diagnosticDescription;
-(id)diagnosticInfo;
-(id)initWithEnvironment:(id)arg0 ;
// -(id)initWithEnvironment:(id)arg0 schedulerProvider:(id)arg1 throttlerProvider:(unk)arg2  ;
-(void)_loadLastStandardSleepEvent;
-(void)_lock_rescheduleEvents;
-(void)_lock_scheduledEventIsDue;
-(void)_lock_updateLastStandardSleepEvent:(id)arg0 ;
-(void)_schedulePendingEvents;
-(void)_withLock:(id)arg0 ;
-(void)addEventHandler:(id)arg0 ;
-(void)addEventProvider:(id)arg0 ;
-(void)environmentDidBecomeReady:(id)arg0 ;
-(void)environmentWillBecomeReady:(id)arg0 ;
-(void)eventProviderCancelledEvents:(id)arg0 ;
-(void)eventProviderHasUpcomingEvents:(id)arg0 ;
-(void)removeEventHandler:(id)arg0 ;
-(void)removeEventProvider:(id)arg0 ;
-(void)rescheduleEvents;
-(void)scheduledEventIsDue;
-(void)significantTimeChangeDetected:(id)arg0 ;
-(void)sleepScheduleModelManager:(id)arg0 didUpdateSleepScheduleModel:(id)arg1 ;


@end


#endif