// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef INMESSAGELINKMETADATA_H
#define INMESSAGELINKMETADATA_H

@class NSString, NSArray, NSDateComponents;
@protocol INJSONSerializable, NSCopying, NSSecureCoding;

#import <Foundation/Foundation.h>


@interface INMessageLinkMetadata : NSObject <INJSONSerializable, NSCopying, NSSecureCoding>



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
@property (readonly) NSUInteger hash;
@property (copy, nonatomic) NSString *iTunesStoreFrontIdentifier; // ivar: _iTunesStoreFrontIdentifier
@property (copy, nonatomic) NSString *iTunesStoreIdentifier; // ivar: _iTunesStoreIdentifier
@property (copy, nonatomic) NSArray *iconURLs; // ivar: _iconURLs
@property (copy, nonatomic) NSArray *imageURLs; // ivar: _imageURLs
@property (copy, nonatomic) NSString *itemType; // ivar: _itemType
@property (nonatomic) NSInteger linkMediaType; // ivar: _linkMediaType
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
@property (copy, nonatomic) NSDateComponents *podcastEpisodeReleaseDate; // ivar: _podcastEpisodeReleaseDate
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
+(id)_intents_decodeWithJSONDecoder:(id)arg0 codableDescription:(id)arg1 from:(id)arg2 ;
-(BOOL)isEqual:(id)arg0 ;
-(id)_dictionaryRepresentation;
-(id)_intents_encodeWithJSONEncoder:(id)arg0 codableDescription:(id)arg1 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)descriptionAtIndent:(NSUInteger)arg0 ;
-(id)init;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithSiteName:(id)arg0 summary:(id)arg1 title:(id)arg2 itemType:(id)arg3 originalURL:(id)arg4 imageURLs:(id)arg5 iconURLs:(id)arg6 creator:(id)arg7 linkMediaType:(NSInteger)arg8 iTunesStoreIdentifier:(id)arg9 iTunesStoreFrontIdentifier:(id)arg10 songTitle:(id)arg11 songArtist:(id)arg12 songAlbum:(id)arg13 albumName:(id)arg14 albumArtist:(id)arg15 musicVideoName:(id)arg16 musicVideoArtist:(id)arg17 artistName:(id)arg18 artistGenre:(id)arg19 playlistName:(id)arg20 playlistCurator:(id)arg21 radioName:(id)arg22 radioCurator:(id)arg23 softwareName:(id)arg24 softwareGenre:(id)arg25 softwarePlatform:(id)arg26 bookName:(id)arg27 bookAuthor:(id)arg28 audioBookName:(id)arg29 audioBookAuthor:(id)arg30 audioBookNarrator:(id)arg31 podcastName:(id)arg32 podcastArtist:(id)arg33 podcastEpisodeName:(id)arg34 podcastEpisodePodcastName:(id)arg35 podcastEpisodeArtist:(id)arg36 podcastEpisodeReleaseDate:(id)arg37 tvEpisodeEpisodeName:(id)arg38 tvEpisodeSeasonName:(id)arg39 tvEpisodeGenre:(id)arg40 tvSeasonName:(id)arg41 tvSeasonGenre:(id)arg42 movieName:(id)arg43 movieGenre:(id)arg44 ;
-(id)initWithSiteName:(id)arg0 summary:(id)arg1 title:(id)arg2 itemType:(id)arg3 originalURL:(id)arg4 imageURLs:(id)arg5 iconURLs:(id)arg6 creator:(id)arg7 linkMediaType:(NSInteger)arg8 iTunesStoreIdentifier:(id)arg9 iTunesStoreFrontIdentifier:(id)arg10 songTitle:(id)arg11 songArtist:(id)arg12 songAlbum:(id)arg13 albumName:(id)arg14 albumArtist:(id)arg15 musicVideoName:(id)arg16 musicVideoArtist:(id)arg17 artistName:(id)arg18 artistGenre:(id)arg19 playlistName:(id)arg20 playlistCurator:(id)arg21 radioName:(id)arg22 radioCurator:(id)arg23 softwareName:(id)arg24 softwareGenre:(id)arg25 softwarePlatform:(id)arg26 bookName:(id)arg27 bookAuthor:(id)arg28 audioBookName:(id)arg29 audioBookAuthor:(id)arg30 audioBookNarrator:(id)arg31 podcastName:(id)arg32 podcastArtist:(id)arg33 podcastEpisodeName:(id)arg34 podcastEpisodePodcastName:(id)arg35 podcastEpisodeArtist:(id)arg36 podcastEpisodeReleaseDate:(id)arg37 tvEpisodeEpisodeName:(id)arg38 tvEpisodeSeasonName:(id)arg39 tvEpisodeGenre:(id)arg40 tvSeasonName:(id)arg41 tvSeasonGenre:(id)arg42 movieName:(id)arg43 movieGenre:(id)arg44 tvShowName:(id)arg45 movieBundleName:(id)arg46 movieBundleGenre:(id)arg47 appleTvTitle:(id)arg48 appleTvSubtitle:(id)arg49 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif