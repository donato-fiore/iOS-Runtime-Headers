// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef WBSRETRYABLECKMODIFYSUBSCRIPTIONSOPERATION_H
#define WBSRETRYABLECKMODIFYSUBSCRIPTIONSOPERATION_H

@class NSArray;


#import "WBSRetryableCKDatabaseOperation.h"

@interface WBSRetryableCKModifySubscriptionsOperation : WBSRetryableCKDatabaseOperation

@property (copy, nonatomic) id *modifySubscriptionsCompletionBlock; // ivar: _modifySubscriptionsCompletionBlock
@property (copy, nonatomic) id *perSubscriptionDeleteBlock; // ivar: _perSubscriptionDeleteBlock
@property (copy, nonatomic) id *perSubscriptionSaveBlock; // ivar: _perSubscriptionSaveBlock
@property (copy, nonatomic) NSArray *subscriptionIDsToDelete; // ivar: _subscriptionIDsToDelete
@property (copy, nonatomic) NSArray *subscriptionsToSave; // ivar: _subscriptionsToSave


-(id)_makeOperation;
-(void)_setUpOperation:(id)arg0 ;


@end


#endif