// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PGGRAPHASSETREVGEOCODEENRICHMENTPROCESSOR_H
#define PGGRAPHASSETREVGEOCODEENRICHMENTPROCESSOR_H

@class NSString, NSArray;
@protocol PGGraphDataModelEnrichmentProcessor;

#import <Foundation/Foundation.h>


@interface PGGraphAssetRevGeocodeEnrichmentProcessor : NSObject <PGGraphDataModelEnrichmentProcessor>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) NSArray *homeLocations; // ivar: _homeLocations
@property (readonly, nonatomic) CGFloat numberOfAssetClusters100mPlusFromCenter; // ivar: _numberOfAssetClusters100mPlusFromCenter
@property (readonly, nonatomic) NSUInteger numberOfAssetClustersRevGeocoded; // ivar: _numberOfAssetClustersRevGeocoded
@property (readonly, nonatomic) CGFloat numberOfAssetClustersWithin100mOfCenter; // ivar: _numberOfAssetClustersWithin100mOfCenter
@property (readonly, nonatomic) CGFloat numberOfAssetClustersWithin10mOfCenter; // ivar: _numberOfAssetClustersWithin10mOfCenter
@property (readonly, nonatomic) CGFloat numberOfAssetClustersWithin20mOfCenter; // ivar: _numberOfAssetClustersWithin20mOfCenter
@property (readonly, nonatomic) CGFloat numberOfAssetClustersWithin50mOfCenter; // ivar: _numberOfAssetClustersWithin50mOfCenter
@property (readonly, nonatomic) NSUInteger numberOfMomentsRevGeocoded; // ivar: _numberOfMomentsRevGeocoded
@property (readonly, nonatomic) CGFloat sumNumberOfAssetClustersPerMoment; // ivar: _sumNumberOfAssetClustersPerMoment
@property (readonly, nonatomic) CGFloat sumNumberOfAssetsPerCluster; // ivar: _sumNumberOfAssetsPerCluster
@property (readonly, nonatomic) CGFloat sumSquareNumberOfAssetClustersPerMoment; // ivar: _sumSquareNumberOfAssetClustersPerMoment
@property (readonly, nonatomic) CGFloat sumSquareNumberOfAssetsPerCluster; // ivar: _sumSquareNumberOfAssetsPerCluster
@property (readonly) Class superclass;


+(BOOL)supportsBackgroundJob;
+(CGFloat)backgroundJobTimeout;
+(id)_homeLocationsWithManager:(id)arg0 ;
+(id)backgroundJobName;
-(BOOL)_allowReverseGeocodingWithUpdateType:(NSInteger)arg0 ;
-(BOOL)_populateCacheWithRegions:(id)arg0 manager:(id)arg1 withProgressBlock:(id)arg2 ;
-(BOOL)_regionIsHome:(id)arg0 ;
-(BOOL)_revGeocodeAssetClusters:(id)arg0 manager:(id)arg1 progressBlock:(id)arg2 ;
-(BOOL)_setRevGeoLocationData:(id)arg0 onAssets:(id)arg1 withPhotoLibrary:(id)arg2 ;
-(BOOL)revGeoProviderDidChangeForGraphApplicationDataURL:(id)arg0 ;
-(BOOL)revGeocodeAssets:(id)arg0 manager:(id)arg1 progressBlock:(id)arg2 ;
-(id)_clusterAssets:(id)arg0 assetsWithInvalidLocationInMoment:(*id)arg1 ;
-(id)_clusterAssetsInMoment:(id)arg0 assetsWithInvalidLocationInMoment:(*id)arg1 withPhotoLibrary:(id)arg2 ;
-(id)_momentsRequiringRevGeocodingWithIdentifiers:(id)arg0 inPhotoLibrary:(id)arg1 defaultToAllAssets:(BOOL)arg2 manager:(id)arg3 ;
-(id)_revGeoLocationDataForRegion:(id)arg0 manager:(id)arg1 ;
-(id)init;
-(void)_processMetricsOfAssetClustersInMoment:(id)arg0 ;
-(void)_updateGeoInfoForAssetClusters:(id)arg0 manager:(id)arg1 progressBlock:(id)arg2 ;
-(void)enrichDataModelWithManager:(id)arg0 curationContext:(id)arg1 graphUpdateInventory:(id)arg2 progressBlock:(id)arg3 ;
-(void)invalidateReverseLocationDataForRevGeoProviderChangeUsingManager:(id)arg0 progressBlock:(id)arg1 ;
-(void)sendMetricsForGeocodeProcesssor:(id)arg0 toAnalytics:(id)arg1 progressBlock:(id)arg2 ;
-(void)setCurrentGeoProviderInGraphApplicationDataURL:(id)arg0 ;


@end


#endif