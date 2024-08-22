// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef ATEVENTSCHEDULER_H
#define ATEVENTSCHEDULER_H

@class NSMutableDictionary;
@protocol OS_dispatch_queue;

#import <Foundation/Foundation.h>


@interface ATEventScheduler : NSObject {
    NSMutableDictionary *_events;
    NSObject<OS_dispatch_queue> *_queue;
    NSObject<OS_dispatch_queue> *_eventAccessQueue;
    BOOL _started;
}




+(id)sharedInstance;
-(BOOL)hasScheduledEvent:(id)arg0 ;
-(id)init;
-(void)_postExpiredEvents;
-(void)_scheduleNextEvent;
-(void)removeEvent:(id)arg0 ;
-(void)scheduleEvent:(id)arg0 afterDelay:(CGFloat)arg1 withUserData:(id)arg2 ;
-(void)scheduleRecurringEvent:(id)arg0 withInterval:(CGFloat)arg1 afterDelay:(CGFloat)arg2 withUserData:(id)arg3 ;
-(void)start;


@end


#endif