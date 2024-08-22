// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef ACDACCOUNTSTOREFILTER_H
#define ACDACCOUNTSTOREFILTER_H

@class NSString;
@protocol ACRemoteAccountStoreProtocol;

#import <Foundation/Foundation.h>

#import "ACDAccountStore.h"

@interface ACDAccountStoreFilter : NSObject <ACRemoteAccountStoreProtocol>



@property (readonly, nonatomic) ACDAccountStore *backingAccountStore; // ivar: _backingAccountStore
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


+(id)new;
-(BOOL)_accessGrantedForBundleID:(id)arg0 onAccountTypeID:(id)arg1 ;
-(BOOL)_accessGrantedForClient:(id)arg0 onAccountTypeID:(id)arg1 ;
-(BOOL)_clientHasPermissionToAddAccount:(id)arg0 ;
-(BOOL)_isClientPermittedToAccessAccount:(id)arg0 ;
-(BOOL)_isClientPermittedToAccessAccountTypeWithIdentifier:(id)arg0 ;
-(BOOL)_isClientPermittedToRemoveAccount:(id)arg0 ;
-(BOOL)_wildCardAuthorizationMatchingForAccountTypeIdentifier:(id)arg0 ;
-(BOOL)isClientEntitledToAccessAccountTypeWithIdentifier:(id)arg0 ;
-(id)_appPermissionsForAccountTypeIdentifier:(id)arg0 ;
-(id)init;
-(id)initWithBackingAccountStore:(id)arg0 ;
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
-(void)registerMonitorForAccountsOfTypes:(id)arg0 propertiesToPrefetch:(id)arg1 completion:(id)arg2 ;
-(void)removeAccount:(id)arg0 withDataclassActions:(id)arg1 completion:(id)arg2 ;
-(void)removeAccountFromPairedDevice:(id)arg0 withOptions:(id)arg1 completion:(id)arg2 ;
-(void)removeAccountType:(id)arg0 withHandler:(id)arg1 ;
-(void)removeAccountsFromPairedDeviceWithOptions:(id)arg0 completion:(id)arg1 ;
-(void)removeCredentialItem:(id)arg0 completion:(id)arg1 ;
-(void)renewCredentialsForAccount:(id)arg0 options:(id)arg1 completion:(id)arg2 ;
-(void)requestAccessForAccountTypeWithIdentifier:(id)arg0 options:(id)arg1 withHandler:(id)arg2 ;
-(void)resetDatabaseToVersion:(id)arg0 withCompletion:(id)arg1 ;
-(void)runAccountMigrationPlugins:(id)arg0 ;
-(void)saveAccount:(id)arg0 toPairedDeviceWithOptions:(id)arg1 completion:(id)arg2 ;
-(void)saveAccount:(id)arg0 verify:(BOOL)arg1 dataclassActions:(id)arg2 completion:(id)arg3 ;
-(void)saveAccount:(id)arg0 withHandler:(id)arg1 ;
-(void)saveCredentialItem:(id)arg0 completion:(id)arg1 ;
-(void)scheduleBackupIfNonexistent:(id)arg0 ;
-(void)setClientBundleID:(id)arg0 withHandler:(id)arg1 ;
-(void)setCredential:(id)arg0 forAccount:(id)arg1 serviceID:(id)arg2 completion:(id)arg3 ;
-(void)setNotificationsEnabled:(BOOL)arg0 ;
-(void)setPermissionGranted:(id)arg0 forBundleID:(id)arg1 onAccountType:(id)arg2 withHandler:(id)arg3 ;
-(void)shutdownAccountsD:(id)arg0 ;
-(void)supportedDataclassesForAccountType:(id)arg0 handler:(id)arg1 ;
-(void)syncableDataclassesForAccountType:(id)arg0 handler:(id)arg1 ;
-(void)tetheredSyncSourceTypeForDataclass:(id)arg0 completion:(id)arg1 ;
-(void)triggerKeychainMigrationIfNecessary:(id)arg0 ;
-(void)updateExistenceCacheOfAccountWithTypeIdentifier:(id)arg0 withHandler:(id)arg1 ;
-(void)verifyCredentialsForAccount:(id)arg0 options:(id)arg1 completion:(id)arg2 ;
-(void)visibleTopLevelAccountsWithAccountTypeIdentifiers:(id)arg0 completion:(id)arg1 ;


@end


#endif