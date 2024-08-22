// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef VSSETUPFLOWCONTROLLER_H
#define VSSETUPFLOWCONTROLLER_H

@class VSDevice, NSString, NSArray, VSPreferences, NSOperationQueue, VSRemoteNotifier, VSAccountSerializationCenter, VSPersistentStorage;
@protocol VSIdentityProviderPickerViewControllerDelegate, VSIdentityProviderViewControllerDelegate, VSRemoteNotifierDelegate, VSSupportedAppsViewControllerDelegate, VSIdentityProviderRequestManagerDelegate, VSSetupFlowControllerDelegate;

#import <Foundation/Foundation.h>

#import "VSAppDescription.h"
#import "VSIdentityProviderRequestManager.h"

@interface VSSetupFlowController : NSObject <VSIdentityProviderPickerViewControllerDelegate, VSIdentityProviderViewControllerDelegate, VSRemoteNotifierDelegate, VSSupportedAppsViewControllerDelegate, VSIdentityProviderRequestManagerDelegate>



@property (retain, nonatomic) VSAppDescription *appDescription; // ivar: _appDescription
@property (retain, nonatomic) VSDevice *currentDevice; // ivar: _currentDevice
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<VSSetupFlowControllerDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (copy, nonatomic) NSArray *freeOnBoardingBundleIDs; // ivar: _freeOnBoardingBundleIDs
@property (copy, nonatomic) id *goingBackActivationCompletionBlock; // ivar: _goingBackActivationCompletionBlock
@property (readonly) NSUInteger hash;
@property (nonatomic) BOOL isInSTBMode; // ivar: _isInSTBMode
@property (nonatomic) BOOL notifyDelegateFromActivation; // ivar: _notifyDelegateFromActivation
@property (retain, nonatomic) VSPreferences *preferences; // ivar: _preferences
@property (retain, nonatomic) NSOperationQueue *privateQueue; // ivar: _privateQueue
@property (retain, nonatomic) NSString *providerAccountUsername; // ivar: _providerAccountUsername
@property (retain, nonatomic) VSRemoteNotifier *remoteNotifier; // ivar: _remoteNotifier
@property (retain, nonatomic) VSIdentityProviderRequestManager *requestManager; // ivar: _requestManager
@property (retain, nonatomic) VSAccountSerializationCenter *serializationCenter; // ivar: _serializationCenter
@property (nonatomic, getter=isSigningIn) BOOL signingIn; // ivar: _signingIn
@property (retain, nonatomic) VSPersistentStorage *storage; // ivar: _storage
@property (readonly) Class superclass;
@property (retain, nonatomic) NSArray *supportedApps; // ivar: _supportedApps


-(id)_getProviderWithUserTokenFromAllProviders:(id)arg0 ;
-(id)init;
-(void)_appleAccountDidChange:(id)arg0 ;
-(void)_didStartLoading;
-(void)_dismissViewController:(id)arg0 completion:(id)arg1 ;
-(void)_finishAfterOfferingOptions:(BOOL)arg0 endingUndoGrouping:(BOOL)arg1 ;
-(void)_obtainConsentForBundleIDs:(id)arg0 vouchers:(id)arg1 withAppleAccountName:(id)arg2 identityProvider:(id)arg3 endingUndoGrouping:(BOOL)arg4 arrivedViaNotNowButton:(BOOL)arg5 arrivedAfterSigningIn:(BOOL)arg6 goingBack:(BOOL)arg7 ;
-(void)_offerAuthenticationForProvider:(id)arg0 withSupportedAppsButton:(BOOL)arg1 msoAppDescription:(id)arg2 ;
-(void)_offerAuthenticationForSTBProvider:(id)arg0 msoAppDescription:(id)arg1 providerAccountUsername:(id)arg2 ;
-(void)_offerAuthenticationWithSupportedAppsButton:(BOOL)arg0 ;
-(void)_offerFreeOnBoardingIfNeededAfterOfferingOptions:(BOOL)arg0 endingUndoGrouping:(BOOL)arg1 arrivedViaNotNowButton:(BOOL)arg2 arrivedAfterSigningIn:(BOOL)arg3 goingBack:(BOOL)arg4 ;
-(void)_pickProviderWithViewController:(id)arg0 ;
-(void)_presentError:(id)arg0 ;
-(void)_presentViewController:(id)arg0 completion:(id)arg1 ;
-(void)_requestAccessWithViewController:(id)arg0 ;
-(void)_startLoadingAfterOfferingOptions:(BOOL)arg0 endingUndoGrouping:(BOOL)arg1 arrivedViaNotNowButton:(BOOL)arg2 arrivedAfterSigningIn:(BOOL)arg3 goingBack:(BOOL)arg4 ;
-(void)dealloc;
-(void)dismissIdentityProviderViewController:(id)arg0 ;
-(void)finishSTBSuccessFlowForProvider:(id)arg0 ;
-(void)forceSignOutWithAccount:(id)arg0 ;
-(void)identityProviderPickerViewController:(id)arg0 didPickIdentityProvider:(id)arg1 ;
-(void)identityProviderRequestManager:(id)arg0 finishedRequest:(id)arg1 withResult:(id)arg2 ;
-(void)identityProviderViewController:(id)arg0 didAuthenticateAccount:(id)arg1 forRequest:(id)arg2 ;
-(void)identityProviderViewController:(id)arg0 didFinishRequest:(id)arg1 withResult:(id)arg2 ;
-(void)identityProviderViewControllerDidCancel:(id)arg0 ;
-(void)markSTBProviderAppForInstallation:(id)arg0 withAppPlacementPosition:(id)arg1 ;
-(void)notNow;
-(void)notNowWithIdentityProvider:(id)arg0 ;
-(void)performDismissalOfIdentityProviderViewController:(id)arg0 ;
-(void)remoteNotifier:(id)arg0 didReceiveRemoteNotificationWithUserInfo:(id)arg1 ;
-(void)showSupportedApps;
-(void)signOutForNotNowFlowWithIdentityProvider:(id)arg0 ;
-(void)startLoadingWhenGoingBack:(BOOL)arg0 serializedAccountDataToImport:(id)arg1 ;
-(void)startSigningIn;
-(void)startSigningInForIdentityProvider:(id)arg0 ;
-(void)startSilentSigningInForSTBFromActivation:(BOOL)arg0 withCompletion:(id)arg1 ;
-(void)supportedAppsViewControllerDidFinish:(id)arg0 ;


@end


#endif