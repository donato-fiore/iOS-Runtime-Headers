// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef ISSTOREURLOPERATION_H
#define ISSTOREURLOPERATION_H

@class SSVFairPlaySAPSession, SSURLBagContext, NSNumber, SSBag, SSBiometricAuthenticationContext, NSString;
@protocol ISBiometricSessionDelegate, ISStoreURLOperationDelegate;


#import "ISURLOperation.h"

@interface ISStoreURLOperation : ISURLOperation <ISBiometricSessionDelegate>

 {
    NSInteger _activeMachineDataStyle;
    BOOL _canSendGUIDParameter;
    BOOL _ignorePreexistingSecureToken;
    SSVFairPlaySAPSession *_sapSession;
    BOOL _shouldSendXTokenHeader;
}


@property (retain) SSVFairPlaySAPSession *SAPSession;
@property (readonly) SSURLBagContext *URLBagContext;
@property (nonatomic, getter=isURLBagRequest) BOOL URLBagRequest; // ivar: _isURLBagRequest
@property (retain) NSNumber *authenticatedDSID; // ivar: _authenticatedDSID
@property (retain, nonatomic) SSBag *bag; // ivar: _bag
@property (retain) SSBiometricAuthenticationContext *biometricAuthenticationContext; // ivar: _biometricAuthenticationContext
@property (weak) NSObject<ISBiometricSessionDelegate> *biometricSessionDelegate; // ivar: _biometricSessionDelegate
@property BOOL canSendGUIDParameter;
@property (readonly, copy) NSString *debugDescription;
@property (weak) NSObject<ISStoreURLOperationDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (nonatomic) BOOL ignorePreexistingSecureToken;
@property NSInteger machineDataStyle; // ivar: _machineDataStyle
@property BOOL needsAuthentication; // ivar: _needsAuthentication
@property BOOL needsTermsAndConditionsAcceptance; // ivar: _needsTermsAndConditionsAcceptance
@property BOOL needsURLBag; // ivar: _needsURLBag
@property BOOL performsMachineDataActions;
@property (nonatomic) BOOL shouldAppendAuthKitHeaders; // ivar: _shouldAppendAuthKitHeaders
@property (nonatomic) BOOL shouldAppendStorefrontToURL; // ivar: _shouldAppendStorefrontToURL
@property BOOL shouldCancelBiometricTokenUpdate; // ivar: _shouldCancelBiometricTokenUpdate
@property BOOL shouldSendAKClientInfoHeaders; // ivar: _shouldSendAKClientInfoHeaders
@property BOOL shouldSendAKPRKRequestHeader; // ivar: _shouldSendAKPRKRequestHeader
@property BOOL shouldSendDSIDHeader; // ivar: _shouldSendDSIDHeader
@property BOOL shouldSendXTokenHeader;
@property BOOL shouldSuppressUserInfo; // ivar: _shouldSuppressUserInfo
@property (readonly) Class superclass;
@property BOOL urlKnownToBeTrusted; // ivar: _urlKnownToBeTrusted
@property BOOL useUserSpecificURLBag; // ivar: _useUserSpecificURLBag


+(BOOL)_operationWaitsForPurchases:(id)arg0 ;
+(id)_authKitSession;
+(id)_restrictionsHeaderValue;
+(id)_ssBag_copyExtraHeadersForURL:(id)arg0 bag:(id)arg1 ;
+(id)_ssBag_copyHeaderPatternsFromBag:(id)arg0 ;
+(id)_storeFrontIdentifierForAccount:(id)arg0 ;
+(id)itemPingOperationWithIdentifier:(NSUInteger)arg0 urlBagKey:(id)arg1 ;
+(id)pingOperationWithUrl:(id)arg0 ;
+(id)propertyListOperationWithURLBagKey:(id)arg0 ;
+(void)_addAccountDSID:(id)arg0 toRequest:(id)arg1 ;
+(void)_addPrimaryiCloudDSIDToRequest:(id)arg0 ;
+(void)_addiTunesStoreHeadersToRequest:(id)arg0 withAccount:(id)arg1 appendAuthKitHeaders:(BOOL)arg2 appendStorefrontToURL:(BOOL)arg3 clientBundleIdentifier:(id)arg4 extraHeaders:(id)arg5 storefrontSuffix:(id)arg6 ;
+(void)_addiTunesStoreHeadersToRequest:(id)arg0 withSSBag:(id)arg1 account:(id)arg2 appendAuthKitHeaders:(BOOL)arg3 appendStorefrontToURL:(BOOL)arg4 clientBundleIdentifier:(id)arg5 ;
+(void)_addiTunesStoreHeadersToRequest:(id)arg0 withSSBag:(id)arg1 accountIdentifier:(id)arg2 appendAuthKitHeaders:(BOOL)arg3 appendStorefrontToURL:(BOOL)arg4 clientBundleIdentifier:(id)arg5 ;
+(void)_addiTunesStoreHeadersToRequest:(id)arg0 withURLBag:(id)arg1 account:(id)arg2 appendAuthKitHeaders:(BOOL)arg3 appendStorefrontToURL:(BOOL)arg4 clientBundleIdentifier:(id)arg5 ;
+(void)_addiTunesStoreHeadersToRequest:(id)arg0 withURLBag:(id)arg1 accountIdentifier:(id)arg2 appendAuthKitHeaders:(BOOL)arg3 appendStorefrontToURL:(BOOL)arg4 clientBundleIdentifier:(id)arg5 ;
+(void)_appendStorefront:(id)arg0 toRequestURL:(id)arg1 ;
+(void)_handleResponseHeaders:(id)arg0 response:(id)arg1 request:(id)arg2 account:(id)arg3 performsMachineDataActions:(BOOL)arg4 shouldRetry:(*BOOL)arg5 ;
+(void)_performMachineDataRequest:(id)arg0 requestProperties:(id)arg1 completion:(id)arg2 ;
+(void)addITunesStoreHeadersToRequest:(id)arg0 withAccountIdentifier:(id)arg1 ;
+(void)handleITunesStoreResponseHeaders:(id)arg0 request:(id)arg1 withAccountIdentifier:(id)arg2 shouldRetry:(*BOOL)arg3 ;
-(BOOL)_authenticateWithContext:(id)arg0 error:(*id)arg1 ;
-(BOOL)_canSendTokenToURL:(id)arg0 ;
-(BOOL)_isErrorTokenError:(id)arg0 ;
-(BOOL)_performMachineDataRequest:(id)arg0 ;
-(BOOL)_processResponseData:(id)arg0 error:(*id)arg1 ;
-(BOOL)_shouldRetryForAbsintheWithResponse:(id)arg0 ;
-(BOOL)_shouldRetryForTouchIDChallengeWithError:(id)arg0 ;
-(BOOL)_ssBag_shouldSendGUIDForURL:(id)arg0 withBag:(id)arg1 ;
-(BOOL)handleRedirectFromDataProvider:(id)arg0 error:(*id)arg1 ;
-(BOOL)shouldFollowRedirectWithRequest:(id)arg0 returningError:(*id)arg1 ;
-(id)_absintheHeaders;
-(id)_account;
-(id)_buyParams;
-(id)_copyAuthenticationContext;
-(id)_copyAuthenticationContextForAttemptNumber:(NSInteger)arg0 ;
-(id)_loadURLBagInterpreterWithRequest:(id)arg0 requestProperties:(id)arg1 ;
-(id)_resolvedURLInBagContext:(id)arg0 bagTrusted:(*BOOL)arg1 ;
-(id)_ssBag_copyGUIDPatternsFromBag:(id)arg0 ;
-(id)_ssBag_copyGUIDSchemesFromBag:(id)arg0 ;
-(id)_urlBagForContext:(id)arg0 ;
-(id)authenticatedAccountDSID;
-(id)init;
-(id)logKey;
-(id)newRequestWithURL:(id)arg0 ;
-(void)_addStandardQueryParametersForURL:(id)arg0 ;
-(void)_continueTouchIDSession;
-(void)_runURLOperation;
-(void)_setStoreFrontIdentifier:(id)arg0 isTransient:(BOOL)arg1 ;
-(void)_willSendRequest:(id)arg0 ;
-(void)handleResponse:(id)arg0 ;
-(void)run;
-(void)sender:(id)arg0 didFallbackToPassword:(BOOL)arg1 ;


@end


#endif