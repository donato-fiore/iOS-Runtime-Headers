// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PXPRELOADSCHEDULER_H
#define PXPRELOADSCHEDULER_H

@class NSMutableArray;
@protocol OS_dispatch_queue, OS_dispatch_group;

#import <Foundation/Foundation.h>

#import "PXDisplayLink.h"

@interface PXPreloadScheduler : NSObject {
    NSObject<OS_dispatch_queue> *_utilityQueue;
    NSObject<OS_dispatch_queue> *_backgroundQueue;
    NSObject<OS_dispatch_group> *_pendingUtilityTasks;
    PXDisplayLink *_displayLink;
    CGFloat _waitStartTime;
    BOOL _shouldIgnoreDisplayLinkTimestamps;
    NSMutableArray *_pendingBlocks;
    *__CFRunLoopObserver _runloopObserver;
}


@property (nonatomic, setter=_setActive:) BOOL _isActive; // ivar: __isActive


+(id)sharedScheduler;
-(BOOL)_shouldExecutePendingBlock;
-(id)init;
-(void)_didExecuteTaskWithQoS:(NSUInteger)arg0 ;
-(void)_displayLinkTick:(id)arg0 ;
-(void)_runLoopWillStartWaiting;
-(void)_updateIsActive;
-(void)_willScheduleTaskWithQoS:(NSUInteger)arg0 ;
-(void)dealloc;
-(void)scheduleDeferredTaskWithQoS:(NSUInteger)arg0 block:(id)arg1 ;
-(void)scheduleMainQueueTask:(id)arg0 ;
-(void)scheduleMainQueueTaskAndWait:(id)arg0 ;
-(void)scheduleTaskAfterCATransactionCommits:(id)arg0 ;
-(void)scheduleTaskWithQoS:(NSUInteger)arg0 block:(id)arg1 ;


@end


#endif