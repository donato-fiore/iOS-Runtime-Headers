// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef ICPASSWORDENTRYALERTCONTROLLER_H
#define ICPASSWORDENTRYALERTCONTROLLER_H

@class UIWindow, NSString;

#import <Foundation/Foundation.h>


@interface ICPasswordEntryAlertController : NSObject

@property (nonatomic, getter=isAuthenticating) BOOL authenticating; // ivar: _authenticating
@property (readonly, nonatomic) UIWindow *displayWindow; // ivar: _displayWindow
@property (copy, nonatomic) NSString *divergedAccountPassword; // ivar: _divergedAccountPassword
@property (nonatomic) NSUInteger numberOfFailedAttempts; // ivar: _numberOfFailedAttempts
@property (nonatomic, getter=isPasswordDiverged) BOOL passwordDiverged; // ivar: _passwordDiverged
@property (copy, nonatomic) NSString *wrongAccountName; // ivar: _wrongAccountName


-(id)initWithDisplayWindow:(id)arg0 ;
// -(id)passwordAlertControllerWithPrompt:(id)arg0 passwordHandler:(id)arg1 forgotHandler:(unk)arg2 cancelHandler:(id)arg3  ;
-(void)authenticateWithPrompt:(id)arg0 completionHandler:(id)arg1 ;
-(void)didAuthenticateWithPassword:(id)arg0 prompt:(id)arg1 completionHandler:(id)arg2 ;


@end


#endif