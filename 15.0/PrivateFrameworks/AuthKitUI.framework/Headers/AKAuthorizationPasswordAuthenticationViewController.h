// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef AKAUTHORIZATIONPASSWORDAUTHENTICATIONVIEWCONTROLLER_H
#define AKAUTHORIZATIONPASSWORDAUTHENTICATIONVIEWCONTROLLER_H

@class NSString, AKAuthorizationPresentationContext;
@protocol AKSignInViewControllerDelegate, AKAuthorizationPasswordAuthenticationDelegate;


#import "AKAuthorizationPaneViewController.h"
#import "AKModalSignInViewController.h"

@interface AKAuthorizationPasswordAuthenticationViewController : AKAuthorizationPaneViewController <AKSignInViewControllerDelegate>

 {
    AKModalSignInViewController *_modalSignInViewController;
    CGFloat _keyboardHeight;
}


@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<AKAuthorizationPasswordAuthenticationDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) AKAuthorizationPresentationContext *presentationContext; // ivar: _presentationContext
@property (readonly) Class superclass;


-(CGFloat)intrinsicContentHeight;
-(id)_contextForAuthentication;
-(id)_username;
-(void)dealloc;
-(void)keyboardDidShow:(id)arg0 ;
-(void)signInViewController:(id)arg0 didAuthenticateWithResults:(id)arg1 error:(id)arg2 ;
-(void)sizeToFitPaneContentAnimated:(BOOL)arg0 ;
-(void)viewDidLoad;
-(void)viewWillDisappear:(BOOL)arg0 ;


@end


#endif