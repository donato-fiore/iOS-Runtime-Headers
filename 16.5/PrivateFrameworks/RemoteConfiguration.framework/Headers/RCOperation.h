// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef RCOPERATION_H
#define RCOPERATION_H

@class NSOperation, NSMutableArray, NSString;
@protocol RCOperationCanceling, RCOperationIdentifying, RCOperationPrioritizing, OS_dispatch_group;


#import "RCUnfairLock.h"
#import "RCOnce.h"

@interface RCOperation : NSOperation <RCOperationCanceling, RCOperationIdentifying, RCOperationPrioritizing>

 {
    uint8_t _executing;
    uint8_t _finished;
}


@property (retain, nonatomic) NSMutableArray *childOperations; // ivar: _childOperations
@property (nonatomic) BOOL childOperationsCancelled; // ivar: _childOperationsCancelled
@property (retain, nonatomic) RCUnfairLock *childOperationsLock; // ivar: _childOperationsLock
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (retain, nonatomic) NSObject<OS_dispatch_group> *finishedGroup; // ivar: _finishedGroup
@property (readonly, nonatomic) BOOL hasOperationStarted;
@property (readonly) NSUInteger hash;
@property (nonatomic) CGFloat operationEndTime; // ivar: _operationEndTime
@property (readonly, copy, nonatomic) NSString *operationID; // ivar: _operationID
@property (nonatomic) CGFloat operationStartTime; // ivar: _operationStartTime
@property (nonatomic) NSInteger relativePriority; // ivar: _relativePriority
@property (nonatomic) NSUInteger retryCount; // ivar: _retryCount
@property (retain, nonatomic) RCOnce *startOnce; // ivar: _startOnce
@property (readonly) Class superclass;
@property (copy, nonatomic) id *timedOutTest; // ivar: _timedOutTest


-(BOOL)_shouldThrottleOperationWithRetryAfter:(*CGFloat)arg0 ;
-(BOOL)_startIfNeeded;
-(BOOL)canRetryWithError:(id)arg0 retryAfter:(*id)arg1 ;
-(BOOL)isAsynchronous;
-(BOOL)isExecuting;
-(BOOL)isFinished;
-(BOOL)shouldStartThrottlingWithError:(id)arg0 retryAfter:(*CGFloat)arg1 ;
-(BOOL)validateOperation;
-(NSUInteger)maxRetries;
-(NSUInteger)propertiesInheritedByChildOperations;
-(id)_errorUserInfo;
-(id)_userDefaultsKeyForThrottleEndDate;
-(id)init;
-(id)longOperationDescription;
-(id)shortOperationDescription;
-(id)throttleGroup;
-(void)_associateChildOperation:(id)arg0 ;
-(void)_finishOperationWithError:(id)arg0 ;
-(void)_finishedPerformingOperationWithError:(id)arg0 ;
-(void)_handleRetryFromError:(id)arg0 signal:(id)arg1 ;
-(void)_handleThrottlingFromError:(id)arg0 delay:(CGFloat)arg1 ;
-(void)addCompletionHandler:(id)arg0 ;
-(void)associateChildOperation:(id)arg0 ;
-(void)associateChildOperations:(id)arg0 ;
-(void)cancel;
-(void)cancelChildOperations;
-(void)dealloc;
-(void)finishFromEarlyCancellation;
-(void)finishedPerformingOperationWithError:(id)arg0 ;
-(void)operationDidFinishWithError:(id)arg0 ;
-(void)operationWillFinishWithError:(id)arg0 ;
-(void)performOperation;
-(void)prepareOperation;
-(void)resetForRetry;
-(void)setQualityOfService:(NSInteger)arg0 ;
-(void)start;
-(void)startIfNeeded;


@end


#endif