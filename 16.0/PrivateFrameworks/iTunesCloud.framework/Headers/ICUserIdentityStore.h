// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef ICUSERIDENTITYSTORE_H
#define ICUSERIDENTITYSTORE_H

@class NSString;
@protocol ICUserIdentityStoreBackendDelegate, NSSecureCoding, ICUserIdentityStoreBackend, OS_dispatch_queue;

#import <Foundation/Foundation.h>

#import "ICValueHistory.h"
#import "ICUserIdentityStoreCoding.h"
#import "ICDelegateAccountStore.h"
#import "ICDelegateAccountStoreOptions.h"
#import "ICLocalStoreAccountProperties.h"

@interface ICUserIdentityStore : NSObject <ICUserIdentityStoreBackendDelegate, NSSecureCoding>

 {
    ICValueHistory *_activeAccountHistory;
    ICValueHistory *_activeLockerAccountHistory;
    id<ICUserIdentityStoreBackend> *_backend;
    ICUserIdentityStoreCoding *_codingHelper;
    ICDelegateAccountStore *_delegateAccountStore;
    ICDelegateAccountStoreOptions *_delegateAccountStoreOptions;
    ICLocalStoreAccountProperties *_localStoreAccountProperties;
    NSUInteger _lastKnownActiveAccountTimestamp;
    NSUInteger _lastKnownActiveLockerAccountTimestamp;
    NSObject<OS_dispatch_queue> *_accessQueue;
    NSObject<OS_dispatch_queue> *_callbackQueue;
}


@property (readonly, nonatomic) NSObject<ICUserIdentityStoreBackend> *_unsafeBackend;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) NSInteger identityStoreStyle;
@property (readonly, nonatomic) ICLocalStoreAccountProperties *localStoreAccountProperties;
@property (readonly) Class superclass;


+(BOOL)supportsSecureCoding;
+(id)defaultIdentityStore;
+(id)nullIdentityStore;
+(id)testingIdentityStoreWithDatabasePath:(id)arg0 ;
+(id)testingIdentityStoreWithSingleWriterService:(id)arg0 ;
+(void)_claimSingleWriterStatus;
-(BOOL)_allowsDelegationForUserIdentity:(id)arg0 ;
-(BOOL)_refreshLocalStoreAccountPropertiesAllowingDidChangeNotification:(BOOL)arg0 ;
-(BOOL)_saveIdentityProperties:(id)arg0 andPostAccountChangeNotification:(BOOL)arg1 forUserIdentity:(id)arg2 error:(*id)arg3 ;
-(BOOL)isEqual:(id)arg0 ;
-(id)DSIDForUserIdentity:(id)arg0 outError:(*id)arg1 ;
-(id)_dsidForTimestamp:(NSUInteger)arg0 history:(id)arg1 ;
-(id)_dsidForUserIdentity:(id)arg0 error:(*id)arg1 ;
-(id)_existingIdentityPropertiesForUserIdentity:(id)arg0 error:(*id)arg1 ;
-(id)_icValidStoreAccountsFromACAccounts:(id)arg0 ;
-(id)_initCommon;
-(id)_initWithStyle:(NSInteger)arg0 delegateAccountStoreOptions:(id)arg1 ;
-(id)_openDelegateAccountStoreForUserIdentity:(id)arg0 error:(*id)arg1 ;
-(id)_openDelegateAccountStoreWithError:(*id)arg0 ;
-(id)getPropertiesForActiveICloudAccountReturningError:(*id)arg0 ;
-(id)getPropertiesForUserIdentity:(id)arg0 error:(*id)arg1 ;
-(id)getVerificationContextForUserIdentity:(id)arg0 error:(*id)arg1 ;
-(id)initWithCoder:(id)arg0 ;
-(id)userIdentitiesForAllStoreAccountsWithError:(*id)arg0 ;
-(id)userIdentitiesForManageableAccountsWithError:(*id)arg0 ;
-(void)_assertNonNullIdentityStoreForSelector:(SEL)arg0 ;
-(void)_delegateAccountStoreDidChangeNotification:(id)arg0 ;
-(void)_dispatchDidChangeNotification:(BOOL)arg0 didDelegateAccountStoreChange:(BOOL)arg1 ;
-(void)_importValuesFromCodingHelper:(id)arg0 ;
-(void)_initializeLocalStoreAccountProperties;
-(void)_prepareDelegateAccountStoreWithCompletionHandler:(id)arg0 ;
-(void)_registerForDelegateAccountStoreNotifications:(id)arg0 ;
-(void)_reloadForExternalChange;
-(void)_resetDelegateAccountStoreWithCompletionHandler:(id)arg0 ;
-(void)_unregisterForDelegateAccountStoreNotifications:(id)arg0 ;
-(void)_unsafe_deleteDelegateAccountStore;
-(void)_updateDelegateAccountStoreUsingBlock:(id)arg0 ;
-(void)addDelegationUUIDs:(id)arg0 forUserIdentity:(id)arg1 completionHandler:(id)arg2 ;
-(void)dealloc;
-(void)disableLockerAccountWithDSID:(id)arg0 completionHandler:(id)arg1 ;
-(void)encodeWithCoder:(id)arg0 ;
// -(void)enumerateDelegateTokensUsingBlock:(id)arg0 completionHandler:(unk)arg1  ;
// -(void)enumerateDelegateTokensWithType:(NSInteger)arg0 usingBlock:(id)arg1 completionHandler:(unk)arg2  ;
-(void)getDelegationUUIDsForUserIdentity:(id)arg0 completionHandler:(id)arg1 ;
-(void)getPropertiesForUserIdentity:(id)arg0 completionHandler:(id)arg1 ;
// -(void)insertPropertiesForUserIdentity:(id)arg0 andPostAccountChangeNotification:(BOOL)arg1 usingBlock:(id)arg2 completionHandler:(unk)arg3  ;
-(void)insertPropertiesForUserIdentity:(id)arg0 usingBlock:(id)arg1 ;
// -(void)insertPropertiesForUserIdentity:(id)arg0 usingBlock:(id)arg1 completionHandler:(unk)arg2  ;
-(void)removeAllDelegateTokensWithCompletionHandler:(id)arg0 ;
-(void)removeDelegateTokenForUserIdentity:(id)arg0 completionHandler:(id)arg1 ;
-(void)removeDelegateTokensExpiringBeforeDate:(id)arg0 completionHandler:(id)arg1 ;
-(void)removeDelegationUUIDs:(id)arg0 forUserIdentity:(id)arg1 completionHandler:(id)arg2 ;
-(void)removePropertiesForUserIdentity:(id)arg0 completionHandler:(id)arg1 ;
-(void)setActiveAccountWithDSID:(id)arg0 completionHandler:(id)arg1 ;
-(void)setActiveLockerAccountWithDSID:(id)arg0 completionHandler:(id)arg1 ;
-(void)synchronize;
-(void)synchronizeWithCompletionHandler:(id)arg0 ;
// -(void)updatePropertiesForLocalStoreAccountUsingBlock:(id)arg0 completionHandler:(unk)arg1  ;
-(void)updatePropertiesForUserIdentity:(id)arg0 usingBlock:(id)arg1 ;
// -(void)updatePropertiesForUserIdentity:(id)arg0 usingBlock:(id)arg1 completionHandler:(unk)arg2  ;
-(void)userIdentityStoreBackendDidChange:(id)arg0 ;


@end


#endif