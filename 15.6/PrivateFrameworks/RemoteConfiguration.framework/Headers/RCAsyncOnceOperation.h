// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef RCASYNCONCEOPERATION_H
#define RCASYNCONCEOPERATION_H

@protocol OS_dispatch_group, RCOperationCanceling><RCOperationPrioritizing;

#import <Foundation/Foundation.h>

#import "RCMutexLock.h"

@interface RCAsyncOnceOperation : NSObject

@property (retain, nonatomic) NSObject<OS_dispatch_group> *activeGroup; // ivar: _activeGroup
@property (retain, nonatomic) NSObject<RCOperationCanceling><RCOperationPrioritizing> *activeOperation; // ivar: _activeOperation
@property (nonatomic) BOOL finished; // ivar: _finished
@property (readonly, nonatomic) BOOL finishedExecuting;
@property (readonly, nonatomic) BOOL finishedExecutingWithFailure;
@property (nonatomic) NSUInteger interest; // ivar: _interest
@property (retain, nonatomic) RCMutexLock *lock; // ivar: _lock
@property (nonatomic) NSInteger relativePriority; // ivar: _relativePriority
@property (nonatomic) BOOL succeeded; // ivar: _succeeded
@property (copy, nonatomic) id *workBlock; // ivar: _workBlock


-(id)executeWithCompletionHandler:(id)arg0 ;
-(id)initWithBlock:(id)arg0 ;
-(id)initWithTarget:(id)arg0 selector:(SEL)arg1 ;


@end


#endif