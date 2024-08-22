// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef AKINAPPAUTHENTICATIONREMOTEUIPROVIDER_H
#define AKINAPPAUTHENTICATIONREMOTEUIPROVIDER_H

@class UINavigationController, NSString, RemoteUIController, RemoteUIControllerPreferences;
@protocol AKBasicLoginControllerDelegate, AKInAppAuthenticationUIProvider;

#import <Foundation/Foundation.h>

#import "AKBasicLoginAlertController.h"
#import "AKBasicLoginViewController.h"
#import "AKAppleIDAuthenticationInAppContext.h"
#import "AKInAppAuthenticationRemoteUIDelegate.h"

@interface AKInAppAuthenticationRemoteUIProvider : NSObject <AKBasicLoginControllerDelegate, AKInAppAuthenticationUIProvider>

 {
    AKBasicLoginAlertController *_basicLoginAlertController;
    AKBasicLoginViewController *_basicLoginViewController;
    UINavigationController *_navController;
}


@property (weak, nonatomic) AKAppleIDAuthenticationInAppContext *context; // ivar: _context
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) RemoteUIController *remoteUIController; // ivar: _remoteUIController
@property (readonly, nonatomic) AKInAppAuthenticationRemoteUIDelegate *remoteUIControllerDelegate; // ivar: _remoteUIControllerDelegate
@property (retain, nonatomic) RemoteUIControllerPreferences *ruiPreferences; // ivar: _ruiPreferences
@property (readonly) Class superclass;


-(BOOL)_shouldShowAsView;
-(BOOL)_shouldUsePasswordDelegate;
-(id)_actionsForLoginWithCompletion:(id)arg0 ;
-(id)_navController;
-(id)_secondFactorActionsForAlert:(id)arg0 completion:(id)arg1 ;
-(id)initWithContext:(id)arg0 ;
-(void)_clearRemoteUIController;
-(void)_showMaxAttemptAlertWithCompletion:(id)arg0 ;
-(void)_startAnimating;
-(void)_updateReason;
-(void)basicLoginControllerDidDismiss:(id)arg0 ;
-(void)basicLoginControllerDidPresent:(id)arg0 ;
-(void)basicLoginControllerWillDismiss:(id)arg0 ;
-(void)cleanUpBasicLoginWithCompletion:(id)arg0 ;
-(void)dealloc;
-(void)dismissBasicLoginUIWithCompletion:(id)arg0 ;
-(void)dismissKeepUsingUIWithCompletion:(id)arg0 ;
-(void)dismissNativeRecoveryUIWithCompletion:(id)arg0 ;
-(void)dismissSecondFactorUIWithCompletion:(id)arg0 ;
-(void)dismissServerProvidedUIWithCompletion:(id)arg0 ;
-(void)presentBasicLoginUIAsAlertWithCompletion:(id)arg0 ;
-(void)presentBasicLoginUIAsViewWithCompletion:(id)arg0 ;
-(void)presentBasicLoginUIWithCompletion:(id)arg0 ;
-(void)presentBiometricOrPasscodeValidationForAppleID:(id)arg0 completion:(id)arg1 ;
-(void)presentIDPProvidedUIWithConfiguration:(id)arg0 completion:(id)arg1 ;
-(void)presentKeepUsingUIForAppleID:(id)arg0 completion:(id)arg1 ;
-(void)presentLoginAlertUIAsViewWithError:(id)arg0 title:(id)arg1 message:(id)arg2 waitForInteraction:(BOOL)arg3 completion:(id)arg4 ;
-(void)presentLoginAlertWithError:(id)arg0 title:(id)arg1 message:(id)arg2 completion:(id)arg3 ;
-(void)presentLoginAlertWithError:(id)arg0 title:(id)arg1 message:(id)arg2 waitForInteraction:(BOOL)arg3 completion:(id)arg4 ;
-(void)presentNativeRecoveryUIWithContext:(id)arg0 completion:(id)arg1 ;
-(void)presentSecondFactorAlertWithError:(id)arg0 title:(id)arg1 message:(id)arg2 completion:(id)arg3 ;
-(void)presentSecondFactorUIWithCompletion:(id)arg0 ;
-(void)presentServerProvidedUIWithConfiguration:(id)arg0 completion:(id)arg1 ;
-(void)willPresentModalNavigationController:(id)arg0 ;


@end


#endif