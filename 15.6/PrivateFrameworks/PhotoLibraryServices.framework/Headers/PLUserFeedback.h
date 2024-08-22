// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef PLUSERFEEDBACK_H
#define PLUSERFEEDBACK_H

@class NSString, NSDate;
@protocol PLCloudDeletable, PLFileSystemMetadataPersistence;


#import "PLManagedObject.h"
#import "PLMemory.h"
#import "PLPerson.h"

@interface PLUserFeedback : PLManagedObject <PLCloudDeletable, PLFileSystemMetadataPersistence>



@property (nonatomic) short cloudDeleteState;
@property (readonly) NSInteger cloudDeletionType;
@property (nonatomic) short cloudLocalState;
@property (readonly, copy) NSString *cloudUUIDForDeletion;
@property (retain, nonatomic) NSString *context;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) NSString *detailedDescription;
@property (nonatomic) short feature;
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) NSDate *lastModifiedDate;
@property (retain, nonatomic) PLMemory *memory;
@property (retain, nonatomic) PLPerson *person;
@property (readonly) Class superclass;
@property (nonatomic) short type;
@property (nonatomic) NSString *uuid;


+(BOOL)shouldHandleCPLSuggestionChange:(id)arg0 ;
+(NSInteger)cloudDeletionTypeForTombstone:(id)arg0 ;
+(id)_userFeedbacksMatchingPredicate:(id)arg0 sortDescriptors:(id)arg1 limit:(NSInteger)arg2 inManagedObjectContext:(id)arg3 ;
+(id)cloudUUIDKeyForDeletion;
+(id)entityName;
+(id)insertIntoManagedObjectContext:(id)arg0 withDictionaryRepresentation:(id)arg1 ;
+(id)insertIntoManagedObjectContext:(id)arg0 withUUID:(id)arg1 ;
+(id)newestUserFeedbackInSet:(id)arg0 ;
+(id)updateUserFeedback:(id)arg0 withCPLSuggestionChange:(id)arg1 inManagedObjectContext:(id)arg2 ;
+(id)userFeedbackWithUUID:(id)arg0 inManagedObjectContext:(id)arg1 ;
+(id)userFeedbacksToUploadInManagedObjectContext:(id)arg0 limit:(NSInteger)arg1 ;
+(id)userFeedbacksWithUUIDs:(id)arg0 inManagedObjectContext:(id)arg1 ;
-(BOOL)_relationshipsInInvalidState;
-(BOOL)_validateNonNilUUID:(*id)arg0 ;
-(BOOL)_validateRelationshipConstraintForInsert:(BOOL)arg0 error:(*id)arg1 ;
-(BOOL)isSyncableChange;
-(BOOL)isValidForPersistence;
-(BOOL)supportsCloudUpload;
-(BOOL)validateForInsert:(*id)arg0 ;
-(BOOL)validateForUpdate:(*id)arg0 ;
-(id)_objectUsedForPersistence;
-(id)cplFullRecord;
-(id)cplSuggestionChange;
-(id)dictionaryRepresentation;
-(id)payloadForChangedKeys:(id)arg0 ;
-(id)payloadID;
-(void)persistMetadataToFileSystemWithPathManager:(id)arg0 ;
-(void)prepareForDeletion;
-(void)removePersistedFileSystemDataWithPathManager:(id)arg0 ;


@end


#endif