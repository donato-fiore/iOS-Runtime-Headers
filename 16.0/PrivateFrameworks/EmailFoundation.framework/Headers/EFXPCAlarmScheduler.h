// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef EFXPCALARMSCHEDULER_H
#define EFXPCALARMSCHEDULER_H

@class NSMapTable, NSMutableSet;
@protocol OS_dispatch_queue;

#import <Foundation/Foundation.h>


@interface EFXPCAlarmScheduler : NSObject {
    NSMapTable *_alarms;
    NSMutableSet *_pendingEvents;
    NSObject<OS_dispatch_queue> *_queue;
}


@property (copy, nonatomic) id *test_schedulerObserver; // ivar: _test_schedulerObserver


+(id)log;
-(id)_init;
-(id)debugDescription;
-(id)description;
-(id)ef_publicDescription;
-(id)initForTesting;
-(id)initGlobalInstance;
-(void)_queue_handleEvent:(id)arg0 ;
-(void)_queue_handleXPCEvent:(id)arg0 ;
-(void)_queue_notifyAlarmsOfPendingEvents;
-(void)_queue_scheduleEvent:(id)arg0 ;
-(void)_queue_unscheduleEventWithName:(id)arg0 ;
-(void)addAlarm:(id)arg0 ;
-(void)removeAlarm:(id)arg0 ;
-(void)scheduleEvent:(id)arg0 ;
-(void)test_fireEvent:(id)arg0 ;
-(void)unscheduleEventWithName:(id)arg0 ;


@end


#endif