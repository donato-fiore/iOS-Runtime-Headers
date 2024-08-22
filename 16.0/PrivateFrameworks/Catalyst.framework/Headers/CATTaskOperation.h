// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef CATTASKOPERATION_H
#define CATTASKOPERATION_H

@class NSUUID;
@protocol CATTaskOperationNotificationDelegate;


#import "CATOperation.h"
#import "CATTaskRequest.h"

@interface CATTaskOperation : CATOperation

@property (weak, nonatomic) NSObject<CATTaskOperationNotificationDelegate> *notificationDelegate; // ivar: _notificationDelegate
@property (copy, nonatomic) NSUUID *remoteUUID; // ivar: _remoteUUID
@property (readonly, nonatomic) CATTaskRequest *request; // ivar: _request


+(BOOL)isCancelable;
+(BOOL)validateRequest:(id)arg0 error:(*id)arg1 ;
+(id)new;
-(BOOL)canSendNotificationWithName:(id)arg0 userInfo:(id)arg1 ;
-(id)cat_assertions;
-(id)init;
-(id)initWithRequest:(id)arg0 ;
-(void)cat_addAssertion:(id)arg0 ;
-(void)main;
-(void)postNotificationWithName:(id)arg0 userInfo:(id)arg1 ;
-(void)processMessage:(id)arg0 ;
-(void)processNotificationWithName:(id)arg0 userInfo:(id)arg1 ;


@end


#endif