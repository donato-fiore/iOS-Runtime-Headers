// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef _MPCPLAYBACKACCOUNTMANAGER_H
#define _MPCPLAYBACKACCOUNTMANAGER_H

@class NSMutableDictionary, NSArray;
@protocol OS_dispatch_group;

#import <Foundation/Foundation.h>

#import "MPCPlaybackAccount.h"
#import "MPCPlaybackEngine.h"

@interface _MPCPlaybackAccountManager : NSObject {
    os_unfair_lock_s _lock;
    NSMutableDictionary *_accounts;
    BOOL _needsRefreshDueToTimeout;
    NSObject<OS_dispatch_group> *_initialAccountGroup;
}


@property (readonly, copy, nonatomic) NSArray *accounts;
@property (readonly, nonatomic) MPCPlaybackAccount *activeAccount;
@property (readonly, nonatomic) BOOL hasLoadedInitialAccounts;
@property (readonly, weak, nonatomic) MPCPlaybackEngine *playbackEngine; // ivar: _playbackEngine


-(BOOL)_shouldPurgeGlideSubscriptionDataForAccount:(id)arg0 ;
-(id)accountForDSID:(id)arg0 ;
-(id)accountForHashedDSID:(id)arg0 ;
-(id)accountForUserIdentity:(id)arg0 ;
-(id)initWithPlaybackEngine:(id)arg0 ;
-(void)_buildAccountFromDelegatedIdentity:(id)arg0 completion:(id)arg1 ;
-(void)_buildAccountFromLocalIdentity:(id)arg0 completion:(id)arg1 ;
-(void)_enumerateIdentitiesWithCompletion:(id)arg0 ;
-(void)_homeUserSettingsChangeNotification:(id)arg0 ;
-(void)_subscriptionStatusChangedNotification:(id)arg0 ;
-(void)_updateAccounts;
-(void)_updateAccountsWithAttemptCount:(NSInteger)arg0 ;
-(void)_userIdentityStoreChangedNotification:(id)arg0 ;
-(void)performAfterLoadingAccounts:(id)arg0 ;
-(void)start;


@end


#endif