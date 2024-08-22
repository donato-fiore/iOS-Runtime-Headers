// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef _MRCONTENTITEMMETADATAPROTOBUF_H
#define _MRCONTENTITEMMETADATAPROTOBUF_H

@class PBCodable, NSString, NSMutableArray, NSData;
@protocol NSCopying;


#import "_MRAudioFormatProtobuf.h"
#import "_MRAudioRouteProtobuf.h"

@interface _MRContentItemMetadataProtobuf : PBCodable <NSCopying>

 {
    ? _has;
}


@property (retain, nonatomic) _MRAudioFormatProtobuf *activeFormat; // ivar: _activeFormat
@property (nonatomic) int activeFormatJustification; // ivar: _activeFormatJustification
@property (retain, nonatomic) NSString *albumArtistName; // ivar: _albumArtistName
@property (retain, nonatomic) NSString *albumName; // ivar: _albumName
@property (nonatomic) int albumTraits; // ivar: _albumTraits
@property (retain, nonatomic) NSString *albumYear; // ivar: _albumYear
@property (retain, nonatomic) NSMutableArray *alternativeFormats; // ivar: _alternativeFormats
@property (retain, nonatomic) NSData *appMetricsData; // ivar: _appMetricsData
@property (nonatomic) BOOL artworkAvailable; // ivar: _artworkAvailable
@property (nonatomic) int artworkDataHeightDeprecated; // ivar: _artworkDataHeightDeprecated
@property (nonatomic) int artworkDataWidthDeprecated; // ivar: _artworkDataWidthDeprecated
@property (retain, nonatomic) NSString *artworkFileURL; // ivar: _artworkFileURL
@property (retain, nonatomic) NSString *artworkIdentifier; // ivar: _artworkIdentifier
@property (retain, nonatomic) NSString *artworkMIMEType; // ivar: _artworkMIMEType
@property (retain, nonatomic) NSString *artworkURL; // ivar: _artworkURL
@property (retain, nonatomic) NSData *artworkURLTemplatesData; // ivar: _artworkURLTemplatesData
@property (retain, nonatomic) NSString *assetURLString; // ivar: _assetURLString
@property (retain, nonatomic) _MRAudioRouteProtobuf *audioRoute; // ivar: _audioRoute
@property (retain, nonatomic) NSString *brandIdentifier; // ivar: _brandIdentifier
@property (nonatomic) int chapterCount; // ivar: _chapterCount
@property (retain, nonatomic) NSString *classicalWork; // ivar: _classicalWork
@property (retain, nonatomic) NSString *collectionIdentifier; // ivar: _collectionIdentifier
@property (retain, nonatomic) NSData *collectionInfoData; // ivar: _collectionInfoData
@property (retain, nonatomic) NSString *composer; // ivar: _composer
@property (retain, nonatomic) NSString *contentIdentifier; // ivar: _contentIdentifier
@property (retain, nonatomic) NSData *currentPlaybackDateData; // ivar: _currentPlaybackDateData
@property (nonatomic) float defaultPlaybackRate; // ivar: _defaultPlaybackRate
@property (retain, nonatomic) NSData *deviceSpecificUserInfoData; // ivar: _deviceSpecificUserInfoData
@property (retain, nonatomic) NSString *directorName; // ivar: _directorName
@property (nonatomic) int discNumber; // ivar: _discNumber
@property (nonatomic) float downloadProgress; // ivar: _downloadProgress
@property (nonatomic) int downloadState; // ivar: _downloadState
@property (nonatomic) CGFloat duration; // ivar: _duration
@property (nonatomic) int editingStyleFlags; // ivar: _editingStyleFlags
@property (nonatomic) CGFloat elapsedTime; // ivar: _elapsedTime
@property (nonatomic) CGFloat elapsedTimeTimestamp; // ivar: _elapsedTimeTimestamp
@property (nonatomic) int episodeNumber; // ivar: _episodeNumber
@property (nonatomic) int episodeType; // ivar: _episodeType
@property (nonatomic) int formatTierPreference; // ivar: _formatTierPreference
@property (retain, nonatomic) NSString *genre; // ivar: _genre
@property (readonly, nonatomic) BOOL hasActiveFormat;
@property (nonatomic) BOOL hasActiveFormatJustification;
@property (readonly, nonatomic) BOOL hasAlbumArtistName;
@property (readonly, nonatomic) BOOL hasAlbumName;
@property (nonatomic) BOOL hasAlbumTraits;
@property (readonly, nonatomic) BOOL hasAlbumYear;
@property (nonatomic) BOOL hasAlternativeFormats; // ivar: _hasAlternativeFormats
@property (readonly, nonatomic) BOOL hasAppMetricsData;
@property (nonatomic) BOOL hasArtworkAvailable;
@property (nonatomic) BOOL hasArtworkDataHeightDeprecated;
@property (nonatomic) BOOL hasArtworkDataWidthDeprecated;
@property (readonly, nonatomic) BOOL hasArtworkFileURL;
@property (readonly, nonatomic) BOOL hasArtworkIdentifier;
@property (readonly, nonatomic) BOOL hasArtworkMIMEType;
@property (readonly, nonatomic) BOOL hasArtworkURL;
@property (readonly, nonatomic) BOOL hasArtworkURLTemplatesData;
@property (readonly, nonatomic) BOOL hasAssetURLString;
@property (readonly, nonatomic) BOOL hasAudioRoute;
@property (readonly, nonatomic) BOOL hasBrandIdentifier;
@property (nonatomic) BOOL hasChapterCount;
@property (readonly, nonatomic) BOOL hasClassicalWork;
@property (readonly, nonatomic) BOOL hasCollectionIdentifier;
@property (readonly, nonatomic) BOOL hasCollectionInfoData;
@property (readonly, nonatomic) BOOL hasComposer;
@property (readonly, nonatomic) BOOL hasContentIdentifier;
@property (readonly, nonatomic) BOOL hasCurrentPlaybackDateData;
@property (nonatomic) BOOL hasDefaultPlaybackRate;
@property (readonly, nonatomic) BOOL hasDeviceSpecificUserInfoData;
@property (readonly, nonatomic) BOOL hasDirectorName;
@property (nonatomic) BOOL hasDiscNumber;
@property (nonatomic) BOOL hasDownloadProgress;
@property (nonatomic) BOOL hasDownloadState;
@property (nonatomic) BOOL hasDuration;
@property (nonatomic) BOOL hasEditingStyleFlags;
@property (nonatomic) BOOL hasElapsedTime;
@property (nonatomic) BOOL hasElapsedTimeTimestamp;
@property (nonatomic) BOOL hasEpisodeNumber;
@property (nonatomic) BOOL hasEpisodeType;
@property (nonatomic) BOOL hasFormatTierPreference;
@property (readonly, nonatomic) BOOL hasGenre;
@property (nonatomic) BOOL hasHasAlternativeFormats;
@property (nonatomic) BOOL hasITunesStoreAlbumIdentifier;
@property (nonatomic) BOOL hasITunesStoreArtistIdentifier;
@property (nonatomic) BOOL hasITunesStoreIdentifier;
@property (nonatomic) BOOL hasITunesStoreSubscriptionIdentifier;
@property (nonatomic) BOOL hasInferredTimestamp;
@property (nonatomic) BOOL hasInfoAvailable;
@property (nonatomic) BOOL hasIsAdvertisement;
@property (nonatomic) BOOL hasIsAlwaysLive;
@property (nonatomic) BOOL hasIsContainer;
@property (nonatomic) BOOL hasIsCurrentlyPlaying;
@property (nonatomic) BOOL hasIsExplicitItem;
@property (nonatomic) BOOL hasIsInWishList;
@property (nonatomic) BOOL hasIsLiked;
@property (nonatomic) BOOL hasIsLoading;
@property (nonatomic) BOOL hasIsPlayable;
@property (nonatomic) BOOL hasIsSharable;
@property (nonatomic) BOOL hasIsSteerable;
@property (nonatomic) BOOL hasIsStreamingContent;
@property (nonatomic) BOOL hasLanguageOptionsAvailable;
@property (nonatomic) BOOL hasLegacyUniqueIdentifier;
@property (readonly, nonatomic) BOOL hasLocalizedContentRating;
@property (readonly, nonatomic) BOOL hasLocalizedDurationString;
@property (nonatomic) BOOL hasLyricsAvailable;
@property (readonly, nonatomic) BOOL hasLyricsURL;
@property (nonatomic) BOOL hasMediaSubType;
@property (nonatomic) BOOL hasMediaType;
@property (readonly, nonatomic) BOOL hasNowPlayingInfoData;
@property (nonatomic) BOOL hasNumberOfSections;
@property (readonly, nonatomic) BOOL hasParticipantIdentifier;
@property (readonly, nonatomic) BOOL hasParticipantName;
@property (nonatomic) BOOL hasPlayCount;
@property (nonatomic) BOOL hasPlaybackProgress;
@property (nonatomic) BOOL hasPlaybackRate;
@property (nonatomic) BOOL hasPlaylistTraits;
@property (nonatomic) BOOL hasPlaylistType;
@property (readonly, nonatomic) BOOL hasPreferredFormat;
@property (readonly, nonatomic) BOOL hasProfileIdentifier;
@property (readonly, nonatomic) BOOL hasPurchaseInfoData;
@property (nonatomic) BOOL hasRadioStationIdentifier;
@property (readonly, nonatomic) BOOL hasRadioStationName;
@property (readonly, nonatomic) BOOL hasRadioStationString;
@property (nonatomic) BOOL hasRadioStationType;
@property (nonatomic) BOOL hasReleaseDate;
@property (nonatomic) BOOL hasSeasonNumber;
@property (readonly, nonatomic) BOOL hasSeriesName;
@property (readonly, nonatomic) BOOL hasServiceIdentifier;
@property (nonatomic) BOOL hasSongTraits;
@property (nonatomic) BOOL hasStartTime;
@property (readonly, nonatomic) BOOL hasSubtitle;
@property (readonly, nonatomic) BOOL hasTitle;
@property (nonatomic) BOOL hasTotalDiscCount;
@property (nonatomic) BOOL hasTotalTrackCount;
@property (readonly, nonatomic) BOOL hasTrackArtistName;
@property (nonatomic) BOOL hasTrackNumber;
@property (readonly, nonatomic) BOOL hasUserInfoData;
@property (nonatomic) NSInteger iTunesStoreAlbumIdentifier; // ivar: _iTunesStoreAlbumIdentifier
@property (nonatomic) NSInteger iTunesStoreArtistIdentifier; // ivar: _iTunesStoreArtistIdentifier
@property (nonatomic) NSInteger iTunesStoreIdentifier; // ivar: _iTunesStoreIdentifier
@property (nonatomic) NSInteger iTunesStoreSubscriptionIdentifier; // ivar: _iTunesStoreSubscriptionIdentifier
@property (nonatomic) CGFloat inferredTimestamp; // ivar: _inferredTimestamp
@property (nonatomic) BOOL infoAvailable; // ivar: _infoAvailable
@property (nonatomic) BOOL isAdvertisement; // ivar: _isAdvertisement
@property (nonatomic) BOOL isAlwaysLive; // ivar: _isAlwaysLive
@property (nonatomic) BOOL isContainer; // ivar: _isContainer
@property (nonatomic) BOOL isCurrentlyPlaying; // ivar: _isCurrentlyPlaying
@property (nonatomic) BOOL isExplicitItem; // ivar: _isExplicitItem
@property (nonatomic) BOOL isInWishList; // ivar: _isInWishList
@property (nonatomic) BOOL isLiked; // ivar: _isLiked
@property (nonatomic) BOOL isLoading; // ivar: _isLoading
@property (nonatomic) BOOL isPlayable; // ivar: _isPlayable
@property (nonatomic) BOOL isSharable; // ivar: _isSharable
@property (nonatomic) BOOL isSteerable; // ivar: _isSteerable
@property (nonatomic) BOOL isStreamingContent; // ivar: _isStreamingContent
@property (nonatomic) BOOL languageOptionsAvailable; // ivar: _languageOptionsAvailable
@property (nonatomic) NSInteger legacyUniqueIdentifier; // ivar: _legacyUniqueIdentifier
@property (retain, nonatomic) NSString *localizedContentRating; // ivar: _localizedContentRating
@property (retain, nonatomic) NSString *localizedDurationString; // ivar: _localizedDurationString
@property (nonatomic) BOOL lyricsAvailable; // ivar: _lyricsAvailable
@property (retain, nonatomic) NSString *lyricsURL; // ivar: _lyricsURL
@property (nonatomic) int mediaSubType; // ivar: _mediaSubType
@property (nonatomic) int mediaType; // ivar: _mediaType
@property (retain, nonatomic) NSData *nowPlayingInfoData; // ivar: _nowPlayingInfoData
@property (nonatomic) int numberOfSections; // ivar: _numberOfSections
@property (retain, nonatomic) NSString *participantIdentifier; // ivar: _participantIdentifier
@property (retain, nonatomic) NSString *participantName; // ivar: _participantName
@property (nonatomic) int playCount; // ivar: _playCount
@property (nonatomic) float playbackProgress; // ivar: _playbackProgress
@property (nonatomic) float playbackRate; // ivar: _playbackRate
@property (nonatomic) int playlistTraits; // ivar: _playlistTraits
@property (nonatomic) int playlistType; // ivar: _playlistType
@property (retain, nonatomic) _MRAudioFormatProtobuf *preferredFormat; // ivar: _preferredFormat
@property (retain, nonatomic) NSString *profileIdentifier; // ivar: _profileIdentifier
@property (retain, nonatomic) NSData *purchaseInfoData; // ivar: _purchaseInfoData
@property (nonatomic) NSInteger radioStationIdentifier; // ivar: _radioStationIdentifier
@property (retain, nonatomic) NSString *radioStationName; // ivar: _radioStationName
@property (retain, nonatomic) NSString *radioStationString; // ivar: _radioStationString
@property (nonatomic) int radioStationType; // ivar: _radioStationType
@property (nonatomic) CGFloat releaseDate; // ivar: _releaseDate
@property (nonatomic) int seasonNumber; // ivar: _seasonNumber
@property (retain, nonatomic) NSString *seriesName; // ivar: _seriesName
@property (retain, nonatomic) NSString *serviceIdentifier; // ivar: _serviceIdentifier
@property (nonatomic) int songTraits; // ivar: _songTraits
@property (nonatomic) CGFloat startTime; // ivar: _startTime
@property (retain, nonatomic) NSString *subtitle; // ivar: _subtitle
@property (retain, nonatomic) NSString *title; // ivar: _title
@property (nonatomic) int totalDiscCount; // ivar: _totalDiscCount
@property (nonatomic) int totalTrackCount; // ivar: _totalTrackCount
@property (retain, nonatomic) NSString *trackArtistName; // ivar: _trackArtistName
@property (nonatomic) int trackNumber; // ivar: _trackNumber
@property (retain, nonatomic) NSData *userInfoData; // ivar: _userInfoData


-(BOOL)isEqual:(id)arg0 ;
-(BOOL)readFrom:(id)arg0 ;
-(NSUInteger)hash;
-(id)activeFormatJustificationAsString:(int)arg0 ;
-(id)albumTraitsAsString:(int)arg0 ;
-(id)alternativeFormatsAtIndex:(NSUInteger)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)dictionaryRepresentation;
-(id)formatTierPreferenceAsString:(int)arg0 ;
-(id)playlistTraitsAsString:(int)arg0 ;
-(id)songTraitsAsString:(int)arg0 ;
-(int)StringAsActiveFormatJustification:(id)arg0 ;
-(int)StringAsAlbumTraits:(id)arg0 ;
-(int)StringAsFormatTierPreference:(id)arg0 ;
-(int)StringAsPlaylistTraits:(id)arg0 ;
-(int)StringAsSongTraits:(id)arg0 ;
-(void)addAlternativeFormats:(id)arg0 ;
-(void)clearAlternativeFormats;
-(void)copyTo:(id)arg0 ;
-(void)mergeFrom:(id)arg0 ;
-(void)writeTo:(id)arg0 ;


@end


#endif