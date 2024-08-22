// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef WBSRETRYABLECKOPERATION_H
#define WBSRETRYABLECKOPERATION_H

@class NSOperation, NSOperationQueue, NSMutableSet, NSMutableArray, CKOperationConfiguration, CKOperation, NSString, CKOperationGroup;
@protocol WBSDeallocationSentinelObserver, OS_dispatch_queue, OS_os_log;


#import "WBSCloudKitOperationRetryManager.h"

@interface WBSRetryableCKOperation : NSOperation <WBSDeallocationSentinelObserver>

 {
    NSOperationQueue *_operationQueue;
    os_unfair_lock_s _internalLock;
    NSMutableSet *_explicitlySetProperties;
    WBSCloudKitOperationRetryManager *_retryManager;
    NSInteger _status;
    NSMutableArray *_childOperationIDs;
}


@property (copy, nonatomic) CKOperationConfiguration *configuration; // ivar: _configuration
@property (readonly, nonatomic) CKOperation *currentOperation; // ivar: _currentOperation
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (copy, nonatomic) id *didExceedRetryTimeout; // ivar: _didExceedRetryTimeout
@property (copy, nonatomic) id *didReceiveNonRetryableError; // ivar: _didReceiveNonRetryableError
@property (readonly, getter=isExecuting) BOOL executing;
@property (readonly, getter=isFinished) BOOL finished;
@property (retain, nonatomic) CKOperationGroup *group; // ivar: _group
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *handlingQueue; // ivar: _handlingQueue
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) NSObject<OS_os_log> *log; // ivar: _log
@property (copy, nonatomic) id *longLivedOperationWasPersistedBlock; // ivar: _longLivedOperationWasPersistedBlock
@property (readonly, nonatomic) NSUInteger numberOfRetries;
@property (readonly, copy, nonatomic) NSString *operationID; // ivar: _operationID
@property (readonly, weak, nonatomic) id *owner; // ivar: _owner
@property (copy, nonatomic) id *ownerDidDeallocateBlock; // ivar: _ownerDidDeallocateBlock
@property (nonatomic, getter=_status, setter=_setStatus:) NSInteger status;
@property (readonly) Class superclass;
@property (nonatomic) CGFloat timeout;


+(id)keyPathsForValuesAffectingValueForKey:(id)arg0 ;
-(*void)_sentinelAssociatedObjectKey;
-(BOOL)_scheduleRetryIfNeededForError:(id)arg0 ;
-(NSInteger)qualityOfService;
-(id)_makeOperation;
-(id)initWithOwner:(id)arg0 handlingQueue:(id)arg1 ;
-(void)_didFinishOperation;
-(void)_scheduleNextOperation;
-(void)_setUpOperation:(id)arg0 ;
-(void)cancel;
-(void)dealloc;
-(void)sentinelDidDeallocateWithContext:(id)arg0 ;
-(void)setQualityOfService:(NSInteger)arg0 ;
-(void)start;


@end


#endif