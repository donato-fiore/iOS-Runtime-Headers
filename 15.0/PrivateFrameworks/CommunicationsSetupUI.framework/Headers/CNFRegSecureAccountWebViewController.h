// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef CNFREGSECUREACCOUNTWEBVIEWCONTROLLER_H
#define CNFREGSECUREACCOUNTWEBVIEWCONTROLLER_H

@class IMAccount;


#import "CNFRegAuthorizedAccountWebViewController.h"

@interface CNFRegSecureAccountWebViewController : CNFRegAuthorizedAccountWebViewController {
    BOOL _triedGettingNewCredentials;
    BOOL _gotNewCredential;
    NSUInteger _signinFailureCount;
}


@property (retain, nonatomic) IMAccount *account; // ivar: _account


-(id)authIdHeaderValue;
-(id)authTokenHeaderValue;
-(id)initWithRegController:(id)arg0 account:(id)arg1 ;
-(void)_handleTimeout;
-(void)_incrementSigninFailureCount;
-(void)_launchForgotPasswordUrl;
-(void)_resetSigninFailureCount;
-(void)_setupAccountHandlers;
-(void)_showBadPasswordAlert;
-(void)_showForgotPasswordAlert;
-(void)_showRegistrationFailureWithError:(id)arg0 ;
-(void)_showRequestPasswordAlert;
-(void)doHandoffWithStatus:(int)arg0 appleID:(id)arg1 authID:(id)arg2 authToken:(id)arg3 ;
-(void)viewDidAppear:(BOOL)arg0 ;
-(void)viewWillDisappear:(BOOL)arg0 ;


@end


#endif