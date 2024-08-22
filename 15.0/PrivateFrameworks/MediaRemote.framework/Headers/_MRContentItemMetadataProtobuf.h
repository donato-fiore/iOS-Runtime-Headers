// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef _MRCONTENTITEMMETADATAPROTOBUF_H
#define _MRCONTENTITEMMETADATAPROTOBUF_H

@class PBCodable, NSString, NSMutableArray, NSData;
@protocol NSCopying;


#import "_MRAudioFormatProtobuf.h"
#import "_MRAudioRouteProtobuf.h"

@interface _MRContentItemMetadataProtobuf : PBCodable <NSCopying>

 {
    CGFloat _duration;
    CGFloat _elapsedTime;
    CGFloat _elapsedTimeTimestamp;
    NSInteger _iTunesStoreAlbumIdentifier;
    NSInteger _iTunesStoreArtistIdentifier;
    NSInteger _iTunesStoreIdentifier;
    NSInteger _iTunesStoreSubscriptionIdentifier;
    CGFloat _inferredTimestamp;
    NSInteger _legacyUniqueIdentifier;
    NSInteger _radioStationIdentifier;
    CGFloat _releaseDate;
    CGFloat _startTime;
    _MRAudioFormatProtobuf *_activeFormat;
    int _activeFormatJustification;
    NSString *_albumArtistName;
    NSString *_albumName;
    int _albumTraits;
    NSString *_albumYear;
    NSMutableArray *_alternativeFormats;
    NSData *_appMetricsData;
    int _artworkDataHeightDeprecated;
    int _artworkDataWidthDeprecated;
    NSString *_artworkFileURL;
    NSString *_artworkIdentifier;
    NSString *_artworkMIMEType;
    NSString *_artworkURL;
    NSData *_artworkURLTemplatesData;
    NSString *_assetURLString;
    _MRAudioRouteProtobuf *_audioRoute;
    NSString *_brandIdentifier;
    int _chapterCount;
    NSString *_collectionIdentifier;
    NSData *_collectionInfoData;
    NSString *_composer;
    NSString *_contentIdentifier;
    NSData *_currentPlaybackDateData;
    float _defaultPlaybackRate;
    NSData *_deviceSpecificUserInfoData;
    NSString *_directorName;
    int _discNumber;
    float _downloadProgress;
    int _downloadState;
    int _editingStyleFlags;
    int _episodeNumber;
    int _episodeType;
    int _formatTierPreference;
    NSString *_genre;
    NSString *_localizedContentRating;
    NSString *_localizedDurationString;
    NSString *_lyricsURL;
    int _mediaSubType;
    int _mediaType;
    NSData *_nowPlayingInfoData;
    int _numberOfSections;
    int _playCount;
    float _playbackProgress;
    float _playbackRate;
    int _playlistTraits;
    int _playlistType;
    _MRAudioFormatProtobuf *_preferredFormat;
    NSString *_profileIdentifier;
    NSData *_purchaseInfoData;
    NSString *_radioStationName;
    NSString *_radioStationString;
    int _radioStationType;
    int _seasonNumber;
    NSString *_seriesName;
    NSString *_serviceIdentifier;
    int _songTraits;
    NSString *_subtitle;
    NSString *_title;
    int _totalDiscCount;
    int _totalTrackCount;
    NSString *_trackArtistName;
    int _trackNumber;
    NSData *_userInfoData;
    BOOL _artworkAvailable;
    BOOL _hasAlternativeFormats;
    BOOL _infoAvailable;
    BOOL _isAdvertisement;
    BOOL _isAlwaysLive;
    BOOL _isContainer;
    BOOL _isCurrentlyPlaying;
    BOOL _isExplicitItem;
    BOOL _isInWishList;
    BOOL _isLiked;
    BOOL _isLoading;
    BOOL _isPlayable;
    BOOL _isSharable;
    BOOL _isSteerable;
    BOOL _isStreamingContent;
    BOOL _languageOptionsAvailable;
    BOOL _lyricsAvailable;
    ? _has;
}




-(BOOL)isEqual:(id)arg0 ;
-(BOOL)readFrom:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)dictionaryRepresentation;
-(void)writeTo:(id)arg0 ;


@end


#endif