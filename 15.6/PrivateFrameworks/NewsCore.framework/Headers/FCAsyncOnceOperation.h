// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef FCASYNCONCEOPERATION_H
#define FCASYNCONCEOPERATION_H

@class NFMutexLock;
@protocol OS_dispatch_group, FCOperationCanceling><FCOperationPrioritizing;

#import <Foundation/Foundation.h>


@interface FCAsyncOnceOperation : NSObject {
    BOOL _finished;
    BOOL _succeeded;
    id *_workBlock;
    NSUInteger _interest;
    NSObject<OS_dispatch_group> *_activeGroup;
    id<FCOperationCanceling><FCOperationPrioritizing> *_activeOperation;
    NSInteger _relativePriority;
    NFMutexLock *_lock;
}


@property (readonly, nonatomic) BOOL finishedExecuting;
@property (readonly, nonatomic) BOOL finishedExecutingWithFailure;


-(id)executeWithCallbackQueue:(id)arg0 completionHandler:(id)arg1 ;
-(id)executeWithCompletionHandler:(id)arg0 ;
-(id)initWithBlock:(id)arg0 ;
-(id)initWithTarget:(id)arg0 selector:(SEL)arg1 ;
-(void)setRelativePriority:(NSInteger)arg0 ;


@end


#endif