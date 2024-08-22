// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef PLFILTEREDALBUMLIST_H
#define PLFILTEREDALBUMLIST_H

@class NSMutableIndexSet, NSMutableOrderedSet, NSString, NSIndexSet, NSPredicate;
@protocol PLAlbumContainer, PLIndexMapperDataSource, PLIndexMappingCache, PLDerivedAlbumListOrigin, NSObject><NSCopying;

#import <Foundation/Foundation.h>

#import "PLIndexMapper.h"
#import "PLManagedAlbumList.h"
#import "PLPhotoLibrary.h"

@interface PLFilteredAlbumList : NSObject <PLAlbumContainer, PLIndexMapperDataSource, PLIndexMappingCache, PLDerivedAlbumListOrigin>

 {
    PLIndexMapper *_indexMapper;
    NSMutableIndexSet *_filteredIndexes;
    NSMutableOrderedSet *_weak_albums;
    NSObject<PLIndexMappingCache>" _derivedAlbumLists;
}


@property (retain, nonatomic) NSMutableOrderedSet *_albums;
@property (readonly, retain, nonatomic) NSString *_prettyDescription;
@property (readonly, retain, nonatomic) NSString *_typeDescription;
@property (readonly, nonatomic) short albumListType;
@property (readonly, nonatomic) NSMutableOrderedSet *albums;
@property (readonly, nonatomic) NSUInteger albumsCount;
@property (readonly, copy, nonatomic) id *albumsSortingComparator;
@property (retain, nonatomic) PLManagedAlbumList *backingAlbumList; // ivar: backingAlbumList
@property (readonly, copy, nonatomic) NSObject<NSObject><NSCopying> *cachedIndexMapState;
@property (readonly, nonatomic) BOOL canEditAlbums;
@property (readonly, nonatomic) NSUInteger containersCount;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic) int filter; // ivar: filter
@property (readonly, copy, nonatomic) NSIndexSet *filteredIndexes;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) PLIndexMapper *indexMapper;
@property (readonly, nonatomic) BOOL isFolder;
@property (readonly, nonatomic) PLPhotoLibrary *photoLibrary;
@property (retain, nonatomic) NSPredicate *predicate; // ivar: predicate
@property (readonly) Class superclass;
@property (readonly, nonatomic) NSUInteger unreadAlbumsCount;


+(id)filteredAlbumList:(id)arg0 filter:(int)arg1 ;
-(BOOL)albumHasFixedOrder:(id)arg0 ;
-(BOOL)canEditContainers;
-(BOOL)hasAtLeastOneAlbum;
-(BOOL)isEmpty;
-(BOOL)mappedDataSourceChanged:(id)arg0 remoteNotificationData:(id)arg1 ;
-(BOOL)needsReordering;
-(BOOL)shouldIncludeObjectAtIndex:(NSUInteger)arg0 ;
-(Class)derivedChangeNotificationClass;
-(NSUInteger)countOfFilteredAlbums;
-(NSUInteger)indexInFilteredAlbumsOfObject:(id)arg0 ;
-(id)containers;
-(id)containersRelationshipName;
-(id)filteredAlbumsAtIndexes:(id)arg0 ;
-(id)identifier;
-(id)initWithBackingAlbumList:(id)arg0 filter:(int)arg1 ;
-(id)managedObjectContext;
-(id)objectInFilteredAlbumsAtIndex:(NSUInteger)arg0 ;
-(void)_backingContextDidChange:(id)arg0 ;
-(void)_invalidateFilteredIndexes;
-(void)dealloc;
-(void)enumerateDerivedAlbumLists:(id)arg0 ;
-(void)insertFilteredAlbums:(id)arg0 atIndexes:(id)arg1 ;
-(void)insertObject:(id)arg0 inFilteredAlbumsAtIndex:(NSUInteger)arg1 ;
-(void)preheatAlbumsAtIndexes:(id)arg0 forProperties:(id)arg1 relationships:(id)arg2 ;
-(void)preheatAlbumsForProperties:(id)arg0 relationships:(id)arg1 ;
-(void)registerDerivedAlbumList:(id)arg0 ;
-(void)removeFilteredAlbumsAtIndexes:(id)arg0 ;
-(void)removeObjectFromFilteredAlbumsAtIndex:(NSUInteger)arg0 ;
-(void)replaceFilteredAlbumsAtIndexes:(id)arg0 withFilteredValues:(id)arg1 ;
-(void)replaceObjectInFilteredAlbumsAtIndex:(NSUInteger)arg0 withObject:(id)arg1 ;
-(void)setNeedsReordering;
-(void)unregisterAllDerivedAlbums;
-(void)updateAlbumsOrderIfNeeded;


@end


#endif