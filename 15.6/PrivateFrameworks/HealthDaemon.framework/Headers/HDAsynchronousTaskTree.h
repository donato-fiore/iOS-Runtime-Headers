// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef HDASYNCHRONOUSTASKTREE_H
#define HDASYNCHRONOUSTASKTREE_H

@class NSMutableArray, NSArray, NSString;
@protocol OS_dispatch_queue;

#import <Foundation/Foundation.h>


@interface HDAsynchronousTaskTree : NSObject {
    NSObject<OS_dispatch_queue> *_queue;
    NSMutableArray *_queue_pendingTasks;
    NSMutableArray *_queue_pendingSubtasks;
    NSMutableArray *_queue_taskErrors;
    uint8_t _canceled;
    uint8_t _rejectAddTask;
    BOOL _queue_started;
    BOOL _queue_finished;
    id *_queue_completion;
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