// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef HDCLOUDSYNCMANAGERTASKQUEUE_H
#define HDCLOUDSYNCMANAGERTASKQUEUE_H

@class NSMutableArray;
@protocol HDCloudSyncManagerTaskQueueDelegate;

#import <Foundation/Foundation.h>

#import "HDCloudSyncManagerTask.h"

@interface HDCloudSyncManagerTaskQueue : NSObject {
    os_unfair_lock_s _lock;
    NSMutableArray *_pendingTasks;
    NSInteger _pendingTasksBeingSorted;
    BOOL _isComputingActiveTask;
    BOOL _isStartingNextTask;
    HDCloudSyncManagerTask *_activeTask;
}


@property (readonly) HDCloudSyncManagerTask *activeTask;
@property (weak) NSObject<HDCloudSyncManagerTaskQueueDelegate> *delegate; // ivar: _delegate
@property (readonly) BOOL hasActiveTask;
@property (readonly) NSInteger pendingTaskCount;


-(id)initWithDelegate:(id)arg0 ;
-(void)addTask:(id)arg0 ;


@end


#endif