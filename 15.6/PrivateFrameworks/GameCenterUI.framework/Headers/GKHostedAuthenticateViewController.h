// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef GKHOSTEDAUTHENTICATEVIEWCONTROLLER_H
#define GKHOSTEDAUTHENTICATEVIEWCONTROLLER_H

@class UIViewController, NSString, NSError;
@protocol GKExtensionParentViewControllerProtocol, GKAuthenticateViewController;


#import "GKAuthenticateHostViewController.h"

@interface GKHostedAuthenticateViewController : UIViewController <GKExtensionParentViewControllerProtocol, GKAuthenticateViewController>



@property (copy, nonatomic) id *completionHandler; // ivar: _completionHandler
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic) BOOL disablesSignIn; // ivar: _disablesSignIn
@property (copy, nonatomic) id *dismissCompletionHandler; // ivar: _dismissCompletionHandler
@property (retain, nonatomic) NSError *error; // ivar: _error
@property (retain, nonatomic) GKAuthenticateHostViewController *extensionHostViewController; // ivar: _extensionHostViewController
@property (readonly) NSUInteger hash;
@property (nonatomic) NSInteger mode; // ivar: _mode
@property (copy, nonatomic) id *remoteViewReadyHandler; // ivar: _remoteViewReadyHandler
@property (nonatomic, getter=isRotationLocked) BOOL rotationLocked; // ivar: _rotationLocked
@property (readonly) Class superclass;


+(BOOL)_preventsAppearanceProxyCustomization;
-(BOOL)automaticallyForwardAppearanceAndRotationMethodsToChildViewControllers;
-(BOOL)shouldAutomaticallyForwardAppearanceMethods;
-(BOOL)shouldAutomaticallyForwardRotationMethods;
-(BOOL)shouldAutorotate;
-(id)init;
-(void)_setupChildViewController;
-(void)_setupExtensionHostViewController;
-(void)continueWithMode:(NSInteger)arg0 ;
-(void)dealloc;
-(void)dismissViewControllerAnimated:(BOOL)arg0 completion:(id)arg1 ;
-(void)extensionDidFinishWithError:(id)arg0 ;
-(void)finishAuthenticationWithError:(id)arg0 ;
-(void)onboardingFlowDidSignOut;
-(void)setModalPresentationStyle:(NSInteger)arg0 ;
-(void)showPasswordChangeAlertWithURL:(id)arg0 ;
-(void)viewDidDisappear:(BOOL)arg0 ;
-(void)viewWillAppear:(BOOL)arg0 ;


@end


#endif