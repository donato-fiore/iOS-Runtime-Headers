// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PLSORTEDALBUMLIST_H
#define PLSORTEDALBUMLIST_H

@class NSMutableOrderedSet, NSString;
@protocol PLAlbumContainer, PLIndexMappingCache, NSObject><NSCopying;

#import <Foundation/Foundation.h>


@interface PLSortedAlbumList : NSObject <PLAlbumContainer, PLIndexMappingCache>

 {
    *__CFArray _toBackingMap;
    *__CFArray _fromBackingMap;
    NSMutableOrderedSet *_weak_albums;
}


@property (retain, nonatomic) NSMutableOrderedSet *_albums;
@property (readonly, retain, nonatomic) NSString *_prettyDescription;
@property (readonly, retain, nonatomic) NSString *_typeDescription;
@property (readonly, nonatomic) NSUInteger albumsCount;
@property (readonly, copy, nonatomic) id *albumsSortingComparator;
@property (retain, nonatomic) NSObject<PLAlbumContainer> *backingAlbumList; // ivar: _backingAlbumList
@property (readonly, copy, nonatomic) NSObject<NSObject><NSCopying> *cachedIndexMapState;
@property (readonly, nonatomic) NSUInteger containersCount;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) int filter;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) BOOL isFolder;
@property (copy, nonatomic) id *sortComparator; // ivar: _sortComparator
@property (readonly) Class superclass;
@property (readonly, nonatomic) NSUInteger unreadAlbumsCount;


-(BOOL)albumHasFixedOrder:(id)arg0 ;
-(BOOL)canEditAlbums;
-(BOOL)canEditContainers;
-(BOOL)hasAtLeastOneAlbum;
-(BOOL)isEmpty;
-(BOOL)mappedDataSourceChanged:(id)arg0 remoteNotificationData:(id)arg1 ;
-(BOOL)needsReordering;
-(Class)derivedChangeNotificationClass;
-(NSUInteger)countOfSortedAlbums;
-(NSUInteger)indexInSortedAlbumsOfObject:(id)arg0 ;
-(id)albums;
-(id)containers;
-(id)containersRelationshipName;
-(id)identifier;
-(id)initWithAlbumList:(id)arg0 sortComparator:(id)arg1 ;
-(id)managedObjectContext;
-(id)objectInSortedAlbumsAtIndex:(NSUInteger)arg0 ;
-(id)photoLibrary;
-(short)albumListType;
-(void)createSortedIndexesMap;
-(void)dealloc;
-(void)insertObject:(id)arg0 inSortedAlbumsAtIndex:(NSUInteger)arg1 ;
-(void)preheatAlbumsAtIndexes:(id)arg0 forProperties:(id)arg1 relationships:(id)arg2 ;
-(void)preheatAlbumsForProperties:(id)arg0 relationships:(id)arg1 ;
-(void)removeObjectFromSortedAlbumsAtIndex:(NSUInteger)arg0 ;
-(void)replaceObjectInSortedAlbumsAtIndex:(NSUInteger)arg0 withObject:(id)arg1 ;
-(void)setNeedsReordering;
-(void)updateAlbumsOrderIfNeeded;


@end


#endif