// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef WBSSAVEDPASSWORDSTORE_H
#define WBSSAVEDPASSWORDSTORE_H

@class NSMutableDictionary, NSArray, NSSet;
@protocol OS_dispatch_queue;

#import <Foundation/Foundation.h>

#import "WBSKeychainCredentialNotificationMonitor.h"

@interface WBSSavedPasswordStore : NSObject {
    NSMutableDictionary *_domainToUsers;
    NSArray *_savedPasswords;
    WBSKeychainCredentialNotificationMonitor *_keychainMonitor;
    id *_keychainNotificationRegistrationToken;
    NSObject<OS_dispatch_queue> *_queue;
}


@property (readonly, nonatomic) BOOL hasPasswordsEligibleForAutoFill; // ivar: _hasPasswordsEligibleForAutoFill
@property (readonly, nonatomic) NSSet *highLevelDomainsOfAllSavedPasswordsExcludingNeverSaveMarkerPasswords;
@property (readonly, nonatomic) NSArray *savedPasswords;
@property (readonly, nonatomic) NSArray *savedPasswordsExcludingNeverSaveMarkerPasswords;


+(id)sharedStore;
+(void)removePassword:(id)arg0 ;
-(BOOL)canChangeSavedPassword:(id)arg0 toUser:(id)arg1 password:(id)arg2 ;
-(BOOL)canSaveUser:(id)arg0 password:(id)arg1 forProtectionSpace:(id)arg2 highLevelDomain:(id)arg3 ;
-(BOOL)changeSavedPassword:(id)arg0 toUser:(id)arg1 password:(id)arg2 ;
-(BOOL)changeSavedPasswordWithRequest:(id)arg0 ;
-(NSUInteger)numberOfSavedPasswordForHighLevelDomain:(id)arg0 ;
-(id)_allInternetPasswordEntriesFromKeychain;
-(id)_allSidecarsFromKeychain;
-(id)_persistentIdentifierForUser:(id)arg0 host:(id)arg1 ;
-(id)_savedPasswordForProtectionSpace:(id)arg0 user:(id)arg1 password:(id)arg2 ;
-(id)init;
-(id)persistentIdentifierForCredential:(id)arg0 protectionSpace:(id)arg1 ;
-(id)persistentIdentifierForSavedPassword:(id)arg0 ;
-(id)saveUser:(id)arg0 password:(id)arg1 forProtectionSpace:(id)arg2 highLevelDomain:(id)arg3 ;
-(id)savedPasswordForURL:(id)arg0 user:(id)arg1 password:(id)arg2 ;
-(id)savedPasswordForURLCredential:(id)arg0 protectionSpace:(id)arg1 ;
-(id)savedPasswordsForPersistentIdentifiers:(id)arg0 ;
-(void)_cleanUpRedundantCredentialsWithoutUsernames;
-(void)_ensureDomainsToUsersExists;
-(void)_postSavedPasswordStoreDidChangeNotification;
-(void)_removePassword:(id)arg0 ;
-(void)_removeSidecarObjectsOnInternalQueueForSavedPassword:(id)arg0 withBlock:(id)arg1 ;
-(void)_saveSidecarObjectsOnInternalQueueForSavedPassword:(id)arg0 withBlock:(id)arg1 ;
-(void)dealloc;
-(void)removePassword:(id)arg0 ;
-(void)removeSite:(id)arg0 fromPassword:(id)arg1 withCompletion:(id)arg2 ;
-(void)removeTOTPGenerator:(id)arg0 forSavedPassword:(id)arg1 ;
-(void)reset;
-(void)saveTOTPGenerator:(id)arg0 forSavedPassword:(id)arg1 ;
-(void)savedPasswordWithAllMetadataForURLCredential:(id)arg0 protectionSpace:(id)arg1 completion:(id)arg2 ;


@end


#endif