// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef UIHANDLELOCALNOTIFICATIONACTION_H
#define UIHANDLELOCALNOTIFICATIONACTION_H

@class BSAction, NSString, NSDictionary;


#import "UILocalNotification.h"

@interface UIHandleLocalNotificationAction : BSAction

@property (readonly, copy, nonatomic) NSString *action;
@property (readonly, copy, nonatomic) UILocalNotification *notification;
@property (readonly, copy, nonatomic) NSDictionary *userResponse;


-(NSInteger)UIActionType;
-(id)_initWithNotification:(id)arg0 action:(id)arg1 userResponse:(id)arg2 type:(NSInteger)arg3 withHandler:(id)arg4 ;
-(id)initWithInfo:(id)arg0 timeout:(CGFloat)arg1 forResponseOnQueue:(id)arg2 withHandler:(id)arg3 ;
-(id)initWithNotification:(id)arg0 ;
-(id)initWithNotification:(id)arg0 action:(id)arg1 userResponse:(id)arg2 withHandler:(id)arg3 ;
-(id)initWithNotification:(id)arg0 action:(id)arg1 withHandler:(id)arg2 ;
-(id)initWithNotification:(id)arg0 withHandler:(id)arg1 ;
-(id)initWithXPCDictionary:(id)arg0 ;
-(id)keyDescriptionForSetting:(NSUInteger)arg0 ;
-(id)valueDescriptionForFlag:(NSInteger)arg0 object:(id)arg1 ofSetting:(NSUInteger)arg2 ;


@end


#endif