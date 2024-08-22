// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef AKAUTHORIZATIONVIEWCONTROLLER_H
#define AKAUTHORIZATIONVIEWCONTROLLER_H

@class UIViewController, NSString, AKAuthorizationPresentationContext;
@protocol AKAuthorizationPaneDelegate, AKAuthorizationContainerViewControllerDelegate, AKAuthorizationViewControllerDelegate;


#import "AKAuthorizationNavigationController.h"
#import "AKAuthorizationScopeChoices.h"

@interface AKAuthorizationViewController : UIViewController <AKAuthorizationPaneDelegate, AKAuthorizationContainerViewControllerDelegate>



@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<AKAuthorizationViewControllerDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) AKAuthorizationNavigationController *navigationController; // ivar: _navigationController
@property (retain, nonatomic) AKAuthorizationPresentationContext *presentationContext; // ivar: _presentationContext
@property (readonly, nonatomic) AKAuthorizationScopeChoices *scopeChoices; // ivar: _scopeChoices
@property (readonly) Class superclass;


-(BOOL)_isFirstTimeAppleIDAuthorization;
-(BOOL)_isManagedAppleID;
-(NSInteger)modalPresentationStyle;
-(id)_backBarButtonItem;
-(id)_cancelBarButtonItem;
-(id)_inputPaneViewController;
-(id)_logoBarButtonItem:(id)arg0 ;
-(id)firstTimeViewController;
-(id)init;
-(id)initWithAuthorizationContext:(id)arg0 ;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithNibName:(id)arg0 bundle:(id)arg1 ;
-(void)_backButtonSelected:(id)arg0 ;
-(void)_cancelButtonSelected:(id)arg0 ;
-(void)_delegate_authorizationViewControllerDidCompleteWithAuthorization:(id)arg0 error:(id)arg1 ;
-(void)_performPasswordAuthenticationForFederatedManagedAccountForPaneViewController:(id)arg0 ;
-(void)_presentAuthorizationViewController;
-(void)_presentContainerViewControllerWith:(id)arg0 ;
-(void)_presentFirstTimeViewController;
-(void)_presentInputPaneViewControllerReplacing:(BOOL)arg0 ;
-(void)authorizationContainerViewControllerDidDismiss:(id)arg0 ;
-(void)authorizationPaneViewController:(id)arg0 didRequestAuthorizationWithUserProvidedInformation:(id)arg1 completion:(id)arg2 ;
-(void)authorizationPaneViewController:(id)arg0 didRequestIconWithCompletion:(id)arg1 ;
-(void)authorizationPaneViewController:(id)arg0 dismissWithAuthorization:(id)arg1 error:(id)arg2 ;
-(void)authorizationPaneViewController:(id)arg0 pushEditScope:(id)arg1 presentationContext:(id)arg2 options:(id)arg3 ;
-(void)performAppleIDAuthorizationForPaneViewController:(id)arg0 ;
-(void)performPasswordAuthenticationForPaneViewController:(id)arg0 ;
-(void)presentAuthenticationChoiceUIWithCompletion:(id)arg0 ;
-(void)presentConfirmPaneViewController;
-(void)presentInputPaneViewController;
-(void)viewDidLoad;
-(void)viewWillAppear:(BOOL)arg0 ;


@end


#endif