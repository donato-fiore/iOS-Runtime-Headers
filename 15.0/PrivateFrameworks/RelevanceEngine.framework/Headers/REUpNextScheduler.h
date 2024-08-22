// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef REUPNEXTSCHEDULER_H
#define REUPNEXTSCHEDULER_H

@protocol OS_dispatch_queue;

#import <Foundation/Foundation.h>


@interface REUpNextScheduler : NSObject {
    BOOL _updateScheduled;
    os_unfair_lock_s _scheduledLock;
    NSObject<OS_dispatch_queue> *_originalQueue;
}


@property (readonly, nonatomic) CGFloat delay; // ivar: _delay
@property (readonly, nonatomic) BOOL isScheduled;
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *queue; // ivar: _queue
@property (readonly, copy, nonatomic) id *updateBlock; // ivar: _updateBlock
@property (readonly, copy, nonatomic) id *updateCompletionBlock; // ivar: _updateCompletionBlock


+(id)schedulerWithQueue:(id)arg0 delay:(CGFloat)arg1 updateBlock:(id)arg2 ;
+(id)schedulerWithQueue:(id)arg0 delay:(CGFloat)arg1 updateCompletionBlock:(id)arg2 ;
+(id)schedulerWithQueue:(id)arg0 updateBlock:(id)arg1 ;
-(BOOL)performImmediately;
// -(id)initWithQueue:(id)arg0 delay:(CGFloat)arg1 updateBlock:(id)arg2 updateCompletionBlock:(unk)arg3  ;
-(void)dealloc;
-(void)schedule;


@end


#endif