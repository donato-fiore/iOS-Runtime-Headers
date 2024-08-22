// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef PLMANAGEDFOLDER_H
#define PLMANAGEDFOLDER_H

@class NSString, NSOrderedSet;
@protocol PLAlbumContainer, PLCloudDeletable, PLFileSystemAlbumMetadataPersistence, PLDeletableManagedObject;


#import "PLGenericAlbum.h"

@interface PLManagedFolder : PLGenericAlbum <PLAlbumContainer, PLCloudDeletable, PLFileSystemAlbumMetadataPersistence, PLDeletableManagedObject>



@property (readonly, retain, nonatomic) NSString *_prettyDescription;
@property (readonly, retain, nonatomic) NSString *_typeDescription;
@property (readonly, nonatomic) NSUInteger albumsCount;
@property (readonly, copy, nonatomic) id *albumsSortingComparator;
@property (retain, nonatomic) NSOrderedSet *childCollections;
@property (nonatomic) short cloudDeleteState;
@property (readonly) NSInteger cloudDeletionType;
@property (readonly, copy) NSString *cloudUUIDForDeletion;
@property (readonly, nonatomic) NSUInteger containersCount;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) int filter;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) BOOL isFolder;
@property (nonatomic) BOOL needsFixedOrderKeysComplianceUpdate; // ivar: _needsFixedOrderKeysComplianceUpdate
@property (nonatomic) BOOL needsPersistenceUpdate; // ivar: _needsPersistenceUpdate
@property (readonly) Class superclass;
@property (readonly, nonatomic) NSUInteger unreadAlbumsCount;


+(NSInteger)cloudDeletionTypeForTombstone:(id)arg0 ;
+(id)childKeyForOrdering;
+(id)cloudUUIDKeyForDeletion;
+(id)entityName;
+(id)insertNewFolderWithTitle:(id)arg0 kind:(int)arg1 intoLibrary:(id)arg2 ;
+(id)localizedRecoveredTitle;
+(id)validKindsForPersistence;
-(BOOL)albumHasFixedOrder:(id)arg0 ;
-(BOOL)canEditAlbums;
-(BOOL)canEditContainers;
-(BOOL)canPerformDeleteOperation;
-(BOOL)canPerformEditOperation:(NSUInteger)arg0 ;
-(BOOL)hasAtLeastOneAlbum;
-(BOOL)isEmpty;
-(BOOL)isValidForPersistence;
-(BOOL)needsReordering;
-(NSUInteger)approximateCount;
-(NSUInteger)assetsCount;
-(NSUInteger)count;
-(NSUInteger)photosCount;
-(NSUInteger)videosCount;
-(id)albums;
-(id)assets;
-(id)childKeyForOrdering;
-(id)containers;
-(id)containersRelationshipName;
-(id)identifier;
-(id)mutableAssets;
-(id)payloadForChangedKeys:(id)arg0 ;
-(short)albumListType;
-(void)_enforceFixedOrderKeyCompliance;
-(void)_enforceFixedOrderKeyComplianceWithRelationshipOrderManager:(id)arg0 ;
-(void)addChildCollections:(id)arg0 ;
-(void)addChildCollectionsObject:(id)arg0 ;
-(void)didSave;
-(void)enforceFixedOrderKeyComplianceWithRelationshipOrderManager:(id)arg0 ;
-(void)insertChildCollections:(id)arg0 atIndexes:(id)arg1 ;
-(void)insertObject:(id)arg0 inChildCollectionsAtIndex:(NSUInteger)arg1 ;
-(void)moveChildCollectionsAtIndexes:(id)arg0 toIndex:(NSUInteger)arg1 ;
-(void)persistMetadataToFileSystemWithPathManager:(id)arg0 ;
-(void)preheatAlbumsAtIndexes:(id)arg0 forProperties:(id)arg1 relationships:(id)arg2 ;
-(void)preheatAlbumsForProperties:(id)arg0 relationships:(id)arg1 ;
-(void)prepareForDeletion;
-(void)refreshCollections;
-(void)removeChildCollections:(id)arg0 ;
-(void)removeChildCollectionsAtIndexes:(id)arg0 ;
-(void)removeChildCollectionsObject:(id)arg0 ;
-(void)removeObjectFromChildCollectionsAtIndex:(NSUInteger)arg0 ;
-(void)removePersistedFileSystemDataWithPathManager:(id)arg0 ;
-(void)replaceChildCollectionsAtIndexes:(id)arg0 withChildCollections:(id)arg1 ;
-(void)replaceObjectInChildCollectionsAtIndex:(NSUInteger)arg0 withObject:(id)arg1 ;
-(void)setNeedsReordering;
-(void)updateAlbumsOrderIfNeeded;
-(void)willSave;


@end


#endif