// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef CKCONTEXTEXECUTOR_H
#define CKCONTEXTEXECUTOR_H

@class NSCondition;
@protocol OS_dispatch_queue, OS_dispatch_group;

#import <Foundation/Foundation.h>


@interface CKContextExecutor : NSObject {
    NSObject<OS_dispatch_queue> *_workItemQueue;
    NSObject<OS_dispatch_queue> *_completionQueue;
    NSObject<OS_dispatch_group> *_group;
    NSUInteger _timeoutAfter;
    NSCondition *_completionCondition;
    id *_completionHandler;
}


@property (readonly, weak, nonatomic) id *context; // ivar: _context
@property (readonly) uint8_t done; // ivar: _done


-(id)initWithContext:(id)arg0 workItemQueue:(id)arg1 completionQueue:(id)arg2 timeoutAfter:(NSUInteger)arg3 completionHandler:(id)arg4 ;
-(void)_awaitCompletion;
-(void)addWorkItem:(id)arg0 ;
// -(void)addWorkItem:(id)arg0 toQueue:(unk)arg1  ;
// -(void)addWorkItem:(id)arg0 withContext:(unk)arg1  ;
// -(void)addWorkItemToQueue:(id)arg0 withWorkItem:(id)arg1 andContext:(unk)arg2  ;
-(void)dealloc;
-(void)markIncomplete;
-(void)markReady;
-(void)markReadyAndAwaitCompletion;


@end


#endif