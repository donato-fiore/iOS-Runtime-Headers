// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SOKERBEROSCONTEXT_H
#define SOKERBEROSCONTEXT_H

@class NSData, ASAuthorizationProviderExtensionAuthorizationRequest, NSString, NSUUID, LAContext, NSDate;
@protocol OS_dispatch_group;

#import <Foundation/Foundation.h>

#import "SOKerberosRealmSettings.h"
#import "SOKerberosExtensionData.h"
#import "SOKerberosExtensionUserData.h"
#import "SONetworkIdentity.h"
#import "SOKerberosPacData.h"
#import "SOSiteCode.h"

@interface SOKerberosContext : NSObject

@property (nonatomic) BOOL attemptedToGetCredsFromKeychain; // ivar: _attemptedToGetCredsFromKeychain
@property (retain, nonatomic) NSData *auditToken; // ivar: _auditToken
@property (retain, nonatomic) ASAuthorizationProviderExtensionAuthorizationRequest *authorizationRequest; // ivar: _authorizationRequest
@property (retain, nonatomic) NSString *cacheName; // ivar: _cacheName
@property (retain, nonatomic) NSString *callerBundleIdentifier; // ivar: _callerBundleIdentifier
@property (retain, nonatomic) NSString *callerLocalizedName; // ivar: _callerLocalizedName
@property (retain, nonatomic) NSString *certificateTokenID; // ivar: _certificateTokenID
@property (retain, nonatomic) NSString *changedPassword; // ivar: _changedPassword
@property (retain, nonatomic) NSUUID *credentialUUID; // ivar: _credentialUUID
@property (nonatomic) BOOL credsCameFromKeychain; // ivar: _credsCameFromKeychain
@property (readonly, nonatomic) SOKerberosRealmSettings *currentSettings; // ivar: _currentSettings
@property (retain) NSObject<OS_dispatch_group> *dispatchGroup; // ivar: _dispatchGroup
@property (retain, nonatomic) SOKerberosExtensionData *extensionData; // ivar: _extensionData
@property (retain, nonatomic) SOKerberosExtensionUserData *extensionUserData; // ivar: _extensionUserData
@property (nonatomic) BOOL forceLoginViewController; // ivar: _forceLoginViewController
@property (retain, nonatomic) NSString *hostName; // ivar: _hostName
@property (retain, nonatomic) NSString *impersonationBundleIdentifier; // ivar: _impersonationBundleIdentifier
@property (nonatomic) BOOL isManagedApp; // ivar: _isManagedApp
@property (retain) LAContext *keychainLAContext; // ivar: _keychainLAContext
@property (nonatomic) int laContextFailureCount; // ivar: _laContextFailureCount
@property (retain, nonatomic) NSDate *loginTimeStamp; // ivar: _loginTimeStamp
@property (retain, nonatomic) SONetworkIdentity *networkIdentity; // ivar: _networkIdentity
@property (retain, nonatomic) SOKerberosPacData *pacData; // ivar: _pacData
@property (retain, nonatomic) NSString *password; // ivar: _password
@property *__SecIdentity pkinitIdentity; // ivar: _pkinitIdentity
@property (retain) NSData *pkinitPersistientRef; // ivar: _pkinitPersistientRef
@property (retain, nonatomic) NSString *realm; // ivar: _realm
@property (nonatomic) BOOL refreshCredential; // ivar: _refreshCredential
@property (nonatomic) BOOL requestCancelled; // ivar: _requestCancelled
@property (nonatomic) BOOL requestStarted; // ivar: _requestStarted
@property (nonatomic) BOOL returnCredentialOnly; // ivar: _returnCredentialOnly
@property (retain, nonatomic) NSString *serviceName; // ivar: _serviceName
@property (retain, nonatomic) NSString *servicePrincipalName; // ivar: _servicePrincipalName
@property (retain, nonatomic) SOSiteCode *siteCode; // ivar: _siteCode
@property (retain, nonatomic) NSObject<OS_dispatch_group> *siteCodeGroup; // ivar: _siteCodeGroup
@property (retain) LAContext *smartCardLAContext; // ivar: _smartCardLAContext
@property (nonatomic) BOOL smartCardNeedsInsert; // ivar: _smartCardNeedsInsert
@property (nonatomic) BOOL useKerberosPasswordInsteadOfMDMIdentity; // ivar: _useKerberosPasswordInsteadOfMDMIdentity
@property (retain, nonatomic) NSString *userName; // ivar: _userName
@property (nonatomic) BOOL userNameIsReadOnly; // ivar: _userNameIsReadOnly
@property (retain, nonatomic) NSString *userPrincipalName; // ivar: _userPrincipalName


-(id)initWithRequest:(id)arg0 extensionData:(id)arg1 ;
-(void)cancelRequest;
-(void)cancelRequest:(BOOL)arg0 ;
-(void)completeRequest;
-(void)completeRequestWithDoNotHandle;
-(void)completeRequestWithError:(id)arg0 ;
-(void)completeRequestWithHTTPResponse:(id)arg0 httpBody:(id)arg1 ;
-(void)completeRequestWithHTTPResponseHeaders:(id)arg0 ;
-(void)completeRequestWithHeaders:(id)arg0 ;
-(void)finishRequest;
-(void)presentAuthorizationViewControllerWithCompletion:(id)arg0 ;
-(void)startRequest;
-(void)waitForCompletion;


@end


#endif