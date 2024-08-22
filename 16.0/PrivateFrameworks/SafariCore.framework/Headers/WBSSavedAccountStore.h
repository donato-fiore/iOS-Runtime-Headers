// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef WBSSAVEDACCOUNTSTORE_H
#define WBSSAVEDACCOUNTSTORE_H

@class NSMutableDictionary, NSArray, NSSet;
@protocol WBSAuthenticationServicesAgentDelegate, OS_dispatch_queue;

#import <Foundation/Foundation.h>

#import "WBSKeychainCredentialNotificationMonitor.h"
#import "WBSAuthenticationServicesAgentProxy.h"

@interface WBSSavedAccountStore : NSObject <WBSAuthenticationServicesAgentDelegate>

 {
    NSMutableDictionary *_personalKeychainHighLevelDomainToUsernameToPasswordToSavedAccounts;
    NSArray *_savedAccountsWithPasswords;
    NSArray *_savedAccounts;
    NSArray *_passkeysDataInPersonalKeychain;
    NSMutableDictionary *_highLevelDomainToLegacyPlatformAuthenticatorCredentials;
    WBSKeychainCredentialNotificationMonitor *_keychainMonitor;
    id *_keychainNotificationRegistrationToken;
    NSObject<OS_dispatch_queue> *_queue;
    NSMutableDictionary *_allSavedAccountsHighLevelDomainToUsernameToCredentialTypesToSavedAccounts;
    WBSAuthenticationServicesAgentProxy *_authenticationServicesAgentProxy;
}


@property (readonly, nonatomic) WBSAuthenticationServicesAgentProxy *authenticationServicesAgentProxy;
@property (readonly, nonatomic) BOOL hasPasskeysEligibleForAutoFill; // ivar: _hasPasskeysEligibleForAutoFill
@property (readonly, nonatomic) BOOL hasPasswordsEligibleForAutoFill; // ivar: _hasPasswordsEligibleForAutoFill
@property (readonly, nonatomic) NSSet *highLevelDomainsOfAllSavedAccountsExcludingNeverSaveMarkerPasswords;
@property (readonly, nonatomic) NSSet *highLevelDomainsOfAllSavedAccountsWithPasswordsExcludingNeverSaveMarkerPasswords;
@property (readonly, nonatomic) NSArray *savedAccounts;
@property (readonly, nonatomic) NSArray *savedAccountsExcludingNeverSaveMarkerPasswords;
@property (readonly, nonatomic) NSArray *savedAccountsWithPasswords;
@property (readonly, nonatomic) NSArray *savedAccountsWithPasswordsExcludingNeverSaveMarkerPasswords;


+(id)allPasskeysData;
+(id)sharedStore;
+(void)removeCredentialTypes:(NSInteger)arg0 forSavedAccount:(id)arg1 ;
-(BOOL)_canChangeSavedAccountInPersonalKeychain:(id)arg0 toUser:(id)arg1 password:(id)arg2 ;
-(BOOL)_canMergeSavedAccount:(id)arg0 withOtherSavedAccountWithoutSidecarConflict:(id)arg1 ;
-(BOOL)canChangeSavedAccount:(id)arg0 toUser:(id)arg1 password:(id)arg2 ;
-(BOOL)canChangeSavedAccountWithRequest:(id)arg0 ;
-(BOOL)canSaveUser:(id)arg0 password:(id)arg1 forProtectionSpace:(id)arg2 highLevelDomain:(id)arg3 ;
-(BOOL)canSaveUser:(id)arg0 password:(id)arg1 forUserTypedSite:(id)arg2 ;
-(NSUInteger)numberOfSavedAccountsForHighLevelDomain:(id)arg0 ;
-(id)_allInternetPasswordEntriesFromPersonalKeychain;
-(id)_allSidecarsFromPersonalKeychain;
-(id)_fetchCurrentAutoFillPasskeysWithCriteria:(id)arg0 ;
-(id)_getSavedAccountMatchesFromSavedAccountTreeMatchesOnInternalQueue:(id)arg0 withCriteria:(id)arg1 mergingAutoFillPasskeys:(id)arg2 nearbyDeviceOptions:(id)arg3 ;
-(id)_getSavedAccountTreeMatchesWithCriteriaOnInternalQueue:(id)arg0 ;
-(id)_getSavedAccountsMatchingCriteriaOnInternalQueue:(id)arg0 ;
-(id)_loadAndMergeSavedAccountsFromPersonalKeychainIntoAllSavedAccounts:(id)arg0 ;
-(id)_loadSavedAccounts;
-(id)_loadSavedAccountsWithPasskeysFromPasskeyData:(id)arg0 withDictionaryForSavedAccountsWithPasskeys:(id)arg1 ;
-(id)_loadSavedAccountsWithPasswordsFromKeychainData:(id)arg0 withDictionaryForSavedAccountsWithPasswords:(id)arg1 ;
-(id)_mergeLoadedSavedAccounts:(id)arg0 intoAllSavedAccounts:(id)arg1 ;
-(id)_mergeSavedAccountsWithPasskeys:(id)arg0 andSavedAccountsWithPasswords:(id)arg1 usingDictionaryForSavedAccountsWithPasswords:(id)arg2 dictionaryForSavedAccountsWithPasskeys:(id)arg3 ;
-(id)_persistentIdentifierForUser:(id)arg0 host:(id)arg1 ;
-(id)_saveAccountOnInternalQueueWithUser:(id)arg0 password:(id)arg1 protectionSpace:(id)arg2 highLevelDomain:(id)arg3 ;
-(id)_saveUser:(id)arg0 passkeyCredential:(id)arg1 passkeyRelyingPartyID:(id)arg2 ;
-(id)_savedAccountForProtectionSpace:(id)arg0 user:(id)arg1 password:(id)arg2 ;
-(id)_sidecarsFromKeychainSidecarData:(id)arg0 ;
-(id)init;
-(id)initWithAuthenticationServicesAgentProxy:(id)arg0 ;
-(id)persistentIdentifierForCredential:(id)arg0 protectionSpace:(id)arg1 ;
-(id)persistentIdentifierForSavedAccount:(id)arg0 ;
-(id)saveUser:(id)arg0 password:(id)arg1 forProtectionSpace:(id)arg2 highLevelDomain:(id)arg3 ;
-(id)saveUser:(id)arg0 password:(id)arg1 forUserTypedSite:(id)arg2 ;
-(id)savedAccountForURL:(id)arg0 user:(id)arg1 password:(id)arg2 ;
-(id)savedAccountForURLCredential:(id)arg0 protectionSpace:(id)arg1 ;
-(id)savedAccountWithAllMetadataForURLCredential:(id)arg0 protectionSpace:(id)arg1 ;
-(id)savedAccountsForPersistentIdentifiers:(id)arg0 ;
-(void)_cleanUpRedundantCredentialsWithoutUsernames;
-(void)_ensureDomainsToUsersExists;
-(void)_fetchAndFilterAllPasskeysData;
-(void)_mergeSavedAccountWithPasskey:(id)arg0 toSavedAccountWithPassword:(id)arg1 ;
-(void)_mergeSavedAccountWithPassword:(id)arg0 toSavedAccountWithPasskey:(id)arg1 ;
-(void)_postSavedAccountStoreDidChangeNotification;
-(void)_pruneSavedAccountTreeMatchesOnInternalQueue:(id)arg0 basedOnUsernameAndPasswordCriteria:(id)arg1 autoFillPasskeyIdentifiers:(id)arg2 ;
-(void)_removeSavedAccount:(id)arg0 fromCachedCollectionsForCredentialTypes:(NSInteger)arg1 ;
-(void)_removeSidecarObjectsOnInternalQueueForSavedAccount:(id)arg0 withBlock:(id)arg1 ;
-(void)_saveSidecarObjectsOnInternalQueueForSavedAccount:(id)arg0 withBlock:(id)arg1 ;
-(void)_saveSidecarObjectsOnInternalQueueForSavedAccountWithPassword:(id)arg0 withBlock:(id)arg1 ;
-(void)_saveSidecarOnInternalQueueForSavedAccountWithPasskey:(id)arg0 withBlock:(id)arg1 ;
-(void)_updateLastOneTimeShareDateforSavedAccountIfNeeded:(id)arg0 ;
-(void)_updateSavedAccountsAndSavedAccountsWithPasswordsDictionary:(id)arg0 withChangeFromOldUser:(id)arg1 oldPassword:(id)arg2 forSavedAccountWithPassword:(id)arg3 ;
-(void)changeSavedAccount:(id)arg0 toUser:(id)arg1 password:(id)arg2 ;
-(void)changeSavedAccountWithRequest:(id)arg0 ;
-(void)dealloc;
-(void)getSavedAccountsMatchingCriteria:(id)arg0 withSynchronousCompletionHandler:(id)arg1 ;
-(void)newPasskeysAvailableForApplicationIdentifier:(id)arg0 ;
-(void)removeCredentialTypes:(NSInteger)arg0 forSavedAccount:(id)arg1 ;
-(void)removeHideWarningMarkerForSavedAccount:(id)arg0 ;
-(void)removeLegacyPlatformCredentialsForDomains:(id)arg0 ;
-(void)removeSite:(id)arg0 fromSavedAccountWithPassword:(id)arg1 withCompletion:(id)arg2 ;
-(void)removeTOTPGenerator:(id)arg0 forSavedAccount:(id)arg1 ;
-(void)reset;
-(void)resetHiddenSecurityRecommendationsWithCompletionHandler:(id)arg0 ;
-(void)saveHideMarker:(id)arg0 forSavedAccount:(id)arg1 ;
-(void)saveNotesEntry:(id)arg0 forSavedAccount:(id)arg1 ;
-(void)saveTOTPGenerator:(id)arg0 forSavedAccount:(id)arg1 ;
-(void)savedAccountWithAllMetadataForURLCredential:(id)arg0 protectionSpace:(id)arg1 completion:(id)arg2 ;
-(void)savedAccountsMatchingCriteria:(id)arg0 withCompletionHandler:(id)arg1 ;
-(void)setDontSaveMarkerForSavedAccountsWithProtectionSpace:(id)arg0 ;
-(void)setSavedAccountAsDefault:(id)arg0 forProtectionSpace:(id)arg1 ;


@end


#endif