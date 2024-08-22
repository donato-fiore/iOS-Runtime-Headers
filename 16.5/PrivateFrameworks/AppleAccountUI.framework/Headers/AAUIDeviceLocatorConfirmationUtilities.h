// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef AAUIDEVICELOCATORCONFIRMATIONUTILITIES_H
#define AAUIDEVICELOCATORCONFIRMATIONUTILITIES_H


#import <Foundation/Foundation.h>


@interface AAUIDeviceLocatorConfirmationUtilities : NSObject



+(id)_messageForError:(id)arg0 account:(id)arg1 ;
+(id)_titleForError:(id)arg0 account:(id)arg1 ;
+(void)_handleFMIPAuthenticationResponse:(id)arg0 withError:(id)arg1 forContext:(id)arg2 completion:(id)arg3 ;
+(void)_performFMIPAuthenticationForContext:(id)arg0 completion:(id)arg1 ;
+(void)checkIfWatchHasAppleIDAccount:(id)arg0 ;
+(void)showDisableAlertForAccount:(id)arg0 presentingViewController:(id)arg1 withCompletion:(id)arg2 ;
+(void)showDisableAlertForAccount:(id)arg0 withCompletion:(id)arg1 ;
+(void)showDisableAlertForAccount:(id)arg0 withMessage:(id)arg1 confirmationButtonTitle:(id)arg2 completion:(id)arg3 ;
+(void)showDisableAlertForAccount:(id)arg0 withMessage:(id)arg1 confirmationButtonTitle:(id)arg2 presentingViewController:(id)arg3 completion:(id)arg4 ;
+(void)showDisableAlertForContext:(id)arg0 withCompletion:(id)arg1 ;
+(void)showEnableAlertWithCompletion:(id)arg0 ;


@end


#endif