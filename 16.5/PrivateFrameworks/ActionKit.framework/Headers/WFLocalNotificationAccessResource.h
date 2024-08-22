// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef WFLOCALNOTIFICATIONACCESSRESOURCE_H
#define WFLOCALNOTIFICATIONACCESSRESOURCE_H

@class WFAccessResource;



@interface WFLocalNotificationAccessResource : WFAccessResource



+(BOOL)isSystemResource;
+(void)requestLocalNotificationsAuthorizationWithCompletionHandler:(id)arg0 ;
-(NSUInteger)status;
-(id)icon;
-(id)name;
-(id)protectedResourceDescription;
-(void)makeAvailableWithUserInterface:(id)arg0 completionHandler:(id)arg1 ;


@end


#endif