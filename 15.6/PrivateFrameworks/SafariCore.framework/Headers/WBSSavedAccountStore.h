// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef WBSSAVEDACCOUNTSTORE_H
#define WBSSAVEDACCOUNTSTORE_H

@class NSMutableDictionary, NSArray, NSSet;
@protocol OS_dispatch_queue;

#import <Foundation/Foundation.h>

#import "WBSKeychainCredentialNotificationMonitor.h"

@interface WBSSavedAccountStore : NSObject {
    NSMutableDictionary *_highLevelDomainToUsernameToPasswordToSavedAccounts;
    NSArray *_savedAccountsWithPasswords;
    WBSKeychainCredentialNotificationMonitor *_keychainMonitor;
    id *_keychainNotificationRegistrationToken;
    NSObject<OS_dispatch_queue> *_queue;
}


@property (readonly, nonatomic) BOOL hasPasswordsEligibleForAutoFill; // ivar: _hasPasswordsEligibleForAutoFill
@property (readonly, nonatomic) NSSet *highLevelDomainsOfAllSavedAccountsWithPasswordsExcludingNeverSaveMarkerPasswords;
@property (readonly, nonatomic) NSArray *savedAccountsWithPasswords;
@property (readonly, nonatomic) NSArray *savedAccountsWithPasswordsExcludingNeverSaveMarkerPasswords;


+(id)sharedStore;
+(void)removeCredentialTypes:(NSInteger)arg0 forSavedAccount:(id)arg1 ;
-(BOOL)_canMergeSavedAccount:(id)arg0 withOtherSavedAccountWithoutSidecarConflict:(id)arg1 ;
-(BOOL)canChangeSavedAccount:(id)arg0 toUser:(id)arg1 password:(id)arg2 ;
-(BOOL)canSaveUser:(id)arg0 password:(id)arg1 forProtectionSpace:(id)arg2 highLevelDomain:(id)arg3 ;
-(BOOL)changeSavedAccount:(id)arg0 toUser:(id)arg1 password:(id)arg2 ;
-(BOOL)changeSavedAccountWithRequest:(id)arg0 ;
-(NSUInteger)numberOfSavedAccountsForHighLevelDomain:(id)arg0 ;
-(id)_allInternetPasswordEntriesFromKeychain;
-(id)_allSidecarsFromKeychain;
-(id)_persistentIdentifierForUser:(id)arg0 host:(id)arg1 ;
-(id)_savedAccountForProtectionSpace:(id)arg0 user:(id)arg1 password:(id)arg2 ;
-(id)init;
-(id)persistentIdentifierForCredential:(id)arg0 protectionSpace:(id)arg1 ;
-(id)persistentIdentifierForSavedAccount:(id)arg0 ;
-(id)saveUser:(id)arg0 password:(id)arg1 forProtectionSpace:(id)arg2 highLevelDomain:(id)arg3 ;
-(id)savedAccountForURL:(id)arg0 user:(id)arg1 password:(id)arg2 ;
-(id)savedAccountForURLCredential:(id)arg0 protectionSpace:(id)arg1 ;
-(id)savedAccountWithAllMetadataForURLCredential:(id)arg0 protectionSpace:(id)arg1 ;
-(id)savedAccountsForPersistentIdentifiers:(id)arg0 ;
-(void)_cleanUpRedundantCredentialsWithoutUsernames;
-(void)_ensureDomainsToUsersExists;
-(void)_postSavedAccountStoreDidChangeNotification;
-(void)_removeSavedAccount:(id)arg0 fromCachedCollectionsForCredentialTypes:(NSInteger)arg1 ;
-(void)_removeSidecarObjectsOnInternalQueueForSavedAccount:(id)arg0 withBlock:(id)arg1 ;
-(void)_saveSidecarObjectsOnInternalQueueForSavedAccount:(id)arg0 withBlock:(id)arg1 ;
-(void)_saveSidecarObjectsOnInternalQueueForSavedAccountWithPassword:(id)arg0 withBlock:(id)arg1 ;
-(void)dealloc;
-(void)removeCredentialTypes:(NSInteger)arg0 forSavedAccount:(id)arg1 ;
-(void)removeHideWarningMarkerForSavedAccount:(id)arg0 ;
-(void)removeSite:(id)arg0 fromSavedAccountWithPassword:(id)arg1 withCompletion:(id)arg2 ;
-(void)removeTOTPGenerator:(id)arg0 forSavedAccount:(id)arg1 ;
-(void)reset;
-(void)resetHiddenSecurityRecommendationsWithCompletionHandler:(id)arg0 ;
-(void)saveHideMarker:(id)arg0 forSavedAccount:(id)arg1 ;
-(void)saveNotesEntry:(id)arg0 forSavedAccount:(id)arg1 ;
-(void)saveTOTPGenerator:(id)arg0 forSavedAccount:(id)arg1 ;
-(void)savedAccountWithAllMetadataForURLCredential:(id)arg0 protectionSpace:(id)arg1 completion:(id)arg2 ;


@end


#endif