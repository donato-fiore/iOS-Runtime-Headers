// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef STAPPLIMITWARNINGUSERNOTIFICATIONCONTEXT_H
#define STAPPLIMITWARNINGUSERNOTIFICATIONCONTEXT_H



#import "STUserNotificationContext.h"

@interface STAppLimitWarningUserNotificationContext : STUserNotificationContext



+(BOOL)supportsSecureCoding;
-(void)customizeNotificationContent:(id)arg0 withCompletionBlock:(id)arg1 ;
-(void)setLimitDisplayName:(id)arg0 timeLeft:(CGFloat)arg1 ;


@end


#endif