// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef ACACCOUNTSTORE_H
#define ACACCOUNTSTORE_H

@class NSMutableDictionary, NSXPCListenerEndpoint, NSArray, NSString;
@protocol ACRemoteAccountStoreSessionDelegate, OS_dispatch_queue;

#import <Foundation/Foundation.h>

#import "ACRemoteAccountStoreSession.h"
#import "ACTimedExpirer.h"

@interface ACAccountStore : NSObject {
    id *_daemonAccountStoreDidChangeObserver;
    NSMutableDictionary *_accountCache;
    NSMutableDictionary *_accountsWithAccountTypeCache;
    NSXPCListenerEndpoint *_endpoint;
    ACRemoteAccountStoreSession *_remoteAccountStoreSession;
    os_unfair_lock_s _remoteAccountStoreSessionLock;
    ACTimedExpirer *_remoteAccountStoreSessionExpirer;
    ACRemoteAccountStoreSession *_longLivedRemoteAccountStoreSession;
    os_unfair_lock_s _longLivedRemoteAccountStoreSessionLock;
    ACTimedExpirer *_longLivedRemoteAccountStoreSessionExpirer;
}


@property (readonly, weak, nonatomic) NSArray *accounts;
@property (readonly) NSObject<ACRemoteAccountStoreSessionDelegate> *connectionDelegate;
@property (readonly) NSString *effectiveBundleID; // ivar: _effectiveBundleID
@property (readonly, nonatomic) ACRemoteAccountStoreSession *longLivedRemoteAccountStoreSession;
@property (readonly, nonatomic) ACRemoteAccountStoreSession *remoteAccountStoreSession;
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *replyQueue; // ivar: _replyQueue


+(BOOL)canSaveAccountsOfAccountTypeIdentifier:(id)arg0 ;
+(NSInteger)countOfAccountsWithAccountTypeIdentifier:(id)arg0 ;
+(id)_obsoleteAccountTypeIDsToRemove;
+(id)defaultStore;
+(int)accountsWithAccountTypeIdentifierExist:(id)arg0 ;
+(void)_setConnectionTimeout:(NSUInteger)arg0 ;
+(void)_setDefaultStore:(id)arg0 ;
-(BOOL)addClientToken:(id)arg0 forAccount:(id)arg1 ;
-(BOOL)hasAccountWithDescription:(id)arg0 ;
-(BOOL)isPerformingDataclassActionsForAccount:(id)arg0 ;
-(BOOL)isPerformingDataclassActionsForAccount:(id)arg0 error:(*id)arg1 ;
-(BOOL)isPushSupportedForAccount:(id)arg0 ;
-(BOOL)isTetheredSyncingEnabledForDataclass:(id)arg0 ;
-(BOOL)permissionForAccountType:(id)arg0 ;
-(BOOL)saveVerifiedAccount:(id)arg0 error:(*id)arg1 ;
-(BOOL)triggerKeychainMigrationIfNecessary:(*id)arg0 ;
-(id)_connectionFailureError;
-(id)_createSMTPAccountForServerAccount:(id)arg0 ;
-(id)_removeObsoleteOSXServerAccountForMacOS:(id)arg0 ;
-(id)_sanitizeOptionsDictionary:(id)arg0 ;
-(id)_unsanitizeError:(id)arg0 ;
-(id)accessKeysForAccountType:(id)arg0 ;
-(id)accountIdentifiersEnabledForDataclass:(id)arg0 ;
-(id)accountIdentifiersEnabledToSyncDataclass:(id)arg0 ;
-(id)accountTypeWithAccountTypeIdentifier:(id)arg0 ;
-(id)accountTypeWithAccountTypeIdentifier:(id)arg0 error:(*id)arg1 ;
-(id)accountWithIdentifier:(id)arg0 ;
-(id)accountWithIdentifier:(id)arg0 error:(*id)arg1 ;
-(id)accountsWithAccountType:(id)arg0 ;
-(id)accountsWithAccountType:(id)arg0 options:(NSUInteger)arg1 error:(*id)arg2 ;
-(id)accountsWithAccountTypeIdentifiers:(id)arg0 error:(*id)arg1 ;
-(id)accountsWithAccountTypeIdentifiers:(id)arg0 preloadedProperties:(id)arg1 error:(*id)arg2 ;
-(id)allAccountTypes;
-(id)allCredentialItems;
-(id)allDataclasses;
-(id)appPermissionsForAccountType:(id)arg0 ;
-(id)childAccountsForAccount:(id)arg0 ;
-(id)childAccountsForAccount:(id)arg0 error:(*id)arg1 ;
-(id)childAccountsForAccount:(id)arg0 withTypeIdentifier:(id)arg1 ;
-(id)clientTokenForAccount:(id)arg0 ;
-(id)credentialForAccount:(id)arg0 ;
-(id)credentialForAccount:(id)arg0 bundleID:(id)arg1 ;
-(id)credentialForAccount:(id)arg0 error:(*id)arg1 ;
-(id)credentialForAccount:(id)arg0 serviceID:(id)arg1 ;
-(id)credentialForAccount:(id)arg0 serviceID:(id)arg1 error:(*id)arg2 ;
-(id)credentialItemForAccount:(id)arg0 serviceName:(id)arg1 ;
-(id)dataclassActionsForAccountDeletion:(id)arg0 ;
-(id)dataclassActionsForAccountDeletion:(id)arg0 error:(*id)arg1 ;
-(id)dataclassActionsForAccountSave:(id)arg0 ;
-(id)dataclassActionsForAccountSave:(id)arg0 error:(*id)arg1 ;
-(id)displayTypeForAccountWithIdentifier:(id)arg0 ;
-(id)enabledDataclassesForAccount:(id)arg0 ;
-(id)enabledDataclassesForAccount:(id)arg0 error:(*id)arg1 ;
-(id)grantedPermissionsForAccountType:(id)arg0 ;
-(id)init;
-(id)initWithEffectiveBundleID:(id)arg0 ;
-(id)initWithRemoteEndpoint:(id)arg0 ;
-(id)initWithRemoteEndpoint:(id)arg0 effectiveBundleID:(id)arg1 ;
-(id)parentAccountForAccount:(id)arg0 ;
-(id)parentAccountForAccount:(id)arg0 error:(*id)arg1 ;
-(id)provisionedDataclassesForAccount:(id)arg0 ;
-(id)provisionedDataclassesForAccount:(id)arg0 error:(*id)arg1 ;
-(id)supportedDataclassesForAccountType:(id)arg0 ;
-(id)syncableDataclassesForAccountType:(id)arg0 ;
-(id)tetheredSyncSourceTypeForDataclass:(id)arg0 ;
-(int)updateExistenceCacheOfAccountWithTypeIdentifier:(id)arg0 ;
-(void)_checkSaveRateLimitForAccountType:(id)arg0 ;
-(void)_clearAccountCaches;
-(void)_removeObsoleteAccountsInternal:(id)arg0 completion:(id)arg1 ;
-(void)_removeObsoleteOSXServerAccountForiOS:(id)arg0 ;
-(void)_saveAccount:(id)arg0 verify:(BOOL)arg1 dataclassActions:(id)arg2 completion:(id)arg3 ;
-(void)accountIdentifiersEnabledForDataclasses:(id)arg0 withAccountTypeIdentifiers:(id)arg1 completion:(id)arg2 ;
-(void)accountTypeWithIdentifier:(id)arg0 completion:(id)arg1 ;
-(void)accountWithIdentifier:(id)arg0 completion:(id)arg1 ;
-(void)accountsOnPairedDeviceWithAccountType:(id)arg0 completion:(id)arg1 ;
-(void)accountsOnPairedDeviceWithAccountTypes:(id)arg0 withOptions:(id)arg1 completion:(id)arg2 ;
-(void)accountsWithAccountType:(id)arg0 completion:(id)arg1 ;
-(void)accountsWithAccountType:(id)arg0 options:(NSUInteger)arg1 completion:(id)arg2 ;
-(void)accountsWithAccountTypeIdentifiers:(id)arg0 completion:(id)arg1 ;
-(void)accountsWithAccountTypeIdentifiers:(id)arg0 preloadedProperties:(id)arg1 completion:(id)arg2 ;
-(void)cachedAccountWithIdentifier:(id)arg0 completion:(id)arg1 ;
-(void)cachedAccountsWithAccountType:(id)arg0 options:(NSUInteger)arg1 completion:(id)arg2 ;
-(void)canSaveAccount:(id)arg0 withCompletionHandler:(id)arg1 ;
-(void)clearAllPermissionsGrantedForAccountType:(id)arg0 ;
-(void)clearGrantedPermissionsForAccountType:(id)arg0 ;
-(void)dealloc;
-(void)disconnectFromRemoteAccountStore;
-(void)discoverPropertiesForAccount:(id)arg0 options:(id)arg1 completion:(id)arg2 ;
-(void)handleURL:(id)arg0 ;
-(void)insertAccountType:(id)arg0 withCompletionHandler:(id)arg1 ;
-(void)insertCredentialItem:(id)arg0 withCompletionHandler:(id)arg1 ;
-(void)kerberosAccountsForDomainFromURL:(id)arg0 completion:(id)arg1 ;
-(void)migrateCredentialForAccount:(id)arg0 completion:(id)arg1 ;
-(void)notifyRemoteDevicesOfModifiedAccount:(id)arg0 ;
-(void)notifyRemoteDevicesOfModifiedAccount:(id)arg0 withOptions:(id)arg1 ;
-(void)notifyRemoteDevicesOfModifiedAccount:(id)arg0 withOptions:(id)arg1 completion:(id)arg2 ;
-(void)notifyRemoteDevicesOfUpdatedCredentials:(id)arg0 ;
-(void)notifyRemoteDevicesOfUpdatedCredentials:(id)arg0 withOptions:(id)arg1 ;
-(void)notifyRemoteDevicesOfUpdatedCredentials:(id)arg0 withOptions:(id)arg1 completion:(id)arg2 ;
-(void)openAuthenticationURL:(id)arg0 forAccount:(id)arg1 shouldConfirm:(BOOL)arg2 completion:(id)arg3 ;
-(void)openAuthenticationURLForAccount:(id)arg0 withDelegateClassName:(id)arg1 fromBundleAtPath:(id)arg2 shouldConfirm:(BOOL)arg3 completion:(id)arg4 ;
-(void)preloadDataclassOwnersWithCompletion:(id)arg0 ;
-(void)removeAccount:(id)arg0 withCompletionHandler:(id)arg1 ;
-(void)removeAccount:(id)arg0 withDataclassActions:(id)arg1 completion:(id)arg2 ;
-(void)removeAccount:(id)arg0 withDeleteSync:(BOOL)arg1 completion:(id)arg2 ;
-(void)removeAccountFromPairedDevice:(id)arg0 withCompletion:(id)arg1 ;
-(void)removeAccountFromPairedDevice:(id)arg0 withOptions:(id)arg1 completion:(id)arg2 ;
-(void)removeAccountType:(id)arg0 withCompletionHandler:(id)arg1 ;
-(void)removeAccountsFromPairedDeviceWithCompletion:(id)arg0 ;
-(void)removeAccountsFromPairedDeviceWithOptions:(id)arg0 completion:(id)arg1 ;
-(void)removeCredentialItem:(id)arg0 withCompletionHandler:(id)arg1 ;
-(void)removeObsoleteAccounts:(id)arg0 ;
-(void)renewCredentialsForAccount:(id)arg0 completion:(id)arg1 ;
-(void)renewCredentialsForAccount:(id)arg0 force:(BOOL)arg1 reason:(id)arg2 completion:(id)arg3 ;
-(void)renewCredentialsForAccount:(id)arg0 options:(id)arg1 completion:(id)arg2 ;
-(void)renewCredentialsForAccount:(id)arg0 reason:(id)arg1 completion:(id)arg2 ;
-(void)renewCredentialsForAccount:(id)arg0 services:(id)arg1 completion:(id)arg2 ;
-(void)reportTelemetryForLandmarkEvent:(id)arg0 ;
-(void)requestAccessToAccountsWithType:(id)arg0 options:(id)arg1 completion:(id)arg2 ;
-(void)requestAccessToAccountsWithType:(id)arg0 withCompletionHandler:(id)arg1 ;
-(void)resetDatabaseToVersion:(id)arg0 withCompletion:(id)arg1 ;
-(void)runAccountMigrationPlugins:(id)arg0 ;
-(void)saveAccount:(id)arg0 toPairedDeviceWithOptions:(id)arg1 completion:(id)arg2 ;
-(void)saveAccount:(id)arg0 withCompletionHandler:(id)arg1 ;
-(void)saveAccount:(id)arg0 withDataclassActions:(id)arg1 completion:(id)arg2 ;
-(void)saveAccount:(id)arg0 withDataclassActions:(id)arg1 doVerify:(BOOL)arg2 completion:(id)arg3 ;
-(void)saveCredentialItem:(id)arg0 withCompletionHandler:(id)arg1 ;
-(void)saveVerifiedAccount:(id)arg0 withCompletionHandler:(id)arg1 ;
-(void)scheduleBackupIfNonexistent:(id)arg0 ;
-(void)setCredential:(id)arg0 forAccount:(id)arg1 serviceID:(id)arg2 error:(*id)arg3 ;
-(void)setNotificationsEnabled:(BOOL)arg0 ;
-(void)setPermissionGranted:(BOOL)arg0 forBundleID:(id)arg1 onAccountType:(id)arg2 ;
-(void)shutdownAccountsD:(id)arg0 ;
-(void)verifyCredentialsForAccount:(id)arg0 options:(id)arg1 completion:(id)arg2 ;
-(void)verifyCredentialsForAccount:(id)arg0 saveWhenAuthorized:(BOOL)arg1 withHandler:(id)arg2 ;
-(void)verifyCredentialsForAccount:(id)arg0 withHandler:(id)arg1 ;
-(void)visibleTopLevelAccountsWithAccountTypeIdentifiers:(id)arg0 completion:(id)arg1 ;


@end


#endif