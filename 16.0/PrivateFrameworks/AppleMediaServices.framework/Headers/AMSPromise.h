// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef AMSPROMISE_H
#define AMSPROMISE_H

@class NSConditionLock;

#import <Foundation/Foundation.h>

#import "AMSPromiseCompletionBlocks.h"
#import "AMSPromiseResult.h"

@interface AMSPromise : NSObject

@property Promise<PromiseResult> backingPromise; // ivar: _backingPromise
@property (readonly, nonatomic, getter=isCancelled) BOOL cancelled;
@property (retain) AMSPromiseCompletionBlocks *completionBlocks; // ivar: _completionBlocks
@property (readonly, nonatomic, getter=isFinished) BOOL finished;
@property (retain) AMSPromiseResult *promiseResult; // ivar: _promiseResult
@property (retain) NSConditionLock *stateLock; // ivar: _stateLock
@property (readonly, nonatomic, getter=isTimedOut) BOOL timedOut;


+(BOOL)_errorIsCanceledError:(id)arg0 ;
+(BOOL)_errorIsTimeOutError:(id)arg0 ;
+(id)_globalPromiseStorage;
+(id)_globalPromiseStorageAccessQueue;
+(id)promiseFinishedWithDefaultErrorOrResult:(id)arg0 ;
+(id)promiseWithAll:(id)arg0 ;
+(id)promiseWithAll:(id)arg0 timeout:(CGFloat)arg1 ;
+(id)promiseWithAny:(id)arg0 ;
+(id)promiseWithAny:(id)arg0 timeout:(CGFloat)arg1 ;
+(id)promiseWithError:(id)arg0 ;
+(id)promiseWithFlattenedPromises:(id)arg0 ;
+(id)promiseWithPromiseResult:(id)arg0 ;
+(id)promiseWithResult:(id)arg0 ;
+(id)promiseWithSome:(id)arg0 ;
+(id)promiseWithSome:(id)arg0 timeout:(CGFloat)arg1 ;
+(id)unwrappedPromiseWithPromise:(id)arg0 ;
+(void)_configureFlattenedPromise:(id)arg0 withPromises:(id)arg1 results:(id)arg2 previousError:(id)arg3 currentPromiseIndex:(NSUInteger)arg4 ;
+(void)_enumeratePromises:(id)arg0 startingAt:(NSInteger)arg1 block:(id)arg2 ;
-(BOOL)cancel;
-(BOOL)finishWithError:(id)arg0 ;
-(BOOL)finishWithPromise:(id)arg0 ;
-(BOOL)finishWithPromiseResult:(id)arg0 ;
-(BOOL)finishWithResult:(id)arg0 ;
-(BOOL)finishWithResult:(id)arg0 error:(id)arg1 ;
-(id)binaryPromiseAdapter;
-(id)boolCompletionHandlerAdapter:(SEL)arg0 ;
-(id)catchWithBlock:(id)arg0 ;
-(id)completionHandlerAdapter:(SEL)arg0 ;
-(id)continueWithBlock:(id)arg0 ;
-(id)errorOnlyCompletionHandlerAdapter:(SEL)arg0 ;
-(id)init;
-(id)initWithTimeout:(CGFloat)arg0 ;
-(id)mutablePromiseAdapter;
-(id)nilValueCompletionHandlerAdapter:(SEL)arg0 ;
-(id)promiseWithTimeout:(CGFloat)arg0 ;
-(id)resultBeforeDate:(id)arg0 error:(*id)arg1 ;
-(id)resultWithError:(*id)arg0 ;
-(id)resultWithTimeout:(CGFloat)arg0 error:(*id)arg1 ;
-(id)thenWithBlock:(id)arg0 ;
// -(void)_addBlock:(id)arg0 orCallWithResult:(unk)arg1  ;
-(void)addErrorBlock:(id)arg0 ;
-(void)addFinishBlock:(id)arg0 ;
-(void)addSuccessBlock:(id)arg0 ;
-(void)resultBeforeDate:(id)arg0 completion:(id)arg1 ;
-(void)resultWithCompletion:(id)arg0 ;
-(void)resultWithTimeout:(CGFloat)arg0 completion:(id)arg1 ;
-(void)waitUntilFinished;
-(void)waitUntilFinishedWithTimeout:(CGFloat)arg0 ;


@end


#endif