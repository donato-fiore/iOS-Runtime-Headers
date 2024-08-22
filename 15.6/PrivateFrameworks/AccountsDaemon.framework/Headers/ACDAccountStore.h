// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef ACDACCOUNTSTORE_H
#define ACDACCOUNTSTORE_H

@class ACAccountStore, NSMutableArray, NSString;
@protocol ACRemoteAccountStoreProtocol, ACDAccountStoreDelegate;


#import "ACDFakeRemoteAccountStoreSession.h"
#import "ACDAccessPluginManager.h"
#import "ACDAccountNotifier.h"
#import "ACDAuthenticationDialogManager.h"
#import "ACDAuthenticationPluginManager.h"
#import "ACDClientAuthorizationManager.h"
#import "ACDClient.h"
#import "ACDDatabaseBackupActivity.h"
#import "ACDDatabaseConnection.h"
#import "ACDDataclassOwnersManager.h"
#import "ACRemoteDeviceProxy.h"

@interface ACDAccountStore : ACAccountStore <ACRemoteAccountStoreProtocol>

 {
    NSMutableArray *_accountChanges;
    ACDFakeRemoteAccountStoreSession *_fakeRemoteAccountStoreSession;
}


@property (retain, nonatomic) ACDAccessPluginManager *accessPluginManager; // ivar: _accessPluginManager
@property (retain, nonatomic) ACDAccountNotifier *accountNotifier; // ivar: _accountNotifier
@property (retain, nonatomic) ACDAuthenticationDialogManager *authenticationDialogManager; // ivar: _authenticationDialogManager
@property (retain, nonatomic) ACDAuthenticationPluginManager *authenticationPluginManager; // ivar: _authenticationPluginManager
@property (readonly, nonatomic) ACDClientAuthorizationManager *authorizationManager; // ivar: _authorizationManager
@property (weak, nonatomic) ACDClient *client; // ivar: _client
@property (retain, nonatomic) ACDDatabaseBackupActivity *databaseBackupActivity; // ivar: _databaseBackupActivity
@property (readonly, nonatomic) ACDDatabaseConnection *databaseConnection; // ivar: _databaseConnection
@property (retain, nonatomic) ACDDataclassOwnersManager *dataclassOwnersManager; // ivar: _dataclassOwnersManager
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<ACDAccountStoreDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (nonatomic, getter=isMigrationInProgress) BOOL migrationInProgress; // ivar: _migrationInProgress
@property (nonatomic) BOOL notificationsEnabled; // ivar: _notificationsEnabled
@property (retain, nonatomic) ACRemoteDeviceProxy *remoteDeviceProxy; // ivar: _remoteDeviceProxy
@property (readonly) Class superclass;


+(id)accountCache;
-(BOOL)_canManagedAccountType:(id)arg0 syncManagedDataclass:(id)arg1 ;
-(BOOL)_canSaveAccount:(id)arg0 error:(*id)arg1 ;
-(BOOL)_handleAccountAdd:(id)arg0 withDataclassActions:(id)arg1 error:(*id)arg2 ;
-(BOOL)_handleAccountMod:(id)arg0 withDataclassActions:(id)arg1 withError:(*id)arg2 ;
-(BOOL)_isManagedAccount:(id)arg0 enabledForManagedDataclass:(id)arg1 ;
-(BOOL)_performDataclassActions:(id)arg0 forAccount:(id)arg1 error:(*id)arg2 ;
-(BOOL)_removeAccountNoSave:(id)arg0 withDataclassActions:(id)arg1 withError:(*id)arg2 ;
-(BOOL)_saveWithError:(*id)arg0 ;
-(BOOL)_shouldSendDidSaveNotificationForAccount:(id)arg0 ;
-(BOOL)_updateAccountNoSave:(id)arg0 withDataclassActions:(id)arg1 error:(*id)arg2 ;
-(BOOL)accountsExistWithAccountTypeIdentifier:(id)arg0 ;
-(BOOL)shouldPreventAccountCreationWithObsoleteAccountType;
-(id)_accountTypeWithIdentifier:(id)arg0 ;
-(id)_accountWithIdentifier:(id)arg0 ;
-(id)_accountWithIdentifier:(id)arg0 prefetchKeypaths:(id)arg1 ;
-(id)_accountsWithAccountType:(id)arg0 options:(NSUInteger)arg1 error:(*id)arg2 ;
-(id)_accountsWithAcountType:(id)arg0 error:(*id)arg1 ;
-(id)_addAccountNoSave:(id)arg0 withDataclassActions:(id)arg1 error:(*id)arg2 ;
-(id)_allAccounts_sync;
-(id)_childAccountsForAccountWithID:(id)arg0 ;
-(id)_clientTokenForAccountIdentifier:(id)arg0 error:(id)arg1 ;
-(id)_commitOrRollbackDataclassActions:(id)arg0 forAccount:(id)arg1 originalEnabledDataclasses:(id)arg2 ;
-(id)_credentialItemWithAccountIdentifier:(id)arg0 serviceName:(id)arg1 ;
-(id)_dataclassWithName:(id)arg0 createIfNecessary:(BOOL)arg1 ;
-(id)_displayAccountForAccount:(id)arg0 ;
-(id)_legacyCredentialForAccount:(id)arg0 client:(id)arg1 error:(*id)arg2 ;
-(id)_lockForAccountType:(id)arg0 ;
-(id)_predicateForFetchingAccountsWithManagedAccountTypeID:(id)arg0 options:(NSUInteger)arg1 ;
-(id)_supportedDataclassesForManagedAccountType:(id)arg0 ;
-(id)_syncableDataclassesForManagedAccountType:(id)arg0 ;
-(id)accountTypeWithIdentifier:(id)arg0 ;
-(id)accountsWithAccountTypeIdentifier:(id)arg0 ;
-(id)init;
-(id)initWithClient:(id)arg0 databaseConnection:(id)arg1 ;
-(id)longLivedRemoteAccountStoreSession;
-(id)masterCredentialForAccountIdentifier:(id)arg0 ;
-(id)remoteAccountStoreSession;
-(void)_completeSave:(id)arg0 dataclassActions:(id)arg1 completion:(id)arg2 ;
-(void)_delegate_accountStoreDidSaveAccount:(id)arg0 changeType:(int)arg1 ;
-(void)_deleteAccountNoSave:(id)arg0 withDataclassActions:(id)arg1 error:(*id)arg2 ;
-(void)_removeClientTokenForAccountIdentifer:(id)arg0 ;
-(void)_requestAccessForAccountTypeWithIdentifier:(id)arg0 options:(id)arg1 allowUserInteraction:(BOOL)arg2 withHandler:(id)arg3 ;
-(void)_setAccountManagedObjectRelationships:(id)arg0 withAccount:(id)arg1 oldAccount:(id)arg2 error:(*id)arg3 ;
-(void)_updateExistenceCacheOfAccountWithTypeIdentifier:(id)arg0 withHandler:(id)arg1 ;
-(void)accessKeysForAccountType:(id)arg0 handler:(id)arg1 ;
-(void)accountExistsWithDescription:(id)arg0 completion:(id)arg1 ;
-(void)accountIdentifiersEnabledForDataclass:(id)arg0 handler:(id)arg1 ;
-(void)accountIdentifiersEnabledForDataclasses:(id)arg0 withAccountTypeIdentifiers:(id)arg1 completion:(id)arg2 ;
-(void)accountIdentifiersEnabledToSyncDataclass:(id)arg0 handler:(id)arg1 ;
-(void)accountTypeWithIdentifier:(id)arg0 handler:(id)arg1 ;
-(void)accountTypesWithHandler:(id)arg0 ;
-(void)accountWithIdentifier:(id)arg0 handler:(id)arg1 ;
-(void)accountsOnPairedDeviceWithAccountTypes:(id)arg0 withOptions:(id)arg1 handler:(id)arg2 ;
-(void)accountsWithAccountType:(id)arg0 handler:(id)arg1 ;
-(void)accountsWithAccountType:(id)arg0 options:(NSUInteger)arg1 completion:(id)arg2 ;
-(void)accountsWithAccountTypeIdentifiers:(id)arg0 preloadedProperties:(id)arg1 completion:(id)arg2 ;
-(void)accountsWithHandler:(id)arg0 ;
-(void)addAccountNoSave:(id)arg0 error:(*id)arg1 ;
-(void)addClientToken:(id)arg0 forAccountIdentifier:(id)arg1 completion:(id)arg2 ;
-(void)appPermissionsForAccountType:(id)arg0 withHandler:(id)arg1 ;
-(void)canSaveAccount:(id)arg0 completion:(id)arg1 ;
-(void)childAccountsForAccountWithIdentifier:(id)arg0 handler:(id)arg1 ;
-(void)childAccountsWithAccountTypeIdentifier:(id)arg0 parentAccountIdentifier:(id)arg1 handler:(id)arg2 ;
-(void)clearAllPermissionsGrantedForAccountType:(id)arg0 withHandler:(id)arg1 ;
-(void)clearGrantedPermissionsForAccountType:(id)arg0 withHandler:(id)arg1 ;
-(void)clientTokenForAccountIdentifier:(id)arg0 completion:(id)arg1 ;
-(void)credentialForAccount:(id)arg0 serviceID:(id)arg1 handler:(id)arg2 ;
-(void)credentialForAccountWithIdentifier:(id)arg0 handler:(id)arg1 ;
-(void)credentialItemForAccount:(id)arg0 serviceName:(id)arg1 completion:(id)arg2 ;
-(void)credentialItemsWithCompletion:(id)arg0 ;
-(void)dataclassActionsForAccountDeletion:(id)arg0 completion:(id)arg1 ;
-(void)dataclassActionsForAccountSave:(id)arg0 completion:(id)arg1 ;
-(void)dataclassesWithHandler:(id)arg0 ;
-(void)deleteAccountNoSave:(id)arg0 error:(*id)arg1 ;
-(void)discoverPropertiesForAccount:(id)arg0 options:(id)arg1 completion:(id)arg2 ;
-(void)displayAccountTypeForAccountWithIdentifier:(id)arg0 handler:(id)arg1 ;
-(void)enabledDataclassesForAccountWithIdentifier:(id)arg0 handler:(id)arg1 ;
-(void)grantedPermissionsForAccountType:(id)arg0 withHandler:(id)arg1 ;
-(void)handleURL:(id)arg0 ;
-(void)insertAccountType:(id)arg0 withHandler:(id)arg1 ;
-(void)insertCredentialItem:(id)arg0 completion:(id)arg1 ;
-(void)isPerformingDataclassActionsForAccount:(id)arg0 completion:(id)arg1 ;
-(void)isPushSupportedForAccount:(id)arg0 completion:(id)arg1 ;
-(void)isTetheredSyncingEnabledForDataclass:(id)arg0 completion:(id)arg1 ;
-(void)kerberosAccountsForDomainFromURL:(id)arg0 completion:(id)arg1 ;
-(void)migrateCredentialForAccount:(id)arg0 completion:(id)arg1 ;
-(void)notifyRemoteDevicesOfModifiedAccount:(id)arg0 withChangeType:(id)arg1 ;
-(void)notifyRemoteDevicesOfModifiedAccount:(id)arg0 withChangeType:(id)arg1 options:(id)arg2 completion:(id)arg3 ;
-(void)openAuthenticationURL:(id)arg0 forAccount:(id)arg1 shouldConfirm:(BOOL)arg2 completion:(id)arg3 ;
-(void)openAuthenticationURLForAccount:(id)arg0 withDelegateClassName:(id)arg1 fromBundleAtPath:(id)arg2 shouldConfirm:(BOOL)arg3 completion:(id)arg4 ;
-(void)parentAccountForAccountWithIdentifier:(id)arg0 handler:(id)arg1 ;
-(void)permissionForAccountType:(id)arg0 withHandler:(id)arg1 ;
-(void)preloadDataclassOwnersWithCompletion:(id)arg0 ;
-(void)provisionedDataclassesForAccountWithIdentifier:(id)arg0 handler:(id)arg1 ;
-(void)registerMonitorForAccountsOfTypes:(id)arg0 completion:(id)arg1 ;
-(void)removeAccount:(id)arg0 withDataclassActions:(id)arg1 completion:(id)arg2 ;
-(void)removeAccountFromPairedDevice:(id)arg0 withOptions:(id)arg1 completion:(id)arg2 ;
-(void)removeAccountType:(id)arg0 withHandler:(id)arg1 ;
-(void)removeAccountsFromPairedDeviceWithOptions:(id)arg0 completion:(id)arg1 ;
-(void)removeCredentialItem:(id)arg0 completion:(id)arg1 ;
-(void)renewCredentialsForAccount:(id)arg0 options:(id)arg1 completion:(id)arg2 ;
-(void)requestAccessForAccountTypeWithIdentifier:(id)arg0 options:(id)arg1 withHandler:(id)arg2 ;
-(void)resetDatabaseToVersion:(id)arg0 withCompletion:(id)arg1 ;
-(void)saveAccount:(id)arg0 pid:(id)arg1 verify:(BOOL)arg2 dataclassActions:(id)arg3 completion:(id)arg4 ;
-(void)saveAccount:(id)arg0 toPairedDeviceWithOptions:(id)arg1 completion:(id)arg2 ;
-(void)saveAccount:(id)arg0 verify:(BOOL)arg1 dataclassActions:(id)arg2 completion:(id)arg3 ;
-(void)saveAccount:(id)arg0 withHandler:(id)arg1 ;
-(void)saveCredentialItem:(id)arg0 completion:(id)arg1 ;
-(void)scheduleBackupIfNonexistent:(id)arg0 ;
-(void)setCredential:(id)arg0 forAccount:(id)arg1 serviceID:(id)arg2 completion:(id)arg3 ;
-(void)setPermissionGranted:(id)arg0 forBundleID:(id)arg1 onAccountType:(id)arg2 withHandler:(id)arg3 ;
-(void)shutdownAccountsD:(id)arg0 ;
-(void)supportedDataclassesForAccountType:(id)arg0 handler:(id)arg1 ;
-(void)syncableDataclassesForAccountType:(id)arg0 handler:(id)arg1 ;
-(void)tetheredSyncSourceTypeForDataclass:(id)arg0 completion:(id)arg1 ;
-(void)triggerKeychainMigrationIfNecessary:(id)arg0 ;
-(void)updateAccountNoSave:(id)arg0 error:(*id)arg1 ;
-(void)updateExistenceCacheOfAccountWithTypeIdentifier:(id)arg0 withHandler:(id)arg1 ;
-(void)verifyCredentialsForAccount:(id)arg0 options:(id)arg1 completion:(id)arg2 ;
-(void)visibleTopLevelAccountsWithAccountTypeIdentifiers:(id)arg0 completion:(id)arg1 ;


@end


#endif