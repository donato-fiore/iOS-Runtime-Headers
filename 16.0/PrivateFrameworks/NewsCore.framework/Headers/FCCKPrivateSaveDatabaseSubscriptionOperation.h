// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef FCCKPRIVATESAVEDATABASESUBSCRIPTIONOPERATION_H
#define FCCKPRIVATESAVEDATABASESUBSCRIPTIONOPERATION_H

@class CKNotificationInfo, NSString;


#import "FCCKPrivateDatabaseOperation.h"

@interface FCCKPrivateSaveDatabaseSubscriptionOperation : FCCKPrivateDatabaseOperation

@property (copy, nonatomic) CKNotificationInfo *notificationInfo; // ivar: _notificationInfo
@property (copy, nonatomic) id *saveDatabaseSubscriptionCompletionBlock; // ivar: _saveDatabaseSubscriptionCompletionBlock
@property (copy, nonatomic) NSString *subscriptionID; // ivar: _subscriptionID


-(BOOL)validateOperation;
-(void)operationWillFinishWithError:(id)arg0 ;
-(void)performOperation;


@end


#endif