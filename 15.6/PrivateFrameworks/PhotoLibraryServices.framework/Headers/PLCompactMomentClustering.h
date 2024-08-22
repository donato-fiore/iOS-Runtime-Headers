// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef PLCOMPACTMOMENTCLUSTERING_H
#define PLCOMPACTMOMENTCLUSTERING_H

@class NSArray;

#import <Foundation/Foundation.h>


@interface PLCompactMomentClustering : NSObject {
    NSArray *_locationsOfInterest;
    BOOL _routineIsAvailable;
}




-(id)_assetClustersFromDataClusters:(id)arg0 ;
-(id)_clusterAssetsWithUnusableLocation:(id)arg0 ;
-(id)_clusterAssetsWithUsableLocation:(id)arg0 ;
-(id)_mergeAssetClustersWithLocation:(id)arg0 withAssetClustersWithoutLocation:(id)arg1 ;
-(id)_processedLocationTypeByAssetUUIDFromAssets:(id)arg0 ;
-(id)_runDBSCANClusteringWithAssets:(id)arg0 ;
-(id)_shareStateByAssetUUIDFromAssets:(id)arg0 momentHasMixedOwnership:(*BOOL)arg1 ;
-(id)assetsByLocationTypeFromAssets:(id)arg0 locationsOfInterest:(id)arg1 ;
-(id)createAssetClustersForAssetsInDay:(id)arg0 ;
-(id)initWithDataManager:(id)arg0 ;
-(id)newAssetClusterFromAssetsSortedByDate:(id)arg0 ;
-(void)dealloc;


@end


#endif