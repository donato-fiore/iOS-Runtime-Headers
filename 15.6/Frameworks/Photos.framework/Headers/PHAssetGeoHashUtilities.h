// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef PHASSETGEOHASHUTILITIES_H
#define PHASSETGEOHASHUTILITIES_H


#import <Foundation/Foundation.h>


@interface PHAssetGeoHashUtilities : NSObject



+(BOOL)_isCrowdSourcedThemesFeatureFlagEnabled;
+(NSUInteger)_indexForPOIGeoHash:(id)arg0 geoHashKeySize:(NSUInteger)arg1 ;
+(NSUInteger)_randomIndexFromCount:(NSUInteger)arg0 ;
+(NSUInteger)_randomSceneIndexForAsset:(id)arg0 sceneLabelMapping:(id)arg1 orderedRemappedSceneLabels:(id)arg2 ;
+(id)_featureVectorDataWithOneHotAtIndex:(NSUInteger)arg0 featureVectorSize:(NSUInteger)arg1 ;
+(id)_newSystemPhotoLibrary;
+(id)_poiGeoHashForAsset:(id)arg0 geoHashSize:(NSUInteger)arg1 ;
+(id)_randomPublishedUUIDsFromPublishedUUIDs:(id)arg0 sentUUIDs:(id)arg1 ;
+(id)_sceneLabelsForSceneClassifications:(id)arg0 ;
+(id)assetUUIDsFromBiomeStream;
+(id)assetUUIDsFromBiomeStreamWithPhotoLibrary:(id)arg0 ;
+(id)featureVectorByGeoHashForAssetUUID:(id)arg0 geoHashSize:(id)arg1 geoHashKeySize:(id)arg2 sceneLabelMapping:(id)arg3 dryRun:(id)arg4 ;
+(id)featureVectorByGeoHashForAssetUUID:(id)arg0 geoHashSize:(id)arg1 geoHashKeySize:(id)arg2 sceneLabelMapping:(id)arg3 dryRun:(id)arg4 photoLibrary:(id)arg5 ;
+(id)featureVectorByGeoHashForAssetUUIDs:(id)arg0 geoHashSize:(id)arg1 geoHashKeySize:(id)arg2 sceneLabelMapping:(id)arg3 dryRun:(id)arg4 ;
+(id)featureVectorByGeoHashForAssetUUIDs:(id)arg0 geoHashSize:(id)arg1 geoHashKeySize:(id)arg2 sceneLabelMapping:(id)arg3 dryRun:(id)arg4 photoLibrary:(id)arg5 ;
+(id)mockReturnDataWithAssetUUIDs:(id)arg0 geoHashKeySize:(id)arg1 ;
+(id)sceneLabelExclusionList;


@end


#endif