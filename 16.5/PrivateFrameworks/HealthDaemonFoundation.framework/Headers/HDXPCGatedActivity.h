// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef HDXPCGATEDACTIVITY_H
#define HDXPCGATEDACTIVITY_H

@class NSMutableArray, NSString;
@protocol OS_xpc_object, OS_os_log;

#import <Foundation/Foundation.h>


@interface HDXPCGatedActivity : NSObject {
    os_unfair_lock_s _lock;
    id *_handler;
    NSObject<OS_xpc_object> *_criteria;
    CGFloat _nextScheduledFireDeadline;
    BOOL _inProgress;
    NSMutableArray *_pendingCompletions;
    CGFloat _nextFireTime;
    NSMutableArray *_nextCompletions;
}


@property (retain) NSObject<OS_xpc_object> *currentActivity; // ivar: _currentActivity
@property (readonly, nonatomic) NSObject<OS_os_log> *loggingCategory; // ivar: _loggingCategory
@property (readonly, copy, nonatomic) NSString *name; // ivar: _name
@property BOOL rescheduleWhileInProgress; // ivar: _rescheduleWhileInProgress
@property (readonly) BOOL shouldDefer;
@property BOOL waitingForTrigger;


-(id)description;
-(id)initWithName:(id)arg0 criteria:(id)arg1 loggingCategory:(id)arg2 handler:(id)arg3 ;
-(void)_activityFinishedWithResult:(NSInteger)arg0 error:(id)arg1 ;
-(void)_handleXPCActivityCallback:(id)arg0 ;
-(void)_lock_resetNextActivityFireDate;
-(void)_lock_setNextScheduledFireDeadline:(CGFloat)arg0 ;
-(void)_performActivity:(id)arg0 completion:(id)arg1 ;
-(void)_registerActivityWithCriteria:(id)arg0 ;
-(void)_registerActivityWithCriteria:(id)arg0 delay:(CGFloat)arg1 ;
-(void)requestRunWithMaximumDelay:(CGFloat)arg0 completion:(id)arg1 ;
-(void)runUngatedWithCompletion:(id)arg0 ;


@end


#endif