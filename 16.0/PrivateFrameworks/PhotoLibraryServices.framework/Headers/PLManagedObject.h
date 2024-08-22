// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PLMANAGEDOBJECT_H
#define PLMANAGEDOBJECT_H

@class NSManagedObject, NSString, PLPhotoLibraryPathManager;
@protocol PLJournalEntryPayloadManagedObjectUpdate, PLValidatedManagedObject;


#import "PLPhotoLibrary.h"

@interface PLManagedObject : NSManagedObject <PLJournalEntryPayloadManagedObjectUpdate, PLValidatedManagedObject>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) BOOL isRegisteredWithUserInterfaceContext;
@property (readonly, nonatomic) PLPhotoLibraryPathManager *pathManager;
@property (readonly, nonatomic) PLPhotoLibrary *photoLibrary;
@property (readonly, copy, nonatomic) NSString *shortObjectIDURI;
@property (readonly) Class superclass;


+(id)attributeValidationRules;
+(id)entityInManagedObjectContext:(id)arg0 ;
+(id)entityName;
+(id)insertInManagedObjectContext:(id)arg0 ;
+(id)objectIDDescription;
-(BOOL)isSyncableChange;
-(BOOL)isValidForJournalPersistence;
-(BOOL)supportsCloudUpload;
-(BOOL)validForPersistenceChangedForChangedKeys:(id)arg0 ;
-(id)duplicateSortPropertyNames;
-(id)duplicateSortPropertyNamesSkip;
-(id)payloadForChangedKeys:(id)arg0 ;
-(id)payloadID;
-(id)payloadIDForTombstone:(id)arg0 ;
-(id)payloadIDsByPayloadClassIDToDeleteOnInsert;
-(id)payloadsForChangedKeys:(id)arg0 ;
-(void)setValue:(id)arg0 forKey:(id)arg1 valueDidChangeHandler:(id)arg2 ;
-(void)willSave;


@end


#endif