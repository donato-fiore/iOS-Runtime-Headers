// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef BCSBUSINESSQUERYCONTROLLER_H
#define BCSBUSINESSQUERYCONTROLLER_H

@class NSString;
@protocol BCSLinkQueryChopperDelegate, BCSXPCDaemonProtocol, BCSIdentityServiceProtocol, BCSIconControllerProtocol, BCSCacheClearing, BCSChatSuggestControllerProtocol, BCSItemResolving, BCSConfigResolving, BCSShardResolving, BCSPrefetchTrigger, BCSEntitlementVerifying, BCSQueryChopperProtocol, OS_dispatch_queue, BCSMetricFactoryProtocol, BCSShardCacheQueryable, BCSConfigCaching, BCSConfigCacheSkipping, BCSShardCacheSkipping, BCSURLPatternControllerProtocol, BCSHousekeeping;

#import <Foundation/Foundation.h>


@interface BCSBusinessQueryController : NSObject <BCSLinkQueryChopperDelegate, BCSXPCDaemonProtocol>

 {
    id<BCSIdentityServiceProtocol> *_identityService;
    id<BCSIconControllerProtocol> *_iconController;
    id<BCSCacheClearing> *_cacheClearer;
    id<BCSChatSuggestControllerProtocol> *_chatSuggestController;
    id<BCSItemResolving> *_chatSuggestItemResolver;
    id<BCSConfigResolving> *_chatSuggestConfigResolver;
    id<BCSShardResolving> *_chatSuggestShardResolver;
    id<BCSItemResolving> *_linkItemResolver;
    id<BCSConfigResolving> *_linkConfigResolver;
    id<BCSShardResolving> *_linkShardResolver;
    id<BCSPrefetchTrigger> *_chatSuggestMegashardPrefetchTrigger;
    id<BCSPrefetchTrigger> *_businessLinksMegashardPrefetchTrigger;
    id<BCSPrefetchTrigger> *_prefetchConfigTrigger;
    id<BCSEntitlementVerifying> *_entitlementVerifier;
    id<BCSQueryChopperProtocol> *_queryChopper;
    NSObject<OS_dispatch_queue> *_serialDispatchQueue;
    id<BCSMetricFactoryProtocol> *_metricFactory;
    id<BCSShardCacheQueryable> *_shardCache;
    id<BCSConfigCaching> *_configCache;
    id<BCSConfigCacheSkipping> *_configCacheSkip;
    id<BCSShardCacheSkipping> *_shardCacheSkip;
    id<BCSURLPatternControllerProtocol> *_patternController;
    id<BCSHousekeeping> *_housekeeper;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(id)initWithChatSuggestMegashardPrefetchTrigger:(id)arg0 businessLinksMegashardPrefetchTrigger:(id)arg1 prefetchConfigTrigger:(id)arg2 entitlementVerifier:(id)arg3 identityService:(id)arg4 chatSuggestController:(id)arg5 iconController:(id)arg6 cacheClearer:(id)arg7 shardCache:(id)arg8 configCache:(id)arg9 configCacheSkip:(id)arg10 shardCacheSkip:(id)arg11 chatSuggestConfigResolver:(id)arg12 linkConfigResolver:(id)arg13 chatSuggestShardResolver:(id)arg14 linkShardResolver:(id)arg15 chatSuggestItemResolver:(id)arg16 linkItemResolver:(id)arg17 queryChopper:(id)arg18 patternController:(id)arg19 metricFactory:(id)arg20 housekeeper:(id)arg21 ;
-(id)initWithConfigPrefetcher:(id)arg0 chatSuggestMegashardPrefetcher:(id)arg1 businesLinksMegashardPrefetcher:(id)arg2 shardCache:(id)arg3 cacheManager:(id)arg4 chatSuggestRemoteFetcher:(id)arg5 businessLinkRemoteFetcher:(id)arg6 userDefaults:(id)arg7 metricFactory:(id)arg8 ;
-(void)_deleteInMemoryCache;
-(void)_isBusinessRegisteredWithItemIdentifier:(id)arg0 forClientBundleID:(id)arg1 completion:(id)arg2 ;
-(void)_itemWithIdentifier:(id)arg0 forClientBundleID:(id)arg1 skipFilterCheck:(BOOL)arg2 completion:(id)arg3 ;
-(void)clearCachesForLinkItemsAssociatedWithBundleID:(id)arg0 completion:(id)arg1 ;
-(void)clearCachesForType:(NSInteger)arg0 completion:(id)arg1 ;
-(void)clearExpiredCachesForType:(NSInteger)arg0 completion:(id)arg1 ;
-(void)fetchBusinessItemWithDetailsForPhoneNumber:(id)arg0 forClientBundleID:(id)arg1 completion:(id)arg2 ;
-(void)fetchBusinessItemWithPhoneNumber:(id)arg0 forClientBundleID:(id)arg1 completion:(id)arg2 ;
-(void)fetchIsBusinessPhoneNumber:(id)arg0 forClientBundleID:(id)arg1 completion:(id)arg2 ;
-(void)fetchLinkItemModelWithHash:(id)arg0 forClientBundleID:(id)arg1 completion:(id)arg2 ;
-(void)fetchLinkItemModelWithURL:(id)arg0 chopURL:(BOOL)arg1 forClientBundleID:(id)arg2 completion:(id)arg3 ;
-(void)fetchSquareIconDataForBusinessItem:(id)arg0 forClientBundleID:(id)arg1 completion:(id)arg2 ;
-(void)isBusinessRegisteredForURL:(id)arg0 chopURL:(BOOL)arg1 forClientBundleID:(id)arg2 completion:(id)arg3 ;
-(void)prefetchBloomFilterAndConfigsWithCompletion:(id)arg0 ;
-(void)prefetchConfigsWithCompletion:(id)arg0 ;
-(void)warmCacheIfNecessaryForPhoneNumbers:(id)arg0 forClientBundleID:(id)arg1 ;


@end


#endif