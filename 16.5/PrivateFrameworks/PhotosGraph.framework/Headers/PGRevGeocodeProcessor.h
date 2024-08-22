// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PGREVGEOCODEPROCESSOR_H
#define PGREVGEOCODEPROCESSOR_H

@class NSArray, PHPhotoLibrary;
@protocol OS_dispatch_queue, OS_os_log;

#import <Foundation/Foundation.h>


@interface PGRevGeocodeProcessor : NSObject

@property (retain, nonatomic) NSObject<OS_dispatch_queue> *applicationDataQueue; // ivar: _applicationDataQueue
@property (retain, nonatomic) NSArray *homeLocations; // ivar: _homeLocations
@property (retain, nonatomic) NSObject<OS_os_log> *loggingConnection; // ivar: _loggingConnection
@property (readonly, nonatomic) CGFloat numberOfAssetClusters100mPlusFromCenter; // ivar: _numberOfAssetClusters100mPlusFromCenter
@property (readonly, nonatomic) NSUInteger numberOfAssetClustersRevGeocoded; // ivar: _numberOfAssetClustersRevGeocoded
@property (readonly, nonatomic) CGFloat numberOfAssetClustersWithin100mOfCenter; // ivar: _numberOfAssetClustersWithin100mOfCenter
@property (readonly, nonatomic) CGFloat numberOfAssetClustersWithin10mOfCenter; // ivar: _numberOfAssetClustersWithin10mOfCenter
@property (readonly, nonatomic) CGFloat numberOfAssetClustersWithin20mOfCenter; // ivar: _numberOfAssetClustersWithin20mOfCenter
@property (readonly, nonatomic) CGFloat numberOfAssetClustersWithin50mOfCenter; // ivar: _numberOfAssetClustersWithin50mOfCenter
@property (readonly, nonatomic) NSUInteger numberOfMomentsRevGeocoded; // ivar: _numberOfMomentsRevGeocoded
@property (weak, nonatomic) PHPhotoLibrary *photoLibrary; // ivar: _photoLibrary
@property (readonly, nonatomic) CGFloat sumNumberOfAssetClustersPerMoment; // ivar: _sumNumberOfAssetClustersPerMoment
@property (readonly, nonatomic) CGFloat sumNumberOfAssetsPerCluster; // ivar: _sumNumberOfAssetsPerCluster
@property (readonly, nonatomic) CGFloat sumSquareNumberOfAssetClustersPerMoment; // ivar: _sumSquareNumberOfAssetClustersPerMoment
@property (readonly, nonatomic) CGFloat sumSquareNumberOfAssetsPerCluster; // ivar: _sumSquareNumberOfAssetsPerCluster


+(id)homeLocationsWithManager:(id)arg0 ;
+(id)momentsRequiringRevGeocodingWithUUIDs:(id)arg0 inPhotoLibrary:(id)arg1 defaultToAllAssets:(BOOL)arg2 loggingConnection:(id)arg3 ;
+(id)reverseGeoFetchOptionsForPhotoLibrary:(id)arg0 ;
-(BOOL)_populateCacheWithRegions:(id)arg0 withProgressBlock:(id)arg1 ;
-(BOOL)_regionIsHome:(id)arg0 ;
-(BOOL)_revGeocodeAssetClusters:(id)arg0 progressBlock:(id)arg1 ;
-(BOOL)_setRevGeoLocationData:(id)arg0 onAssets:(id)arg1 ;
-(BOOL)revGeocodeAssets:(id)arg0 progressBlock:(id)arg1 ;
-(BOOL)revGeocodeMoments:(id)arg0 progressBlock:(id)arg1 ;
-(id)_clusterAssets:(id)arg0 assetsWithInvalidLocationInMoment:(*id)arg1 ;
-(id)_clusterAssetsInMoment:(id)arg0 assetsWithInvalidLocationInMoment:(*id)arg1 ;
-(id)_revGeoLocationDataForRegion:(id)arg0 ;
-(id)initWithPhotoLibrary:(id)arg0 homeLocations:(id)arg1 loggingConnection:(id)arg2 ;
-(void)_processMetricsOfAssetClustersInMoment:(id)arg0 ;
-(void)_resetMetrics;
-(void)_updateGeoInfoForAssetClusters:(id)arg0 progressBlock:(id)arg1 ;


@end


#endif