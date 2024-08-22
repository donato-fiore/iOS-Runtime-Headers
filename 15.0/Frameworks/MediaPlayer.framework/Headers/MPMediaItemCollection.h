// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef MPMEDIAITEMCOLLECTION_H
#define MPMEDIAITEMCOLLECTION_H

@class NSArray;


#import "MPMediaEntity.h"
#import "MPMediaQuery.h"
#import "MPMediaItem.h"

@interface MPMediaItemCollection : MPMediaEntity {
    NSUInteger _containedMediaTypes;
    BOOL _initializedContainedMediaTypes;
    NSArray *_items;
    NSUInteger _itemsCount;
    MPMediaQuery *_itemsQuery;
    MPMediaItem *_representativeItem;
}


@property (readonly, nonatomic) NSUInteger count;
@property (readonly, nonatomic) NSInteger groupingType;
@property (readonly, nonatomic) NSArray *items;
@property (readonly, nonatomic) NSUInteger mediaTypes;
@property (readonly, nonatomic) MPMediaItem *representativeItem;


+(BOOL)supportsSecureCoding;
+(id)artworkCatalogCachePropertiesForGroupingType:(NSInteger)arg0 ;
+(id)collectionWithItems:(id)arg0 ;
+(id)representativePersistentIDPropertyForGroupingType:(NSInteger)arg0 ;
+(id)sortTitlePropertyForGroupingType:(NSInteger)arg0 ;
+(id)titlePropertyForGroupingType:(NSInteger)arg0 ;
-(BOOL)MPSD_hasDownloadableItem;
-(BOOL)MPSD_hasDownloadingItem;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)setValue:(id)arg0 forProperty:(id)arg1 ;
-(NSUInteger)hash;
-(id)_artworkCatalogRepresentativeItem;
-(id)albumArtistArtworkCatalog;
-(id)artistArtworkCatalog;
-(id)artworkCatalog;
-(id)init;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithItems:(id)arg0 ;
-(id)initWithItemsQuery:(id)arg0 ;
-(id)initWithMultiverseIdentifier:(id)arg0 library:(id)arg1 ;
-(id)multiverseIdentifier;
-(void)_enumerateItemPersistentIDsUsingBlock:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;
-(void)setValue:(id)arg0 forProperty:(id)arg1 withCompletionBlock:(id)arg2 ;


@end


#endif