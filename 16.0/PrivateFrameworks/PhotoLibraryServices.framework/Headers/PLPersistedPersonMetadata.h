// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PLPERSISTEDPERSONMETADATA_H
#define PLPERSISTEDPERSONMETADATA_H

@class NSDictionary, NSArray, NSNumber, NSString, NSURL, NSDate, NSSet;

#import <Foundation/Foundation.h>

#import "PLPerson.h"

@interface PLPersistedPersonMetadata : NSObject {
    BOOL _cplEnabled;
}


@property (nonatomic) int cloudVerifiedType; // ivar: _cloudVerifiedType
@property (copy, nonatomic) NSDictionary *contactMatchingDictionary; // ivar: _contactMatchingDictionary
@property (retain, nonatomic) NSArray *detectedFaces; // ivar: _detectedFaces
@property (nonatomic) NSNumber *detectionType; // ivar: _detectionType
@property (retain, nonatomic) NSString *displayName; // ivar: _displayName
@property (nonatomic) NSInteger fromVersion; // ivar: _fromVersion
@property (retain, nonatomic) NSString *fullName; // ivar: _fullName
@property (nonatomic) short keyFacePickSource; // ivar: _keyFacePickSource
@property (nonatomic) unsigned int manualOrder; // ivar: _manualOrder
@property (retain, nonatomic) NSString *mergeTargetPersonUUID; // ivar: _mergeTargetPersonUUID
@property (retain, nonatomic) NSURL *metadataURL; // ivar: _metadataURL
@property (retain, nonatomic) PLPerson *person; // ivar: _person
@property (retain, nonatomic) NSString *personUUID; // ivar: _personUUID
@property (retain, nonatomic) NSString *personUri; // ivar: _personUri
@property (retain, nonatomic) NSArray *rejectedFaces; // ivar: _rejectedFaces
@property (nonatomic) int type; // ivar: _type
@property (readonly, nonatomic) NSString *userFeedbackContext; // ivar: _userFeedbackContext
@property (readonly, nonatomic) short userFeedbackFeature; // ivar: _userFeedbackFeature
@property (readonly, nonatomic) NSDate *userFeedbackLastModifiedDate; // ivar: _userFeedbackLastModifiedDate
@property (readonly, nonatomic) short userFeedbackType; // ivar: _userFeedbackType
@property (readonly, nonatomic) NSString *userFeedbackUUID; // ivar: _userFeedbackUUID
@property (retain, nonatomic) NSSet *userFeedbacks; // ivar: _userFeedbacks
@property (retain, nonatomic) NSArray *userFeedbacksDictionaryArray; // ivar: _userFeedbacksDictionaryArray
@property (nonatomic) int verifiedType; // ivar: _verifiedType


+(BOOL)_deleteMetadataFileForPersonUUID:(id)arg0 metadataURL:(id)arg1 ;
+(BOOL)deleteMetadataFileForPersonUUID:(id)arg0 pathManager:(id)arg1 ;
+(BOOL)isValidPath:(id)arg0 ;
+(BOOL)isValidPath:(id)arg0 outPersonUUID:(*id)arg1 ;
+(id)_clusterRejectedFaceIDsWithPerson:(id)arg0 ;
+(id)_detectedFacesToArchiveWithPerson:(id)arg0 ;
+(id)_fetchFacesWithPredicate:(id)arg0 resultType:(NSUInteger)arg1 managedObjectContext:(id)arg2 error:(*id)arg3 ;
+(id)_metadataFileURLForPersonUUID:(id)arg0 pathManager:(id)arg1 ;
+(id)_persistedFaceMetadataWithFaces:(id)arg0 keyFace:(id)arg1 clusterRejectedFaceIDs:(id)arg2 ;
+(id)_rejectedFacesToArchiveWithPerson:(id)arg0 ;
+(id)personUUIDsToDedupeWithMetadataURLs:(id)arg0 cplEnabled:(BOOL)arg1 ;
+(id)urlsForPersistedPersonsInMetadataDirectoryOfLibrary:(id)arg0 ;
+(void)performPostImportMigrationFromVersion:(NSUInteger)arg0 fromDataInManagedObjectContext:(id)arg1 ;
+(void)updateMergeTargetPersonWithPersonUUIDMapping:(id)arg0 fromDataInManagedObjectContext:(id)arg1 ;
-(BOOL)_insertDetectedFacesOnPerson:(id)arg0 fromDataInManagedObjectContext:(id)arg1 deferUnmatched:(BOOL)arg2 ;
-(BOOL)_insertRejectedFacesOnPerson:(id)arg0 fromDataInManagedObjectContext:(id)arg1 deferUnmatched:(BOOL)arg2 ;
-(BOOL)_readUUID;
-(BOOL)hasAllAssetsAvailableInManagedObjectContext:(id)arg0 includePendingAssetChanges:(BOOL)arg1 ;
-(BOOL)matchesEntityInLibraryBackedByManagedObjectContext:(id)arg0 diff:(*id)arg1 ;
-(BOOL)readDetectedFaces;
-(BOOL)readMetadata;
-(BOOL)updateFacesInPerson:(id)arg0 fromDataInManagedObjectContext:(id)arg1 deferUnmatched:(BOOL)arg2 ;
-(id)_metadataData;
-(id)description;
-(id)detectedFaceIdentifiers;
-(id)init;
-(id)initWithPLPerson:(id)arg0 metadataURL:(id)arg1 ;
-(id)initWithPLPerson:(id)arg0 pathManager:(id)arg1 ;
-(id)initWithPersistedDataAtURL:(id)arg0 cplEnabled:(BOOL)arg1 ;
-(id)initWithPersistedDataAtURL:(id)arg0 deferUnarchiving:(BOOL)arg1 cplEnabled:(BOOL)arg2 ;
-(id)insertPersonFromDataInManagedObjectContext:(id)arg0 ;
-(id)jsonDictionary;
-(void)_addAssetUUIDsFromFaces:(id)arg0 toMutableSet:(id)arg1 ;
-(void)_saveMetadata;
-(void)removePersistedData;
-(void)writePersistedData;


@end


#endif