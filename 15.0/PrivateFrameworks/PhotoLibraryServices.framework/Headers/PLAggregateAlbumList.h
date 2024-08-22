// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef PLAGGREGATEALBUMLIST_H
#define PLAGGREGATEALBUMLIST_H

@class NSMutableOrderedSet, NSString;
@protocol PLAssetContainerListChangeObserver, PLAlbumContainer;

#import <Foundation/Foundation.h>


@interface PLAggregateAlbumList : NSObject <PLAssetContainerListChangeObserver, PLAlbumContainer>

 {
    NSMutableOrderedSet *_allAlbums;
    NSMutableOrderedSet *_childAlbumLists;
}


@property (readonly, retain, nonatomic) NSString *_prettyDescription;
@property (readonly, retain, nonatomic) NSString *_typeDescription;
@property (readonly, nonatomic) NSUInteger albumsCount;
@property (readonly, copy, nonatomic) id *albumsSortingComparator;
@property (readonly, nonatomic) NSUInteger containersCount;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic) int filter; // ivar: _filter
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) BOOL isFolder;
@property (readonly) Class superclass;
@property (readonly, nonatomic) NSUInteger unreadAlbumsCount;


+(id)albumListWithFilter:(int)arg0 inPhotoLibrary:(id)arg1 ;
-(BOOL)albumHasFixedOrder:(id)arg0 ;
-(BOOL)canEditAlbums;
-(BOOL)canEditContainers;
-(BOOL)hasAtLeastOneAlbum;
-(BOOL)isEmpty;
-(BOOL)needsReordering;
-(id)albums;
-(id)containers;
-(id)containersRelationshipName;
-(id)identifier;
-(id)initWithFilter:(int)arg0 inPhotoLibrary:(id)arg1 ;
-(id)managedObjectContext;
-(id)photoLibrary;
-(short)albumListType;
-(void)_invalidateAllAlbums;
-(void)assetContainerListDidChange:(id)arg0 ;
-(void)dealloc;
-(void)preheatAlbumsAtIndexes:(id)arg0 forProperties:(id)arg1 relationships:(id)arg2 ;
-(void)preheatAlbumsForProperties:(id)arg0 relationships:(id)arg1 ;
-(void)setNeedsReordering;
-(void)updateAlbumsOrderIfNeeded;


@end


#endif