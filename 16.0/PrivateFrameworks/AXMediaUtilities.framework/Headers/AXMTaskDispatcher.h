// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef AXMTASKDISPATCHER_H
#define AXMTASKDISPATCHER_H

@class NSMutableArray;
@protocol OS_dispatch_source, OS_dispatch_queue, AXMTaskDispatcherDelegate;

#import <Foundation/Foundation.h>


@interface AXMTaskDispatcher : NSObject {
    NSObject<OS_dispatch_source> *_processQueueSource;
    NSObject<OS_dispatch_queue> *_queue;
    NSMutableArray *_queue_taskList;
    BOOL _queue_taskIsBeingProcessed;
}


@property (readonly, nonatomic) NSInteger count;
@property (weak, nonatomic) NSObject<AXMTaskDispatcherDelegate> *delegate; // ivar: _delegate
@property (readonly, nonatomic) BOOL isEmpty;


-(id)_queue_dequeueTask;
-(id)_queue_unscheduleAllTasks;
-(id)initWithIdentifier:(id)arg0 delegate:(id)arg1 ;
-(id)unscheduleAllTasks;
-(void)_queue_processNextTask;
-(void)_queue_scheduleTask:(id)arg0 ;
-(void)scheduleTask:(id)arg0 ;


@end


#endif