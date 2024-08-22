// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef OFNSOPERATION_H
#define OFNSOPERATION_H

@class NSOperation, NSCondition, NSError, NSString, NSMutableArray;
@protocol OS_dispatch_source, OFNSOperationDelegate;


#import "OFNSOperation.h"

@interface OFNSOperation : NSOperation {
    CGFloat _startTime;
    NSCondition *_finishingCondition;
    BOOL _isFinishingCondition;
    NSObject<OS_dispatch_source> *_cancelTimer;
}


@property BOOL canBeCancelled; // ivar: _canBeCancelled
@property (copy) id *cancelBlock; // ivar: _cancelBlock
@property (nonatomic) *void context; // ivar: _context
@property (copy) NSError *error; // ivar: _error
@property (copy) id *executionBlock; // ivar: _executionBlock
@property (copy) id *finishBlock; // ivar: _finishBlock
@property (nonatomic) NSObject<OFNSOperationDelegate> *finishDelegate; // ivar: _finishDelegate
@property (copy) NSString *identifier; // ivar: _identifier
@property BOOL isExecuting; // ivar: _isExecuting
@property BOOL isFinished; // ivar: _isFinished
@property BOOL isFinishing; // ivar: _isFinishing
@property OFNSOperation *mainOperation; // ivar: _mainOperation
@property BOOL needsToRetry; // ivar: _needsToRetry
@property float progress; // ivar: _progress
@property (copy) id *progressBlock; // ivar: _progressBlock
@property (readonly) NSUInteger retryCount; // ivar: _retryCount
@property (retain) NSMutableArray *subOperations; // ivar: _subOperations
@property (retain) id *userData; // ivar: _userData


+(id)blockOperationWithExecutionBlock:(id)arg0 ;
// +(id)blockOperationWithExecutionBlock:(id)arg0 finishBlock:(unk)arg1 andFinishDelegate:(id)arg2  ;
// +(id)nullOperationWithFinishBlock:(id)arg0 andFinishDelegate:(unk)arg1  ;
// +(id)operationWithBlock:(id)arg0 progressBlock:(unk)arg1 cancelBlock:(id)arg2 completionHandler:(unk)arg3  ;
// +(id)operationWithFinishBlock:(id)arg0 andFinishDelegate:(unk)arg1  ;
-(BOOL)_finish:(BOOL)arg0 ;
-(BOOL)hasSucceeded;
-(BOOL)isConcurrent;
// -(BOOL)performSubOperationSynchronously:(id)arg0 progressBlock:(id)arg1 timeout:(unk)arg2  ;
-(BOOL)performSynchronously;
-(BOOL)performSynchronously:(id)arg0 ;
// -(BOOL)performSynchronously:(id)arg0 timeout:(unk)arg1  ;
-(BOOL)shouldContinue;
-(CGFloat)elapsedTime;
-(NSUInteger)launchOperation;
-(id)init;
-(id)operationDescription;
-(void)_launchOperation;
-(void)_updateProgressBlock;
-(void)cancel;
-(void)cancelOperation;
-(void)cleanupOperation;
-(void)dealloc;
-(void)finish;
-(void)finishOperation;
-(void)observeValueForKeyPath:(id)arg0 ofObject:(id)arg1 change:(id)arg2 context:(*void)arg3 ;
-(void)performAsynchronously:(id)arg0 ;
-(void)performAsynchronously:(id)arg0 progressBlock:(id)arg1 ;
// -(void)performAsynchronously:(id)arg0 progressBlock:(id)arg1 timeout:(unk)arg2  ;
-(void)start;


@end


#endif