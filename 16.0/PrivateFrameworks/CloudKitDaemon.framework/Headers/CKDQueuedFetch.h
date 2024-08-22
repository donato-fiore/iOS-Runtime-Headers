// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef CKDQUEUEDFETCH_H
#define CKDQUEUEDFETCH_H

@class NSMutableDictionary, NSMutableSet, NSDate, NSOperationQueue, NSString;
@protocol OS_dispatch_queue, OS_os_activity;

#import <Foundation/Foundation.h>

#import "CKDContainer.h"
#import "CKDQueuedFetch.h"
#import "CKDOperation.h"

@interface CKDQueuedFetch : NSObject

@property (retain, nonatomic) NSObject<OS_dispatch_queue> *callbackQueue; // ivar: _callbackQueue
@property (copy, nonatomic) id *completionHandler; // ivar: _completionHandler
@property (retain, nonatomic) NSMutableDictionary *completionHandlersByItemID; // ivar: _completionHandlersByItemID
@property (weak, nonatomic) CKDContainer *container; // ivar: _container
@property (retain, nonatomic) NSMutableSet *dependentOperationIDs; // ivar: _dependentOperationIDs
@property (retain, nonatomic) NSMutableDictionary *dependentOperationIDsByItemID; // ivar: _dependentOperationIDsByItemID
@property (weak, nonatomic) CKDQueuedFetch *equivalentRunningFetch; // ivar: _equivalentRunningFetch
@property (nonatomic) NSInteger highestQOS; // ivar: _highestQOS
@property (retain, nonatomic) CKDOperation *initialOperation; // ivar: _initialOperation
@property (nonatomic) BOOL isCancelled; // ivar: _isCancelled
@property (nonatomic) BOOL isFinished; // ivar: _isFinished
@property (nonatomic) NSUInteger lastCompletionHandlerCount; // ivar: _lastCompletionHandlerCount
@property (retain, nonatomic) NSDate *lastRequestDate; // ivar: _lastRequestDate
@property (weak, nonatomic) NSOperationQueue *operationQueue; // ivar: _operationQueue
@property (retain, nonatomic) NSObject<OS_os_activity> *osActivity; // ivar: _osActivity
@property (retain, nonatomic) NSDate *queuedDate; // ivar: _queuedDate
@property (retain, nonatomic) NSString *runningOperationID; // ivar: _runningOperationID
@property (nonatomic) NSInteger scope; // ivar: _scope
@property (retain, nonatomic) NSDate *startDate; // ivar: _startDate
@property (retain, nonatomic) NSMutableDictionary *unitTestOverrides; // ivar: _unitTestOverrides


-(BOOL)canBeUsedForOperation:(id)arg0 ;
-(BOOL)canBeUsedForPendingFetch:(id)arg0 ;
-(BOOL)dependentOperationListContainsOperationID:(id)arg0 ;
-(BOOL)dependentOperationListContainsRunningFetch:(id)arg0 ;
-(id)CKPropertiesDescription;
-(id)allItemIDs;
-(id)callbacksForItemWithID:(id)arg0 ;
-(id)description;
-(id)init;
-(id)initWithOperation:(id)arg0 container:(id)arg1 operationQueue:(id)arg2 ;
-(int)numberOfCallbacks;
-(void)addCallbackForItemWithID:(id)arg0 operation:(id)arg1 callback:(id)arg2 ;
-(void)cancelFetchOperation;
-(void)createFetchOperationForItemIDs:(id)arg0 operationQueue:(id)arg1 operationConfigurationBlock:(id)arg2 ;
-(void)finishFetchOperationWithError:(id)arg0 ;
-(void)performCallbacksForItemWithID:(id)arg0 withItem:(id)arg1 error:(id)arg2 ;
-(void)removeCallbacksForItemWithID:(id)arg0 ;
-(void)start;


@end


#endif