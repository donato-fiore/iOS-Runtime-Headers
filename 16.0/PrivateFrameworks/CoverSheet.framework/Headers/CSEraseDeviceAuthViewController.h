// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef CSERASEDEVICEAUTHVIEWCONTROLLER_H
#define CSERASEDEVICEAUTHVIEWCONTROLLER_H

@class UIViewController, UIButton, UILabel, UIView, AKInlineSignInViewController, AKAppleIDAuthenticationInAppContext, NSString;
@protocol AKInlineSignInViewControllerDelegate, CSEraseDeviceAuthViewControllerDelegate;



@interface CSEraseDeviceAuthViewController : UIViewController <AKInlineSignInViewControllerDelegate>

 {
    UIButton *_cancelButton;
    UILabel *_titleLabel;
    UILabel *_subtitleLabel;
    UIView *_containerView;
    UIView *_labelsContainerView;
    AKInlineSignInViewController *_authenticationViewController;
    UIView *_springView;
}


@property (nonatomic) AKAppleIDAuthenticationInAppContext *authContext; // ivar: _authContext
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<CSEraseDeviceAuthViewControllerDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(BOOL)_canShowWhileLocked;
-(id)_authenticationView;
-(void)_activateConstraints;
-(void)_handleCancelButtonAction;
-(void)_updateForFailedAppleIDAuthentication;
-(void)loadView;
-(void)setSubtitleLabelText:(id)arg0 ;
-(void)signInViewController:(id)arg0 didAuthenticateWithResults:(id)arg1 error:(id)arg2 ;
-(void)viewDidLoad;


@end


#endif