// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef UIWILLPRESENTNOTIFICATIONACTION_H
#define UIWILLPRESENTNOTIFICATIONACTION_H

@class BSAction, UNNotification;



@interface UIWillPresentNotificationAction : BSAction

@property (readonly, nonatomic) BOOL isDeliverable; // ivar: _isDeliverable
@property (readonly, nonatomic) BOOL isLocal;
@property (readonly, nonatomic) BOOL isRemote;
@property (readonly, retain, nonatomic) UNNotification *notification; // ivar: _notification


-(NSInteger)UIActionType;
-(id)_trigger;
-(id)initWithNotification:(id)arg0 deliverable:(BOOL)arg1 timeout:(CGFloat)arg2 withHandler:(id)arg3 ;
-(id)initWithNotification:(id)arg0 timeout:(CGFloat)arg1 withHandler:(id)arg2 ;
-(id)initWithXPCDictionary:(id)arg0 ;
-(id)keyDescriptionForSetting:(NSUInteger)arg0 ;
-(id)valueDescriptionForFlag:(NSInteger)arg0 object:(id)arg1 ofSetting:(NSUInteger)arg2 ;


@end


#endif