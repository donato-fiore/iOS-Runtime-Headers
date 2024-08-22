// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef CKDMARKNOTIFICATIONSREADOPERATION_H
#define CKDMARKNOTIFICATIONSREADOPERATION_H

@class NSMutableDictionary, NSArray, NSMutableSet;
@protocol CKMarkNotificationsReadOperationCallbacks;


#import "CKDOperation.h"

@interface CKDMarkNotificationsReadOperation : CKDOperation

@property (retain, nonatomic) NSObject<CKMarkNotificationsReadOperationCallbacks> *clientOperationCallbackProxy;
@property (retain, nonatomic) NSMutableDictionary *errorByNotificationID; // ivar: _errorByNotificationID
@property (retain, nonatomic) NSArray *notificationIDs; // ivar: _notificationIDs
@property (copy, nonatomic) id *notificationMarkedRead; // ivar: _notificationMarkedRead
@property (retain, nonatomic) NSMutableSet *successfulNotificationIDs; // ivar: _successfulNotificationIDs


+(NSInteger)isPredominatelyDownload;
-(id)activityCreate;
-(id)initWithOperationInfo:(id)arg0 container:(id)arg1 ;
-(int)operationType;
-(void)_finishOnCallbackQueueWithError:(id)arg0 ;
-(void)_handleNotificationID:(id)arg0 withResponse:(id)arg1 ;
-(void)main;


@end


#endif