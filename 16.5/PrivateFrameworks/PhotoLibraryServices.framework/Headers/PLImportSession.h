// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PLIMPORTSESSION_H
#define PLIMPORTSESSION_H

@class NSSet, NSString;
@protocol PLFileSystemAlbumMetadataPersistence;


#import "PLGenericAlbum.h"

@interface PLImportSession : PLGenericAlbum <PLFileSystemAlbumMetadataPersistence>



@property (nonatomic) BOOL albumShouldBeAutomaticallyDeleted; // ivar: _albumShouldBeAutomaticallyDeleted
@property (retain, nonatomic) NSSet *assets;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (nonatomic) BOOL needsPersistenceUpdate; // ivar: _needsPersistenceUpdate
@property (readonly) Class superclass;


+(id)albumWithImportSessionID:(id)arg0 inManagedObjectContext:(id)arg1 ;
+(id)albumsWithImportSessionIDs:(id)arg0 inManagedObjectContext:(id)arg1 ;
+(id)entityName;
+(id)insertNewImportSessionAlbumWithImportSessionID:(id)arg0 inManagedObjectContext:(id)arg1 ;
+(id)validKindsForPersistence;
-(BOOL)_isAssetIncludedInImportDates:(id)arg0 ;
-(BOOL)_isDateAfterEndDate:(id)arg0 ;
-(BOOL)_isDateBeforeStartDate:(id)arg0 ;
-(BOOL)canPerformEditOperation:(NSUInteger)arg0 ;
-(BOOL)isEmpty;
-(BOOL)isValidForPersistence;
-(BOOL)validForPersistenceChangedForChangedKeys:(id)arg0 ;
-(NSUInteger)count;
-(id)_orderedBatchedAssets;
-(id)mutableAssets;
-(id)payloadForChangedKeys:(id)arg0 ;
-(void)_updateEndDate:(id)arg0 ;
-(void)_updateStartDate:(id)arg0 ;
-(void)didSave;
-(void)persistMetadataToFileSystemWithPathManager:(id)arg0 ;
-(void)prepareForDeletion;
-(void)removePersistedFileSystemDataWithPathManager:(id)arg0 ;
-(void)revalidateImportDates;
-(void)updateImportDatesFromAddedAsset:(id)arg0 ;
-(void)willSave;


@end


#endif