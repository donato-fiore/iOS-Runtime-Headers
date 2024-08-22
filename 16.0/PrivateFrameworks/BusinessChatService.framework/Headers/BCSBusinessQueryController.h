// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef BCSBUSINESSQUERYCONTROLLER_H
#define BCSBUSINESSQUERYCONTROLLER_H

@class NSString;
@protocol BCSLinkQueryChopperDelegate, BCSXPCDaemonProtocol, BCSIdentityServiceProtocol, BCSIconControllerProtocol, BCSCacheClearing, BCSChatSuggestControllerProtocol, BCSItemResolving, BCSConfigResolving, BCSShardResolving, BCSFetchTrigger, BCSEntitlementVerifying, BCSQueryChopperProtocol, OS_dispatch_queue, BCSMetricFactoryProtocol, BCSShardCacheQueryable, BCSConfigCaching, BCSConfigCacheSkipping, BCSShardCacheSkipping, BCSURLPatternControllerProtocol, BCSHousekeeping;

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
    id<BCSFetchTrigger> *_chatSuggestMegashardFetchTrigger;
    id<BCSFetchTrigger> *_businessLinkMegashardFetchTrigger;
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


-(id)initWithChatSuggestMegashardFetchTrigger:(id)arg0 businessLinkMegashardFetchTrigger:(id)arg1 entitlementVerifier:(id)arg2 identityService:(id)arg3 chatSuggestController:(id)arg4 iconController:(id)arg5 cacheClearer:(id)arg6 shardCache:(id)arg7 configCache:(id)arg8 configCacheSkip:(id)arg9 shardCacheSkip:(id)arg10 chatSuggestConfigResolver:(id)arg11 linkConfigResolver:(id)arg12 chatSuggestShardResolver:(id)arg13 linkShardResolver:(id)arg14 chatSuggestItemResolver:(id)arg15 linkItemResolver:(id)arg16 queryChopper:(id)arg17 patternController:(id)arg18 metricFactory:(id)arg19 housekeeper:(id)arg20 ;
-(id)initWithChatSuggestMegashardFetcher:(id)arg0 businessLinkMegashardFetcher:(id)arg1 shardCache:(id)arg2 cacheManager:(id)arg3 chatSuggestRemoteFetcher:(id)arg4 businessLinkRemoteFetcher:(id)arg5 userDefaults:(id)arg6 metricFactory:(id)arg7 ;
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
-(void)prefetchMegashardsWithCompletion:(id)arg0 ;
-(void)warmCacheIfNecessaryForPhoneNumbers:(id)arg0 forClientBundleID:(id)arg1 ;


@end


#endif