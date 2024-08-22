// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef WBSRETRYABLECKFETCHSUBSCRIPTIONSOPERATION_H
#define WBSRETRYABLECKFETCHSUBSCRIPTIONSOPERATION_H

@class NSArray;


#import "WBSRetryableCKDatabaseOperation.h"

@interface WBSRetryableCKFetchSubscriptionsOperation : WBSRetryableCKDatabaseOperation

@property (copy, nonatomic) id *fetchSubscriptionCompletionBlock; // ivar: _fetchSubscriptionCompletionBlock
@property (copy, nonatomic) id *perSubscriptionCompletionBlock; // ivar: _perSubscriptionCompletionBlock
@property (copy, nonatomic) NSArray *subscriptionIDs; // ivar: _subscriptionIDs


-(id)_makeOperation;
-(void)_setUpOperation:(id)arg0 ;


@end


#endif