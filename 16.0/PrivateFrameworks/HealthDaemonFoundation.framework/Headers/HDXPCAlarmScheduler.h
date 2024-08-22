// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef HDXPCALARMSCHEDULER_H
#define HDXPCALARMSCHEDULER_H

@class NSMapTable, NSMutableSet, NSString;
@protocol HDDiagnosticObject, OS_dispatch_queue;

#import <Foundation/Foundation.h>


@interface HDXPCAlarmScheduler : NSObject <HDDiagnosticObject>

 {
    NSMapTable *_alarms;
    NSMutableSet *_pendingEvents;
    NSObject<OS_dispatch_queue> *_queue;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;
@property (copy, nonatomic) id *unitTest_schedulerObserver; // ivar: _unitTest_schedulerObserver


-(id)diagnosticDescription;
-(id)init;
-(void)_queue_handleEvent:(id)arg0 ;
-(void)_queue_handleXPCEvent:(id)arg0 ;
-(void)_queue_notifyAlarmsOfPendingEvents;
-(void)_queue_scheduleEvent:(id)arg0 ;
-(void)_queue_unscheduleEventWithName:(id)arg0 ;
-(void)addAlarm:(id)arg0 ;
-(void)removeAlarm:(id)arg0 ;
-(void)scheduleEvent:(id)arg0 ;
-(void)unittest_fireEvent:(id)arg0 ;
-(void)unscheduleEventWithName:(id)arg0 ;


@end


#endif