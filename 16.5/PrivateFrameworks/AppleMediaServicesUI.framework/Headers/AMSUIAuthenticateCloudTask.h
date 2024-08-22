// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef AMSUIAUTHENTICATECLOUDTASK_H
#define AMSUIAUTHENTICATECLOUDTASK_H

@class AMSTask, AMSAuthenticateRequest, CDPUIController, UIViewController;



@interface AMSUIAuthenticateCloudTask : AMSTask

@property (retain, nonatomic) AMSAuthenticateRequest *authRequest; // ivar: _authRequest
@property (retain, nonatomic) CDPUIController *cdpUIController; // ivar: _cdpUIController
@property (retain, nonatomic) UIViewController *presentingViewController; // ivar: _presentingViewController


-(id)_serviceContextWithResults:(id)arg0 parentViewController:(id)arg1 ;
-(id)initWithAuthRequest:(id)arg0 presentingViewController:(id)arg1 ;
-(id)performAuthenticate;


@end


#endif