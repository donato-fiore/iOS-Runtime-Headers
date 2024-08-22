// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef UISNOTIFICATIONRESPONSEACTION_H
#define UISNOTIFICATIONRESPONSEACTION_H

@class BSAction, UNNotificationResponse;



@interface UISNotificationResponseAction : BSAction

@property (readonly, nonatomic) BOOL isDefaultAction;
@property (readonly, nonatomic) BOOL isLocal;
@property (readonly, nonatomic) BOOL isRemote;
@property (readonly, retain, nonatomic) UNNotificationResponse *response; // ivar: _response


-(BOOL)isKindOfClass:(Class)arg0 ;
-(NSInteger)UIActionType;
-(id)_trigger;
-(id)initWithResponse:(id)arg0 withHandler:(id)arg1 ;
-(id)initWithXPCDictionary:(id)arg0 ;
-(id)keyDescriptionForSetting:(NSUInteger)arg0 ;
-(id)valueDescriptionForFlag:(NSInteger)arg0 object:(id)arg1 ofSetting:(NSUInteger)arg2 ;


@end


#endif