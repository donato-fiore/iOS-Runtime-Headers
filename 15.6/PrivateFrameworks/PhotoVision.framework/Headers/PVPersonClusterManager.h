// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef PVPERSONCLUSTERMANAGER_H
#define PVPERSONCLUSTERMANAGER_H

@class NSMutableDictionary, NSSet, NSString;
@protocol PVPhotoLibraryProtocol;

#import <Foundation/Foundation.h>

#import "PVVisionHelper.h"

@interface PVPersonClusterManager : NSObject <PVPhotoLibraryProtocol>

 {
    NSMutableDictionary *_representativeFaceObservationForPersonIdentifier;
    NSMutableDictionary *_distancesForPersonLocalIdentifier;
    NSMutableDictionary *_distancesInCommonMomentsForPersonLocalIdentifier;
}


@property (retain, nonatomic) NSSet *assetsToIgnore; // ivar: _assetsToIgnore
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) NSMutableDictionary *personClusters; // ivar: _personClusters
@property (retain, nonatomic) NSObject<PVPhotoLibraryProtocol> *photoLibrary; // ivar: _photoLibrary
@property (readonly) Class superclass;
@property (retain, nonatomic) PVVisionHelper *visionHelper; // ivar: _visionHelper


+(id)assetSortDescriptors;
+(id)faceGroupSortDescriptors;
+(id)faceSortDescriptors;
+(id)momentSortDescriptors;
+(id)nodeSortDescriptors;
+(id)peopleSortDescriptors;
+(id)personProcessingSortDescriptors;
// -(BOOL)pv_performChangesAndWait:(id)arg0 error:(unk)arg1  ;
-(NSInteger)assetsOverlapBetweenPerson:(id)arg0 andPerson:(id)arg1 ;
-(NSInteger)assetsOverlapBetweenPersonAssetIdentifiers:(id)arg0 andPersonAssetIdentifiers:(id)arg1 ;
-(NSUInteger)numberOfAssetsInCommonBetweenPerson:(id)arg0 andPerson:(id)arg1 ;
-(NSUInteger)numberOfAssetsInCommonBetweenPersonAssetIdentifiers:(id)arg0 andPersonAssetIdentifiers:(id)arg1 ;
-(NSUInteger)numberOfMomentsInCommonBetweenPerson:(id)arg0 andPerson:(id)arg1 ;
-(NSUInteger)pv_numberOfFacesWithFaceprints;
-(float)_adjustDistanceFactorForPerson:(id)arg0 andPerson:(id)arg1 forAgeType:(unsigned short)arg2 andAgeType:(unsigned short)arg3 ;
-(float)_minimiumDistanceRequiredForCommonAssetDistanceForAgeType:(unsigned short)arg0 ;
// -(float)distanceBetweenPerson:(id)arg0 andPerson:(id)arg1 useCommonMoments:(BOOL)arg2 minAgeType:(*unsigned short)arg3 updateBlock:(id)arg4 error:(unk)arg5  ;
// -(float)distanceWithOverlapCheckBetweenPerson:(id)arg0 andPerson:(id)arg1 useCommonMoments:(BOOL)arg2 minAgeType:(*unsigned short)arg3 updateBlock:(id)arg4 error:(unk)arg5  ;
-(float)pv_faceProcessingProgress;
-(id)_mapPersonClustersToFaceGroups:(id)arg0 ;
-(id)_mapPersonClustersToPersons:(id)arg0 ;
-(id)_representativeFaceObservationForPerson:(id)arg0 ageType:(*unsigned short)arg1 inAssetCollections:(id)arg2 ;
-(id)initWithPhotoLibrary:(id)arg0 ;
-(id)pv_fetchAssetsForFaceGroup:(id)arg0 ;
-(id)pv_fetchAssetsForFaceLocalIdentifiers:(id)arg0 ;
-(id)pv_fetchAssetsForPerson:(id)arg0 ;
-(id)pv_fetchAssetsInMoment:(id)arg0 ;
-(id)pv_fetchAssetsWithLocalIdentifiers:(id)arg0 ;
-(id)pv_fetchCandidatePersonsForPerson:(id)arg0 ;
-(id)pv_fetchFaceGroups;
-(id)pv_fetchFaceGroupsForPerson:(id)arg0 ;
-(id)pv_fetchFacesForFaceGroup:(id)arg0 ;
-(id)pv_fetchFacesForPerson:(id)arg0 ;
-(id)pv_fetchFacesForPerson:(id)arg0 inMoment:(id)arg1 ;
-(id)pv_fetchFacesForPersonLocalIdentifiers:(id)arg0 inMoment:(id)arg1 ;
-(id)pv_fetchFacesGroupedByAssetLocalIdentifierForAssets:(id)arg0 ;
-(id)pv_fetchFacesWithLocalIdentifiers:(id)arg0 ;
-(id)pv_fetchInvalidAssetIdentifiersForCommonComparison;
-(id)pv_fetchInvalidCandidatePersonsForPerson:(id)arg0 ;
-(id)pv_fetchMoments;
-(id)pv_fetchMomentsForAssetsWithLocalIdentifiers:(id)arg0 ;
-(id)pv_fetchMomentsForPerson:(id)arg0 ;
-(id)pv_fetchMomentsWithLocalIdentifiers:(id)arg0 ;
-(id)pv_fetchPersonsGroupedByAssetLocalIdentifierForAssets:(id)arg0 ;
-(id)pv_fetchPersonsInMoment:(id)arg0 ;
-(id)pv_fetchPersonsWithLocalIdentifiers:(id)arg0 ;
-(id)pv_fetchPersonsWithType:(NSUInteger)arg0 ;
-(id)pv_lastAssetDate;
-(id)pv_persistentStorageDirectoryURL;
-(id)representativeFaceObservationForFaces:(id)arg0 ageType:(*unsigned short)arg1 inPerson:(id)arg2 ;
-(id)representativeFaceObservationForPerson:(id)arg0 ageType:(*unsigned short)arg1 ;
-(unsigned short)minAgeTypeForFaceAgeType:(unsigned short)arg0 andFaceAgeType:(unsigned short)arg1 ;
-(void)clearCaches;
-(void)invalidateCachesForPerson:(id)arg0 ;
-(void)mergePersons:(id)arg0 withPerson:(id)arg1 ;


@end


#endif