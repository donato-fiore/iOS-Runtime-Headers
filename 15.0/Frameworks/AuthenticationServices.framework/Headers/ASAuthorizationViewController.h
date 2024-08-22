// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef ASAUTHORIZATIONVIEWCONTROLLER_H
#define ASAUTHORIZATIONVIEWCONTROLLER_H

@class UIViewController, ASCAuthorizationPresentationContext, NSString;
@protocol ASCredentialRequestPaneViewControllerDelegate, ASCredentialRequestContainerViewControllerDelegate, ASPasswordAuthenticationPaneViewControllerDelegate, ASAuthorizationViewControllerDelegate;


#import "ASNavigationController.h"

@interface ASAuthorizationViewController : UIViewController <ASCredentialRequestPaneViewControllerDelegate, ASCredentialRequestContainerViewControllerDelegate, ASPasswordAuthenticationPaneViewControllerDelegate>

 {
    ASCAuthorizationPresentationContext *_presentationContext;
    ASNavigationController *_navigationController;
}


@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<ASAuthorizationViewControllerDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(NSInteger)modalPresentationStyle;
-(id)_cancelBarButtonItem;
-(id)_initialViewControllerForPresentationContext:(id)arg0 ;
-(id)_securityKeyRequestViewController;
-(id)_securityKeyRequestViewControllerWithOverrideSubtitle:(id)arg0 ;
-(id)_setUpContainerViewControllerWithCredentialRequestViewController:(id)arg0 ;
-(id)_setUpInitialViewController;
-(id)_signInBarButtonItem;
-(id)initWithPresentationContext:(id)arg0 ;
-(id)navigationController;
-(void)_cancelButtonSelected:(id)arg0 ;
-(void)_presentManualPasswordEntryInterface;
-(void)_presentPINEntryInterface;
-(void)_pushSecurityKeyViewController;
-(void)_pushSecurityKeyViewControllerWithOverrideSubtitle:(id)arg0 ;
-(void)passwordAuthenticationViewController:(id)arg0 completedWithManuallyEnteredPasswordCredential:(id)arg1 ;
-(void)passwordAuthenticationViewController:(id)arg0 validateUserEnteredPIN:(id)arg1 completionHandler:(id)arg2 ;
-(void)presentPINEntryInterface;
-(void)pushOrUpdateBasicPaneViewControllerWithError:(NSInteger)arg0 ;
-(void)requestContainerViewControllerDidDismiss:(id)arg0 ;
-(void)requestPaneViewController:(id)arg0 didRequestCredentialForLoginChoice:(id)arg1 authenticatedContext:(id)arg2 completionHandler:(id)arg3 ;
-(void)requestPaneViewController:(id)arg0 dismissWithCredential:(id)arg1 error:(id)arg2 ;
-(void)requestPaneViewControllerPresentManualPasswordEntryInterface:(id)arg0 ;
-(void)requestPaneViewControllerRequiresPINEntryInterface:(id)arg0 ;
-(void)updateInterfaceWithLoginChoices:(id)arg0 ;
-(void)viewWillAppear:(BOOL)arg0 ;


@end


#endif