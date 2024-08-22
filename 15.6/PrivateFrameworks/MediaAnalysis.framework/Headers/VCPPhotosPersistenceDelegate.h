// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef VCPPHOTOSPERSISTENCEDELEGATE_H
#define VCPPHOTOSPERSISTENCEDELEGATE_H

@class PHPhotoLibrary, NSString;
@protocol PVPersonPromoterDelegate;

#import <Foundation/Foundation.h>


@interface VCPPhotosPersistenceDelegate : NSObject <PVPersonPromoterDelegate>

 {
    PHPhotoLibrary *_photoLibrary;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (nonatomic) BOOL personBuilderMergeCandidatesDisabled; // ivar: _personBuilderMergeCandidatesDisabled
@property (readonly) Class superclass;


+(BOOL)_includeTorsoOnlyFaces;
+(id)newAllFacesFetchOptionsWithPhotoLibrary:(id)arg0 ;
+(id)newAllPersonsFetchOptionsWithPhotoLibrary:(id)arg0 ;
+(id)newAllPersonsWithAtLeastOneFaceFetchOptionsWithPhotoLibrary:(id)arg0 ;
+(id)newAssetFetchOptionsWithPhotoLibrary:(id)arg0 ;
+(id)newFacesDeterministicSortDescriptors;
+(id)newVerifiedPersonsFetchOptionsWithPhotoLibrary:(id)arg0 ;
+(id)newVerifiedPersonsWithAtLeastOneFaceFetchOptionsWithPhotoLibrary:(id)arg0 ;
+(id)newVisibleFacesFetchOptionsWithPhotoLibrary:(id)arg0 ;
+(void)enumerateFetchResult:(id)arg0 withBatchSize:(NSUInteger)arg1 handler:(id)arg2 ;
// -(BOOL)_cleanupMergeCandidatesForVerifiedPersons:(id)arg0 minimumFaceGroupSize:(NSUInteger)arg1 cancelOrExtendTimeoutBlock:(id)arg2 error:(unk)arg3  ;
// -(BOOL)_completePersonBuildingWithPersonsToUpdate:(id)arg0 facesToRemoveByPerson:(id)arg1 facesToAddByPerson:(id)arg2 updateFaceGroup:(id)arg3 newMergeCandidatePairs:(id)arg4 newInvalidMergeCandidatePairs:(id)arg5 faceInFaceGroupByCSN:(id)arg6 personCache:(id)arg7 keyFaceUpdateBlock:(id)arg8 cancelOrExtendTimeoutBlock:(unk)arg9 context:(id)arg10 error:(unk)arg11  ;
// -(BOOL)_resetFaceClusterSequenceNumberOfFacesInFetchResult:(id)arg0 inPhotoLibrary:(id)arg1 cancelOrExtendTimeoutBlock:(id)arg2 error:(unk)arg3  ;
// -(BOOL)_ungroupFaceClusterSequenceNumbers:(id)arg0 cancelOrExtendTimeoutBlock:(id)arg1 error:(unk)arg2  ;
// -(BOOL)cleanupGroupedFacesWithClusterSequenceNumberSetToZero:(id)arg0 error:(unk)arg1  ;
-(BOOL)cleanupGroupedFacesWithClusterSequenceNumberSetToZeroWithCanceler:(id)arg0 error:(*id)arg1 ;
// -(BOOL)cleanupMergeCandidatesWithMinimumFaceGroupSize:(NSUInteger)arg0 cancelOrExtendTimeoutBlock:(id)arg1 error:(unk)arg2  ;
// -(BOOL)cleanupUngroupedFacesWithNonZeroClusterSequenceNumbers:(id)arg0 error:(unk)arg1  ;
-(BOOL)cleanupUngroupedFacesWithNonZeroClusterSequenceNumbersWithCanceler:(id)arg0 error:(*id)arg1 ;
-(BOOL)clearDirtyStateOnFaceCrops:(id)arg0 error:(*id)arg1 ;
-(BOOL)deleteEmptyGroupsAndReturnError:(*id)arg0 ;
-(BOOL)needsPersonBuilding;
// -(BOOL)persistChangesToAlgorithmicFaceGroups:(id)arg0 faceCSNByLocalIdentifierForNewlyClusteredFaces:(id)arg1 faceCSNsOfUnclusteredFaces:(id)arg2 localIdentifiersOfUnclusteredFaces:(id)arg3 persistenceCompletionBlock:(id)arg4 cancelOrExtendTimeoutBlock:(unk)arg5 error:(id)arg6  ;
// -(BOOL)persistChangesToAlgorithmicFaceGroups:(id)arg0 faceCSNByLocalIdentifierForNewlyClusteredFaces:(id)arg1 faceCSNsOfUnclusteredFaces:(id)arg2 localIdentifiersOfUnclusteredFaces:(id)arg3 persistenceCompletionBlock:(id)arg4 canceler:(unk)arg5 error:(id)arg6  ;
-(BOOL)persistFaces:(id)arg0 deleteFaces:(id)arg1 forAsset:(id)arg2 persistedFaces:(*id)arg3 error:(*id)arg4 ;
-(BOOL)persistGeneratedFaceCrops:(id)arg0 error:(*id)arg1 ;
-(BOOL)recordNeedToPersonBuildOnFaceGroupContainingFace:(id)arg0 error:(*id)arg1 ;
// -(BOOL)removeAutoAssignedFacesFromVerifiedPersonsAndPrepareForPersonBuilding:(id)arg0 cancelOrExtendTimeoutBlock:(id)arg1 error:(unk)arg2  ;
// -(BOOL)resetLibraryClustersWithCancelOrExtendTimeoutBlock:(id)arg0 error:(unk)arg1  ;
-(BOOL)resetLibraryClustersWithCanceler:(id)arg0 error:(*id)arg1 ;
// -(BOOL)ungroupFaceClusterSequenceNumbers:(id)arg0 batchSizeForUnclusteringFaces:(NSUInteger)arg1 cancelOrExtendTimeoutBlock:(id)arg2 error:(unk)arg3  ;
-(BOOL)ungroupFaceClusterSequenceNumbers:(id)arg0 batchSizeForUnclusteringFaces:(NSUInteger)arg1 canceler:(id)arg2 error:(*id)arg3 ;
-(BOOL)updateFaceprint:(id)arg0 ofPersistedFace:(id)arg1 error:(*id)arg2 ;
// -(BOOL)updateKeyFacesOfPersonsWithLocalIdentifiers:(id)arg0 forceUpdate:(BOOL)arg1 cancelOrExtendTimeoutBlock:(id)arg2 error:(unk)arg3  ;
-(BOOL)updateKeyFacesOfPersonsWithLocalIdentifiers:(id)arg0 forceUpdate:(BOOL)arg1 canceler:(id)arg2 error:(*id)arg3 ;
-(NSUInteger)_level0ClusterIdForFaceCSN:(NSUInteger)arg0 level0Clusters:(id)arg1 ;
-(NSUInteger)countOfClusteredFaces;
-(NSUInteger)countOfClusteringEligibleFaces;
-(NSUInteger)countOfFaces;
-(NSUInteger)countOfUnclusteredClusteringEligibleFaces;
-(id)_duplicateFaceCSNsOnAssetForPerson:(id)arg0 faceCSNsOnPerson:(id)arg1 faceByCSNCache:(id)arg2 ;
-(id)_faceToFaceCountMapForFaces:(id)arg0 ;
-(id)_facesFromFaceGroupWithMostNumberOfFacesOnPerson:(id)arg0 options:(id)arg1 error:(*id)arg2 ;
-(id)_fetchResultForGroupedFacesWithClusterSequenceNumberSetToZeroInPhotoLibrary:(id)arg0 ;
-(id)_fetchResultForUngroupedFacesWithNonZeroClusterSequenceNumberInPhotoLibrary:(id)arg0 ;
-(id)_localIdentifiersOfUnverifiedPersonsAssociatedWithFaceGroups:(id)arg0 cancelOrExtendTimeoutBlock:(id)arg1 ;
-(id)_representativenessByFaceCSNFromFaces:(id)arg0 cancelOrExtendTimeoutBlock:(id)arg1 ;
// -(id)_updatedFaceGroupByFGLocalIdentifierFromClusterCSNsWithCancelOrExtendTimeoutBlock:(id)arg0 fetchLimit:(unk)arg1  ;
-(id)associateFace:(id)arg0 withFaceCrop:(id)arg1 error:(*id)arg2 ;
-(id)bestRepresentativeFaceForPerson:(id)arg0 qualityMeasureByFace:(id)arg1 cancelOrExtendTimeoutBlock:(id)arg2 ;
-(id)bestRepresentativeFaceForPerson:(id)arg0 qualityMeasureByFace:(id)arg1 canceler:(id)arg2 ;
-(id)bestRepresentativeFaceForPerson:(id)arg0 qualityMeasureByFace:(id)arg1 candidateFaces:(id)arg2 cancelOrExtendTimeoutBlock:(id)arg3 ;
-(id)bestRepresentativeFaceForPerson:(id)arg0 qualityMeasureByFace:(id)arg1 candidateFaces:(id)arg2 canceler:(id)arg3 ;
-(id)densityClusteringForObjects:(id)arg0 maximumDistance:(CGFloat)arg1 minimumNumberOfObjects:(NSUInteger)arg2 withDistanceBlock:(id)arg3 ;
-(id)deterministicallyOrderedFaceIdentifiersWithLocalIdentifiers:(id)arg0 faceprintVersion:(int)arg1 ;
-(id)dirtyFaceCropsWithLimit:(NSUInteger)arg0 ;
-(id)faceAssociatedWithFaceCrop:(id)arg0 ;
-(id)facesForClusteringWithLocalIdentifiers:(id)arg0 faceprintVersion:(int)arg1 groupingIdentifiers:(id)arg2 ;
-(id)facesFromAsset:(id)arg0 ;
-(id)fetchFaceWithClusterSequenceNumber:(id)arg0 error:(*id)arg1 ;
-(id)fetchFaceWithLocalIdentifier:(id)arg0 error:(*id)arg1 ;
-(id)fetchPersonWithLocalIdentifier:(id)arg0 options:(id)arg1 error:(*id)arg2 ;
-(id)groupedClusterSequenceNumbersOfFacesInFaceGroupsOfMinimumSize:(NSUInteger)arg0 error:(*id)arg1 ;
-(id)initWithPhotoLibrary:(id)arg0 ;
// -(id)invalidFaceClusterSequenceNumbersInClusterSequenceNumbers:(id)arg0 cancelOrExtendTimeoutBlock:(id)arg1 error:(unk)arg2  ;
-(id)invalidFaceClusterSequenceNumbersInClusterSequenceNumbers:(id)arg0 canceler:(id)arg1 error:(*id)arg2 ;
-(id)keyFaceForPerson:(id)arg0 qualityMeasureByFace:(id)arg1 updateBlock:(id)arg2 ;
-(id)otherFacesOnAssetWithFace:(id)arg0 options:(id)arg1 ;
-(id)performSocialGroupsIdentifiersWithPersonClusterManager:(id)arg0 forPersons:(id)arg1 overTheYearsComputation:(BOOL)arg2 updateBlock:(id)arg3 ;
-(id)suggestedMeIdentifierWithPersonClusterManager:(id)arg0 forPersons:(id)arg1 updateBlock:(id)arg2 ;
-(id)suggestedPersonLocalIdentifierForPersonLocalIdentifier:(id)arg0 faceClusterer:(id)arg1 canceler:(id)arg2 context:(id)arg3 error:(*id)arg4 ;
-(id)unclusteredClusteringEligibleFaceLocalIdentifiers:(*id)arg0 ;
// -(void)_buildPersonsFromUpdatedFaceGroups:(id)arg0 faceClusterer:(id)arg1 keyFaceUpdateBlock:(id)arg2 cancelOrExtendTimeoutBlock:(unk)arg3 context:(id)arg4  ;
// -(void)_categorizeGroupedFacesInFetchResult:(id)arg0 intoFaceLocalIdentifiersByFaceGroup:(id)arg1 ungroupedFaceLocalIdentifiers:(*id)arg2 cancelOrExtendTimeoutBlock:(id)arg3 photoLibrary:(unk)arg4  ;
-(void)_checkRejectedFaceCropsForFaceGroups:(id)arg0 withCancelOrExtendTimeoutBlock:(id)arg1 ;
-(void)_dedupeFaceCropsForFaceGroups:(id)arg0 withCancelOrExtendTimeoutBlock:(id)arg1 ;
-(void)_enumeratePersonsWithLocalIdentifiers:(id)arg0 fetchOptions:(id)arg1 personCache:(id)arg2 usingBlock:(id)arg3 ;
-(void)_getMergeCandidates:(id)arg0 invalidMergeCandidates:(id)arg1 forPersonsWithLocalIdentifiers:(id)arg2 ;
-(void)_getRejectedTrainingFaceCSNs:(*id)arg0 rejectedFaceCSNs:(*id)arg1 rejectedPersonLocalIdentifiers:(*id)arg2 forPerson:(id)arg3 faceInFaceGroupByCSN:(id)arg4 ;
-(void)_getTrainingFacesByPerson:(*id)arg0 confirmedFaceCSNs:(*id)arg1 faceCSNsByPerson:(*id)arg2 faceCSNsByMigratedPerson:(*id)arg3 faceCSNsByQuickClassificationPerson:(*id)arg4 mergeCandidates:(*id)arg5 invalidMergeCandidates:(*id)arg6 rejectedPersonsByPerson:(*id)arg7 faceInFaceGroupByCSN:(*id)arg8 inFaces:(id)arg9 personCache:(id)arg10 cancelOrExtendTimeoutBlock:(id)arg11 ;
-(void)_updateFaceCSNsToAddByPerson:(id)arg0 faceCSNsToRemoveByPerson:(id)arg1 faceInFaceGroupByCSN:(id)arg2 faceCSNsByPersonLocalIdentifier:(id)arg3 faceCSNsByMigratedPersonLocalIdentifier:(id)arg4 personsToUpdate:(id)arg5 ;
// -(void)buildPersonWithFaceClusterer:(id)arg0 keyFaceUpdateBlock:(id)arg1 context:(unk)arg2 cancelOrExtendTimeoutBlock:(id)arg3  ;
// -(void)buildPersonsWithFaceClusterer:(id)arg0 keyFaceUpdateBlock:(id)arg1 canceler:(unk)arg2 context:(id)arg3 extendTimeoutBlock:(id)arg4  ;
-(void)dedupeGraphVerifiedPersonsInFaceGroup:(id)arg0 personCache:(id)arg1 ;
-(void)logPVDebugMessage:(id)arg0 ;
-(void)logPVErrorMessage:(id)arg0 ;
-(void)logPVInfoMessage:(id)arg0 ;
-(void)logPVWarningMessage:(id)arg0 ;


@end


#endif