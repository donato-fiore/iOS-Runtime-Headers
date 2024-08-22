// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef WFLOCALNOTIFICATIONACCESSRESOURCE_H
#define WFLOCALNOTIFICATIONACCESSRESOURCE_H

@class WFAccessResource;



@interface WFLocalNotificationAccessResource : WFAccessResource

@property (nonatomic) NSUInteger globalLevelStatus; // ivar: _globalLevelStatus


+(BOOL)isSystemResource;
+(void)initialize;
+(void)requestLocalNotificationsAuthorizationWithCompletionHandler:(id)arg0 ;
-(id)errorRecoveryOptionsForGlobalLevelStatus:(NSUInteger)arg0 ;
-(id)icon;
-(id)name;
-(id)protectedResourceDescription;
-(void)makeAvailableAtGlobalLevelWithUserInterface:(id)arg0 completionHandler:(id)arg1 ;
-(void)refreshAvailability;


@end


#endif