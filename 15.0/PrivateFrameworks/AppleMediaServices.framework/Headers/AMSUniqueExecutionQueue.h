// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef AMSUNIQUEEXECUTIONQUEUE_H
#define AMSUNIQUEEXECUTIONQUEUE_H

@protocol OS_dispatch_queue;

#import <Foundation/Foundation.h>

#import "AMSPromise.h"

@interface AMSUniqueExecutionQueue : NSObject

@property (copy, nonatomic) id *block; // ivar: _block
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *completionCallbacksQueue; // ivar: _completionCallbacksQueue
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *executeBlockQueue; // ivar: _executeBlockQueue
@property (retain, nonatomic) AMSPromise *executionPromise; // ivar: _executionPromise
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *executionPromiseAccessQueue; // ivar: _executionPromiseAccessQueue


-(id)_createExecutionPromise;
-(id)initWithBlock:(id)arg0 ;
-(void)_beginExecutingBlockWithPromise:(id)arg0 ;
-(void)addCompletionBlock:(id)arg0 ;
-(void)addCompletionBlockForSubsequentExecution:(id)arg0 ;


@end


#endif