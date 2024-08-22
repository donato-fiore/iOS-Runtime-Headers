// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef FMFUTURE_H
#define FMFUTURE_H

@class NSMutableArray, NSError, NSString;
@protocol FMPromise, OS_dispatch_queue;

#import <Foundation/Foundation.h>


@interface FMFuture : NSObject <FMPromise>

 {
    NSObject<OS_dispatch_queue> *_accessQueue;
    BOOL _finished;
    NSMutableArray *_completionBlocks;
    id *_resultValue;
    NSError *_resultError;
}


@property (readonly, getter=isCancelled) BOOL cancelled;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (copy, nonatomic) NSString *descriptor; // ivar: _descriptor
@property (readonly, getter=isFinished) BOOL finished;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


+(id)_chainFuturesWithFutureStack:(id)arg0 ;
+(id)_descriptorForChainOperation:(id)arg0 onFuture:(id)arg1 withBlock:(id)arg2 ;
+(id)chainFutures:(id)arg0 ;
+(id)combineAllFutures:(id)arg0 ;
+(id)combineAllFutures:(id)arg0 ignoringErrors:(BOOL)arg1 scheduler:(id)arg2 ;
+(id)combineAllFutures:(id)arg0 scheduler:(id)arg1 ;
+(id)futureWithBlock:(id)arg0 ;
// +(id)futureWithBlock:(id)arg0 scheduler:(unk)arg1  ;
+(id)futureWithCompletionHandlerAdapterBlock:(id)arg0 ;
+(id)futureWithError:(id)arg0 ;
+(id)futureWithErrorOnlyHandlerAdapterBlock:(id)arg0 ;
+(id)futureWithNoResult;
+(id)futureWithResult:(id)arg0 ;
+(id)lazyFutureWithBlock:(id)arg0 ;
// +(id)lazyFutureWithBlock:(id)arg0 scheduler:(unk)arg1  ;
-(BOOL)cancel;
-(BOOL)finishWithError:(id)arg0 ;
-(BOOL)finishWithNoResult;
-(BOOL)finishWithResult:(id)arg0 ;
-(BOOL)finishWithResult:(id)arg0 error:(id)arg1 ;
-(id)addCompletionBlock:(id)arg0 ;
-(id)addFailureBlock:(id)arg0 ;
-(id)addSuccessBlock:(id)arg0 ;
-(id)completionHandlerAdapter:(SEL)arg0 ;
-(id)errorOnlyCompletionHandlerAdapter:(SEL)arg0 ;
-(id)flatMap:(id)arg0 ;
-(id)init;
-(id)recover:(id)arg0 ;
-(id)recoverIgnoringError;
-(id)reschedule:(id)arg0 ;
-(void)_flushCompletionBlocks;
-(void)didCancel;


@end


#endif