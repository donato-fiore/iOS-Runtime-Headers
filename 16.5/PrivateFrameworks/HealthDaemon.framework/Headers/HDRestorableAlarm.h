// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef HDRESTORABLEALARM_H
#define HDRESTORABLEALARM_H

@class NSMutableSet, NSString, HDXPCAlarm;
@protocol HDDiagnosticObject, OS_dispatch_queue;

#import <Foundation/Foundation.h>

#import "HDRestorableAlarmScheduler.h"

@interface HDRestorableAlarm : NSObject <HDDiagnosticObject>

 {
    os_unfair_lock_s _lock;
    NSObject<OS_dispatch_queue> *_eventHandlerQueue;
    HDRestorableAlarmScheduler *_scheduler;
    id *_eventsHandler;
    NSMutableSet *_outstandingEventIdentifiers;
}


@property (readonly, copy, nonatomic) NSString *clientIdentifier; // ivar: _clientIdentifier
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;
@property (readonly, nonatomic) HDXPCAlarm *systemScheduler;


-(BOOL)removeAllEventsWithError:(*id)arg0 ;
-(BOOL)removeEvents:(id)arg0 error:(*id)arg1 ;
-(BOOL)replaceAllScheduledEventsWithEvents:(id)arg0 error:(*id)arg1 ;
-(BOOL)scheduleEvents:(id)arg0 error:(*id)arg1 ;
-(id)allScheduledEventsWithError:(*id)arg0 ;
-(id)diagnosticDescription;
-(id)eventWithIdentifier:(id)arg0 dueDate:(id)arg1 eventOptions:(NSUInteger)arg2 ;
-(id)eventWithIdentifier:(id)arg0 dueDateComponents:(id)arg1 eventOptions:(NSUInteger)arg2 ;
-(id)initWithProfile:(id)arg0 clientIdentifier:(id)arg1 eventHandlerQueue:(id)arg2 ;
-(void)beginReceivingEventsWithHandler:(id)arg0 ;
-(void)checkForDueEventsWithCompletion:(id)arg0 ;
-(void)eventsDidFire:(id)arg0 ;
-(void)invalidate;


@end


#endif