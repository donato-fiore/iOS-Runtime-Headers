// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef CKDMODIFYSUBSCRIPTIONSOPERATION_H
#define CKDMODIFYSUBSCRIPTIONSOPERATION_H

@class NSArray, NSMutableDictionary;
@protocol CKModifySubscriptionsOperationCallbacks;


#import "CKDDatabaseOperation.h"

@interface CKDModifySubscriptionsOperation : CKDDatabaseOperation {
    BOOL _hasSubscriptionsToSave;
    BOOL _hasSubscriptionsToDelete;
}


@property (retain, nonatomic) NSObject<CKModifySubscriptionsOperationCallbacks> *clientOperationCallbackProxy;
@property (copy, nonatomic) id *deleteCompletionBlock; // ivar: _deleteCompletionBlock
@property (copy, nonatomic) id *saveCompletionBlock; // ivar: _saveCompletionBlock
@property (retain, nonatomic) NSArray *subscriptionIDsToDelete; // ivar: _subscriptionIDsToDelete
@property (retain, nonatomic) NSMutableDictionary *subscriptionsByServerID; // ivar: _subscriptionsByServerID
@property (retain, nonatomic) NSArray *subscriptionsToSave; // ivar: _subscriptionsToSave


+(NSInteger)isPredominatelyDownload;
-(BOOL)isOperationType:(int)arg0 ;
-(id)activityCreate;
-(id)initWithOperationInfo:(id)arg0 container:(id)arg1 ;
-(int)operationType;
-(void)_finishOnCallbackQueueWithError:(id)arg0 ;
-(void)_handleSubscriptionDeleted:(id)arg0 responseCode:(id)arg1 ;
-(void)_handleSubscriptionSaved:(id)arg0 error:(id)arg1 ;
-(void)_handleSubscriptionSaved:(id)arg0 responseCode:(id)arg1 ;
-(void)main;


@end


#endif