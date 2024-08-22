// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef CKMARKNOTIFICATIONSREADOPERATION_H
#define CKMARKNOTIFICATIONSREADOPERATION_H

@class NSMutableDictionary, NSArray, NSMutableArray;
@protocol CKMarkNotificationsReadOperationCallbacks;


#import "CKOperation.h"
#import "CKMarkNotificationsReadOperationInfo.h"

@interface CKMarkNotificationsReadOperation : CKOperation <CKMarkNotificationsReadOperationCallbacks>



@property (readonly, nonatomic) NSObject<CKMarkNotificationsReadOperationCallbacks> *clientOperationCallbackProxy;
@property (retain, nonatomic) NSMutableDictionary *errorsByNotificationID; // ivar: _errorsByNotificationID
@property (copy, nonatomic) id *markNotificationsReadCompletionBlock; // ivar: _markNotificationsReadCompletionBlock
@property (copy, nonatomic) NSArray *notificationIDs; // ivar: _notificationIDs
@property (retain, nonatomic) NSMutableArray *notificationIDsMarkedRead; // ivar: _notificationIDsMarkedRead
@property (readonly, nonatomic) CKMarkNotificationsReadOperationInfo *operationInfo;


+(void)applyDaemonCallbackInterfaceTweaks:(id)arg0 ;
-(BOOL)CKOperationShouldRun:(*id)arg0 ;
-(BOOL)hasCKOperationCallbacksSet;
-(id)activityCreate;
-(id)init;
-(id)initWithNotificationIDsToMarkRead:(id)arg0 ;
-(void)_finishOnCallbackQueueWithError:(id)arg0 ;
-(void)fillFromOperationInfo:(id)arg0 ;
-(void)fillOutOperationInfo:(id)arg0 ;
-(void)handleMarkNotificationReadCompletionForNotificationID:(id)arg0 error:(id)arg1 ;
-(void)performCKOperation;


@end


#endif