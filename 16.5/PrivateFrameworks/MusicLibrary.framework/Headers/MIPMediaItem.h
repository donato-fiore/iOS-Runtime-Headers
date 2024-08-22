// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef MIPMEDIAITEM_H
#define MIPMEDIAITEM_H

@class PBCodable, NSString, NSData, NSMutableArray;
@protocol NSCopying;


#import "MIPAudiobook.h"
#import "MIPMovie.h"
#import "MIPPodcast.h"
#import "MIPSong.h"
#import "MIPTVShow.h"

@interface MIPMediaItem : PBCodable <NSCopying>

 {
    ? _has;
}


@property (nonatomic) NSInteger accountId; // ivar: _accountId
@property (retain, nonatomic) NSString *artworkId; // ivar: _artworkId
@property (nonatomic) NSInteger assetStoreItemId; // ivar: _assetStoreItemId
@property (retain, nonatomic) MIPAudiobook *audiobook; // ivar: _audiobook
@property (nonatomic) NSInteger bookmarkTimeMilliseconds; // ivar: _bookmarkTimeMilliseconds
@property (retain, nonatomic) NSString *chapterMetadataUrl; // ivar: _chapterMetadataUrl
@property (nonatomic) BOOL cloudAssetAvailable; // ivar: _cloudAssetAvailable
@property (nonatomic) int cloudMatchedStatus; // ivar: _cloudMatchedStatus
@property (nonatomic) int cloudPlaybackEndpointType; // ivar: _cloudPlaybackEndpointType
@property (nonatomic) int cloudStatus; // ivar: _cloudStatus
@property (retain, nonatomic) NSString *cloudUniversalLibraryId; // ivar: _cloudUniversalLibraryId
@property (retain, nonatomic) NSString *comment; // ivar: _comment
@property (nonatomic) int contentRating; // ivar: _contentRating
@property (nonatomic) int contentRatingLevel; // ivar: _contentRatingLevel
@property (retain, nonatomic) NSString *copyright; // ivar: _copyright
@property (nonatomic) NSInteger creationDateTime; // ivar: _creationDateTime
@property (nonatomic) NSInteger drmKey1IdCode; // ivar: _drmKey1IdCode
@property (nonatomic) NSInteger drmKey2IdCode; // ivar: _drmKey2IdCode
@property (nonatomic) NSInteger drmPlatformIdCode; // ivar: _drmPlatformIdCode
@property (nonatomic) int drmVersionsCode; // ivar: _drmVersionsCode
@property (nonatomic) NSInteger duration; // ivar: _duration
@property (nonatomic) BOOL explicitContent; // ivar: _explicitContent
@property (retain, nonatomic) NSString *extrasUrl; // ivar: _extrasUrl
@property (nonatomic) NSInteger familyAccountId; // ivar: _familyAccountId
@property (nonatomic) int favoriteState; // ivar: _favoriteState
@property (nonatomic) NSInteger favoritedDateTime; // ivar: _favoritedDateTime
@property (nonatomic) int fileKind; // ivar: _fileKind
@property (nonatomic) NSInteger fileSize; // ivar: _fileSize
@property (retain, nonatomic) NSData *flattenedChapterData; // ivar: _flattenedChapterData
@property (retain, nonatomic) NSString *grouping; // ivar: _grouping
@property (nonatomic) BOOL hasAccountId;
@property (readonly, nonatomic) BOOL hasArtworkId;
@property (nonatomic) BOOL hasAssetStoreItemId;
@property (readonly, nonatomic) BOOL hasAudiobook;
@property (nonatomic) BOOL hasBookmarkTimeMilliseconds;
@property (nonatomic) BOOL hasChapterData; // ivar: _hasChapterData
@property (readonly, nonatomic) BOOL hasChapterMetadataUrl;
@property (nonatomic) BOOL hasCloudAssetAvailable;
@property (nonatomic) BOOL hasCloudMatchedStatus;
@property (nonatomic) BOOL hasCloudPlaybackEndpointType;
@property (nonatomic) BOOL hasCloudStatus;
@property (readonly, nonatomic) BOOL hasCloudUniversalLibraryId;
@property (readonly, nonatomic) BOOL hasComment;
@property (nonatomic) BOOL hasContentRating;
@property (nonatomic) BOOL hasContentRatingLevel;
@property (readonly, nonatomic) BOOL hasCopyright;
@property (nonatomic) BOOL hasCreationDateTime;
@property (nonatomic) BOOL hasDrmKey1IdCode;
@property (nonatomic) BOOL hasDrmKey2IdCode;
@property (nonatomic) BOOL hasDrmPlatformIdCode;
@property (nonatomic) BOOL hasDrmVersionsCode;
@property (nonatomic) BOOL hasDuration;
@property (nonatomic) BOOL hasExplicitContent;
@property (readonly, nonatomic) BOOL hasExtrasUrl;
@property (nonatomic) BOOL hasFamilyAccountId;
@property (nonatomic) BOOL hasFavoriteState;
@property (nonatomic) BOOL hasFavoritedDateTime;
@property (nonatomic) BOOL hasFileKind;
@property (nonatomic) BOOL hasFileSize;
@property (readonly, nonatomic) BOOL hasFlattenedChapterData;
@property (readonly, nonatomic) BOOL hasGrouping;
@property (nonatomic) BOOL hasHasChapterData;
@property (nonatomic) BOOL hasHasLocalAsset;
@property (nonatomic) BOOL hasHidden;
@property (nonatomic) BOOL hasInUsersCloudLibrary;
@property (nonatomic) BOOL hasIsInUsersLibrary;
@property (nonatomic) BOOL hasIsPreorder;
@property (nonatomic) BOOL hasLastPlayedDateTime;
@property (nonatomic) BOOL hasLastSkippedDateTime;
@property (nonatomic) BOOL hasLikedState;
@property (nonatomic) BOOL hasLikedStateChangeDate;
@property (nonatomic) BOOL hasLikedStateChanged;
@property (nonatomic) BOOL hasLocalAsset; // ivar: _hasLocalAsset
@property (readonly, nonatomic) BOOL hasLongDescription;
@property (nonatomic) BOOL hasMediaType;
@property (nonatomic) BOOL hasModificationDateTime;
@property (readonly, nonatomic) BOOL hasMovie;
@property (nonatomic) BOOL hasNeedsReporting;
@property (nonatomic) BOOL hasPlayCount;
@property (nonatomic) BOOL hasPlayCountDelta;
@property (nonatomic) BOOL hasPlaybackEndpointType;
@property (readonly, nonatomic) BOOL hasPodcast;
@property (nonatomic) BOOL hasPurchaseDateTime;
@property (nonatomic) BOOL hasPurchaseHistoryId;
@property (readonly, nonatomic) BOOL hasPurchaseHistoryRedownloadParams;
@property (nonatomic) BOOL hasPurchaseHistoryToken;
@property (nonatomic) BOOL hasReleaseDateTime;
@property (nonatomic) BOOL hasRememberBookmark;
@property (nonatomic) BOOL hasReportingStoreItemId;
@property (nonatomic) BOOL hasSagaId;
@property (readonly, nonatomic) BOOL hasSagaRedownloadParams;
@property (readonly, nonatomic) BOOL hasSecondaryArtworkId;
@property (nonatomic) BOOL hasSecondaryArtworkSourceType;
@property (readonly, nonatomic) BOOL hasShortDescription;
@property (nonatomic) BOOL hasSkipCount;
@property (nonatomic) BOOL hasSkipCountDelta;
@property (readonly, nonatomic) BOOL hasSong;
@property (readonly, nonatomic) BOOL hasSortTitle;
@property (readonly, nonatomic) BOOL hasStoreAssetFlavor;
@property (nonatomic) BOOL hasStoreId;
@property (nonatomic) BOOL hasStorePlaylistId;
@property (nonatomic) BOOL hasStoreProtectionType;
@property (readonly, nonatomic) BOOL hasStoreXID;
@property (nonatomic) BOOL hasStorefrontId;
@property (nonatomic) BOOL hasSubscriptionStoreItemId;
@property (readonly, nonatomic) BOOL hasTitle;
@property (readonly, nonatomic) BOOL hasTvShow;
@property (nonatomic) BOOL hasUserDisabled;
@property (nonatomic) BOOL hasYear;
@property (nonatomic) BOOL hidden; // ivar: _hidden
@property (nonatomic) BOOL inUsersCloudLibrary; // ivar: _inUsersCloudLibrary
@property (nonatomic) BOOL isInUsersLibrary; // ivar: _isInUsersLibrary
@property (nonatomic) BOOL isPreorder; // ivar: _isPreorder
@property (nonatomic) NSInteger lastPlayedDateTime; // ivar: _lastPlayedDateTime
@property (nonatomic) NSInteger lastSkippedDateTime; // ivar: _lastSkippedDateTime
@property (retain, nonatomic) NSMutableArray *libraryIdentifiers; // ivar: _libraryIdentifiers
@property (nonatomic) int likedState; // ivar: _likedState
@property (nonatomic) NSInteger likedStateChangeDate; // ivar: _likedStateChangeDate
@property (nonatomic) BOOL likedStateChanged; // ivar: _likedStateChanged
@property (retain, nonatomic) NSString *longDescription; // ivar: _longDescription
@property (nonatomic) int mediaType; // ivar: _mediaType
@property (nonatomic) NSInteger modificationDateTime; // ivar: _modificationDateTime
@property (retain, nonatomic) MIPMovie *movie; // ivar: _movie
@property (nonatomic) BOOL needsReporting; // ivar: _needsReporting
@property (nonatomic) int playCount; // ivar: _playCount
@property (nonatomic) int playCountDelta; // ivar: _playCountDelta
@property (nonatomic) int playbackEndpointType; // ivar: _playbackEndpointType
@property (retain, nonatomic) MIPPodcast *podcast; // ivar: _podcast
@property (nonatomic) NSInteger purchaseDateTime; // ivar: _purchaseDateTime
@property (nonatomic) NSInteger purchaseHistoryId; // ivar: _purchaseHistoryId
@property (retain, nonatomic) NSString *purchaseHistoryRedownloadParams; // ivar: _purchaseHistoryRedownloadParams
@property (nonatomic) int purchaseHistoryToken; // ivar: _purchaseHistoryToken
@property (nonatomic) NSInteger releaseDateTime; // ivar: _releaseDateTime
@property (nonatomic) BOOL rememberBookmark; // ivar: _rememberBookmark
@property (nonatomic) NSInteger reportingStoreItemId; // ivar: _reportingStoreItemId
@property (nonatomic) NSInteger sagaId; // ivar: _sagaId
@property (retain, nonatomic) NSString *sagaRedownloadParams; // ivar: _sagaRedownloadParams
@property (retain, nonatomic) NSString *secondaryArtworkId; // ivar: _secondaryArtworkId
@property (nonatomic) int secondaryArtworkSourceType; // ivar: _secondaryArtworkSourceType
@property (retain, nonatomic) NSString *shortDescription; // ivar: _shortDescription
@property (nonatomic) int skipCount; // ivar: _skipCount
@property (nonatomic) int skipCountDelta; // ivar: _skipCountDelta
@property (retain, nonatomic) MIPSong *song; // ivar: _song
@property (retain, nonatomic) NSString *sortTitle; // ivar: _sortTitle
@property (retain, nonatomic) NSString *storeAssetFlavor; // ivar: _storeAssetFlavor
@property (nonatomic) NSInteger storeId; // ivar: _storeId
@property (nonatomic) NSInteger storePlaylistId; // ivar: _storePlaylistId
@property (nonatomic) int storeProtectionType; // ivar: _storeProtectionType
@property (retain, nonatomic) NSString *storeXID; // ivar: _storeXID
@property (nonatomic) NSInteger storefrontId; // ivar: _storefrontId
@property (nonatomic) NSInteger subscriptionStoreItemId; // ivar: _subscriptionStoreItemId
@property (retain, nonatomic) NSString *title; // ivar: _title
@property (retain, nonatomic) MIPTVShow *tvShow; // ivar: _tvShow
@property (nonatomic) BOOL userDisabled; // ivar: _userDisabled
@property (nonatomic) int year; // ivar: _year


-(BOOL)isEqual:(id)arg0 ;
-(BOOL)readFrom:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)dictionaryRepresentation;
-(id)libraryIdentifiersAtIndex:(NSUInteger)arg0 ;
-(id)mediaTypeAsString:(int)arg0 ;
-(int)StringAsMediaType:(id)arg0 ;
-(void)addLibraryIdentifiers:(id)arg0 ;
-(void)clearLibraryIdentifiers;
-(void)copyTo:(id)arg0 ;
-(void)mergeFrom:(id)arg0 ;
-(void)writeTo:(id)arg0 ;


@end


#endif