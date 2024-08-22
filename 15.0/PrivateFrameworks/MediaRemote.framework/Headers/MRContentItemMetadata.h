// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef MRCONTENTITEMMETADATA_H
#define MRCONTENTITEMMETADATA_H

@class NSString, NSArray, NSDictionary, NSURL, NSDate, NSData;
@protocol NSCopying;

#import <Foundation/Foundation.h>

#import "MRContentItemMetadataAudioFormat.h"
#import "MRContentItemMetadataAudioRoute.h"
#import "_MRContentItemMetadataProtobuf.h"

@interface MRContentItemMetadata : NSObject <NSCopying>



@property (copy, nonatomic) MRContentItemMetadataAudioFormat *activeFormat; // ivar: _activeFormat
@property (nonatomic) NSInteger activeFormatJustification; // ivar: _activeFormatJustification
@property (nonatomic, getter=isAdvertisement) BOOL advertisement; // ivar: _advertisement
@property (copy, nonatomic) NSString *albumArtistName; // ivar: _albumArtistName
@property (copy, nonatomic) NSString *albumName; // ivar: _albumName
@property (nonatomic) NSUInteger albumTraits; // ivar: _albumTraits
@property (copy, nonatomic) NSString *albumYear; // ivar: _albumYear
@property (copy, nonatomic) NSArray *alternativeFormats; // ivar: _alternativeFormats
@property (nonatomic, getter=isAlwaysLive) BOOL alwaysLive; // ivar: _alwaysLive
@property (copy, nonatomic) NSDictionary *appMetrics; // ivar: _appMetrics
@property (nonatomic) BOOL artworkAvailable; // ivar: _artworkAvailable
@property (readonly, nonatomic) NSInteger artworkDataHeightDeprecated; // ivar: _artworkDataHeightDeprecated
@property (readonly, nonatomic) NSInteger artworkDataWidthDeprecated; // ivar: _artworkDataWidthDeprecated
@property (copy, nonatomic) NSURL *artworkFileURL; // ivar: _artworkFileURL
@property (copy, nonatomic) NSString *artworkIdentifier; // ivar: _artworkIdentifier
@property (copy, nonatomic) NSString *artworkMIMEType; // ivar: _artworkMIMEType
@property (copy, nonatomic) NSURL *artworkURL; // ivar: _artworkURL
@property (copy, nonatomic) NSArray *artworkURLTemplates; // ivar: _artworkURLTemplates
@property (copy, nonatomic) NSURL *assetURL; // ivar: _assetURL
@property (copy, nonatomic) MRContentItemMetadataAudioRoute *audioRoute; // ivar: _audioRoute
@property (copy, nonatomic) NSString *brandIdentifier; // ivar: _brandIdentifier
@property (readonly, nonatomic) CGFloat calculatedPlaybackPosition;
@property (nonatomic) NSInteger chapterCount; // ivar: _chapterCount
@property (copy, nonatomic) NSString *collectionIdentifier; // ivar: _collectionIdentifier
@property (copy, nonatomic) NSDictionary *collectionInfo; // ivar: _collectionInfo
@property (copy, nonatomic) NSString *composer; // ivar: _composer
@property (nonatomic, getter=isContainer) BOOL container; // ivar: _container
@property (copy, nonatomic) NSString *contentIdentifier; // ivar: _contentIdentifier
@property (copy, nonatomic) NSDate *currentPlaybackDate; // ivar: _currentPlaybackDate
@property (nonatomic, getter=isCurrentlyPlaying) BOOL currentlyPlaying; // ivar: _currentlyPlaying
@property (readonly, copy, nonatomic) NSData *data;
@property (nonatomic) float defaultPlaybackRate; // ivar: _defaultPlaybackRate
@property (copy, nonatomic) NSDictionary *deviceSpecificUserInfo; // ivar: _deviceSpecificUserInfo
@property (readonly, nonatomic) NSDictionary *dictionaryRepresentation;
@property (copy, nonatomic) NSString *directorName; // ivar: _directorName
@property (nonatomic) NSInteger discNumber; // ivar: _discNumber
@property (nonatomic) float downloadProgress; // ivar: _downloadProgress
@property (nonatomic) NSInteger downloadState; // ivar: _downloadState
@property (nonatomic) CGFloat duration; // ivar: _duration
@property (nonatomic) NSInteger editingStyleFlags; // ivar: _editingStyleFlags
@property (nonatomic) CGFloat elapsedTime; // ivar: _elapsedTime
@property (nonatomic) CGFloat elapsedTimeTimestamp; // ivar: _elapsedTimeTimestamp
@property (nonatomic) NSInteger episodeNumber; // ivar: _episodeNumber
@property (nonatomic) NSInteger episodeType; // ivar: _episodeType
@property (nonatomic, getter=isExplicitItem) BOOL explicitItem; // ivar: _explicitItem
@property (nonatomic) NSUInteger formatTierPreference; // ivar: _formatTierPreference
@property (copy, nonatomic) NSString *genre; // ivar: _genre
@property (nonatomic) BOOL hasActiveFormatJustification; // ivar: _hasActiveFormatJustification
@property (nonatomic) BOOL hasAdvertisement; // ivar: _hasAdvertisement
@property (nonatomic) BOOL hasAlbumTraits; // ivar: _hasAlbumTraits
@property (nonatomic) BOOL hasAlwaysLive; // ivar: _hasAlwaysLive
@property (nonatomic) BOOL hasArtworkAvailable; // ivar: _hasArtworkAvailable
@property (readonly, nonatomic) BOOL hasArtworkDataHeightDeprecated; // ivar: _hasArtworkDataHeightDeprecated
@property (readonly, nonatomic) BOOL hasArtworkDataWidthDeprecated; // ivar: _hasArtworkDataWidthDeprecated
@property (nonatomic) BOOL hasChapterCount; // ivar: _hasChapterCount
@property (nonatomic) BOOL hasContainer; // ivar: _hasContainer
@property (nonatomic) BOOL hasCurrentlyPlaying; // ivar: _hasCurrentlyPlaying
@property (nonatomic) BOOL hasDefaultPlaybackRate; // ivar: _hasDefaultPlaybackRate
@property (nonatomic) BOOL hasDiscNumber; // ivar: _hasDiscNumber
@property (nonatomic) BOOL hasDownloadProgress; // ivar: _hasDownloadProgress
@property (nonatomic) BOOL hasDownloadState; // ivar: _hasDownloadState
@property (nonatomic) BOOL hasDuration; // ivar: _hasDuration
@property (nonatomic) BOOL hasEditingStyleFlags; // ivar: _hasEditingStyleFlags
@property (nonatomic) BOOL hasElapsedTime; // ivar: _hasElapsedTime
@property (nonatomic) BOOL hasElapsedTimeTimestamp; // ivar: _hasElapsedTimeTimestamp
@property (nonatomic) BOOL hasEpisodeNumber; // ivar: _hasEpisodeNumber
@property (nonatomic) BOOL hasEpisodeType; // ivar: _hasEpisodeType
@property (nonatomic) BOOL hasExplicitItem; // ivar: _hasExplicitItem
@property (nonatomic) BOOL hasFormatTierPreference; // ivar: _hasFormatTierPreference
@property (nonatomic) BOOL hasITunesStoreAlbumIdentifier; // ivar: _hasITunesStoreAlbumIdentifier
@property (nonatomic) BOOL hasITunesStoreArtistIdentifier; // ivar: _hasITunesStoreArtistIdentifier
@property (nonatomic) BOOL hasITunesStoreIdentifier; // ivar: _hasITunesStoreIdentifier
@property (nonatomic) BOOL hasITunesStoreSubscriptionIdentifier; // ivar: _hasITunesStoreSubscriptionIdentifier
@property (nonatomic) BOOL hasInWishList; // ivar: _hasInWishList
@property (nonatomic) BOOL hasInferredTimestamp; // ivar: _hasInferredTimestamp
@property (nonatomic) BOOL hasInfoAvailable; // ivar: _hasInfoAvailable
@property (nonatomic) BOOL hasLanguageOptionsAvailable; // ivar: _hasLanguageOptionsAvailable
@property (nonatomic) BOOL hasLegacyUniqueIdentifier; // ivar: _hasLegacyUniqueIdentifier
@property (nonatomic) BOOL hasLiked; // ivar: _hasLiked
@property (nonatomic) BOOL hasLoading; // ivar: _hasLoading
@property (readonly, nonatomic) BOOL hasLoadingPlaceholderTitle;
@property (nonatomic) BOOL hasLyricsAvailable; // ivar: _hasLyricsAvailable
@property (nonatomic) BOOL hasMediaSubType; // ivar: _hasMediaSubType
@property (nonatomic) BOOL hasMediaType; // ivar: _hasMediaType
@property (nonatomic) BOOL hasNumberOfSections; // ivar: _hasNumberOfSections
@property (nonatomic) BOOL hasPlayCount; // ivar: _hasPlayCount
@property (nonatomic) BOOL hasPlayable; // ivar: _hasPlayable
@property (nonatomic) BOOL hasPlaybackProgress; // ivar: _hasPlaybackProgress
@property (nonatomic) BOOL hasPlaybackRate; // ivar: _hasPlaybackRate
@property (nonatomic) BOOL hasPlaylistTraits; // ivar: _hasPlaylistTraits
@property (nonatomic) BOOL hasPlaylistType; // ivar: _hasPlaylistType
@property (nonatomic) BOOL hasRadioStationIdentifier; // ivar: _hasRadioStationIdentifier
@property (nonatomic) BOOL hasRadioStationType; // ivar: _hasRadioStationType
@property (nonatomic) BOOL hasSeasonNumber; // ivar: _hasSeasonNumber
@property (nonatomic) BOOL hasSharable; // ivar: _hasSharable
@property (nonatomic) BOOL hasSongTraits; // ivar: _hasSongTraits
@property (nonatomic) BOOL hasStartTime; // ivar: _hasStartTime
@property (nonatomic) BOOL hasSteerable; // ivar: _hasSteerable
@property (nonatomic) BOOL hasStreamingContent; // ivar: _hasStreamingContent
@property (nonatomic) BOOL hasTotalDiscCount; // ivar: _hasTotalDiscCount
@property (nonatomic) BOOL hasTotalTrackCount; // ivar: _hasTotalTrackCount
@property (nonatomic) BOOL hasTrackNumber; // ivar: _hasTrackNumber
@property (nonatomic) NSInteger iTunesStoreAlbumIdentifier; // ivar: _iTunesStoreAlbumIdentifier
@property (nonatomic) NSInteger iTunesStoreArtistIdentifier; // ivar: _iTunesStoreArtistIdentifier
@property (nonatomic) NSInteger iTunesStoreIdentifier; // ivar: _iTunesStoreIdentifier
@property (nonatomic) NSInteger iTunesStoreSubscriptionIdentifier; // ivar: _iTunesStoreSubscriptionIdentifier
@property (nonatomic, getter=isInWishList) BOOL inWishList; // ivar: _inWishList
@property (nonatomic) CGFloat inferredTimestamp; // ivar: _inferredTimestamp
@property (nonatomic) BOOL infoAvailable; // ivar: _infoAvailable
@property (nonatomic) BOOL languageOptionsAvailable; // ivar: _languageOptionsAvailable
@property (nonatomic) NSInteger legacyUniqueIdentifier; // ivar: _legacyUniqueIdentifier
@property (nonatomic, getter=isLiked) BOOL liked; // ivar: _liked
@property (nonatomic, getter=isLoading) BOOL loading; // ivar: _loading
@property (copy, nonatomic) NSString *localizedContentRating; // ivar: _localizedContentRating
@property (copy, nonatomic) NSString *localizedDurationString; // ivar: _localizedDurationString
@property (readonly, copy, nonatomic) NSString *localizedTitle;
@property (nonatomic) BOOL lyricsAvailable; // ivar: _lyricsAvailable
@property (copy, nonatomic) NSURL *lyricsURL; // ivar: _lyricsURL
@property (nonatomic) NSInteger mediaSubType; // ivar: _mediaSubType
@property (nonatomic) NSInteger mediaType; // ivar: _mediaType
@property (copy, nonatomic) NSDictionary *nowPlayingInfo; // ivar: _nowPlayingInfo
@property (nonatomic) NSInteger numberOfSections; // ivar: _numberOfSections
@property (nonatomic) NSInteger playCount; // ivar: _playCount
@property (nonatomic, getter=isPlayable) BOOL playable; // ivar: _playable
@property (nonatomic) float playbackProgress; // ivar: _playbackProgress
@property (nonatomic) float playbackRate; // ivar: _playbackRate
@property (nonatomic) NSUInteger playlistTraits; // ivar: _playlistTraits
@property (nonatomic) NSInteger playlistType; // ivar: _playlistType
@property (copy, nonatomic) MRContentItemMetadataAudioFormat *preferredFormat; // ivar: _preferredFormat
@property (copy, nonatomic) NSString *profileIdentifier; // ivar: _profileIdentifier
@property (readonly, nonatomic) _MRContentItemMetadataProtobuf *protobuf;
@property (copy, nonatomic) NSData *purchaseInfoData; // ivar: _purchaseInfoData
@property (nonatomic) NSInteger radioStationIdentifier; // ivar: _radioStationIdentifier
@property (copy, nonatomic) NSString *radioStationName; // ivar: _radioStationName
@property (copy, nonatomic) NSString *radioStationString; // ivar: _radioStationString
@property (nonatomic) NSInteger radioStationType; // ivar: _radioStationType
@property (copy, nonatomic) NSDate *releaseDate; // ivar: _releaseDate
@property (nonatomic) NSInteger seasonNumber; // ivar: _seasonNumber
@property (copy, nonatomic) NSString *seriesName; // ivar: _seriesName
@property (copy, nonatomic) NSString *serviceIdentifier; // ivar: _serviceIdentifier
@property (nonatomic, getter=isSharable) BOOL sharable; // ivar: _sharable
@property (nonatomic) NSUInteger songTraits; // ivar: _songTraits
@property (nonatomic) CGFloat startTime; // ivar: _startTime
@property (nonatomic, getter=isSteerable) BOOL steerable; // ivar: _steerable
@property (nonatomic, getter=isStreamingContent) BOOL streamingContent; // ivar: _streamingContent
@property (copy, nonatomic) NSString *subtitle; // ivar: _subtitle
@property (copy, nonatomic) NSString *title; // ivar: _title
@property (nonatomic) NSInteger totalDiscCount; // ivar: _totalDiscCount
@property (nonatomic) NSInteger totalTrackCount; // ivar: _totalTrackCount
@property (copy, nonatomic) NSString *trackArtistName; // ivar: _trackArtistName
@property (nonatomic) NSInteger trackNumber; // ivar: _trackNumber
@property (copy, nonatomic) NSDictionary *userInfo; // ivar: _userInfo


-(BOOL)isEqual:(id)arg0 ;
-(CGFloat)calculatedPlaybackPositionFromDate:(id)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)initWithData:(id)arg0 ;
-(id)initWithProtobuf:(id)arg0 ;
-(void)mergeFrom:(id)arg0 ;


@end


#endif