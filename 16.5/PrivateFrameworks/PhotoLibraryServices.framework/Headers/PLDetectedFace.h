// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PLDETECTEDFACE_H
#define PLDETECTEDFACE_H

@class NSDate, NSSet, NSString;
@protocol PLSyncableDetectedFace, PLSyncablePerson;


#import "PLManagedObject.h"
#import "PLManagedAsset.h"
#import "PLFaceCrop.h"
#import "PLDetectedFaceGroup.h"
#import "PLDetectedFaceprint.h"
#import "PLPerson.h"

@interface PLDetectedFace : PLManagedObject <PLSyncableDetectedFace>



@property (copy, nonatomic) NSDate *adjustmentVersion;
@property (retain, nonatomic) NSDate *adjustmentVersion;
@property (nonatomic) unsigned short ageType;
@property (retain, nonatomic) PLManagedAsset *asset;
@property (readonly, nonatomic) BOOL assetVisible;
@property (nonatomic) CGFloat blurScore;
@property (nonatomic) CGFloat bodyCenterX;
@property (nonatomic) CGFloat bodyCenterY;
@property (nonatomic) CGFloat bodyHeight;
@property (nonatomic) CGFloat bodyWidth;
@property (nonatomic) CGFloat centerX;
@property (nonatomic) CGFloat centerX;
@property (nonatomic) CGFloat centerY;
@property (nonatomic) CGFloat centerY;
@property (nonatomic) short cloudLocalState;
@property (nonatomic) short cloudLocalState;
@property (nonatomic) int cloudNameSource;
@property (nonatomic) int cloudNameSource;
@property (retain, nonatomic) NSSet *clusterRejectedPersons;
@property (nonatomic) int clusterSequenceNumber;
@property (nonatomic) short confirmedFaceCropGenerationState;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (retain, nonatomic) NSSet *detectionTraits;
@property (nonatomic) short detectionType;
@property (nonatomic) short detectionType;
@property (nonatomic) int effectiveNameSource;
@property (nonatomic) unsigned short ethnicityType;
@property (nonatomic) unsigned short eyeMakeupType;
@property (nonatomic) unsigned short eyesState;
@property (nonatomic) int faceAlgorithmVersion;
@property (nonatomic) int faceAlgorithmVersion;
@property (retain, nonatomic) PLFaceCrop *faceCrop;
@property (nonatomic) unsigned short faceExpressionType;
@property (retain, nonatomic) PLDetectedFaceGroup *faceGroup;
@property (retain, nonatomic) PLDetectedFaceGroup *faceGroupBeingKeyFace;
@property (retain, nonatomic) PLDetectedFaceprint *faceprint;
@property (nonatomic) unsigned short facialHairType;
@property (nonatomic) CGFloat gazeCenterX;
@property (nonatomic) CGFloat gazeCenterY;
@property (nonatomic) unsigned short gazeType;
@property (nonatomic) unsigned short genderType;
@property (nonatomic) unsigned short glassesType;
@property (retain, nonatomic) NSString *groupingIdentifier;
@property (nonatomic) unsigned short hairColorType;
@property (nonatomic) unsigned short hairType;
@property (nonatomic) BOOL hasFaceMask;
@property (nonatomic) BOOL hasSmile;
@property (readonly) NSUInteger hash;
@property (nonatomic) unsigned short headgearType;
@property (nonatomic) BOOL hidden;
@property (nonatomic) BOOL hidden;
@property (nonatomic) BOOL isInTrash;
@property (nonatomic) BOOL isLeftEyeClosed;
@property (nonatomic) BOOL isRightEyeClosed;
@property (readonly, nonatomic) BOOL isTrainingFace;
@property (nonatomic) unsigned short lipMakeupType;
@property (readonly, retain, nonatomic) id *localID;
@property (nonatomic) BOOL manual;
@property (nonatomic) BOOL manual;
@property (retain, nonatomic) NSString *masterIdentifier;
@property (nonatomic) int nameSource;
@property (nonatomic) int nameSource;
@property (retain, nonatomic) NSObject<PLSyncablePerson> *person;
@property (retain, nonatomic) PLPerson *person;
@property (retain, nonatomic) NSObject<PLSyncablePerson> *personBeingKeyFace;
@property (retain, nonatomic) PLPerson *personBeingKeyFace;
@property (nonatomic) unsigned short poseType;
@property (nonatomic) CGFloat poseYaw;
@property (nonatomic) CGFloat quality;
@property (nonatomic) int qualityMeasure;
@property (retain, nonatomic) NSSet *rejectedPersons;
@property (retain, nonatomic) NSSet *rejectedPersons;
@property (retain, nonatomic) NSSet *rejectedPersonsNeedingFaceCrops;
@property (nonatomic) CGFloat roll;
@property (nonatomic) CGFloat size;
@property (nonatomic) CGFloat size;
@property (nonatomic) unsigned short skintoneType;
@property (nonatomic) unsigned short smileType;
@property (nonatomic) NSInteger sourceHeight;
@property (nonatomic) NSInteger sourceHeight;
@property (nonatomic) NSInteger sourceWidth;
@property (nonatomic) NSInteger sourceWidth;
@property (readonly) Class superclass;
@property (nonatomic) int trainingType;
@property (nonatomic) int trainingType;
@property (retain, nonatomic) NSString *uuid;
@property (nonatomic) short vipModelType;


+(NSUInteger)countOfHiddenFacesOnAssetsWithObjectIDs:(id)arg0 inManagedObjectContext:(id)arg1 ;
+(id)_facesMatchingPredicate:(id)arg0 limit:(NSUInteger)arg1 inPhotoLibrary:(id)arg2 ;
+(id)_syncableFacesToUploadInitiallyPredicate;
+(id)detectedFaceWithUUID:(id)arg0 inManagedObjectContext:(id)arg1 ;
+(id)entityName;
+(id)findExistingFaceMatchingDimension:(id)arg0 inFaces:(id)arg1 ignoreSourceAssetDimensions:(BOOL)arg2 ;
+(id)predicateForArchival;
+(id)predicateForFaceCountTrigger;
+(id)predicateForIncludedDetectionTypes:(id)arg0 ;
+(id)predicateToExcludeBodyOnlyDetection;
+(id)predicatesForFacesNeedingFaceCropGeneration;
+(id)predicatesToExcludeNonVisibleFaces;
+(id)syncableFacesPredicate;
+(id)syncableFacesToUploadInitiallyInLibrary:(id)arg0 limit:(NSUInteger)arg1 ;
+(void)batchFetchDetectedFacesByAssetUUIDWithAssetUUIDs:(id)arg0 predicate:(id)arg1 library:(id)arg2 completion:(id)arg3 ;
+(void)batchFetchKeyFaceByPersonObjectIDWithPersonObjectIDs:(id)arg0 library:(id)arg1 completion:(id)arg2 ;
+(void)enumerateAssetUUIDsForSearchIndexingWithDetctedFaceUUIDs:(id)arg0 managedObjectContext:(id)arg1 assetUUIDHandler:(id)arg2 ;
+(void)resetCloudStateInPhotoLibrary:(id)arg0 ;
-(BOOL)isSyncableChange;
-(BOOL)isTorsoOnly;
-(BOOL)isValidForJournalPersistence;
-(BOOL)photosFaceRepresentationHasSmile;
-(BOOL)photosFaceRepresentationIsLeftEyeClosed;
-(BOOL)photosFaceRepresentationIsRightEyeClosed;
-(BOOL)supportsCloudUpload;
-(BOOL)validForPersistenceChangedForChangedKeys:(id)arg0 ;
-(CGFloat)photosFaceRepresentationBlurScore;
-(CGFloat)photosFaceRepresentationCenterX;
-(CGFloat)photosFaceRepresentationCenterY;
-(CGFloat)photosFaceRepresentationQuality;
-(CGFloat)photosFaceRepresentationRoll;
-(CGFloat)photosFaceRepresentationSize;
-(NSInteger)photosFaceRepresentationClusterSequenceNumber;
-(NSInteger)photosFaceRepresentationQualityMeasure;
-(NSInteger)photosFaceRepresentationSourceHeight;
-(NSInteger)photosFaceRepresentationSourceWidth;
-(id)cplFullRecord;
-(id)debugLogDescription;
-(id)namingDescription;
-(id)payloadForChangedKeys:(id)arg0 ;
-(id)payloadID;
-(id)payloadIDForTombstone:(id)arg0 ;
-(id)photosFaceRepresentationLocalIdentifier;
-(id)syncDescription;
-(void)_touchPersonForPersistenceIfNeeded;
-(void)_updateFaceGroupIfNeeded;
-(void)_verifyAssetRelationship;
-(void)addClusterRejectedPerson:(id)arg0 ;
-(void)addRejectedPerson:(id)arg0 ;
-(void)addRejectedPersonNeedingFaceCrops:(id)arg0 ;
-(void)awakeFromInsert;
-(void)delete;
-(void)removeFaceprint;
-(void)willSave;


@end


#endif