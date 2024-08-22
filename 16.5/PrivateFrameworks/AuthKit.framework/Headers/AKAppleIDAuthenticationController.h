// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef AKAPPLEIDAUTHENTICATIONCONTROLLER_H
#define AKAPPLEIDAUTHENTICATIONCONTROLLER_H

@class NSString, NSXPCListenerEndpoint, NSXPCConnection, NSLock;
@protocol AKAuthenticationController, AKAppleIDAuthenticationDelegate;

#import <Foundation/Foundation.h>

#import "AKAppleIDAuthenticationContextManager.h"

@interface AKAppleIDAuthenticationController : NSObject <AKAuthenticationController>

 {
    NSString *_serviceID;
    NSXPCListenerEndpoint *_daemonXPCEndpoint;
    NSXPCConnection *_authenticationServiceConnection;
    AKAppleIDAuthenticationContextManager *_contextManager;
    NSLock *_connectionLock;
}


@property (copy, nonatomic) id *deallocHandler; // ivar: _deallocHandler
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<AKAppleIDAuthenticationDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


+(id)sensitiveAuthenticationKeys;
+(id)sensitiveTokenKeys;
+(id)tokenDictionaryKeys;
-(BOOL)deleteAuthorizationDatabase:(*id)arg0 ;
-(BOOL)isDevicePasscodeProtected:(*id)arg0 ;
-(BOOL)revokeAuthorizationForApplicationWithClientID:(id)arg0 error:(*id)arg1 ;
-(BOOL)synchronizeFollowUpItemsForContext:(id)arg0 error:(*id)arg1 ;
-(id)_authenticationServiceConnection;
-(id)_urlBagFromCache:(BOOL)arg0 altDSID:(id)arg1 withError:(*id)arg2 ;
-(id)accountNamesForAltDSID:(id)arg0 ;
-(id)activeLoginCode:(*id)arg0 ;
-(id)deviceListWithContext:(id)arg0 error:(*id)arg1 ;
-(id)fetchAuthorizedAppListWithContext:(id)arg0 error:(*id)arg1 ;
-(id)init;
-(id)initWithDaemonXPCEndpoint:(id)arg0 ;
-(id)initWithIdentifier:(id)arg0 ;
-(id)initWithIdentifier:(id)arg0 daemonXPCEndpoint:(id)arg1 ;
-(void)authenticateWithContext:(id)arg0 completion:(id)arg1 ;
-(void)checkSecurityUpgradeEligibilityForContext:(id)arg0 completion:(id)arg1 ;
-(void)clearSessionCacheWithCompletion:(id)arg0 ;
-(void)configurationInfoWithIdentifiers:(id)arg0 forAltDSID:(id)arg1 completion:(id)arg2 ;
-(void)dealloc;
-(void)deviceListWithContext:(id)arg0 completion:(id)arg1 ;
-(void)fetchAuthModeWithContext:(id)arg0 completion:(id)arg1 ;
-(void)fetchDeviceListWithContext:(id)arg0 completion:(id)arg1 ;
-(void)fetchGlobalConfigurationUsingPolicy:(NSUInteger)arg0 completion:(id)arg1 ;
-(void)fetchURLBagForAltDSID:(id)arg0 completion:(id)arg1 ;
-(void)fetchUserInformationForAltDSID:(id)arg0 completion:(id)arg1 ;
-(void)forceURLBagUpdateForAltDSID:(id)arg0 urlSwitchData:(id)arg1 completion:(id)arg2 ;
-(void)generateLoginCodeWithCompletion:(id)arg0 ;
-(void)getServerUILoadDelegateForAltDSID:(id)arg0 completion:(id)arg1 ;
-(void)getServerUILoadDelegateWithContext:(id)arg0 completion:(id)arg1 ;
-(void)getUserInformationForAltDSID:(id)arg0 completion:(id)arg1 ;
-(void)getUserInformationWithContext:(id)arg0 completion:(id)arg1 ;
-(void)isCreateAppleIDAllowedWithCompletion:(id)arg0 ;
-(void)performCheckInForAccountWithAltDSID:(id)arg0 completion:(id)arg1 ;
-(void)performCircleRequestWithContext:(id)arg0 completion:(id)arg1 ;
-(void)performSilentTTRFor:(NSUInteger)arg0 completion:(id)arg1 ;
-(void)persistMasterKeyVerifier:(id)arg0 context:(id)arg1 completion:(id)arg2 ;
-(void)renewRecoveryTokenWithContext:(id)arg0 completion:(id)arg1 ;
-(void)reportSignOutForAllAppleIDsWithCompletion:(id)arg0 ;
-(void)reportSignOutForAppleID:(id)arg0 service:(NSInteger)arg1 completion:(id)arg2 ;
-(void)setAppleIDWithAltDSID:(id)arg0 inUse:(BOOL)arg1 forService:(NSInteger)arg2 ;
-(void)setAppleIDWithDSID:(id)arg0 inUse:(BOOL)arg1 forService:(NSInteger)arg2 ;
-(void)setConfigurationInfo:(id)arg0 forIdentifier:(id)arg1 forAltDSID:(id)arg2 completion:(id)arg3 ;
-(void)synchronizeFollowUpItemsForContext:(id)arg0 completion:(id)arg1 ;
-(void)teardownFollowUpWithContext:(id)arg0 completion:(id)arg1 ;
-(void)updateStateWithExternalAuthenticationResponse:(id)arg0 forAppleID:(id)arg1 completion:(id)arg2 ;
-(void)updateStateWithExternalAuthenticationResponse:(id)arg0 forContext:(id)arg1 completion:(id)arg2 ;
-(void)updateUserInformationForAltDSID:(id)arg0 userInformation:(id)arg1 completion:(id)arg2 ;
-(void)validateLoginCode:(NSUInteger)arg0 forAppleID:(id)arg1 completion:(id)arg2 ;
-(void)validateVettingToken:(id)arg0 forAltDSID:(id)arg1 completion:(id)arg2 ;
-(void)verifyMasterKey:(id)arg0 context:(id)arg1 completion:(id)arg2 ;
-(void)warmUpVerificationSessionWithCompletion:(id)arg0 ;


@end


#endif