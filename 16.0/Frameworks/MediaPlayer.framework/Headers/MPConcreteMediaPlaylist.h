// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef MPCONCRETEMEDIAPLAYLIST_H
#define MPCONCRETEMEDIAPLAYLIST_H

@class NSMutableDictionary;
@protocol NSCopying, OS_dispatch_queue;


#import "MPMediaPlaylist.h"
#import "MPMediaQuery.h"

@interface MPConcreteMediaPlaylist : MPMediaPlaylist <NSCopying>

 {
    NSObject<OS_dispatch_queue> *_accessQueue;
    NSMutableDictionary *_properties;
    MPMediaQuery *_itemsQuery;
    *void _clusterPlaylist;
}




+(BOOL)supportsSecureCoding;
-(BOOL)_allowsEditing;
-(BOOL)beginGeneratingGeniusClusterItemsWithSeedItems:(id)arg0 error:(*id)arg1 ;
-(BOOL)existsInLibrary;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)setValue:(id)arg0 forProperty:(id)arg1 ;
-(NSUInteger)count;
-(NSUInteger)hash;
-(NSUInteger)mediaTypes;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)geniusClusterItemsWithCount:(NSUInteger)arg0 error:(*id)arg1 ;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithProperties:(id)arg0 itemsQuery:(id)arg1 ;
-(id)items;
-(id)itemsQuery;
-(id)mediaLibrary;
-(id)multiverseIdentifier;
-(id)representativeItem;
-(id)valueForProperty:(id)arg0 ;
-(id)valuesForProperties:(id)arg0 ;
-(void)_enumerateItemPersistentIDsUsingBlock:(id)arg0 ;
-(void)_updateLibraryForPlaylistEdit:(id)arg0 ;
-(void)addItemWithProductID:(id)arg0 completionHandler:(id)arg1 ;
-(void)addMediaItems:(id)arg0 completionHandler:(id)arg1 ;
-(void)appendItem:(id)arg0 completion:(id)arg1 ;
-(void)appendItems:(id)arg0 completion:(id)arg1 ;
-(void)encodeWithCoder:(id)arg0 ;
-(void)endGeneratingGeniusClusterItems;
-(void)moveItemFromIndex:(NSUInteger)arg0 toIndex:(NSUInteger)arg1 completionBlock:(id)arg2 ;
-(void)populateWithSeedItem:(id)arg0 completionBlock:(id)arg1 ;
-(void)populateWithSeedItem:(id)arg0 queue:(id)arg1 completionBlock:(id)arg2 ;
-(void)removeAllItems;
-(void)removeFirstItem;
-(void)removeItems:(id)arg0 atFilteredIndexes:(id)arg1 completionBlock:(id)arg2 ;
-(void)replaceItems:(id)arg0 completion:(id)arg1 ;
-(void)replaceItemsWithPersistentIDs:(id)arg0 completion:(id)arg1 ;
-(void)setValue:(id)arg0 forProperty:(id)arg1 withCompletionBlock:(id)arg2 ;


@end


#endif