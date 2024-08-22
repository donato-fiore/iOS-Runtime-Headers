// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef NUSCHEDULEDQUEUE_H
#define NUSCHEDULEDQUEUE_H

@class NSMutableArray;
@protocol OS_dispatch_queue, OS_dispatch_source;

#import <Foundation/Foundation.h>


@interface NUScheduledQueue : NSObject {
    NSObject<OS_dispatch_queue> *_queue;
    NSObject<OS_dispatch_source> *_timer;
    NSMutableArray *_items;
}


@property CGFloat timerCoalesce; // ivar: _timerCoalesce
@property CGFloat timerLeeway; // ivar: _timerLeeway


-(id)init;
-(void)_dispatchItemsThrough:(NSUInteger)arg0 ;
-(void)_scheduleTimer:(NSUInteger)arg0 ;
-(void)_startTimer;
-(void)_stopTimer;
-(void)_timerFired;
-(void)dealloc;
-(void)dispatchAfter:(CGFloat)arg0 queue:(id)arg1 block:(id)arg2 ;
-(void)dispatchAt:(NSUInteger)arg0 queue:(id)arg1 block:(id)arg2 ;


@end


#endif