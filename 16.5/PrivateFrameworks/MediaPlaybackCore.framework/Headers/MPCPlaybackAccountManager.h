// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef MPCPLAYBACKACCOUNTMANAGER_H
#define MPCPLAYBACKACCOUNTMANAGER_H

@class NSDictionary, NSHashTable, NSArray, NSString;
@protocol ICEnvironmentMonitorObserver, OS_dispatch_group;

#import <Foundation/Foundation.h>

#import "MPCPlaybackAccount.h"

@interface MPCPlaybackAccountManager : NSObject <ICEnvironmentMonitorObserver>

 {
    os_unfair_lock_s _lock;
    NSDictionary *_accounts;
    BOOL _needsRefreshDueToTimeout;
    BOOL _needsRefreshDueToMissingBag;
    NSObject<OS_dispatch_group> *_initialAccountGroup;
    NSHashTable *_observers;
    os_unfair_recursive_lock_s _observersLock;
}


@property (readonly, copy, nonatomic) NSArray *accounts;
@property (readonly, nonatomic) MPCPlaybackAccount *activeAccount;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) BOOL hasLoadedInitialAccounts;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


+(id)sharedManager;
-(BOOL)_shouldPurgeGlideSubscriptionDataForAccount:(id)arg0 ;
-(id)_init;
-(id)accountForDSID:(id)arg0 ;
-(id)accountForHashedDSID:(id)arg0 ;
-(id)accountForUserIdentity:(id)arg0 ;
-(void)_buildAccountFromDelegatedIdentity:(id)arg0 completion:(id)arg1 ;
-(void)_buildAccountFromLocalIdentity:(id)arg0 completion:(id)arg1 ;
-(void)_enumerateIdentitiesWithCompletion:(id)arg0 ;
-(void)_homeUserSettingsChangeNotification:(id)arg0 ;
-(void)_setNeedsRefreshDueToMissingBag:(BOOL)arg0 ;
-(void)_subscriptionStatusChangedNotification:(id)arg0 ;
-(void)_updateAccounts;
-(void)_updateAccountsWithAttemptCount:(NSInteger)arg0 ;
-(void)_userIdentityStoreChangedNotification:(id)arg0 ;
-(void)dealloc;
-(void)environmentMonitorDidChangeNetworkReachability:(id)arg0 ;
-(void)performAfterLoadingAccounts:(id)arg0 ;
-(void)registerObserver:(id)arg0 ;
-(void)start;
-(void)unregisterObserver:(id)arg0 ;
-(void)waitForAccountsWithCompletion:(id)arg0 ;


@end


#endif