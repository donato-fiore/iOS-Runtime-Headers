// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef CKFETCHSUBSCRIPTIONSOPERATION_H
#define CKFETCHSUBSCRIPTIONSOPERATION_H

@class NSArray, NSMutableDictionary;
@protocol CKFetchSubscriptionsOperationCallbacks;


#import "CKDatabaseOperation.h"
#import "CKFetchSubscriptionsOperationInfo.h"

@interface CKFetchSubscriptionsOperation : CKDatabaseOperation <CKFetchSubscriptionsOperationCallbacks>

 {
    NSArray *_subscriptions;
    NSMutableDictionary *_subscriptionsBySubscriptionID;
    NSMutableDictionary *_subscriptionErrors;
}


@property (readonly, nonatomic) NSObject<CKFetchSubscriptionsOperationCallbacks> *clientOperationCallbackProxy;
@property (copy, nonatomic) id *fetchSubscriptionCompletionBlock; // ivar: _fetchSubscriptionCompletionBlock
@property (nonatomic) BOOL isFetchAllSubscriptionsOperation; // ivar: _isFetchAllSubscriptionsOperation
@property (readonly, nonatomic) CKFetchSubscriptionsOperationInfo *operationInfo;
@property (copy, nonatomic) id *perSubscriptionCompletionBlock; // ivar: _perSubscriptionCompletionBlock
@property (copy, nonatomic) NSArray *subscriptionIDs; // ivar: _subscriptionIDs


+(id)fetchAllSubscriptionsOperation;
+(void)applyDaemonCallbackInterfaceTweaks:(id)arg0 ;
-(BOOL)CKOperationShouldRun:(*id)arg0 ;
-(BOOL)hasCKOperationCallbacksSet;
-(id)activityCreate;
-(id)init;
-(id)initWithSubscriptionIDs:(id)arg0 ;
-(void)_finishOnCallbackQueueWithError:(id)arg0 ;
-(void)fillFromOperationInfo:(id)arg0 ;
-(void)fillOutOperationInfo:(id)arg0 ;
-(void)handleSubscriptionFetchForSubscriptionID:(id)arg0 subscription:(id)arg1 error:(id)arg2 ;
-(void)performCKOperation;


@end


#endif