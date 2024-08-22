// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef _INPBMESSAGELINKMETADATA_H
#define _INPBMESSAGELINKMETADATA_H

@class PBCodable, NSString, NSArray;
@protocol _INPBMessageLinkMetadata, NSSecureCoding, NSCopying;


#import "_INPBDateTime.h"

@interface _INPBMessageLinkMetadata : PBCodable <_INPBMessageLinkMetadata, NSSecureCoding, NSCopying>

 {
    ? _has;
}


@property (copy, nonatomic) NSString *albumArtist; // ivar: _albumArtist
@property (copy, nonatomic) NSString *albumName; // ivar: _albumName
@property (copy, nonatomic) NSString *appleTvSubtitle; // ivar: _appleTvSubtitle
@property (copy, nonatomic) NSString *appleTvTitle; // ivar: _appleTvTitle
@property (copy, nonatomic) NSString *artistGenre; // ivar: _artistGenre
@property (copy, nonatomic) NSString *artistName; // ivar: _artistName
@property (copy, nonatomic) NSString *audioBookAuthor; // ivar: _audioBookAuthor
@property (copy, nonatomic) NSString *audioBookName; // ivar: _audioBookName
@property (copy, nonatomic) NSString *audioBookNarrator; // ivar: _audioBookNarrator
@property (copy, nonatomic) NSString *bookAuthor; // ivar: _bookAuthor
@property (copy, nonatomic) NSString *bookName; // ivar: _bookName
@property (copy, nonatomic) NSString *creator; // ivar: _creator
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) BOOL hasAlbumArtist;
@property (readonly, nonatomic) BOOL hasAlbumName;
@property (readonly, nonatomic) BOOL hasAppleTvSubtitle;
@property (readonly, nonatomic) BOOL hasAppleTvTitle;
@property (readonly, nonatomic) BOOL hasArtistGenre;
@property (readonly, nonatomic) BOOL hasArtistName;
@property (readonly, nonatomic) BOOL hasAudioBookAuthor;
@property (readonly, nonatomic) BOOL hasAudioBookName;
@property (readonly, nonatomic) BOOL hasAudioBookNarrator;
@property (readonly, nonatomic) BOOL hasBookAuthor;
@property (readonly, nonatomic) BOOL hasBookName;
@property (readonly, nonatomic) BOOL hasCreator;
@property (readonly, nonatomic) BOOL hasITunesStoreFrontIdentifier;
@property (readonly, nonatomic) BOOL hasITunesStoreIdentifier;
@property (readonly, nonatomic) BOOL hasItemType;
@property (nonatomic) BOOL hasLinkMediaType;
@property (readonly, nonatomic) BOOL hasMovieBundleGenre;
@property (readonly, nonatomic) BOOL hasMovieBundleName;
@property (readonly, nonatomic) BOOL hasMovieGenre;
@property (readonly, nonatomic) BOOL hasMovieName;
@property (readonly, nonatomic) BOOL hasMusicVideoArtist;
@property (readonly, nonatomic) BOOL hasMusicVideoName;
@property (readonly, nonatomic) BOOL hasOriginalURL;
@property (readonly, nonatomic) BOOL hasPlaylistCurator;
@property (readonly, nonatomic) BOOL hasPlaylistName;
@property (readonly, nonatomic) BOOL hasPodcastArtist;
@property (readonly, nonatomic) BOOL hasPodcastEpisodeArtist;
@property (readonly, nonatomic) BOOL hasPodcastEpisodeName;
@property (readonly, nonatomic) BOOL hasPodcastEpisodePodcastName;
@property (readonly, nonatomic) BOOL hasPodcastEpisodeReleaseDate;
@property (readonly, nonatomic) BOOL hasPodcastName;
@property (readonly, nonatomic) BOOL hasRadioCurator;
@property (readonly, nonatomic) BOOL hasRadioName;
@property (readonly, nonatomic) BOOL hasSiteName;
@property (readonly, nonatomic) BOOL hasSoftwareGenre;
@property (readonly, nonatomic) BOOL hasSoftwareName;
@property (readonly, nonatomic) BOOL hasSoftwarePlatform;
@property (readonly, nonatomic) BOOL hasSongAlbum;
@property (readonly, nonatomic) BOOL hasSongArtist;
@property (readonly, nonatomic) BOOL hasSongTitle;
@property (readonly, nonatomic) BOOL hasSummary;
@property (readonly, nonatomic) BOOL hasTitle;
@property (readonly, nonatomic) BOOL hasTvEpisodeEpisodeName;
@property (readonly, nonatomic) BOOL hasTvEpisodeGenre;
@property (readonly, nonatomic) BOOL hasTvEpisodeSeasonName;
@property (readonly, nonatomic) BOOL hasTvSeasonGenre;
@property (readonly, nonatomic) BOOL hasTvSeasonName;
@property (readonly, nonatomic) BOOL hasTvShowName;
@property (readonly) NSUInteger hash;
@property (copy, nonatomic) NSString *iTunesStoreFrontIdentifier; // ivar: _iTunesStoreFrontIdentifier
@property (copy, nonatomic) NSString *iTunesStoreIdentifier; // ivar: _iTunesStoreIdentifier
@property (copy, nonatomic) NSArray *iconURLs; // ivar: _iconURLs
@property (readonly, nonatomic) NSUInteger iconURLsCount;
@property (copy, nonatomic) NSArray *imageURLs; // ivar: _imageURLs
@property (readonly, nonatomic) NSUInteger imageURLsCount;
@property (copy, nonatomic) NSString *itemType; // ivar: _itemType
@property (nonatomic) int linkMediaType; // ivar: _linkMediaType
@property (copy, nonatomic) NSString *movieBundleGenre; // ivar: _movieBundleGenre
@property (copy, nonatomic) NSString *movieBundleName; // ivar: _movieBundleName
@property (copy, nonatomic) NSString *movieGenre; // ivar: _movieGenre
@property (copy, nonatomic) NSString *movieName; // ivar: _movieName
@property (copy, nonatomic) NSString *musicVideoArtist; // ivar: _musicVideoArtist
@property (copy, nonatomic) NSString *musicVideoName; // ivar: _musicVideoName
@property (copy, nonatomic) NSString *originalURL; // ivar: _originalURL
@property (copy, nonatomic) NSString *playlistCurator; // ivar: _playlistCurator
@property (copy, nonatomic) NSString *playlistName; // ivar: _playlistName
@property (copy, nonatomic) NSString *podcastArtist; // ivar: _podcastArtist
@property (copy, nonatomic) NSString *podcastEpisodeArtist; // ivar: _podcastEpisodeArtist
@property (copy, nonatomic) NSString *podcastEpisodeName; // ivar: _podcastEpisodeName
@property (copy, nonatomic) NSString *podcastEpisodePodcastName; // ivar: _podcastEpisodePodcastName
@property (retain, nonatomic) _INPBDateTime *podcastEpisodeReleaseDate; // ivar: _podcastEpisodeReleaseDate
@property (copy, nonatomic) NSString *podcastName; // ivar: _podcastName
@property (copy, nonatomic) NSString *radioCurator; // ivar: _radioCurator
@property (copy, nonatomic) NSString *radioName; // ivar: _radioName
@property (copy, nonatomic) NSString *siteName; // ivar: _siteName
@property (copy, nonatomic) NSString *softwareGenre; // ivar: _softwareGenre
@property (copy, nonatomic) NSString *softwareName; // ivar: _softwareName
@property (copy, nonatomic) NSString *softwarePlatform; // ivar: _softwarePlatform
@property (copy, nonatomic) NSString *songAlbum; // ivar: _songAlbum
@property (copy, nonatomic) NSString *songArtist; // ivar: _songArtist
@property (copy, nonatomic) NSString *songTitle; // ivar: _songTitle
@property (copy, nonatomic) NSString *summary; // ivar: _summary
@property (readonly) Class superclass;
@property (copy, nonatomic) NSString *title; // ivar: _title
@property (copy, nonatomic) NSString *tvEpisodeEpisodeName; // ivar: _tvEpisodeEpisodeName
@property (copy, nonatomic) NSString *tvEpisodeGenre; // ivar: _tvEpisodeGenre
@property (copy, nonatomic) NSString *tvEpisodeSeasonName; // ivar: _tvEpisodeSeasonName
@property (copy, nonatomic) NSString *tvSeasonGenre; // ivar: _tvSeasonGenre
@property (copy, nonatomic) NSString *tvSeasonName; // ivar: _tvSeasonName
@property (copy, nonatomic) NSString *tvShowName; // ivar: _tvShowName


+(BOOL)supportsSecureCoding;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)readFrom:(id)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)dictionaryRepresentation;
-(id)iconURLAtIndex:(NSUInteger)arg0 ;
-(id)imageURLAtIndex:(NSUInteger)arg0 ;
-(id)initWithCoder:(id)arg0 ;
-(id)linkMediaTypeAsString:(int)arg0 ;
-(int)StringAsLinkMediaType:(id)arg0 ;
-(void)addIconURL:(id)arg0 ;
-(void)addImageURL:(id)arg0 ;
-(void)clearIconURLs;
-(void)clearImageURLs;
-(void)encodeWithCoder:(id)arg0 ;
-(void)writeTo:(id)arg0 ;


@end


#endif