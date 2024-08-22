// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef ACDKEYCHAINMANAGER_H
#define ACDKEYCHAINMANAGER_H


#import <Foundation/Foundation.h>


@interface ACDKeychainManager : NSObject



+(BOOL)_keychainLock_removeItemForService:(id)arg0 username:(id)arg1 accessGroup:(id)arg2 options:(id)arg3 error:(*id)arg4 ;
+(BOOL)_removeCredentialItemWithKey:(id)arg0 forAccountWithID:(id)arg1 username:(id)arg2 accountTypeID:(id)arg3 clientID:(id)arg4 options:(id)arg5 error:(*id)arg6 ;
+(BOOL)_removeItemForService:(id)arg0 username:(id)arg1 accessGroup:(id)arg2 options:(id)arg3 error:(*id)arg4 ;
+(BOOL)_shouldSyncCredentialForAccount:(id)arg0 ;
+(BOOL)accountSyncMigrated;
+(BOOL)createAccountSyncItemForAccount:(id)arg0 clientID:(id)arg1 properties:(id)arg2 error:(*id)arg3 ;
+(BOOL)createAccountSyncMigratedItemWithError:(*id)arg0 ;
+(BOOL)removeAccountSyncItemForAccount:(id)arg0 clientID:(id)arg1 properties:(id)arg2 error:(*id)arg3 ;
+(id)_credentialForAccountWithID:(id)arg0 accountTypeID:(id)arg1 credentialType:(id)arg2 clientID:(id)arg3 allowAdditionalAccountTypeSegment:(BOOL)arg4 options:(id)arg5 error:(*id)arg6 ;
+(id)_fetchOptionsForAccount:(id)arg0 ;
+(id)_itemForServiceName:(id)arg0 username:(id)arg1 accessGroup:(id)arg2 options:(id)arg3 error:(*id)arg4 ;
+(id)accountSynciOSVersion;
+(id)credentialForAccount:(id)arg0 clientID:(id)arg1 ;
+(id)credentialForAccount:(id)arg0 clientID:(id)arg1 error:(*id)arg2 ;
+(id)credentialForManagedAccountObject:(id)arg0 ;
+(id)credentialForManagedAccountObject:(id)arg0 clientID:(id)arg1 ;
+(id)credentialForManagedAccountObject:(id)arg0 clientID:(id)arg1 error:(*id)arg2 ;
+(id)keychainAccounts;
+(id)keychainDeletedAccounts;
+(id)keychainDeletedContactAccounts;
+(id)keychainDeletedHostnameAccounts;
+(id)keychainHostnameAccounts;
+(id)keychainServiceNameForClientID:(id)arg0 accountTypeIdentifier:(id)arg1 additionalAccountTypeSegment:(id)arg2 key:(id)arg3 ;
+(id)removeTombstonesForAccount:(id)arg0 clientID:(id)arg1 error:(*id)arg2 ;
+(id)server;
+(void)_accountTypeIdentifierFromComponents:(id)arg0 handler:(id)arg1 ;
+(void)_createNoSyncOAuthTokens:(id)arg0 account:(id)arg1 clientID:(id)arg2 ;
+(void)_fallbackToUnsyncedOAuthTokens:(id)arg0 ;
+(void)_keychainLock_addItem:(id)arg0 forServiceName:(id)arg1 username:(id)arg2 accessGroup:(id)arg3 accessibility:(id)arg4 syncable:(BOOL)arg5 requiresTouchID:(BOOL)arg6 error:(*id)arg7 ;
+(void)_keychainLock_updateItem:(id)arg0 existingPassword:(id)arg1 forServiceName:(id)arg2 username:(id)arg3 accessGroup:(id)arg4 accessibility:(id)arg5 options:(id)arg6 error:(*id)arg7 ;
+(void)_migrateCredential:(id)arg0 forAccount:(id)arg1 clientID:(id)arg2 ;
+(void)_removeCredentialsForAccount:(id)arg0 clientID:(id)arg1 options:(id)arg2 error:(*id)arg3 ;
+(void)_saveCredential:(id)arg0 forAccount:(id)arg1 clientID:(id)arg2 error:(*id)arg3 ;
+(void)_setCredentialForAccount:(id)arg0 clientID:(id)arg1 handleCredentialItemRemovals:(BOOL)arg2 error:(*id)arg3 ;
+(void)_setItem:(id)arg0 forServiceName:(id)arg1 username:(id)arg2 accessGroup:(id)arg3 accessibility:(id)arg4 syncable:(BOOL)arg5 requiresTouchID:(BOOL)arg6 options:(id)arg7 error:(*id)arg8 ;
+(void)_setNonPersistentCredentialTimerForAccount:(id)arg0 ;
+(void)componentsFromKeychainServiceName:(id)arg0 handler:(id)arg1 ;
+(void)createDataclassAccountSyncItemForAccount:(id)arg0 withDataclassActions:(id)arg1 ;
+(void)initialize;
+(void)notifiyCredentialChangedForAccount:(id)arg0 ;
+(void)removeCredentialForAccount:(id)arg0 ;
+(void)removeCredentialForAccount:(id)arg0 clientID:(id)arg1 ;
+(void)removeCredentialForAccount:(id)arg0 clientID:(id)arg1 error:(*id)arg2 ;
+(void)removeCredentialForAccount:(id)arg0 error:(*id)arg1 ;
+(void)removeCredentialForAccount:(id)arg0 key:(id)arg1 error:(*id)arg2 ;
+(void)removeDataclassAccountSyncItemForAccount:(id)arg0 ;
+(void)removeTombstoneForService:(id)arg0 keychainAccountIdentifier:(id)arg1 ;
+(void)setAccountSynciOSVersion:(id)arg0 ;
+(void)setCredentialForAccount:(id)arg0 ;
+(void)setCredentialForAccount:(id)arg0 clientID:(id)arg1 ;
+(void)setCredentialForAccount:(id)arg0 clientID:(id)arg1 error:(*id)arg2 ;
+(void)setCredentialForAccount:(id)arg0 error:(*id)arg1 ;
+(void)setCredentialForNewAccount:(id)arg0 clientID:(id)arg1 error:(*id)arg2 ;
+(void)setServer:(id)arg0 ;


@end


#endif