// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef FCOPERATION_H
#define FCOPERATION_H

@class NSOperation, NSMutableArray, NFUnfairLock, NSString, NSDictionary;
@protocol FCOperationCanceling, FCOperationIdentifying, FCOperationPrioritizing, OS_dispatch_group;


#import "FCOnce.h"
#import "FCOperation.h"

@interface FCOperation : NSOperation <FCOperationCanceling, FCOperationIdentifying, FCOperationPrioritizing>

 {
    uint8_t _executing;
    uint8_t _finished;
    BOOL _childOperationsCancelled;
    id *_timedOutTest;
    NSMutableArray *_childOperations;
    NFUnfairLock *_childOperationsLock;
    FCOnce *_startOnce;
    NSObject<OS_dispatch_group> *_finishedGroup;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, copy, nonatomic) NSDictionary *errorUserInfo;
@property (readonly, nonatomic) BOOL hasOperationStarted;
@property (readonly) NSUInteger hash;
@property (nonatomic) BOOL isBackgroundDownloadOperation; // ivar: _isBackgroundDownloadOperation
@property (readonly, nonatomic) NSString *longOperationDescription;
@property (readonly, copy, nonatomic) NSString *operationID; // ivar: _operationID
@property (nonatomic) CGFloat operationStartTime; // ivar: _operationStartTime
@property (readonly, nonatomic) FCOperation *proxyOperation;
@property (copy, nonatomic) NSString *purpose; // ivar: _purpose
@property (nonatomic) NSInteger relativePriority; // ivar: _relativePriority
@property (nonatomic) NSUInteger retryCount; // ivar: _retryCount
@property (readonly, nonatomic) NSString *shortOperationDescription; // ivar: _shortOperationDescription
@property (readonly) Class superclass;
@property (nonatomic) CGFloat timeoutDuration; // ivar: _timeoutDuration


-(BOOL)canRetryWithError:(id)arg0 retryAfter:(*id)arg1 ;
-(BOOL)isAsynchronous;
-(BOOL)isExecuting;
-(BOOL)isFinished;
-(BOOL)shouldStartThrottlingWithError:(id)arg0 retryAfter:(*CGFloat)arg1 ;
-(BOOL)validateOperation;
-(BOOL)waitUntilFinishedWithTimeout:(CGFloat)arg0 ;
-(NSUInteger)maxRetries;
-(NSUInteger)propertiesInheritedByChildOperations;
-(id)init;
-(id)throttleGroup;
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