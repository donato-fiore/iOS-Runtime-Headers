// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef AKBASESIGNINVIEWCONTROLLER_H
#define AKBASESIGNINVIEWCONTROLLER_H

@class UIViewController, AKAppleIDAuthenticationController, NSString;
@protocol AKBasicLoginAnimateProtocol, AKSignInViewControllerDelegate;


#import "AKAppleIDAuthenticationInAppContext.h"

@interface AKBaseSignInViewController : UIViewController <AKBasicLoginAnimateProtocol>

 {
    AKAppleIDAuthenticationController *_authenticationController;
}


@property (nonatomic, getter=isAuthInProgress) BOOL authInProgress; // ivar: _authInProgress
@property (readonly) AKAppleIDAuthenticationController *authenticationController;
@property (retain) AKAppleIDAuthenticationInAppContext *context; // ivar: _context
@property (readonly, copy) NSString *debugDescription;
@property (weak) NSObject<AKSignInViewControllerDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;
@property (nonatomic) BOOL usesDarkMode; // ivar: _usesDarkMode


-(BOOL)_canBeginAuthenticationWithOption:(NSUInteger)arg0 ;
-(BOOL)_isAccountModificationRestricted;
-(BOOL)_isSignInAllowed;
-(id)_initWithAuthController:(id)arg0 ;
-(id)_initWithNibName:(id)arg0 bundle:(id)arg1 ;
-(void)_authenticateWithContext:(id)arg0 ;
-(void)_beginAuthenticationIfPossibleWithOption:(NSUInteger)arg0 withUsername:(id)arg1 password:(id)arg2 ;
-(void)_provideDelegateWithAuthResults:(id)arg0 error:(id)arg1 ;
-(void)_setPasswordFieldHidden:(BOOL)arg0 animated:(BOOL)arg1 ;
-(void)_setPasswordFieldHiddenIfNeeded;
-(void)startAnimating;
-(void)stopAnimating;
-(void)viewDidAppear:(BOOL)arg0 ;


@end


#endif