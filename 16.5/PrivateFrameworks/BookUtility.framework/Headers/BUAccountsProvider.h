// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef BUACCOUNTSPROVIDER_H
#define BUACCOUNTSPROVIDER_H

@class NSMutableDictionary, ACAccount, NSNumber, NSString;
@protocol BUAccountsProviding, NSObject, OS_dispatch_queue;

#import <Foundation/Foundation.h>


@interface BUAccountsProvider : NSObject <BUAccountsProviding>

 {
    os_unfair_lock_s _observersLock;
    os_unfair_lock_s _storeAccountCacheLock;
    os_unfair_lock_s _appleAccountCacheLock;
    os_unfair_lock_s _tccObserverLock;
}


@property (retain, nonatomic) NSMutableDictionary *accountIdentifiers; // ivar: _accountIdentifiers
@property (retain, nonatomic) ACAccount *activeStoreAccount; // ivar: _activeStoreAccount
@property (retain, nonatomic) NSObject<NSObject> *appleAccountDidChangeNotificationRegisteredToken; // ivar: _appleAccountDidChangeNotificationRegisteredToken
@property (copy, nonatomic) NSNumber *cachedIsPrimaryAccountManagedAppleID; // ivar: _cachedIsPrimaryAccountManagedAppleID
@property (copy, nonatomic) NSNumber *cachedIsStoreAccountManagedAppleID; // ivar: _cachedIsStoreAccountManagedAppleID
@property (readonly, copy, nonatomic) NSString *currentStorefront;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) BOOL hasCloudKitEntitlement;
@property (readonly) NSUInteger hash;
@property (readonly, copy, nonatomic) NSString *iCloudAccountName;
@property (readonly, copy, nonatomic) NSString *iCloudIdentity;
@property (readonly, nonatomic) BOOL isGlobalICloudDriveSyncOptedIn;
@property (readonly, nonatomic) BOOL isPrimaryAccountManagedAppleID;
@property (readonly, nonatomic) BOOL isStoreAccountManagedAppleID;
@property (readonly, nonatomic) BOOL isUserSignedInToiCloud;
@property (readonly, nonatomic) BOOL isUserSignedInToiTunes;
@property (readonly, nonatomic) NSNumber *lastUsedStoreAccountID;
@property (retain, nonatomic) ACAccount *localStoreAccount; // ivar: _localStoreAccount
@property (retain, nonatomic) NSMutableDictionary *notifyBlocks; // ivar: _notifyBlocks
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *notifyQueue; // ivar: _notifyQueue
@property (retain, nonatomic) NSMutableDictionary *observerHashTables; // ivar: _observerHashTables
@property (retain, nonatomic) ACAccount *primaryAppleAccount; // ivar: _primaryAppleAccount
@property (retain, nonatomic) NSObject<NSObject> *storeAccountDidChangeNotificationRegisteredToken; // ivar: _storeAccountDidChangeNotificationRegisteredToken
@property (readonly) Class superclass;
@property (nonatomic) int tccObserverToken; // ivar: _tccObserverToken


+(id)sharedProvider;
-(BOOL)detectedUserSwitchWithId:(id)arg0 outSignedIn:(*BOOL)arg1 outSignedOut:(*BOOL)arg2 outAccountNumberChanged:(*BOOL)arg3 ;
-(NSInteger)_addObserver:(id)arg0 forAccountType:(NSUInteger)arg1 ;
-(NSInteger)_observerCountForAccountType:(NSUInteger)arg0 ;
-(NSInteger)_removeObserver:(id)arg0 forAccountType:(NSUInteger)arg1 ;
-(NSUInteger)_singleAccountTypeForNotification:(id)arg0 ;
-(id)_observersForAccountType:(NSUInteger)arg0 ;
-(id)init;
-(void)_didReceiveNotification:(id)arg0 ;
-(void)_registerNotificationForAccountTypeIfNeeded:(NSUInteger)arg0 ;
-(void)_unregisterNotificationForAccountType:(NSUInteger)arg0 ;
-(void)addObserver:(id)arg0 accountTypes:(NSUInteger)arg1 ;
-(void)clearLastUsedStoreAccountID;
-(void)dealloc;
-(void)nq_resetAppleAccountCachedValues;
-(void)nq_resetStoreAccountCachedValues;
-(void)nq_setupNotifyBlockForAccountType:(NSUInteger)arg0 currentAccountIdentifier:(id)arg1 ;
-(void)nq_teardownNotifyBlockForAccountType:(NSUInteger)arg0 ;
-(void)nq_updateAccountIdentifierAndNotifyObserversForAccountType:(NSUInteger)arg0 ;
-(void)nq_updateiCloudAccountIdentifierAndNotifyObservers;
-(void)nq_updateiTunesAccountIdentifierAndNotifyObservers;
-(void)observeTCCAccessChangeNotificationIfNeeded;
-(void)removeObserver:(id)arg0 accountTypes:(NSUInteger)arg1 ;
-(void)updateLastUsedStoreAccountID;


@end


#endif