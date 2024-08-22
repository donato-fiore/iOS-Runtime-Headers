// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef _OSBATCHINGQUEUE_H
#define _OSBATCHINGQUEUE_H

@class NSMutableArray;
@protocol OS_dispatch_queue, OS_dispatch_source;

#import <Foundation/Foundation.h>


@interface _OSBatchingQueue : NSObject

@property (retain, nonatomic) NSObject<OS_dispatch_queue> *executionQueue; // ivar: _executionQueue
@property (nonatomic) CGFloat maxDelay; // ivar: _maxDelay
@property (nonatomic) NSUInteger maxQueueDepth; // ivar: _maxQueueDepth
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *syncQueue; // ivar: _syncQueue
@property (retain, nonatomic) NSObject<OS_dispatch_source> *timer; // ivar: _timer
@property (copy, nonatomic) id *workHandler; // ivar: _workHandler
@property (retain, nonatomic) NSMutableArray *workItems; // ivar: _workItems


+(id)queueWithName:(id)arg0 maxBatchingDelay:(CGFloat)arg1 maxQueueDepth:(NSUInteger)arg2 queue:(id)arg3 workItemsHandler:(id)arg4 ;
-(id)initWithName:(id)arg0 maxBatchingDelay:(CGFloat)arg1 maxQueueDepth:(NSUInteger)arg2 queue:(id)arg3 workItemsHandler:(id)arg4 ;
-(void)addWorkItem:(id)arg0 ;
-(void)unprotectedExecuteWorkItems;


@end


#endif