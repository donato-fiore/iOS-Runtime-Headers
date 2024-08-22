// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef _CNBLOCKFUTUREIMPL_H
#define _CNBLOCKFUTUREIMPL_H

@class NSString, NSConditionLock;
@protocol CNFutureImpl;

#import <Foundation/Foundation.h>

#import "CNFutureResult.h"
#import "CNSuspendableSchedulerDecorator.h"

@interface _CNBlockFutureImpl : NSObject <CNFutureImpl>

 {
    CNFutureResult *_futureResult;
    BOOL _queueSuspended;
}


@property (readonly, nonatomic) CNSuspendableSchedulerDecorator *blockScheduler; // ivar: _blockScheduler
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) NSConditionLock *stateLock; // ivar: _stateLock
@property (readonly) Class superclass;
@property (nonatomic) BOOL workBlockScheduled; // ivar: _workBlockScheduled


+(id)implWithBlock:(id)arg0 ;
+(id)implWithSchedulerProvider:(id)arg0 block:(id)arg1 ;
+(id)lazyImplWithBlock:(id)arg0 ;
+(id)lazyImplWithSchedulerProvider:(id)arg0 block:(id)arg1 ;
-(BOOL)_nts_isFinished;
-(BOOL)cancel;
-(BOOL)finishWithResult:(id)arg0 error:(id)arg1 ;
-(BOOL)isCancelled;
-(BOOL)isFinished;
-(BOOL)nts_isFinished;
-(BOOL)nts_mayResumeQueue;
-(id)futureResult;
-(id)futureResultFromAsynchronousLookupBeforeDate:(id)arg0 error:(*id)arg1 ;
-(id)futureResultFromImmediateLookup;
-(id)init;
-(id)initWithSchedulerProvider:(id)arg0 ;
-(id)resultBeforeDate:(id)arg0 error:(*id)arg1 ;
-(void)_flushCompletionBlocks;
-(void)addFailureBlock:(id)arg0 ;
-(void)addSuccessBlock:(id)arg0 ;
-(void)addWriterBlock:(id)arg0 ;
-(void)dealloc;
-(void)implicitlyResumeQueue;
-(void)nts_resumeQueue;
-(void)resumeQueue;
-(void)updateDescriptionWithBuilder:(id)arg0 ;


@end


#endif