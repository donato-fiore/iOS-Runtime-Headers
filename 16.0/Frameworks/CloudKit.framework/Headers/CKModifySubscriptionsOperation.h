// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef CKMODIFYSUBSCRIPTIONSOPERATION_H
#define CKMODIFYSUBSCRIPTIONSOPERATION_H

@class NSMutableArray, NSMutableDictionary, NSArray;
@protocol CKModifySubscriptionsOperationCallbacks;


#import "CKDatabaseOperation.h"
#import "CKModifySubscriptionsOperationInfo.h"

@interface CKModifySubscriptionsOperation : CKDatabaseOperation <CKModifySubscriptionsOperationCallbacks>

 {
    NSMutableArray *_savedSubscriptions;
    NSMutableArray *_deletedSubscriptionIDs;
    NSMutableDictionary *_subscriptionsBySubscriptionIDs;
    NSMutableDictionary *_subscriptionErrors;
}


@property (readonly, nonatomic) NSObject<CKModifySubscriptionsOperationCallbacks> *clientOperationCallbackProxy;
@property (copy, nonatomic) id *modifySubscriptionsCompletionBlock; // ivar: _modifySubscriptionsCompletionBlock
@property (readonly, nonatomic) CKModifySubscriptionsOperationInfo *operationInfo;
@property (copy, nonatomic) id *perSubscriptionDeleteBlock; // ivar: _perSubscriptionDeleteBlock
@property (copy, nonatomic) id *perSubscriptionSaveBlock; // ivar: _perSubscriptionSaveBlock
@property (copy, nonatomic) NSArray *subscriptionIDsToDelete; // ivar: _subscriptionIDsToDelete
@property (copy, nonatomic) NSArray *subscriptionsToSave; // ivar: _subscriptionsToSave


+(void)applyDaemonCallbackInterfaceTweaks:(id)arg0 ;
-(BOOL)CKOperationShouldRun:(*id)arg0 ;
-(BOOL)hasCKOperationCallbacksSet;
-(id)activityCreate;
-(id)init;
-(id)initWithSubscriptionsToSave:(id)arg0 subscriptionIDsToDelete:(id)arg1 ;
-(void)_finishOnCallbackQueueWithError:(id)arg0 ;
-(void)fillFromOperationInfo:(id)arg0 ;
-(void)fillOutOperationInfo:(id)arg0 ;
-(void)handleSubscriptionDeleteForSubscriptionID:(id)arg0 error:(id)arg1 ;
-(void)handleSubscriptionSaveForSubscriptionID:(id)arg0 error:(id)arg1 ;
-(void)performCKOperation;


@end


#endif