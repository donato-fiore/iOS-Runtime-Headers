// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef PKMOBILEASSETMANAGER_H
#define PKMOBILEASSETMANAGER_H

@class NSBundle, NSString;
@protocol PDScheduledActivityClient, OS_dispatch_queue;

#import <Foundation/Foundation.h>

#import "PKDynamicAssetIndex.h"

@interface PKMobileAssetManager : NSObject <PDScheduledActivityClient>

 {
    NSObject<OS_dispatch_queue> *_queue;
    PKDynamicAssetIndex *_dynamicAssetsIndex;
    NSBundle *_dynamicStringsBundle;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


+(id)sharedInstance;
-(id)_cachedAssetWithQuery:(id)arg0 ;
-(id)_compatibleVersionsWithMinimumVersion:(NSUInteger)arg0 maximumVersion:(NSUInteger)arg1 ;
-(id)_downloadOptionsWithUserInitiation:(BOOL)arg0 timeout:(NSInteger)arg1 ;
-(id)_queryForCityCodeStationProvider:(id)arg0 ;
-(id)_queryForDynamicAssetsWithParameters:(id)arg0 ;
-(id)_queryForMarketNotificationIdentifier:(id)arg0 ;
-(id)cachedDynamicAssetWithIdentifier:(id)arg0 parameters:(id)arg1 ;
-(id)cachedDynamicAssetsIndex;
-(id)cachedDynamicStringWithIdentifier:(id)arg0 ;
-(id)init;
-(id)sortDescriptorsForLatestContentVersion;
-(id)sortDescriptorsForMarkets;
-(void)_downloadAllPrefetchableAssets:(id)arg0 ;
-(void)_downloadAsset:(id)arg0 userInitiated:(BOOL)arg1 timeout:(NSInteger)arg2 completion:(id)arg3 ;
-(void)_downloadAssetCatalogIfExpired:(NSInteger)arg0 completion:(id)arg1 ;
-(void)_purgeAssets:(id)arg0 ;
-(void)_retrieveAssetWithQuery:(id)arg0 maxCompatibleVersion:(NSUInteger)arg1 userInitiated:(BOOL)arg2 sortDescriptors:(id)arg3 timeout:(NSUInteger)arg4 catalogExpirationDays:(NSUInteger)arg5 completion:(id)arg6 ;
-(void)dynamicAssetWithIdentifier:(id)arg0 parameters:(id)arg1 completion:(id)arg2 ;
-(void)dynamicAssetsIndex:(id)arg0 ;
-(void)dynamicStringWithIdentifier:(id)arg0 completion:(id)arg1 ;
-(void)fetchCityStationProviderAssetForBaseProvider:(id)arg0 completionHandler:(id)arg1 ;
-(void)fetchMarketNotificationAssetsForIdentifier:(id)arg0 userInitiated:(BOOL)arg1 completionHandler:(id)arg2 ;
-(void)fetchRPIdentifierMappingUserInitiated:(BOOL)arg0 localOnly:(BOOL)arg1 completionHandler:(id)arg2 ;
-(void)performScheduledActivityWithIdentifier:(id)arg0 activityCriteria:(id)arg1 ;
-(void)prefetchDynamicAssets:(id)arg0 ;
-(void)schedulePrefetchDynamicAssetsWithInterval:(CGFloat)arg0 ;


@end


#endif