// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef MUSICKIT_SOFTLINKING_MPMUSICPLAYERITEM_H
#define MUSICKIT_SOFTLINKING_MPMUSICPLAYERITEM_H

@class NSString, NSNumber, NSDictionary, NSDate;
@protocol MusicKit_SoftLinking_MPArtworkCatalog;

#import <Foundation/Foundation.h>

#import "MusicKit_SoftLinking_CatalogID.h"

@interface MusicKit_SoftLinking_MPMusicPlayerItem : NSObject

@property (readonly, copy, nonatomic) NSString *albumTitle; // ivar: _albumTitle
@property (readonly, copy, nonatomic) NSString *artistName; // ivar: _artistName
@property (readonly, nonatomic) NSObject<MusicKit_SoftLinking_MPArtworkCatalog> *artworkCatalog; // ivar: _artworkCatalog
@property (readonly, copy, nonatomic) NSNumber *discNumber; // ivar: _discNumber
@property (readonly, copy, nonatomic) NSNumber *duration; // ivar: _duration
@property (readonly, copy, nonatomic) NSString *genreIdentifier; // ivar: _genreIdentifier
@property (readonly, copy, nonatomic) NSString *genreName; // ivar: _genreName
@property (readonly, copy, nonatomic) NSNumber *has4K; // ivar: _has4K
@property (readonly, copy, nonatomic) NSNumber *hasHDR; // ivar: _hasHDR
@property (readonly, copy, nonatomic) NSString *identifier; // ivar: _identifier
@property (readonly, nonatomic) BOOL isMusicVideo; // ivar: _isMusicVideo
@property (readonly, copy, nonatomic) NSDictionary *playParametersDictionary; // ivar: _playParametersDictionary
@property (readonly, copy, nonatomic) NSDate *releaseDate; // ivar: _releaseDate
@property (readonly, copy, nonatomic) NSString *subtitle; // ivar: _subtitle
@property (readonly, copy, nonatomic) NSString *title; // ivar: _title
@property (readonly, copy, nonatomic) NSNumber *trackNumber; // ivar: _trackNumber
@property (readonly, nonatomic) MusicKit_SoftLinking_CatalogID *underlyingItemCatalogID; // ivar: _underlyingItemCatalogID
@property (readonly, nonatomic) NSString *underlyingItemLibraryID; // ivar: _underlyingItemLibraryID


+(id)playerItemForMediaItem:(id)arg0 ;
-(id)_initWithMediaItem:(id)arg0 ;
-(id)description;
-(void)_initializeAdditionalAttributesWithMediaItem:(id)arg0 ;
-(void)_initializeArtworkCatalogWithMediaItem:(id)arg0 ;
-(void)_initializeBasicPropertiesWithMediaItem:(id)arg0 ;


@end


#endif