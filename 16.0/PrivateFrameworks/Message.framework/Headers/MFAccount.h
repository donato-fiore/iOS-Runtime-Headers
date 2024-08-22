// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef MFACCOUNT_H
#define MFACCOUNT_H

@class ACAccount, NSMutableDictionary, NSString, ECAccount, EFLocked, NSArray, ECAuthenticationScheme, NSDictionary;
@protocol EDAccount, ECAuthenticatableAccount, EFPubliclyDescribable;

#import <Foundation/Foundation.h>


@interface MFAccount : NSObject <EDAccount, ECAuthenticatableAccount, EFPubliclyDescribable>

 {
    ACAccount *_persistentAccount;
    os_unfair_lock_s _persistentAccountLock;
    NSMutableDictionary *_unsavedAccountProperties;
    os_unfair_lock_s _descriptionLock;
    os_unfair_lock_s _privacyDescriptionLock;
    NSString *_cachedPrivacySafeDescription;
    NSString *_cachedDescription;
}


@property (readonly) ACAccount *accountForRenewingCredentials;
@property BOOL allowsTrustPrompt; // ivar: _allowsTrustPrompt
@property (readonly, copy, nonatomic) NSString *altDSID;
@property (readonly, nonatomic) ECAccount *baseAccount; // ivar: _baseAccount
@property (readonly, nonatomic) BOOL connectionsAreConstrained;
@property (readonly, nonatomic) EFLocked *currentConnections; // ivar: _currentConnections
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (copy, nonatomic) NSString *displayName;
@property (retain, nonatomic) NSString *domain;
@property (readonly, copy, nonatomic) NSString *ef_publicDescription;
@property (readonly, copy, nonatomic) NSArray *emailAddressStrings; // ivar: emailAddressStrings
@property (readonly) NSUInteger hash;
@property (copy, nonatomic) NSString *hostname;
@property (readonly, copy) NSString *identifier;
@property (readonly, nonatomic) BOOL isActive;
@property (readonly, nonatomic, getter=isManaged) BOOL managed;
@property (readonly) NSString *managedTag;
@property (readonly, retain, nonatomic) NSString *oauth2Token;
@property (readonly) ACAccount *parentAccount;
@property (readonly) NSString *parentAccountIdentifier;
@property (copy, nonatomic) NSString *password;
@property (readonly) ACAccount *persistentAccount;
@property (readonly) NSString *personaIdentifier;
@property (nonatomic) unsigned int portNumber;
@property (retain, nonatomic) ECAuthenticationScheme *preferredAuthScheme;
@property (readonly, nonatomic) BOOL primaryiCloudAccount;
@property (readonly) NSDictionary *properties;
@property (copy, nonatomic) NSString *sourceApplicationBundleIdentifier; // ivar: _sourceApplicationBundleIdentifier
@property (readonly, copy, nonatomic) NSString *statisticsKind;
@property (readonly) Class superclass;
@property (readonly) NSString *syncStoreIdentifier;
@property (readonly, nonatomic) ACAccount *systemAccount;
@property (readonly) NSString *type;
@property (readonly) NSString *uniqueID;
@property (copy, nonatomic) NSString *username;
@property (nonatomic) BOOL usesSSL;


+(*void)legacyKeychainProtocol;
+(BOOL)_setBasicProperty:(id)arg0 forKey:(id)arg1 persistentAccount:(id)arg2 ;
+(BOOL)accountIsManaged:(id)arg0 ;
+(BOOL)accountIsPreventedFromSendingFromExternalProcesses:(id)arg0 ;
+(BOOL)accountIsRestrictedFromTransfersToOtherAccounts:(id)arg0 ;
+(BOOL)accountRestrictsRecentsSyncing:(id)arg0 ;
+(BOOL)accountSourceIsManaged:(id)arg0 ;
+(BOOL)isCommonPortNumber:(unsigned int)arg0 ;
+(BOOL)isPredefinedAccountType;
+(BOOL)isSSLEditable;
+(BOOL)shouldHealAccounts;
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
+(id)releaseAllConnectionsScheduler;
+(id)saslProfileName;
+(id)supportedDataclasses;
+(unsigned int)defaultPortNumber;
+(unsigned int)defaultSecurePortNumber;
+(void)setShouldHealAccounts:(BOOL)arg0 ;
-(BOOL)_boolForAccountInfoKey:(id)arg0 defaultValue:(BOOL)arg1 ;
-(BOOL)_connectAndAuthenticate:(id)arg0 ;
-(BOOL)_renewCredentialsWithOptions:(id)arg0 completion:(id)arg1 ;
-(BOOL)_shouldTryDirectSSLConnectionOnPort:(unsigned int)arg0 ;
-(BOOL)canAuthenticateWithCurrentCredentials;
-(BOOL)canGoOffline;
-(BOOL)enableAccount;
-(BOOL)fetchTokensIfNecessary:(*id)arg0 ;
-(BOOL)hasPasswordCredential;
-(BOOL)isEnabledForDataclass:(id)arg0 ;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)isSyncingNotes;
-(BOOL)promptUserForWebLoginWithURL:(id)arg0 shouldConfirm:(BOOL)arg1 completionHandler:(id)arg2 ;
-(BOOL)renewCredentialsWithOptions:(id)arg0 completion:(id)arg1 ;
-(BOOL)requiresAuthentication;
-(BOOL)shouldDisplayHostnameInErrorMessages;
-(BOOL)shouldEnableAfterError:(id)arg0 ;
-(BOOL)shouldFetchACEDBInfoForError:(id)arg0 ;
-(BOOL)supportsMailDrop;
-(Class)connectionClass;
-(NSUInteger)credentialAccessibility;
-(id)_credential;
-(id)_credentialCreateIfNecessary:(BOOL)arg0 ;
-(id)_credentialCreateIfNecessary:(BOOL)arg0 error:(*id)arg1 ;
-(id)_newConnection;
-(id)_objectForAccountInfoKey:(id)arg0 ;
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
-(id)customDescriptionForError:(id)arg0 authScheme:(id)arg1 defaultDescription:(id)arg2 ;
-(id)defaultConnectionSettings;
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
-(id)secureConnectionSettings;
-(id)secureServiceName;
-(id)serviceName;
-(id)valueInAccountPropertiesForKey:(id)arg0 ;
-(struct __CFString *)connectionServiceType;
-(unsigned int)defaultPortNumber;
-(unsigned int)defaultSecurePortNumber;
-(void)_queueAccountInfoDidChange;
-(void)_setAccountProperties:(id)arg0 ;
-(void)accountInfoDidChange;
-(void)applySettingsAsDefault:(id)arg0 ;
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
-(void)setMissingPasswordError;
-(void)setOAuth2Token:(id)arg0 refreshToken:(id)arg1 ;
-(void)setTryDirectSSL:(BOOL)arg0 ;
-(void)setValueInAccountProperties:(id)arg0 forKey:(id)arg1 ;


@end


#endif