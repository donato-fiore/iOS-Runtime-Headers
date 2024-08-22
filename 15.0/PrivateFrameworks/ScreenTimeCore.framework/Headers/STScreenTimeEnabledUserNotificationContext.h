// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef STSCREENTIMEENABLEDUSERNOTIFICATIONCONTEXT_H
#define STSCREENTIMEENABLEDUSERNOTIFICATIONCONTEXT_H



#import "STUserNotificationContext.h"

@interface STScreenTimeEnabledUserNotificationContext : STUserNotificationContext



+(BOOL)supportsSecureCoding;
-(id)init;
-(id)initWithCoder:(id)arg0 ;
-(id)notificationBundleIdentifier;
-(void)customizeNotificationContent:(id)arg0 withCompletionBlock:(id)arg1 ;


@end


#endif