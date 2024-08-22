// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef UISHANDLEREMOTENOTIFICATIONACTION_H
#define UISHANDLEREMOTENOTIFICATIONACTION_H

@class BSAction;



@interface UISHandleRemoteNotificationAction : BSAction



-(NSUInteger)UIActionType;
-(id)_initWithRemoteNotificationPayload:(id)arg0 action:(id)arg1 userResponse:(id)arg2 type:(NSUInteger)arg3 withHandler:(id)arg4 ;
-(id)action;
-(id)initWithInfo:(id)arg0 timeout:(CGFloat)arg1 forResponseOnQueue:(id)arg2 withHandler:(id)arg3 ;
-(id)initWithRemoteNotificationPayload:(id)arg0 action:(id)arg1 userResponse:(id)arg2 withHandler:(id)arg3 ;
-(id)initWithRemoteNotificationPayload:(id)arg0 action:(id)arg1 withHandler:(id)arg2 ;
-(id)initWithRemoteNotificationPayload:(id)arg0 withHandler:(id)arg1 ;
-(id)keyDescriptionForSetting:(NSUInteger)arg0 ;
-(id)payload;
-(id)userResponse;
-(void)sendResponse:(id)arg0 ;


@end


#endif