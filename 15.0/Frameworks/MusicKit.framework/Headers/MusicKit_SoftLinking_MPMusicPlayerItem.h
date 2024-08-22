// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef MUSICKIT_SOFTLINKING_MPMUSICPLAYERITEM_H
#define MUSICKIT_SOFTLINKING_MPMUSICPLAYERITEM_H

@class NSString, NSDictionary, NSNumber, NSDate;

#import <Foundation/Foundation.h>

#import "MusicKit_SoftLinking_MPArtworkCatalog.h"

@interface MusicKit_SoftLinking_MPMusicPlayerItem : NSObject

@property (readonly, copy, nonatomic) NSString *albumTitle; // ivar: _albumTitle
@property (readonly, copy, nonatomic) NSString *artistName; // ivar: _artistName
@property (readonly, nonatomic) MusicKit_SoftLinking_MPArtworkCatalog *artworkCatalog; // ivar: _artworkCatalog
@property (readonly, copy, nonatomic) NSString *artworkDataSourceIdentifier; // ivar: _artworkDataSourceIdentifier
@property (readonly, copy, nonatomic) NSString *artworkDataSourceShortDescription; // ivar: _artworkDataSourceShortDescription
@property (readonly, copy, nonatomic) NSDictionary *artworkDictionary; // ivar: _artworkDictionary
@property (readonly, copy, nonatomic) NSDictionary *artworkTokenParameters; // ivar: _artworkTokenParameters
@property (readonly, copy, nonatomic) NSString *artworkVisualIdenticalityIdentifier; // ivar: _artworkVisualIdenticalityIdentifier
@property (readonly, copy, nonatomic) NSNumber *discNumber; // ivar: _discNumber
@property (readonly, copy, nonatomic) NSString *genreIdentifier; // ivar: _genreIdentifier
@property (readonly, copy, nonatomic) NSString *genreName; // ivar: _genreName
@property (readonly, copy, nonatomic) NSNumber *has4K; // ivar: _has4K
@property (readonly, copy, nonatomic) NSNumber *hasHDR; // ivar: _hasHDR
@property (readonly, copy, nonatomic) NSString *identifier; // ivar: _identifier
@property (readonly, nonatomic) BOOL isBackedByLibraryItem; // ivar: _isBackedByLibraryItem
@property (readonly, nonatomic) BOOL isMusicVideo; // ivar: _isMusicVideo
@property (readonly, copy, nonatomic) NSDictionary *playParametersDictionary; // ivar: _playParametersDictionary
@property (readonly, copy, nonatomic) NSDate *releaseDate; // ivar: _releaseDate
@property (readonly, copy, nonatomic) NSString *subtitle; // ivar: _subtitle
@property (readonly, copy, nonatomic) NSString *title; // ivar: _title
@property (readonly, copy, nonatomic) NSNumber *trackNumber; // ivar: _trackNumber
@property (readonly, copy, nonatomic) NSString *underlyingItemIdentifier; // ivar: _underlyingItemIdentifier


+(id)playerItemForMediaItem:(id)arg0 ;
-(id)_initWithMediaItem:(id)arg0 ;
-(id)description;
-(void)_initializeAdditionalAttributesWithMediaItem:(id)arg0 ;
-(void)_initializeArtworkPropertiesWithMediaItem:(id)arg0 ;
-(void)_initializeBasicPropertiesWithMediaItem:(id)arg0 ;


@end


#endif