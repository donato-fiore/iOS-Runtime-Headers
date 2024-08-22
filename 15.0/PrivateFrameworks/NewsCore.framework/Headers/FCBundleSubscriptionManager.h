// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef FCBUNDLESUBSCRIPTIONMANAGER_H
#define FCBUNDLESUBSCRIPTIONMANAGER_H

@class NSHashTable, NFMutexLock, NSString;
@protocol FCAppActivityObserving, FCBundleChannelProviderDelegate, FCBundleSubscriptionManagerType, FCBundleEntitlementsProviderType, FCBundleChannelProviderType, FCCoreConfigurationManager, FCEntitlementsOverrideProviderType;

#import <Foundation/Foundation.h>

#import "FCPurchaseLookupRecordSource.h"
#import "FCKeyValueStore.h"
#import "FCBundleSubscriptionLookUpEntryManager.h"
#import "FCBundleSubscription.h"

@interface FCBundleSubscriptionManager : NSObject <FCAppActivityObserving, FCBundleChannelProviderDelegate, FCBundleSubscriptionManagerType>

 {
    BOOL _hasRunEntitlementOnce;
    id<FCBundleEntitlementsProviderType> *_bundleEntitlementsProvider;
    FCPurchaseLookupRecordSource *_purchaseLookupRecordSource;
    FCKeyValueStore *_localStore;
    FCBundleSubscriptionLookUpEntryManager *_bundleSubscriptionLookupEntryManager;
    NSHashTable *_observers;
    NFMutexLock *_accessLock;
    id<FCBundleChannelProviderType> *_bundleChannelProvider;
    id<FCCoreConfigurationManager> *_configurationManager;
}


@property (readonly, copy, nonatomic) FCBundleSubscription *bundleSubscription;
@property (retain, nonatomic) FCBundleSubscription *cachedSubscription; // ivar: _cachedSubscription
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (retain, nonatomic) NSObject<FCEntitlementsOverrideProviderType> *entitlementsOverrideProvider;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(id)init;
-(id)initWithPrivateDataDirectory:(id)arg0 configurationManager:(id)arg1 purchaseLookupRecordSource:(id)arg2 appActivityMonitor:(id)arg3 entitlementsProvider:(id)arg4 ;
-(void)activityObservingApplicationDidEnterBackground;
-(void)addObserver:(id)arg0 ;
-(void)bundleChannelProvider:(id)arg0 bundleChannelIDsDidChangeWithChannelIDs:(id)arg1 version:(id)arg2 ;
-(void)clearBundleSubscription;
-(void)forceExpireBundleSubscriptionBasedOnInternalSettings;
-(void)prepareForUseWithCompletion:(id)arg0 ;
-(void)prewarmBundleTagIDsWithPurchaseID:(id)arg0 ;
-(void)refreshBundleSubscriptionWithCachePolicy:(NSUInteger)arg0 completion:(id)arg1 ;
-(void)removeObserver:(id)arg0 ;
-(void)renewalNoticeShownWithPurchaseID:(id)arg0 ;
-(void)silentExpireBundleSubscription;


@end


#endif