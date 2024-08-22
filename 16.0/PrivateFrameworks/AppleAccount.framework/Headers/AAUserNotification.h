// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef AAUSERNOTIFICATION_H
#define AAUSERNOTIFICATION_H


#import <Foundation/Foundation.h>


@interface AAUserNotification : NSObject



+(id)_defaultParameters;
+(void)_waitForResponseAndReleaseNotification:(struct __CFUserNotification *)arg0 completion:(id)arg1 ;
+(void)showUserNotificationWithTitle:(id)arg0 message:(id)arg1 cancelButtonTitle:(id)arg2 otherButtonTitle:(id)arg3 withCompletionBlock:(id)arg4 ;
+(void)showUserNotificationWithTitle:(id)arg0 message:(id)arg1 secureTextFieldTitle:(id)arg2 cancelButtonTitle:(id)arg3 otherButtonTitle:(id)arg4 completion:(id)arg5 ;
+(void)showUserNotificationWithTitle:(id)arg0 message:(id)arg1 textFieldTitle:(id)arg2 cancelButtonTitle:(id)arg3 otherButtonTitle:(id)arg4 completion:(id)arg5 ;
+(void)waitForResponseToNotification:(struct __CFUserNotification *)arg0 completion:(id)arg1 ;


@end


#endif