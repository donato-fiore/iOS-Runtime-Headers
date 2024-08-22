// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef MFACCOUNT_H
#define MFACCOUNT_H

@class ACAccount, NSMutableDictionary, NSString, NSDictionary;
@protocol EFPubliclyDescribable;

#import <Foundation/Foundation.h>


@interface MFAccount : NSObject <EFPubliclyDescribable>

 {
    ACAccount *_persistentAccount;
    os_unfair_lock_s _persistentAccountLock;
    NSMutableDictionary *_unsavedAccountProperties;
}


@property (readonly) ACAccount *accountForRenewingCredentials;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (retain, nonatomic) NSString *displayName;
@property (readonly, copy, nonatomic) NSString *ef_publicDescription;
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) NSString *hostname;
@property (readonly) NSString *identifier;
@property (readonly) NSString *managedTag;
@property (readonly) ACAccount *parentAccount;
@property (readonly) NSString *parentAccountIdentifier;
@property (readonly) ACAccount *persistentAccount;
@property (readonly) NSDictionary *properties;
@property (copy, nonatomic) NSString *sourceApplicationBundleIdentifier; // ivar: _sourceApplicationBundleIdentifier
@property (readonly) Class superclass;
@property (readonly) NSString *syncStoreIdentifier;
@property (readonly) NSString *type;
@property (readonly) NSString *uniqueId;
@property (retain, nonatomic) NSString *username;


+(*void)legacyKeychainProtocol;
+(BOOL)_setBasicProperty:(id)arg0 forKey:(id)arg1 persistentAccount:(id)arg2 ;
+(BOOL)isCommonPortNumber:(unsigned int)arg0 ;
+(BOOL)isPredefinedAccountType;
+(BOOL)isSSLEditable;
+(BOOL)shouldHealAccounts;
+(BOOL)usesSSL;
+(id)_accountClass;
+(id)_basicPropertyForKey:(id)arg0 persistentAccount:(id)arg1 ;
+(id)_newPersistentAccount;
+(id)accountPropertiesValueForKey:(id)arg0 value:(id)arg1 ;
+(id)accountTypeIdentifier;
+(id)accountTypeString;
+(id)accountWithPersistentAccount:(id)arg0 ;
+(id)accountWithProperties:(id)arg0 ;
+(id)authSchemesForAccountClass;
+(id)displayedAccountTypeString;
+(id)displayedShortAccountTypeString;
+(id)excludedAccountPropertyKeys;
+(id)existingAccountForUniqueID:(id)arg0 ;
+(id)newAccountWithDictionary:(id)arg0 ;
+(id)predefinedValueForKey:(id)arg0 ;
+(id)saslProfileName;
+(id)supportedDataclasses;
+(unsigned int)defaultPortNumber;
+(unsigned int)defaultSecurePortNumber;
+(void)setShouldHealAccounts:(BOOL)arg0 ;
-(BOOL)_boolForAccountInfoKey:(id)arg0 defaultValue:(BOOL)arg1 ;
-(BOOL)_connectAndAuthenticate:(id)arg0 ;
-(BOOL)_renewCredentialsWithOptions:(id)arg0 completion:(id)arg1 ;
-(BOOL)_shouldTryDirectSSLConnectionOnPort:(unsigned int)arg0 ;
-(BOOL)allowsTrustPrompt;
-(BOOL)canGoOffline;
-(BOOL)enableAccount;
-(BOOL)fetchTokensIfNecessary:(*id)arg0 ;
-(BOOL)isActive;
-(BOOL)isEnabledForDataclass:(id)arg0 ;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)isManaged;
-(BOOL)isSyncingNotes;
-(BOOL)promptUserForPasswordWithTitle:(id)arg0 message:(id)arg1 completionHandler:(id)arg2 ;
-(BOOL)promptUserForWebLoginWithURL:(id)arg0 shouldConfirm:(BOOL)arg1 completionHandler:(id)arg2 ;
-(BOOL)renewCredentialsWithOptions:(id)arg0 completion:(id)arg1 ;
-(BOOL)requiresAuthentication;
-(BOOL)setCredentialItem:(id)arg0 forKey:(id)arg1 error:(*id)arg2 ;
-(BOOL)setOAuth2Token:(id)arg0 refreshToken:(id)arg1 error:(*id)arg2 ;
-(BOOL)shouldDisplayHostnameInErrorMessages;
-(BOOL)shouldEnableAfterError:(id)arg0 ;
-(BOOL)shouldFetchACEDBInfoForError:(id)arg0 ;
-(BOOL)supportsMailDrop;
-(BOOL)usesSSL;
-(Class)connectionClass;
-(NSUInteger)credentialAccessibility;
-(id)_credential;
-(id)_credentialCreateIfNecessary:(BOOL)arg0 ;
-(id)_credentialCreateIfNecessary:(BOOL)arg0 error:(*id)arg1 ;
-(id)_newConnection;
-(id)_objectForAccountInfoKey:(id)arg0 ;
-(id)_password;
-(id)_passwordWithError:(*id)arg0 ;
-(id)_privacySafeDescription;
-(id)accountClass;
-(id)accountPropertyForKey:(id)arg0 ;
-(id)alternateConnectionSettings;
-(id)authenticatedConnection;
-(id)certUIService;
-(id)clientCertificates;
-(id)copyDiagnosticInformation;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)credentialItemForKey:(id)arg0 ;
-(id)credentialItemForKey:(id)arg0 error:(*id)arg1 ;
-(id)customDescriptionForError:(id)arg0 authScheme:(id)arg1 defaultDescription:(id)arg2 ;
-(id)defaultConnectionSettings;
-(id)domain;
-(id)enabledDataclasses;
-(id)inaccessiblePasswordErrorWithTitle:(id)arg0 ;
-(id)init;
-(id)initWithPersistentAccount:(id)arg0 ;
-(id)initWithProperties:(id)arg0 ;
-(id)insecureConnectionSettings;
-(id)loginDisabledErrorWithTitle:(id)arg0 ;
-(id)missingPasswordErrorWithTitle:(id)arg0 ;
-(id)nameForMailboxUid:(id)arg0 ;
-(id)networkAccountIdentifier;
-(id)oauth2Token;
-(id)password;
-(id)preferredAuthScheme;
-(id)secureConnectionSettings;
-(id)secureServiceName;
-(id)serviceName;
-(id)valueInAccountPropertiesForKey:(id)arg0 ;
-(struct __CFString *)connectionServiceType;
-(unsigned int)defaultPortNumber;
-(unsigned int)defaultSecurePortNumber;
-(unsigned int)portNumber;
-(void)_queueAccountInfoDidChange;
-(void)_setAccountProperties:(id)arg0 ;
-(void)accountInfoDidChange;
-(void)applySettingsAsDefault:(id)arg0 ;
-(void)dealloc;
-(void)persistentAccountDidChange:(id)arg0 previousAccount:(id)arg1 ;
-(void)releaseAllConnections;
-(void)releaseAllForcedConnections;
-(void)removeAccountPropertyForKey:(id)arg0 ;
-(void)removePersistentAccount;
-(void)removeValueInAccountPropertiesForKey:(id)arg0 ;
-(void)reportAuthenticationError:(id)arg0 authScheme:(id)arg1 ;
-(void)savePersistentAccount;
-(void)setAccountProperty:(id)arg0 forKey:(id)arg1 ;
-(void)setActive:(BOOL)arg0 ;
-(void)setClientCertificates:(id)arg0 ;
-(void)setCredentialItem:(id)arg0 forKey:(id)arg1 ;
-(void)setDomain:(id)arg0 ;
-(void)setPassword:(id)arg0 ;
-(void)setPortNumber:(unsigned int)arg0 ;
-(void)setPreferredAuthScheme:(id)arg0 ;
-(void)setTryDirectSSL:(BOOL)arg0 ;
-(void)setUsesSSL:(BOOL)arg0 ;
-(void)setValueInAccountProperties:(id)arg0 forKey:(id)arg1 ;


@end


#endif