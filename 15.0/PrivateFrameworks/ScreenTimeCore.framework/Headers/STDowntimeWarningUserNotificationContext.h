// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef STDOWNTIMEWARNINGUSERNOTIFICATIONCONTEXT_H
#define STDOWNTIMEWARNINGUSERNOTIFICATIONCONTEXT_H



#import "STUserNotificationContext.h"

@interface STDowntimeWarningUserNotificationContext : STUserNotificationContext



+(BOOL)supportsSecureCoding;
-(id)init;
-(id)initWithCoder:(id)arg0 ;
-(void)customizeNotificationContent:(id)arg0 withCompletionBlock:(id)arg1 ;
-(void)setTimeLeft:(CGFloat)arg0 ;


@end


#endif