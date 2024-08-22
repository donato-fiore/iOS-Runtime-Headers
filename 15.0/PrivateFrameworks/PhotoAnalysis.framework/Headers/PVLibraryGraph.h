// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef PVLIBRARYGRAPH_H
#define PVLIBRARYGRAPH_H

@class MAGraph, NSString, NSDictionary;
@protocol PVPhotoLibraryProtocol;



@interface PVLibraryGraph : MAGraph <PVPhotoLibraryProtocol>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (retain, nonatomic) NSDictionary *distanceIdentityDictionary; // ivar: _distanceIdentityDictionary
@property (retain, nonatomic) NSDictionary *faceprintDictionary; // ivar: _faceprintDictionary
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


+(id)defaultFacesDataSnapshotPath;
+(id)graphForFacesDataSnapshotAtPath:(id)arg0 ;
+(id)graphForLibrary:(id)arg0 ingestPeople:(BOOL)arg1 ;
+(id)graphWithName:(id)arg0 forFacesDataSnapshotAtPath:(id)arg1 ;
+(id)originGraphForFacesDataSnapshotAtPath:(id)arg0 ;
-(BOOL)_saveDictionary:(id)arg0 toURL:(id)arg1 error:(*id)arg2 ;
// -(BOOL)pv_performChangesAndWait:(id)arg0 error:(unk)arg1  ;
-(BOOL)saveFacesDataSnapshotAtPath:(id)arg0 error:(*id)arg1 ;
-(NSUInteger)getPeopleTypeForFaceGroupNode:(id)arg0 ;
-(NSUInteger)pv_numberOfFacesWithFaceprints;
-(float)pv_faceProcessingProgress;
-(id)_infoNode;
-(id)_insertAssetNodeForAsset:(id)arg0 ;
-(id)_insertFaceGroupNodeForFaceGroup:(id)arg0 ;
-(id)_insertFaceNodeForFace:(id)arg0 ;
-(id)_insertMomentNodeForMoment:(id)arg0 ;
-(id)_insertPeopleNodeForPerson:(id)arg0 withType:(NSUInteger)arg1 ;
-(id)init;
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


@end


#endif