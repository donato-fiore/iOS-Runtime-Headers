// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef UINOTIFICATIONSETTINGSACTION_H
#define UINOTIFICATIONSETTINGSACTION_H

@class BSAction, UNNotification;



@interface UINotificationSettingsAction : BSAction

@property (readonly, copy, nonatomic) UNNotification *notification; // ivar: _notification


-(NSInteger)UIActionType;
-(id)initWithNotification:(id)arg0 ;
-(id)initWithXPCDictionary:(id)arg0 ;
-(id)keyDescriptionForSetting:(NSUInteger)arg0 ;
-(id)valueDescriptionForFlag:(NSInteger)arg0 object:(id)arg1 ofSetting:(NSUInteger)arg2 ;


@end


#endif