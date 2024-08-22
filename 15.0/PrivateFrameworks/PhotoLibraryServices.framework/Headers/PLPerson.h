// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef PLPERSON_H
#define PLPERSON_H

@class NSString, NSSet, NSDictionary;
@protocol PLSyncablePerson, PLCloudDeletable, PLFileSystemMetadataPersistence, PLUserFeedbackSupporting;


#import "PLManagedObject.h"
#import "PLDetectedFaceGroup.h"
#import "PLDetectedFace.h"
#import "PLPerson.h"

@interface PLPerson : PLManagedObject <PLSyncablePerson, PLCloudDeletable, PLFileSystemMetadataPersistence, PLUserFeedbackSupporting>



@property (nonatomic) unsigned short ageType;
@property (retain, nonatomic) PLDetectedFaceGroup *associatedFaceGroup;
@property (nonatomic) short cloudDeleteState;
@property (readonly) NSInteger cloudDeletionType;
@property (nonatomic) short cloudLocalState;
@property (nonatomic) short cloudLocalState;
@property (readonly, copy) NSString *cloudUUIDForDeletion;
@property (nonatomic) int cloudVerifiedType;
@property (nonatomic) int cloudVerifiedType;
@property (retain, nonatomic) NSSet *clusterRejectedFaces;
@property (retain, nonatomic) NSDictionary *contactMatchingDictionary;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *description;
@property (retain, nonatomic) NSSet *detectedFaces;
@property (nonatomic) short detectionType;
@property (nonatomic) short detectionType;
@property (retain, nonatomic) NSString *displayName;
@property (nonatomic) int effectiveVerifiedType;
@property (readonly, nonatomic) int faceCount;
@property (retain, nonatomic) NSSet *faceCrops;
@property (retain, nonatomic) NSString *fullName;
@property (retain, nonatomic) NSString *fullName;
@property (nonatomic) unsigned short genderType;
@property (readonly, nonatomic) BOOL graphVerified;
@property (readonly) NSUInteger hash;
@property (readonly) NSUInteger hash;
@property (nonatomic) BOOL inPersonNamingModel;
@property (retain, nonatomic) NSSet *invalidMergeCandidates;
@property (readonly, nonatomic) BOOL isTombstone;
@property (retain, nonatomic) PLDetectedFace *keyFace;
@property (readonly, nonatomic) BOOL keyFaceIsPicked;
@property (nonatomic) short keyFacePickSource;
@property (readonly, retain, nonatomic) id *localID;
@property (nonatomic) unsigned int manualOrder;
@property (retain, nonatomic) NSSet *mergeCandidates;
@property (retain, nonatomic) NSSet *mergeSourcePersons;
@property (retain, nonatomic) PLPerson *mergeTargetPerson;
@property (retain, nonatomic) NSSet *personReferences;
@property (retain, nonatomic) NSString *personUUID;
@property (retain, nonatomic) NSString *personUUID;
@property (retain, nonatomic) NSString *personUri;
@property (nonatomic) short questionType;
@property (retain, nonatomic) NSSet *rejectedFaces;
@property (retain, nonatomic) NSSet *rejectedFacesNeedingFaceCrops;
@property (readonly, nonatomic) BOOL shouldIndexForSearch;
@property (nonatomic) unsigned short suggestedForClientType;
@property (readonly) Class superclass;
@property (readonly) Class superclass;
@property (nonatomic) int type;
@property (retain, nonatomic) NSSet *userFeedbacks;
@property (readonly, nonatomic) BOOL userVerified;
@property (nonatomic) int verifiedType;
@property (nonatomic) int verifiedType;


+(BOOL)person:(id)arg0 isBetterMergeTargetThanPerson:(id)arg1 ;
+(BOOL)resetAllInLibrary:(id)arg0 error:(*id)arg1 ;
+(NSInteger)cloudDeletionTypeForTombstone:(id)arg0 ;
+(id)_batchFetchPersonUUIDsByAssetUUIDWithAssetUUIDs:(id)arg0 predicate:(id)arg1 inManagedObjectContext:(id)arg2 error:(*id)arg3 ;
+(id)_predicateForSupportedDetectionTypesForUpload;
+(id)_predicateForSupportedVerifiedTypesForUpload;
+(id)_stringFromContact:(id)arg0 preferGivenName:(BOOL)arg1 ;
+(id)allPersonsInManagedObjectContext:(id)arg0 ;
+(id)cloudUUIDKeyForDeletion;
+(id)displayNameFromContact:(id)arg0 ;
+(id)entityName;
+(id)fetchFinalMergeTargetPersonForPersonWithUUID:(id)arg0 context:(id)arg1 predicate:(id)arg2 ;
+(id)fetchPersonCountByAssetUUIDForAssetUUIDs:(id)arg0 predicate:(id)arg1 library:(id)arg2 error:(*id)arg3 ;
+(id)fullNameFromContact:(id)arg0 ;
+(id)insertIntoManagedObjectContext:(id)arg0 withPersonUUID:(id)arg1 fullName:(id)arg2 verifiedType:(int)arg3 ;
+(id)insertIntoPhotoLibrary:(id)arg0 withPersonUUID:(id)arg1 fullName:(id)arg2 verifiedType:(int)arg3 ;
+(id)listOfPropertiesToResetAgeAndGender;
+(id)listOfSyncedProperties;
+(id)personWithUUID:(id)arg0 inManagedObjectContext:(id)arg1 ;
+(id)personsMatchingPredicate:(id)arg0 fetchLimit:(NSUInteger)arg1 sortDescriptors:(id)arg2 relationshipKeyPathsForPrefetching:(id)arg3 inManagedObjectContext:(id)arg4 ;
+(id)personsToPrefetchInManagedObjectContext:(id)arg0 ;
+(id)personsToUploadInManagedObjectContext:(id)arg0 limit:(NSInteger)arg1 ;
+(id)personsWithPersonUri:(id)arg0 inManagedObjectContext:(id)arg1 ;
+(id)personsWithUUIDs:(id)arg0 inManagedObjectContext:(id)arg1 ;
+(id)predicateForIncludedDetectionTypes:(id)arg0 ;
+(id)predicateForPersistence;
+(id)predicateForPersonsNeedingFaceCropGenerationForFaceObjectID:(id)arg0 ;
+(id)predicateForVisibleKeyFace;
+(id)predicateToExcludeTorsoOnlyPerson;
+(void)batchFetchAssociatedPersonByFaceGroupUUIDWithFaceGroupUUIDs:(id)arg0 predicate:(id)arg1 library:(id)arg2 completion:(id)arg3 ;
+(void)batchFetchPersonUUIDsByAssetUUIDWithAssetUUIDs:(id)arg0 predicate:(id)arg1 inManagedObjectContext:(id)arg2 completion:(id)arg3 ;
+(void)batchFetchPersonsByAssetUUIDWithAssetUUIDs:(id)arg0 predicate:(id)arg1 library:(id)arg2 completion:(id)arg3 ;
+(void)createAssociatedPersonForFaceGroup:(id)arg0 ;
+(void)createAssociatedPersonForFaceGroup:(id)arg0 inManagedObjectContext:(id)arg1 ;
+(void)enumerateAssetUUIDsForSearchIndexingWithPersonUUID:(id)arg0 managedObjectContext:(id)arg1 assetUUIDHandler:(id)arg2 ;
+(void)resetCloudStateInPhotoLibrary:(id)arg0 ;
-(BOOL)dedupeGraphPersons:(id)arg0 error:(*id)arg1 ;
-(BOOL)isSyncableChange;
-(BOOL)isValidForPersistence;
-(BOOL)supportsCloudUpload;
-(BOOL)validForPersistenceChangedForChangedKeys:(id)arg0 ;
-(id)_nameRelatedMetadataKeys;
-(id)cplFullRecord;
-(id)cplPersonChange;
-(id)debugLogDescription;
-(id)faceGroupDescription;
-(id)finalMergeTargetPerson;
-(id)momentShare;
-(id)mutableFaceCrops;
-(id)mutableFaces;
-(id)mutableInvalidMergeCandidates;
-(id)mutableMergeCandidates;
-(id)mutableRejectedFaces;
-(id)mutableRejectedFacesNeedingFaceCrops;
-(id)payloadForChangedKeys:(id)arg0 ;
-(id)payloadID;
-(id)payloadIDForTombstone:(id)arg0 ;
-(id)pickKeyFaceOptimalStateForContactDedupeWithPersons:(id)arg0 ;
-(id)pickOptimalStateForUserInitiatedMergeWithPersons:(id)arg0 nominalTarget:(id)arg1 ;
-(id)reverseOrderedMergeTargetPersons;
-(id)syncDescription;
-(void)_basicMergePersons:(id)arg0 ;
-(void)_refreshRelationshipForKey:(id)arg0 ;
-(void)applyCPLChangeForContactMatchingDictionary:(id)arg0 ;
-(void)basicMergePersons:(id)arg0 ;
-(void)disconnectFaceGroup;
-(void)mergePersons:(id)arg0 withOptimalState:(id)arg1 ;
-(void)persistMetadataToFileSystemWithPathManager:(id)arg0 ;
-(void)prepareForDeletion;
-(void)prepareForUserInitiatedMergeWithPersons:(id)arg0 ;
-(void)refereshMergeCandidates;
-(void)refreshFaceCrops;
-(void)refreshFaces;
-(void)refreshInvalidMergeCandidates;
-(void)refreshRejectedFaces;
-(void)rejectFaceIfPossible:(id)arg0 shouldCreateFaceCrop:(BOOL)arg1 ;
-(void)removePersistedFileSystemDataWithPathManager:(id)arg0 ;
-(void)resetAllFacesToDefault;
-(void)setCPLSyncedMergeTarget:(id)arg0 ;
-(void)willSave;


@end


#endif