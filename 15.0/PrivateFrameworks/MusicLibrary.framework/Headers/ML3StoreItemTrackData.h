// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef ML3STOREITEMTRACKDATA_H
#define ML3STOREITEMTRACKDATA_H

@class NSArray, NSData, NSDateFormatter;

#import <Foundation/Foundation.h>


@interface ML3StoreItemTrackData : NSObject {
    NSArray *_lookupItems;
    NSData *_trackData;
    NSArray *_parsedStoreItemsImportProperties;
    NSDateFormatter *_storePlatformDateFormatter;
}


@property (readonly, nonatomic) NSArray *parsedStoreItemsImportProperties;
@property (readonly, nonatomic) NSUInteger trackCount;
@property (readonly, nonatomic) NSData *trackData;


-(BOOL)_platformMetadataItem:(id)arg0 matchesKind:(id)arg1 ;
-(BOOL)_platformMetadataItemIsAUCAudioKind:(id)arg0 ;
-(BOOL)_platformMetadataItemIsAUCKind:(id)arg0 ;
-(BOOL)_platformMetadataItemIsAUCVideoKind:(id)arg0 ;
-(BOOL)_platformMetadataItemIsMovieKind:(id)arg0 ;
-(BOOL)_platformMetadataItemIsMusicKind:(id)arg0 ;
-(BOOL)_platformMetadataItemIsMusicVideoKind:(id)arg0 ;
-(BOOL)_platformMetadataItemIsSongKind:(id)arg0 ;
-(BOOL)_platformMetadataItemIsTVShowKind:(id)arg0 ;
-(BOOL)_platformMetadataItemIsVideoKind:(id)arg0 ;
-(CGFloat)_songDurationFromOffersArray:(id)arg0 ;
-(NSInteger)_episodeTypeFromVideoSubTypeString:(id)arg0 ;
-(id)_allSongItemsFromCollectionLookupItem:(id)arg0 ;
-(id)_allSongItemsFromLookupItems:(id)arg0 ;
-(id)_artworkTokenForItemWithCollectionID:(NSInteger)arg0 itemID:(NSInteger)arg1 ;
-(id)_artworkTokenFromLookupItem:(id)arg0 ;
-(id)_bestAlbumArtworkImageURLFromStoreArtworkVariants:(id)arg0 ;
-(id)_bestArtworkImageURLFromStoreArtworkVariants:(id)arg0 cropStyle:(id)arg1 ;
-(id)_bestPlaylistArtworkImageURLFromStoreArtworkVariants:(id)arg0 ;
-(id)_importDictionaryForLookupItem:(id)arg0 parentCollectionCache:(id)arg1 ;
-(id)_lookupItemArtworksForArtworkDictionaries:(id)arg0 ;
-(id)_parentDictForItemAlbumId:(id)arg0 ;
-(id)_storeItemsImportPropertiesFromLookupItems:(id)arg0 ;
-(id)_storeItemsImportPropertiesFromTrackData:(id)arg0 ;
-(id)_storePlatformDateFormatter;
-(id)initWithLookupItems:(id)arg0 ;
-(id)initWithTrackData:(id)arg0 ;


@end


#endif