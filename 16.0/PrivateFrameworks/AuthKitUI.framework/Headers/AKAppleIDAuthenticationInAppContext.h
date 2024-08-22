// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef AKAPPLEIDAUTHENTICATIONINAPPCONTEXT_H
#define AKAPPLEIDAUTHENTICATIONINAPPCONTEXT_H

@class AKAppleIDAuthenticationContext, AKNativeAccountRecoveryController, NSString, UIViewController;
@protocol RemoteUIControllerDelegate, AKAppleIDAuthenticationUIProvider, AKAppleIDAuthenticationInAppContextPasswordDelegate, AKAppleIDAuthenticationInAppContextAlertDelegate, CDPStateUIProvider, AKAppleIDAuthenticationInAppContextDelegate, AKInAppAuthenticationUIProvider;



@interface AKAppleIDAuthenticationInAppContext : AKAppleIDAuthenticationContext <RemoteUIControllerDelegate, AKAppleIDAuthenticationUIProvider>

 {
    AKNativeAccountRecoveryController *_nativeRecoveryController;
}


@property (weak, nonatomic, setter=_setPasswordDelegate:) NSObject<AKAppleIDAuthenticationInAppContextPasswordDelegate> *_passwordDelegate; // ivar: __passwordDelegate
@property (weak, nonatomic) NSObject<AKAppleIDAuthenticationInAppContextAlertDelegate> *alertDelegate; // ivar: _alertDelegate
@property (retain, nonatomic, setter=_setCdpUiProvider:) NSObject<CDPStateUIProvider> *cdpUiProvider; // ivar: _cdpUiProvider
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<AKAppleIDAuthenticationInAppContextDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (nonatomic) BOOL forceInlinePresentation; // ivar: _forceInlinePresentation
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) NSObject<AKInAppAuthenticationUIProvider> *inAppAuthUIProvider; // ivar: _inAppAuthUIProvider
@property (nonatomic, getter=isPresentingServerUI) BOOL presentingServerUI; // ivar: _presentingServerUI
@property (weak, nonatomic) UIViewController *presentingViewController; // ivar: _presentingViewController
@property (readonly) Class superclass;


-(id)_remoteUIControllerDelegate;
-(id)remoteUIStyle;
-(id)serverDataHarvester;
-(void)_assertValidPresentingViewController;
-(void)_cleanUpBasicLoginWithCompletion:(id)arg0 ;
-(void)_contextDidEndPresentingSecondaryUI;
-(void)_contextWillBeginPresentingSecondaryUI;
-(void)_dismissServerProvidedUIWithCompletion:(id)arg0 ;
-(void)_handleBackButtonTap:(id)arg0 ;
-(void)_presentLoginAlertWithError:(id)arg0 title:(id)arg1 message:(id)arg2 waitForInteraction:(BOOL)arg3 completion:(id)arg4 ;
-(void)_presentTooManyLoginAttemptsViewWithCompletion:(id)arg0 ;
-(void)completeWithError:(id)arg0 ;
-(void)dismissBasicLoginUIWithCompletion:(id)arg0 ;
-(void)dismissKeepUsingUIWithCompletion:(id)arg0 ;
-(void)dismissNativeRecoveryUIWithCompletion:(id)arg0 ;
-(void)dismissSecondFactorUIWithCompletion:(id)arg0 ;
-(void)dismissServerProvidedUIWithCompletion:(id)arg0 ;
-(void)presentBasicLoginUIWithCompletion:(id)arg0 ;
-(void)presentBiometricOrPasscodeValidationForAppleID:(id)arg0 completion:(id)arg1 ;
-(void)presentFidoAuthForContext:(id)arg0 fidoContext:(id)arg1 completion:(id)arg2 ;
-(void)presentKeepUsingUIForAppleID:(id)arg0 completion:(id)arg1 ;
-(void)presentLoginAlertWithError:(id)arg0 title:(id)arg1 message:(id)arg2 completion:(id)arg3 ;
-(void)presentNativeRecoveryUIWithContext:(id)arg0 completion:(id)arg1 ;
-(void)presentSecondFactorAlertWithError:(id)arg0 title:(id)arg1 message:(id)arg2 completion:(id)arg3 ;
-(void)presentSecondFactorUIWithCompletion:(id)arg0 ;
-(void)presentServerProvidedUIWithConfiguration:(id)arg0 completion:(id)arg1 ;
-(void)remoteUIController:(id)arg0 didDismissModalNavigationWithObjectModels:(id)arg1 ;
-(void)remoteUIController:(id)arg0 didFinishLoadWithError:(id)arg1 forRequest:(id)arg2 ;
-(void)remoteUIController:(id)arg0 didReceiveChallenge:(id)arg1 completionHandler:(id)arg2 ;
-(void)remoteUIController:(id)arg0 didReceiveHTTPResponse:(id)arg1 forRequest:(id)arg2 ;
-(void)remoteUIController:(id)arg0 didReceiveObjectModel:(id)arg1 actionSignal:(*NSUInteger)arg2 ;
-(void)remoteUIController:(id)arg0 shouldLoadRequest:(id)arg1 redirectResponse:(id)arg2 withCompletionHandler:(id)arg3 ;
-(void)remoteUIController:(id)arg0 willPresentModalNavigationController:(id)arg1 ;
-(void)remoteUIController:(id)arg0 willPresentObjectModel:(id)arg1 modally:(BOOL)arg2 ;
-(void)willPresentModalNavigationController:(id)arg0 ;


@end


#endif