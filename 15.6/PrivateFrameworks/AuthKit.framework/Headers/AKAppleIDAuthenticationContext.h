// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef AKAPPLEIDAUTHENTICATIONCONTEXT_H
#define AKAPPLEIDAUTHENTICATIONCONTEXT_H

@class NSString, NSNumber, NSUUID, NSDictionary, NSSet, NSData, NSArray;
@protocol AKAppleIDAuthenticationLimitedUIProvider, AKAuthenticationContext, NSSecureCoding, OS_dispatch_queue, AKAnisetteServiceProtocol;

#import <Foundation/Foundation.h>

#import "AKDevice.h"
#import "AKAnisetteData.h"

@interface AKAppleIDAuthenticationContext : NSObject <AKAppleIDAuthenticationLimitedUIProvider, AKAuthenticationContext, NSSecureCoding>

 {
    NSString *_generatedCode;
    NSNumber *_latitude;
    NSNumber *_longitude;
    NSString *_deviceClass;
    NSString *_deviceColor;
    NSString *_deviceEnclosureColor;
    *__CFUserNotification _activeSecondFactoryEntryPrompt;
    id *_secondFactoryEntryCompletion;
    NSObject<OS_dispatch_queue> *_secondFactorQueue;
    NSString *_interpolatedReason;
    BOOL _isContextRequestingReauthForExistingService;
}


@property (copy, nonatomic) NSString *DSID; // ivar: _DSID
@property (nonatomic) NSUInteger _attemptIndex; // ivar: _attemptIndex
@property (readonly, nonatomic) NSUInteger _capabilityForUIDisplay; // ivar: _capabilityForUIDisplay
@property (nonatomic, getter=_isForcedEligibleForForegroundAuthentication, setter=set_forceEligibleForForegroundAuthentication:) BOOL _forceEligibleForForegroundAuthentication; // ivar: _forceEligibleForForegroundAuthentication
@property (readonly, nonatomic) NSUUID *_identifier; // ivar: _identifier
@property (copy, nonatomic, setter=_setIdentityToken:) NSString *_identityToken; // ivar: _identityToken
@property (readonly, nonatomic) NSString *_interpolatedReason;
@property (readonly, nonatomic) NSString *_interpolatedReasonWithBlame;
@property (nonatomic) BOOL _isPasswordEditable; // ivar: _isPasswordEditable
@property (nonatomic, setter=_setProxyingForApp:) BOOL _isProxyingForApp; // ivar: _isProxyingForApp
@property (nonatomic) BOOL _keepAlive; // ivar: _keepAlive
@property (copy, nonatomic, setter=_setMasterKey:) NSString *_masterKey; // ivar: _masterKey
@property (copy, nonatomic, setter=_setMessage:) NSString *_message; // ivar: _message
@property (copy, nonatomic, setter=_setPassword:) NSString *_password; // ivar: _password
@property (copy, nonatomic) NSString *_passwordPromptTitle; // ivar: _passwordPromptTitle
@property (nonatomic) BOOL _performUIOutOfProcess; // ivar: _performUIOutOfProcess
@property (copy, nonatomic, setter=_setProxiedAppBundleID:) NSString *_proxiedAppBundleID; // ivar: _proxiedAppBundleID
@property (copy, nonatomic, setter=_setProxiedAppName:) NSString *_proxiedAppName; // ivar: _proxiedAppName
@property (readonly, nonatomic) BOOL _requiresPasswordInput;
@property (copy, nonatomic, setter=_setShortLivedToken:) NSString *_shortLivedToken; // ivar: _shortLivedToken
@property (readonly, nonatomic) BOOL _shouldRefreshAccountAndUpdateContext;
@property (nonatomic) BOOL _shouldSendGrandSlamTokensForRemoteUI; // ivar: _shouldSendGrandSlamTokensForRemoteUI
@property (nonatomic) BOOL _shouldSendIdentityTokenForRemoteUI; // ivar: _shouldSendIdentityTokenForRemoteUI
@property (nonatomic) BOOL _shouldSkipInitialReachabilityCheck; // ivar: _shouldSkipInitialReachabilityCheck
@property (copy, nonatomic) NSString *altDSID; // ivar: _altDSID
@property (retain) NSString *alternativeButtonString; // ivar: _alternativeButtonString
@property (nonatomic) BOOL alwaysShowUsernameField; // ivar: _alwaysShowUsernameField
@property (retain, nonatomic) NSObject<AKAnisetteServiceProtocol> *anisetteDataProvider; // ivar: _anisetteDataProvider
@property (nonatomic) BOOL anticipateEscrowAttempt; // ivar: _anticipateEscrowAttempt
@property (copy, nonatomic) NSString *appProvidedContext; // ivar: _appProvidedContext
@property (copy, nonatomic) NSDictionary *appProvidedData; // ivar: _appProvidedData
@property (nonatomic) NSInteger authenticationMode; // ivar: _authenticationMode
@property (nonatomic) NSInteger authenticationPromptStyle; // ivar: _authenticationPromptStyle
@property (nonatomic) NSUInteger authenticationType; // ivar: _authenticationType
@property (copy, nonatomic) NSString *callerIconBundlePath; // ivar: _callerIconBundlePath
@property (retain) NSString *cancelButtonString; // ivar: _cancelButtonString
@property (copy, nonatomic) NSString *cellularDataAttributionAppBundleID; // ivar: _cellularDataAttributionAppBundleID
@property (nonatomic) BOOL cliMode; // ivar: _cliMode
@property (retain, nonatomic) id *clientInfo; // ivar: _clientInfo
@property (nonatomic) BOOL clientShouldHandleAlternativeButtonAction; // ivar: _clientShouldHandleAlternativeButtonAction
@property (copy, nonatomic) AKDevice *companionDevice; // ivar: _companionDevice
@property (retain, nonatomic) AKAnisetteData *companionDeviceAnisetteData; // ivar: _companionDeviceAnisetteData
@property (readonly, nonatomic, getter=isContextEligibleForBiometricOrPasscodeAuth) BOOL contextEligibleForBiometricOrPasscodeAuth;
@property (readonly, nonatomic, getter=isContextEligibleForSilentAuth) BOOL contextEligibleForSilentAuth;
@property (readonly, nonatomic, getter=isContextEligibleForSilentAuthCoercion) BOOL contextEligibleForSilentAuthCoercion;
@property (readonly, nonatomic, getter=isContextRequestingReauthForExistingService) BOOL contextRequestingReauthForExistingService;
@property (copy, nonatomic, setter=setCustodianRecoveryToken:) NSString *custodianRecoveryToken; // ivar: _custodianRecoveryToken
@property (readonly, copy) NSString *debugDescription;
@property (copy, nonatomic) NSString *defaultButtonString; // ivar: _defaultButtonString
@property (readonly, copy) NSString *description;
@property (copy, nonatomic) NSSet *desiredInternalTokens; // ivar: _desiredInternalTokens
@property (copy, nonatomic) NSString *deviceClass;
@property (copy, nonatomic) NSString *deviceColor;
@property (copy, nonatomic) NSString *deviceEnclosureColor;
@property (retain) NSData *displayImageData; // ivar: _displayImageData
@property (copy, nonatomic) NSString *displayString; // ivar: _displayString
@property (copy, nonatomic) NSString *displayTitle; // ivar: _displayTitle
@property (copy, nonatomic) NSString *generatedCode;
@property (copy, nonatomic, setter=setHasEmptyPassword:) NSNumber *hasEmptyPassword; // ivar: _hasEmptyPassword
@property (readonly) NSUInteger hash;
@property (copy, nonatomic) NSString *helpAnchor; // ivar: _helpAnchor
@property (copy, nonatomic) NSString *helpBook; // ivar: _helpBook
@property BOOL hideAlternativeButton; // ivar: _hideAlternativeButton
@property BOOL hideCancelButton; // ivar: _hideCancelButton
@property BOOL hideReasonString; // ivar: _hideReasonString
@property (copy, nonatomic) NSDictionary *httpHeadersForRemoteUI; // ivar: _httpHeadersForRemoteUI
@property (copy, nonatomic, setter=setAppleIDLoginEnabled:) NSNumber *isAppleIDLoginEnabled; // ivar: _isAppleIDLoginEnabled
@property (nonatomic) BOOL isEphemeral; // ivar: _isEphemeral
@property (nonatomic, setter=setFirstTimeLogin:) BOOL isFirstTimeLogin; // ivar: _isFirstTimeLogin
@property (nonatomic, setter=setTriggeredByNotification:) BOOL isTriggeredByNotification; // ivar: _isTriggeredByNotification
@property (nonatomic) BOOL isUsernameEditable; // ivar: _isUsernameEditable
@property (copy, nonatomic) NSNumber *latitude;
@property (copy, nonatomic) NSString *localizedCallerName; // ivar: _localizedCallerName
@property (copy, nonatomic) NSNumber *longitude;
@property (nonatomic) NSInteger maximumLoginAttempts; // ivar: _maximumLoginAttempts
@property (nonatomic) BOOL needsCredentialRecovery; // ivar: _needsCredentialRecovery
@property (nonatomic) BOOL needsNewAppleID; // ivar: _needsNewAppleID
@property (nonatomic) BOOL needsNewChildAccount; // ivar: _needsNewChildAccount
@property (nonatomic) BOOL needsPasswordChange; // ivar: _needsPasswordChange
@property (nonatomic) BOOL needsRepair; // ivar: _needsRepair
@property (nonatomic) BOOL needsSecurityUpgradeUI; // ivar: _needsSecurityUpgradeUI
@property (copy) NSString *privacyBundleIdentifier; // ivar: _privacyBundleIdentifier
@property (copy, nonatomic) AKDevice *proxiedDevice; // ivar: _proxiedDevice
@property (retain, nonatomic) AKAnisetteData *proxiedDeviceAnisetteData; // ivar: _proxiedDeviceAnisetteData
@property (copy, nonatomic) NSString *reason; // ivar: _reason
@property (copy, nonatomic) NSString *securityUpgradeContext; // ivar: _securityUpgradeContext
@property (copy, nonatomic) NSString *serviceIdentifier;
@property (copy, nonatomic) NSArray *serviceIdentifiers; // ivar: _serviceIdentifiers
@property (nonatomic) NSInteger serviceType; // ivar: _serviceType
@property (nonatomic) BOOL shouldAllowAppleIDCreation; // ivar: _shouldAllowAppleIDCreation
@property (nonatomic) BOOL shouldForceInteractiveAuth; // ivar: _shouldForceInteractiveAuth
@property (nonatomic) BOOL shouldOfferSecurityUpgrade; // ivar: _shouldOfferSecurityUpgrade
@property (nonatomic) BOOL shouldPreventInteractiveAuth; // ivar: _shouldPreventInteractiveAuth
@property (nonatomic) BOOL shouldPromptForPasswordOnly; // ivar: _shouldPromptForPasswordOnly
@property (nonatomic) BOOL shouldRequestConfigurationInfo; // ivar: _shouldRequestConfigurationInfo
@property (nonatomic) BOOL shouldRequestRecoveryPET; // ivar: _shouldRequestRecoveryPET
@property (nonatomic) BOOL shouldRequestShortLivedToken; // ivar: _shouldRequestShortLivedToken
@property (nonatomic) BOOL shouldSkipSettingsLaunchAlert; // ivar: _shouldSkipSettingsLaunchAlert
@property (nonatomic) BOOL shouldUpdatePersistentServiceTokens; // ivar: _shouldUpdatePersistentServiceTokens
@property (readonly) Class superclass;
@property (nonatomic) BOOL supportsPiggybacking; // ivar: _supportsPiggybacking
@property (retain, nonatomic) NSString *title; // ivar: _title
@property (copy, nonatomic) NSString *username; // ivar: _username
@property (nonatomic) NSInteger verifyCredentialReason; // ivar: _verifyCredentialReason
@property (retain) NSString *windowTitle; // ivar: _windowTitle


+(BOOL)supportsSecureCoding;
-(BOOL)_isVerifyCredentialReasonEligibleForBiometricOrPasscodeAuth;
-(BOOL)_localUserHasEmptyPassword;
-(id)_appendBlameIfRequiredTo:(id)arg0 ;
-(id)_initWithIdentifier:(id)arg0 ;
-(id)_sanitizedCopy;
-(id)_secondFactorQueue;
-(id)authKitAccount:(*id)arg0 ;
-(id)authKitAccountForSilentServiceToken:(*id)arg0 ;
-(id)init;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithContext:(id)arg0 ;
-(void)_handleSecondFactorCodeEntry;
-(void)_startListeningForSecondFactorCodeEntryNotification;
-(void)_stopListeningForSecondFactorCodeEntryNotification;
-(void)_updateWithValuesFromContext:(id)arg0 ;
-(void)dismissBasicLoginUIWithCompletion:(id)arg0 ;
-(void)dismissSecondFactorUIWithCompletion:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;
-(void)presentBasicLoginUIWithCompletion:(id)arg0 ;
-(void)presentBiometricOrPasscodeValidationForAppleID:(id)arg0 completion:(id)arg1 ;
-(void)presentLoginAlertWithError:(id)arg0 title:(id)arg1 message:(id)arg2 completion:(id)arg3 ;
-(void)presentSecondFactorAlertWithError:(id)arg0 title:(id)arg1 message:(id)arg2 completion:(id)arg3 ;
-(void)presentSecondFactorUIWithCompletion:(id)arg0 ;


@end


#endif