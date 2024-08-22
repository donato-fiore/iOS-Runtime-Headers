// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef HDASYNCHRONOUSTASKTREE_H
#define HDASYNCHRONOUSTASKTREE_H

@class NSMutableArray, NSArray, NSString;
@protocol OS_dispatch_queue;

#import <Foundation/Foundation.h>


@interface HDAsynchronousTaskTree : NSObject {
    os_unfair_lock_s _lock;
    NSMutableArray *_lock_pendingTasks;
    NSMutableArray *_lock_pendingSubtasks;
    NSMutableArray *_lock_taskErrors;
    uint8_t _canceled;
    uint8_t _rejectAddTask;
    BOOL _lock_started;
    BOOL _lock_finished;
    id *_lock_completion;
    NSObject<OS_dispatch_queue> *_default_task_queue;
}


@property (readonly, nonatomic) NSArray *allErrors;
@property (readonly, copy, nonatomic) NSString *groupDescription; // ivar: _groupDescription


-(id)description;
-(id)initWithDescription:(id)arg0 completion:(id)arg1 ;
-(void)addCheckpointTask:(id)arg0 ;
-(void)addCheckpointTaskOnQueue:(id)arg0 task:(id)arg1 ;
-(void)addTask:(id)arg0 ;
-(void)addTaskOnQueue:(id)arg0 task:(id)arg1 ;
-(void)addTaskOnQueue:(id)arg0 timeout:(CGFloat)arg1 task:(id)arg2 ;
-(void)addTaskWithTimeout:(CGFloat)arg0 task:(id)arg1 ;
-(void)begin;
-(void)cancel;


@end


#endif