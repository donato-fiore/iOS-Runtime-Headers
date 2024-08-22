// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef FCBUNDLESUBSCRIPTIONLOOKUPENTRYMANAGER_H
#define FCBUNDLESUBSCRIPTIONLOOKUPENTRYMANAGER_H

@class NFUnfairLock;

#import <Foundation/Foundation.h>

#import "FCBundleSubscriptionLookUpEntry.h"
#import "FCKeyValueStore.h"

@interface FCBundleSubscriptionLookUpEntryManager : NSObject

@property (retain, nonatomic) FCBundleSubscriptionLookUpEntry *_bundleSubscriptionLookUpEntry; // ivar: __bundleSubscriptionLookUpEntry
@property (readonly, nonatomic) FCBundleSubscriptionLookUpEntry *bundleSubscriptionLookUpEntry;
@property (retain, nonatomic) FCKeyValueStore *localStore; // ivar: _localStore
@property (readonly, nonatomic) NFUnfairLock *lock; // ivar: _lock


-(id)_bundleSubscriptionLookupEntryForPurchaseID:(id)arg0 ;
-(id)initWithLocalStore:(id)arg0 ;
-(void)addBundleChannelIDs:(id)arg0 bundleChannelIDsVersion:(id)arg1 purchaseID:(id)arg2 inTrialPeriod:(BOOL)arg3 isPurchaser:(BOOL)arg4 servicesBundlePurchaseID:(id)arg5 isAmplifyUser:(BOOL)arg6 ;
-(void)cleanupStaleExpiredEntry;
-(void)loadLocalCachesFromStore;
-(void)updateEntry:(id)arg0 ;


@end


#endif