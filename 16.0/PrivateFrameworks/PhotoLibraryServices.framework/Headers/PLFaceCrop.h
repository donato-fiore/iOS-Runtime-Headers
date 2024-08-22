// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PLFACECROP_H
#define PLFACECROP_H

@class NSString, NSData;
@protocol PLSyncableObject, PLCloudDeletable;


#import "PLManagedObject.h"
#import "PLManagedAsset.h"
#import "PLDetectedFace.h"
#import "PLPerson.h"

@interface PLFaceCrop : PLManagedObject <PLSyncableObject, PLCloudDeletable>



@property (retain, nonatomic) PLManagedAsset *asset;
@property (nonatomic) short cloudDeleteState;
@property (readonly) NSInteger cloudDeletionType;
@property (nonatomic) short cloudLocalState;
@property (nonatomic) unsigned short cloudType;
@property (readonly, copy) NSString *cloudUUIDForDeletion;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (retain, nonatomic) PLDetectedFace *face;
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) NSString *invalidMergeCandidatePersonUUID;
@property (readonly, retain, nonatomic) id *localID;
@property (nonatomic) BOOL needsPersistenceUpdate; // ivar: _needsPersistenceUpdate
@property (retain, nonatomic) PLPerson *person;
@property (retain, nonatomic) NSData *resourceData;
@property (nonatomic) short state;
@property (readonly) Class superclass;
@property (nonatomic) short type;
@property (copy, nonatomic) NSString *uuid;


+(NSInteger)_cloudTypeToPushFromLocalType:(short)arg0 cachedCloudType:(unsigned short)arg1 ;
+(NSInteger)cloudDeletionTypeForTombstone:(id)arg0 ;
+(id)_faceCropsMatchingPredicate:(id)arg0 limit:(NSUInteger)arg1 inManagedObjectContext:(id)arg2 ;
+(id)allFaceCropsInPhotoLibrary:(id)arg0 ;
+(id)batchFetchFaceCropByFaceObjectIDWithFaceObjectIDs:(id)arg0 library:(id)arg1 ;
+(id)cloudUUIDKeyForDeletion;
+(id)entityName;
+(id)faceCropsToUploadInPhotoLibrary:(id)arg0 limit:(NSUInteger)arg1 ;
+(id)faceCropsWithUUIDs:(id)arg0 inManagedObjectContext:(id)arg1 ;
+(id)faceCropsWithUUIDs:(id)arg0 inPhotoLibrary:(id)arg1 ;
+(id)insertIntoManagedObjectContext:(id)arg0 withUUID:(id)arg1 resourceData:(id)arg2 type:(short)arg3 ;
+(id)insertIntoPhotoLibrary:(id)arg0 withUUID:(id)arg1 resourceData:(id)arg2 type:(short)arg3 ;
+(id)insertOrUpdateWithCPLFaceCrop:(id)arg0 inPhotoLibrary:(id)arg1 ;
+(id)listOfSyncedProperties;
+(int)_nameSourceForFaceFromFaceCrop:(id)arg0 ;
+(int)_trainingFaceTypeForFaceFromFaceCrop:(id)arg0 ;
+(short)_localTypeFromCloudType:(NSInteger)arg0 ;
+(void)resetCloudStateInPhotoLibrary:(id)arg0 ;
-(BOOL)isSyncableChange;
-(BOOL)supportsCloudUpload;
-(id)cplFaceCropChange;
-(id)cplFullRecord;
-(void)applyPropertiesToTrainingFace;
-(void)prepareForDeletion;
-(void)willSave;


@end


#endif