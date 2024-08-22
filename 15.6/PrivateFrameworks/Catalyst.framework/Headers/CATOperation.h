// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef CATOPERATION_H
#define CATOPERATION_H

@class NSOperation, NSArray, NSLock, NSUUID, NSDate, NSError, NSDictionary;


#import "_CATObserverManager.h"

@interface CATOperation : NSOperation {
    NSArray *mCallStackSymbols;
    uint8_t mState;
    NSLock *mLock;
    _CATObserverManager *mObserverManager;
}


@property (retain) NSUUID *UUID; // ivar: _UUID
@property (readonly) BOOL canCancel; // ivar: _canCancel
@property NSInteger completedUnitCount; // ivar: _completedUnitCount
@property (retain) NSDate *createdDate; // ivar: _createdDate
@property (retain) NSDate *enqueuedDate; // ivar: _enqueuedDate
@property (retain) NSError *error; // ivar: _error
@property (retain) NSDate *finishedDate; // ivar: _finishedDate
@property (readonly) BOOL isCanceled;
@property NSUInteger phase; // ivar: _phase
@property (retain) id *resultObject; // ivar: _resultObject
@property (retain) NSDate *startedDate; // ivar: _startedDate
@property NSInteger totalUnitCount; // ivar: _totalUnitCount
@property (retain) NSDictionary *userInfo; // ivar: _userInfo


+(BOOL)automaticallyNotifiesObserversOfCreatedDate;
+(BOOL)automaticallyNotifiesObserversOfEnqueuedDate;
+(BOOL)automaticallyNotifiesObserversOfFinishedDate;
+(BOOL)automaticallyNotifiesObserversOfStartedDate;
+(BOOL)isCancelable;
+(id)callStackSymbols;
+(id)keyPathsForValuesAffectingIsCanceled;
-(BOOL)isAsynchronous;
-(BOOL)isExecuting;
-(BOOL)isFinished;
-(BOOL)isReady;
-(BOOL)whenStateIs:(int)arg0 atomicallySwapWith:(int)arg1 ;
-(id)description;
-(id)init;
-(id)stateDescription;
-(void)addObserver:(id)arg0 ;
-(void)addTarget:(id)arg0 selector:(SEL)arg1 forOperationEvents:(NSUInteger)arg2 ;
-(void)addTarget:(id)arg0 selector:(SEL)arg1 forOperationEvents:(NSUInteger)arg2 delegateQueue:(id)arg3 ;
-(void)addTarget:(id)arg0 selector:(SEL)arg1 forOperationEvents:(NSUInteger)arg2 userInfo:(id)arg3 ;
-(void)addTarget:(id)arg0 selector:(SEL)arg1 forOperationEvents:(NSUInteger)arg2 userInfo:(id)arg3 delegateQueue:(id)arg4 ;
-(void)endOperationSuccessfullyIfNeeded;
-(void)endOperationWithError:(id)arg0 ;
-(void)endOperationWithResultObject:(id)arg0 ;
-(void)finalizeOperation;
-(void)operationDidFinish;
-(void)operationWillEnqueueOntoOperationQueue:(id)arg0 ;
-(void)operationWillFinish;
-(void)operationWillStart;
-(void)start;


@end


#endif