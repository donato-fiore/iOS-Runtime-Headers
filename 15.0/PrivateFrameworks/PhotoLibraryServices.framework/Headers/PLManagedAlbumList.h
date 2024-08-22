// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef PLMANAGEDALBUMLIST_H
#define PLMANAGEDALBUMLIST_H

@class NSString, NSMutableOrderedSet, NSNumber;
@protocol PLAlbumContainer, PLDerivedAlbumListOrigin, PLIndexMappersDataOrigin;


#import "PLManagedAlbumList.h"

@interface PLManagedAlbumList : PLManagedAlbumList <PLAlbumContainer, PLDerivedAlbumListOrigin, PLIndexMappersDataOrigin>

 {
    NSObject<PLIndexMappingCache>" _derivedAlbumLists;
}


@property (readonly, retain, nonatomic) NSString *_prettyDescription;
@property (readonly, retain, nonatomic) NSString *_typeDescription;
@property (nonatomic) short albumListType;
@property (readonly, nonatomic) NSMutableOrderedSet *albums;
@property (readonly, nonatomic) NSUInteger albumsCount;
@property (readonly, copy, nonatomic) id *albumsSortingComparator;
@property (readonly, nonatomic) BOOL canEditAlbums;
@property (readonly, nonatomic) NSUInteger containersCount;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) int filter;
@property (readonly, nonatomic) BOOL hasAtLeastOneAlbum;
@property (readonly) NSUInteger hash;
@property (copy, nonatomic) NSNumber *identifier;
@property (readonly, nonatomic) BOOL isFolder;
@property (nonatomic) BOOL isRegisteredForChanges; // ivar: isRegisteredForChanges
@property (copy, nonatomic) NSNumber *needsReorderingNumber;
@property (readonly) Class superclass;
@property (readonly, nonatomic) NSUInteger unreadAlbumsCount;
@property (retain, nonatomic) NSString *uuid;


+(BOOL)_albumOrderMatchesFrom:(id)arg0 inDestination:(id)arg1 ;
+(BOOL)albumKindHasFixedOrder:(int)arg0 ;
+(BOOL)isValidPathForPersistence:(id)arg0 ;
+(BOOL)isValidTypeForPersistence:(short)arg0 ;
+(BOOL)restoreAlbumListFromPersistedDataAtPath:(id)arg0 library:(id)arg1 ;
+(NSUInteger)priorityForAlbumKind:(int)arg0 ;
+(id)_albumListWithType:(short)arg0 inManagedObjectContext:(id)arg1 ;
+(id)_singletonListWithType:(short)arg0 library:(id)arg1 ;
+(id)_typeDescriptionForAlbumListType:(short)arg0 ;
+(id)_validAlbumsFromSource:(id)arg0 destination:(id)arg1 ;
+(id)albumListInManagedObjectContext:(id)arg0 ;
+(id)albumListInPhotoLibrary:(id)arg0 ;
+(id)allStreamedAlbumsListInManagedObjectContext:(id)arg0 ;
+(id)allStreamedAlbumsListInPhotoLibrary:(id)arg0 ;
+(id)eventListInManagedObjectContext:(id)arg0 ;
+(id)eventListInPhotoLibrary:(id)arg0 ;
+(id)facesAlbumListInManagedObjectContext:(id)arg0 ;
+(id)facesAlbumListInPhotoLibrary:(id)arg0 ;
+(id)importListInManagedObjectContext:(id)arg0 ;
+(id)importListInPhotoLibrary:(id)arg0 ;
+(id)keyPathsForValuesAffectingValueForKey:(id)arg0 ;
+(id)placesAlbumListInManagedObjectContext:(id)arg0 ;
+(id)placesAlbumListInPhotoLibrary:(id)arg0 ;
+(id)scenesAlbumListInManagedObjectContext:(id)arg0 ;
+(id)scenesAlbumListInPhotoLibrary:(id)arg0 ;
+(void)addSingletonObjectsToContext:(id)arg0 ;
+(void)initialize;
+(void)persistAlbumListUUIDs:(id)arg0 type:(short)arg1 pathManager:(id)arg2 allowsOverwrite:(BOOL)arg3 ;
+(void)pushChangesFromAlbumContainer:(id)arg0 toAlbumContainer:(id)arg1 ;
-(BOOL)albumHasFixedOrder:(id)arg0 ;
-(BOOL)canEditContainers;
-(BOOL)hasDerivedIndexMappers;
-(BOOL)isEmpty;
-(BOOL)needsReordering;
-(id)containers;
-(id)containersRelationshipName;
-(id)payloadForChangedKeys:(id)arg0 ;
-(id)payloadID;
-(id)payloadIDForTombstone:(id)arg0 ;
-(void)awakeFromFetch;
-(void)awakeFromInsert;
-(void)dealloc;
-(void)didSave;
-(void)enumerateDerivedAlbumLists:(id)arg0 ;
-(void)enumerateDerivedIndexMappers:(id)arg0 ;
-(void)insertIntoOrderedAlbumsAtIndexByPriorityForAlbum:(id)arg0 ;
-(void)preheatAlbumsAtIndexes:(id)arg0 forProperties:(id)arg1 relationships:(id)arg2 ;
-(void)preheatAlbumsForProperties:(id)arg0 relationships:(id)arg1 ;
-(void)registerDerivedAlbumList:(id)arg0 ;
-(void)registerForChanges;
-(void)setNeedsReordering;
-(void)unregisterAllDerivedAlbums;
-(void)unregisterForChanges;
-(void)updateAlbumsOrderIfNeeded;
-(void)willSave;
-(void)willTurnIntoFault;


@end


#endif