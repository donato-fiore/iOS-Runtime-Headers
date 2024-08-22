// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SFDEVICEASSETMANAGER_H
#define SFDEVICEASSETMANAGER_H

@class MAAsset, CUReachabilityMonitor, NSDictionary, NSURL, NSMutableDictionary, NSString;
@protocol OS_dispatch_queue;

#import <Foundation/Foundation.h>


@interface SFDeviceAssetManager : NSObject {
    NSObject<OS_dispatch_queue> *_workQueue;
    BOOL _activateCalled;
    BOOL _invalidateCalled;
    BOOL _invalidateDone;
    MAAsset *_deviceAssetManagement;
    CUReachabilityMonitor *_reachabilityMonitor;
    NSDictionary *_productTypesMappingTable;
    NSDictionary *_cachedProductMappingsTable;
    NSURL *_cacheDirectory;
    NSMutableDictionary *_cachedQueryPaths;
}


@property (retain, nonatomic) NSObject<OS_dispatch_queue> *dispatchQueue; // ivar: _dispatchQueue
@property (retain, nonatomic) NSString *networkStatus; // ivar: _networkStatus
@property (nonatomic) BOOL useProcessLocalCache; // ivar: _useProcessLocalCache


-(?)onqueue_downloadAsset:(?)arg0 ucat:(?)arg1 queryLogStringwithCompletionHandler;
-(?)onqueue_findAssetBundleForAssetQuery:(?)arg0 ucat:(?)arg1 queryType:(?)arg2 fallback:(?)arg3 retryAttemptwithCompletionHandler;
-(BOOL)canUseMobileAssetSPI;
-(BOOL)pathInLocalCache:(id)arg0 ;
-(id)cacheDirectory;
-(id)hardcodedMappedProducts;
-(id)init;
-(id)localCacheWithFileName:(id)arg0 ;
-(id)locallyCachedProductMappings;
-(id)locallyCachedQueryResults;
-(id)onqueue_assetMappedProductTypeForProductType:(id)arg0 ;
-(id)onqueue_mappedProductTypeForProductType:(id)arg0 ;
-(id)onqueue_sharingManagementAsset;
-(void)activate;
-(void)addQueryResultToLocalCache:(id)arg0 url:(id)arg1 isFallback:(BOOL)arg2 ;
-(void)clearQueryResultFromLocalCache:(id)arg0 ;
-(void)getAssetBundleForDeviceQuery:(id)arg0 withRequestConfiguration:(id)arg1 ;
-(void)invalidate;
-(void)logNetworkStatus;
-(void)mappedProductTypeForProductType:(id)arg0 completionHandler:(id)arg1 ;
-(void)onqueue_activate;
-(void)onqueue_executeNextMAQueryForTask:(id)arg0 ;
-(void)onqueue_getAssetBundleForDeviceQuery:(id)arg0 withRequestConfiguration:(id)arg1 ;
-(void)onqueue_getCachedAssetBundleForTask:(id)arg0 ;
-(void)onqueue_invalidate;
-(void)onqueue_manuallyFindFallbackAssetBundleMatchingQuery:(id)arg0 withCompletionHandler:(id)arg1 ;
-(void)onqueue_purgeAssetsMatchingQuery:(id)arg0 ;
-(void)onqueue_updateMetaDataWithCompletionHandler:(id)arg0 ;
-(void)onqueue_updateSharingManagementAssetIfNecessary;
-(void)onqueue_validateProductTypeInQuery:(id)arg0 ;
-(void)onqueue_variantsMatchingQuery:(id)arg0 completionHandler:(id)arg1 ;
-(void)purgeAssetsMatchingQuery:(id)arg0 ;
-(void)storeEntries:(id)arg0 inLocalCacheWithFileName:(id)arg1 ;
-(void)storeProductMappingsInLocalCache:(id)arg0 ;
-(void)variantsMatchingQuery:(id)arg0 completionHandler:(id)arg1 ;


@end


#endif