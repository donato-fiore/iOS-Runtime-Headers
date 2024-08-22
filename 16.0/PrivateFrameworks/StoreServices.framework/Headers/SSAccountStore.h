// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef SSACCOUNTSTORE_H
#define SSACCOUNTSTORE_H

@class NSArray, ACAccountStore, NSString;
@protocol AKAppleIDAuthenticationDelegate, OS_dispatch_queue;

#import <Foundation/Foundation.h>

#import "SSPromise.h"
#import "SSAccount.h"
#import "SSKeyValueStore.h"

@interface SSAccountStore : NSObject <AKAppleIDAuthenticationDelegate>



@property (readonly, copy) NSArray *accounts;
@property (retain, nonatomic) NSArray *accountsCache; // ivar: _accountsCache
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *accountsCacheAccessQueue; // ivar: _accountsCacheAccessQueue
@property (readonly, nonatomic) SSPromise *accountsPromise;
@property (readonly) SSAccount *activeAccount;
@property (readonly) SSAccount *activeLockerAccount;
@property (readonly) SSAccount *activeSandboxAccount;
@property (readonly, getter=isAuthenticationActive) BOOL authenticationActive;
@property (readonly, nonatomic) ACAccountStore *backingAccountStore; // ivar: _backingAccountStore
@property (readonly, copy) NSString *debugDescription;
@property (readonly, nonatomic) SSAccount *demoAccount;
@property (readonly, copy) NSString *description;
@property (readonly, getter=isExpired) BOOL expired;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *fetchAccountsQueue; // ivar: _fetchAccountsQueue
@property (readonly) NSUInteger hash;
@property (nonatomic, getter=isInProcessCacheDisabled) BOOL inProcessCacheDisabled; // ivar: _inProcessCacheDisabled
@property (retain, nonatomic) SSKeyValueStore *keyValueStore; // ivar: _keyValueStore
@property (readonly, nonatomic) SSPromise *localAccount;
@property (readonly, copy) SSAccount *localiTunesAccount;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *metricsQueue; // ivar: _metricsQueue
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *notificationQueue; // ivar: _notificationQueue
@property (readonly) Class superclass;


+(BOOL)URLResponseAllowsSilentAuthentication:(id)arg0 ;
+(BOOL)_accountDictionaryRepresentsActiveAccount:(id)arg0 inKeyValueStore:(id)arg1 ;
+(BOOL)_accountDictionaryRepresentsActiveLockerAccount:(id)arg0 inKeyValueStore:(id)arg1 ;
+(BOOL)_allowSilentPasswordAuthForAccount:(id)arg0 withOptions:(id)arg1 ;
+(BOOL)_copyKVSDatabaseWithError:(*id)arg0 ;
+(BOOL)_currentProcessLinksUIKit;
+(BOOL)_isBuddyRunning;
+(BOOL)_shouldRemoveAccountDictionaryWithoutMigration:(id)arg0 reason:(*id)arg1 ;
+(BOOL)areAccountStoreChangedNotificationsDisabled;
+(BOOL)isExpiredForTokenType:(NSInteger)arg0 ;
+(BOOL)migrateToAccountsFramework;
+(BOOL)unitTestModeEnabled;
+(CGFloat)tokenExpirationInterval;
+(id)_backingAccountForAccount:(id)arg0 ;
+(id)_createAuthenticationContextForAccount:(id)arg0 silentAuthentication:(BOOL)arg1 options:(id)arg2 ;
+(id)_createAuthenticationController;
+(id)_createUpdatedAccount:(id)arg0 withAuthenticationResults:(id)arg1 options:(id)arg2 ;
+(id)_hashedDescriptionFromAccountDictionary:(id)arg0 ;
+(id)_migrateAccountDictionary:(id)arg0 fromKeyValueStore:(id)arg1 originalActiveDSID:(id)arg2 originalActiveLockerDSID:(id)arg3 logKey:(id)arg4 error:(*id)arg5 ;
+(id)_refreshAccount:(id)arg0 ;
+(id)_unitTestAccountsAccessQueue;
+(id)defaultStore;
+(id)existingDefaultStore;
+(void)_addAccountToUnitTestStore:(id)arg0 ;
+(void)_cleanupActiveAccountsAfterMigrationWithActiveDSID:(id)arg0 activeLockerDSID:(id)arg1 ;
+(void)_disableAccountStoreChangedNotifications;
+(void)_enableAccountStoreChangedNotifications;
+(void)_postAccountsChangedDarwinNotification;
+(void)_postAccountsChangedInternalDarwinNotification;
+(void)_removeAccountDictionary:(id)arg0 fromKeyValueStore:(id)arg1 ;
+(void)_removeAccountFromUnitTestStore:(id)arg0 ;
+(void)resetExpiration;
+(void)resetExpirationForTokenType:(NSInteger)arg0 ;
+(void)setAuthenticationStartedDate:(id)arg0 ;
+(void)setUnitTestModeEnabled:(BOOL)arg0 ;
-(BOOL)authenticationController:(id)arg0 shouldContinueWithAuthenticationResults:(id)arg1 error:(id)arg2 forContext:(id)arg3 ;
-(BOOL)isExpiredForTokenType:(NSInteger)arg0 ;
-(BOOL)removeAccount:(id)arg0 error:(*id)arg1 ;
-(BOOL)repairAccountWithBrokenDSID:(id)arg0 ;
-(BOOL)saveAccount:(id)arg0 error:(*id)arg1 ;
-(BOOL)saveAccount:(id)arg0 verifyCredentials:(BOOL)arg1 error:(*id)arg2 ;
-(id)_buyParamsForBuyParamsString:(id)arg0 ;
-(id)_cachedAccounts;
-(id)_convertPasswordToPET:(id)arg0 forAccount:(id)arg1 options:(id)arg2 ;
-(id)_optionsForProxiedAuthenticationWithVerifyCredentialsOptions:(id)arg0 ;
-(id)_passwordEquivalentTokenFromAlternateAccountWithAltDSID:(id)arg0 DSID:(id)arg1 username:(id)arg2 ;
-(id)_saveAccount:(id)arg0 verifyCredentials:(BOOL)arg1 ;
-(id)_saveAccountInUnitTestMode:(id)arg0 ignoreValidationErrors:(BOOL)arg1 ;
-(id)_shouldCreateNewAccountForAccount:(id)arg0 options:(id)arg1 ;
-(id)_updateAccountWithAuthKitViaPromptAuth:(id)arg0 store:(id)arg1 options:(id)arg2 ;
-(id)_updateAccountWithAuthKitViaSilentAuth:(id)arg0 options:(id)arg1 ;
-(id)_updateAccountWithAuthKitViaSilentPETAuth:(id)arg0 options:(id)arg1 ;
-(id)_updateAccountWithAuthKitViaSilentPasswordAuth:(id)arg0 options:(id)arg1 ;
-(id)accountWithAccountName:(id)arg0 ;
-(id)accountWithAccountName:(id)arg0 scope:(NSInteger)arg1 ;
-(id)accountWithAltDSID:(id)arg0 ;
-(id)accountWithAltDSID:(id)arg0 scope:(NSInteger)arg1 ;
-(id)accountWithAltDSID:(id)arg0 uniqueIdentifier:(id)arg1 accountName:(id)arg2 ;
-(id)accountWithAltDSID:(id)arg0 uniqueIdentifier:(id)arg1 accountName:(id)arg2 scope:(NSInteger)arg3 ;
-(id)accountWithUniqueIdentifier:(id)arg0 ;
-(id)accountWithUniqueIdentifier:(id)arg0 reloadIfNecessary:(BOOL)arg1 ;
-(id)accountWithUniqueIdentifier:(id)arg0 scope:(NSInteger)arg1 ;
-(id)addAccount:(id)arg0 ;
-(id)iTunesStoreAccountType;
-(id)iTunesStoreAccountTypePromise;
-(id)init;
-(id)updateAccountWithAuthKit:(id)arg0 store:(id)arg1 options:(id)arg2 ;
-(void)_postAccountStoreChangeNotification;
-(void)_postActiveAccountChangedNotification;
-(void)_postAuthenticationActivityNotification;
-(void)_recordAnalyticsForMetricsDialogEvent:(id)arg0 withTopic:(id)arg1 ;
-(void)_setCachedAccounts:(id)arg0 ;
-(void)clearCachedAccounts;
-(void)dealloc;
-(void)getDefaultAccountNameUsingBlock:(id)arg0 ;
-(void)reloadAccounts;
-(void)removeAccount:(id)arg0 completion:(id)arg1 ;
-(void)removeAllAccountsWithCompletion:(id)arg0 ;
-(void)removeCookiesForAccount:(id)arg0 logKey:(id)arg1 ;
-(void)resetExpiration;
-(void)resetExpirationForTokenType:(NSInteger)arg0 ;
-(void)saveAccount:(id)arg0 completion:(id)arg1 ;
-(void)saveAccount:(id)arg0 verifyCredentials:(BOOL)arg1 completion:(id)arg2 ;
-(void)setAccountCredits:(id)arg0 forAccountWithUniqueIdentifier:(id)arg1 ;
-(void)setDefaultAccountName:(id)arg0 completionBlock:(id)arg1 ;
-(void)signOutAccount:(id)arg0 ;
-(void)signOutAccount:(id)arg0 completion:(id)arg1 ;
-(void)signOutAllAccounts;
-(void)signOutAllAccountsWithCompletionBlock:(id)arg0 ;


@end


#endif