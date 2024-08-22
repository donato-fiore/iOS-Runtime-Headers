// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef SSPROMISE_H
#define SSPROMISE_H

@class NSConditionLock;

#import <Foundation/Foundation.h>

#import "SSPromiseCompletionBlocks.h"
#import "SSPromiseResult.h"

@interface SSPromise : NSObject

@property (readonly, nonatomic, getter=isCancelled) BOOL cancelled;
@property (retain, nonatomic) SSPromiseCompletionBlocks *completionBlocks; // ivar: _completionBlocks
@property (readonly, nonatomic, getter=isFinished) BOOL finished;
@property (retain, nonatomic) SSPromiseResult *promiseResult; // ivar: _promiseResult
@property (retain, nonatomic) NSConditionLock *stateLock; // ivar: _stateLock


+(BOOL)_errorIsCanceledError:(id)arg0 ;
+(id)_globalPromiseStorage;
+(id)_globalPromiseStorageAccessQueue;
+(id)promiseWithAll:(id)arg0 ;
+(id)promiseWithAny:(id)arg0 ;
+(id)promiseWithError:(id)arg0 ;
+(id)promiseWithResult:(id)arg0 ;
+(void)_configureAllPromise:(id)arg0 withResults:(id)arg1 promises:(id)arg2 currentPromiseIndex:(NSUInteger)arg3 ;
+(void)_configureAnyPromise:(id)arg0 withPomises:(id)arg1 currentPromiseIndex:(NSUInteger)arg2 ;
+(void)_finishPromise:(id)arg0 withPromise:(id)arg1 ;
-(BOOL)cancel;
-(BOOL)finishWithError:(id)arg0 ;
-(BOOL)finishWithResult:(id)arg0 ;
-(BOOL)finishWithResult:(id)arg0 error:(id)arg1 ;
-(id)boolCompletionHandlerAdapter:(SEL)arg0 ;
-(id)catchWithBlock:(id)arg0 ;
-(id)completionHandlerAdapter:(SEL)arg0 ;
-(id)errorOnlyCompletionHandlerAdapter:(SEL)arg0 ;
-(id)init;
-(id)nilValueCompletionHandlerAdapter:(SEL)arg0 ;
-(id)resultBeforeDate:(id)arg0 error:(*id)arg1 ;
-(id)resultWithError:(*id)arg0 ;
-(id)resultWithTimeout:(CGFloat)arg0 error:(*id)arg1 ;
-(id)thenWithBlock:(id)arg0 ;
// -(void)_addBlock:(id)arg0 orCallWithResult:(unk)arg1  ;
-(void)addErrorBlock:(id)arg0 ;
-(void)addFinishBlock:(id)arg0 ;
-(void)addSuccessBlock:(id)arg0 ;
-(void)waitUntilFinished;
-(void)waitUntilFinishedWithTimeout:(CGFloat)arg0 ;


@end


#endif