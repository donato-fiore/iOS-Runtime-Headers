// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef MPMEDIAPLAYLIST_H
#define MPMEDIAPLAYLIST_H

@class NSArray, NSString;


#import "MPMediaItemCollection.h"
#import "MPMediaQuery.h"

@interface MPMediaPlaylist : MPMediaItemCollection {
    NSArray *_representativeArtists;
    MPMediaQuery *_seedTracksQuery;
}


@property (readonly, nonatomic) NSString *authorDisplayName;
@property (readonly, nonatomic) NSString *cloudGlobalID;
@property (readonly, nonatomic) NSString *descriptionText;
@property (readonly, nonatomic) NSString *name;
@property (readonly, nonatomic) NSUInteger persistentID;
@property (readonly, nonatomic) NSUInteger playlistAttributes;
@property (readonly, nonatomic) NSArray *seedItems;


+(BOOL)_isValidPlaylistProperty:(id)arg0 ;
+(BOOL)canFilterByProperty:(id)arg0 ;
+(BOOL)supportsSecureCoding;
+(void)_createFilterableDictionary;
-(BOOL)existsInLibrary;
-(BOOL)isCloudMix;
-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)count;
-(NSUInteger)hash;
-(NSUInteger)mediaTypes;
-(id)artworkCatalog;
-(id)artworkCatalogsWithMaximumCount:(NSUInteger)arg0 ;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithMultiverseIdentifier:(id)arg0 library:(id)arg1 ;
-(id)initWithPersistentID:(NSUInteger)arg0 ;
-(id)initWithPersistentID:(NSUInteger)arg0 mediaLibrary:(id)arg1 ;
-(id)items;
-(id)multiverseIdentifier;
-(id)representativeArtists;
-(id)representativeItem;
-(id)seedTracksQuery;
-(id)tiledArtworkCatalogWithRows:(NSUInteger)arg0 columns:(NSUInteger)arg1 ;
-(id)valueForProperty:(id)arg0 ;
-(void)addItemWithProductID:(id)arg0 completionHandler:(id)arg1 ;
-(void)addMediaItems:(id)arg0 completionHandler:(id)arg1 ;
-(void)encodeWithCoder:(id)arg0 ;
-(void)removeFirstItem;
-(void)setUserSelectedArtworkImage:(id)arg0 ;


@end


#endif