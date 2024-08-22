// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef CKDFETCHSUBSCRIPTIONSOPERATION_H
#define CKDFETCHSUBSCRIPTIONSOPERATION_H

@class NSArray, NSMutableArray;
@protocol CKFetchSubscriptionsOperationCallbacks;


#import "CKDDatabaseOperation.h"

@interface CKDFetchSubscriptionsOperation : CKDDatabaseOperation

@property (retain, nonatomic) NSObject<CKFetchSubscriptionsOperationCallbacks> *clientOperationCallbackProxy;
@property (nonatomic) BOOL isFetchAllSubscriptionsOperation; // ivar: _isFetchAllSubscriptionsOperation
@property (copy, nonatomic) id *subscriptionFetchedProgressBlock; // ivar: _subscriptionFetchedProgressBlock
@property (retain, nonatomic) NSArray *subscriptionIDs; // ivar: _subscriptionIDs
@property (retain, nonatomic) NSMutableArray *subscriptions; // ivar: _subscriptions


-(id)activityCreate;
-(id)initWithOperationInfo:(id)arg0 container:(id)arg1 ;
-(int)operationType;
-(void)_finishOnCallbackQueueWithError:(id)arg0 ;
-(void)_handleSubscriptionFetched:(id)arg0 withID:(id)arg1 responseCode:(id)arg2 ;
-(void)main;


@end


#endif