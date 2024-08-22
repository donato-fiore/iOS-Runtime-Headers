// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef SSVPBPLAYACTIVITYEVENT_H
#define SSVPBPLAYACTIVITYEVENT_H

@class PBCodable, NSString, NSData;
@protocol NSCopying;


#import "SSVPBPlayActivityEnqueuerProperties.h"

@interface SSVPBPlayActivityEvent : PBCodable <NSCopying>

 {
    ? _has;
}


@property (retain, nonatomic) NSString *buildVersion; // ivar: _buildVersion
@property (nonatomic) NSInteger characterDisplayedCount; // ivar: _characterDisplayedCount
@property (retain, nonatomic) NSString *cloudAlbumID; // ivar: _cloudAlbumID
@property (nonatomic) NSUInteger cloudPlaylistID; // ivar: _cloudPlaylistID
@property (nonatomic) NSInteger containerAdamID; // ivar: _containerAdamID
@property (retain, nonatomic) NSString *containerID; // ivar: _containerID
@property (nonatomic) int containerType; // ivar: _containerType
@property (retain, nonatomic) NSString *deviceName; // ivar: _deviceName
@property (nonatomic) int displayType; // ivar: _displayType
@property (nonatomic) int endReasonType; // ivar: _endReasonType
@property (retain, nonatomic) SSVPBPlayActivityEnqueuerProperties *enqueuerProperties; // ivar: _enqueuerProperties
@property (nonatomic) NSInteger equivalencySourceAdamID; // ivar: _equivalencySourceAdamID
@property (nonatomic) CGFloat eventDateTimestamp; // ivar: _eventDateTimestamp
@property (nonatomic) CGFloat eventSecondsFromGMT; // ivar: _eventSecondsFromGMT
@property (retain, nonatomic) NSString *eventTimeZoneName; // ivar: _eventTimeZoneName
@property (nonatomic) int eventType; // ivar: _eventType
@property (retain, nonatomic) NSString *externalID; // ivar: _externalID
@property (retain, nonatomic) NSString *featureName; // ivar: _featureName
@property (retain, nonatomic) NSString *globalPlaylistID; // ivar: _globalPlaylistID
@property (readonly, nonatomic) BOOL hasBuildVersion;
@property (nonatomic) BOOL hasCharacterDisplayedCount;
@property (readonly, nonatomic) BOOL hasCloudAlbumID;
@property (nonatomic) BOOL hasCloudPlaylistID;
@property (nonatomic) BOOL hasContainerAdamID;
@property (readonly, nonatomic) BOOL hasContainerID;
@property (nonatomic) BOOL hasContainerType;
@property (readonly, nonatomic) BOOL hasDeviceName;
@property (nonatomic) BOOL hasDisplayType;
@property (nonatomic) BOOL hasEndReasonType;
@property (readonly, nonatomic) BOOL hasEnqueuerProperties;
@property (nonatomic) BOOL hasEquivalencySourceAdamID;
@property (nonatomic) BOOL hasEventDateTimestamp;
@property (nonatomic) BOOL hasEventSecondsFromGMT;
@property (readonly, nonatomic) BOOL hasEventTimeZoneName;
@property (nonatomic) BOOL hasEventType;
@property (readonly, nonatomic) BOOL hasExternalID;
@property (readonly, nonatomic) BOOL hasFeatureName;
@property (readonly, nonatomic) BOOL hasGlobalPlaylistID;
@property (readonly, nonatomic) BOOL hasHouseholdID;
@property (nonatomic) BOOL hasInternalBuild;
@property (nonatomic) BOOL hasItemCloudID;
@property (nonatomic) BOOL hasItemDuration;
@property (nonatomic) BOOL hasItemEndTime;
@property (nonatomic) BOOL hasItemStartTime;
@property (nonatomic) BOOL hasItemType;
@property (readonly, nonatomic) BOOL hasLyricLanguage;
@property (readonly, nonatomic) BOOL hasLyricsID;
@property (nonatomic) BOOL hasMediaType;
@property (nonatomic) BOOL hasOffline;
@property (nonatomic) BOOL hasPersistentID;
@property (readonly, nonatomic) BOOL hasPersonalizedContainerID;
@property (readonly, nonatomic) BOOL hasPlaylistVersionHash;
@property (nonatomic) BOOL hasPrivateListeningEnabled;
@property (nonatomic) BOOL hasPurchasedAdamID;
@property (nonatomic) BOOL hasRadioAdamID;
@property (nonatomic) BOOL hasReasonHintType;
@property (readonly, nonatomic) BOOL hasRecommendationData;
@property (readonly, nonatomic) BOOL hasRequestingBundleIdentifier;
@property (readonly, nonatomic) BOOL hasRequestingBundleVersion;
@property (nonatomic) BOOL hasSBEnabled;
@property (nonatomic) BOOL hasSiriInitiated;
@property (nonatomic) BOOL hasSourceType;
@property (readonly, nonatomic) BOOL hasStationHash;
@property (nonatomic) BOOL hasStationID;
@property (readonly, nonatomic) BOOL hasStationStringID;
@property (nonatomic) BOOL hasStoreAccountID;
@property (readonly, nonatomic) BOOL hasStoreFrontID;
@property (readonly, nonatomic) BOOL hasStoreID;
@property (nonatomic) BOOL hasSubscriptionAdamID;
@property (nonatomic) BOOL hasSystemReleaseType;
@property (readonly, nonatomic) BOOL hasTimedMetadata;
@property (readonly, nonatomic) BOOL hasTrackInfo;
@property (nonatomic) BOOL hasTvShowPurchasedAdamID;
@property (nonatomic) BOOL hasTvShowSubscriptionAdamID;
@property (retain, nonatomic) NSString *householdID; // ivar: _householdID
@property (nonatomic) BOOL internalBuild; // ivar: _internalBuild
@property (nonatomic) NSUInteger itemCloudID; // ivar: _itemCloudID
@property (nonatomic) CGFloat itemDuration; // ivar: _itemDuration
@property (nonatomic) CGFloat itemEndTime; // ivar: _itemEndTime
@property (nonatomic) CGFloat itemStartTime; // ivar: _itemStartTime
@property (nonatomic) int itemType; // ivar: _itemType
@property (retain, nonatomic) NSString *lyricLanguage; // ivar: _lyricLanguage
@property (retain, nonatomic) NSString *lyricsID; // ivar: _lyricsID
@property (nonatomic) int mediaType; // ivar: _mediaType
@property (nonatomic) BOOL offline; // ivar: _offline
@property (nonatomic) NSInteger persistentID; // ivar: _persistentID
@property (retain, nonatomic) NSString *personalizedContainerID; // ivar: _personalizedContainerID
@property (retain, nonatomic) NSString *playlistVersionHash; // ivar: _playlistVersionHash
@property (nonatomic) BOOL privateListeningEnabled; // ivar: _privateListeningEnabled
@property (nonatomic) NSInteger purchasedAdamID; // ivar: _purchasedAdamID
@property (nonatomic) NSInteger radioAdamID; // ivar: _radioAdamID
@property (nonatomic) int reasonHintType; // ivar: _reasonHintType
@property (retain, nonatomic) NSData *recommendationData; // ivar: _recommendationData
@property (retain, nonatomic) NSString *requestingBundleIdentifier; // ivar: _requestingBundleIdentifier
@property (retain, nonatomic) NSString *requestingBundleVersion; // ivar: _requestingBundleVersion
@property (nonatomic) BOOL sBEnabled; // ivar: _sBEnabled
@property (nonatomic) BOOL siriInitiated; // ivar: _siriInitiated
@property (nonatomic) int sourceType; // ivar: _sourceType
@property (retain, nonatomic) NSString *stationHash; // ivar: _stationHash
@property (nonatomic) NSInteger stationID; // ivar: _stationID
@property (retain, nonatomic) NSString *stationStringID; // ivar: _stationStringID
@property (nonatomic) NSUInteger storeAccountID; // ivar: _storeAccountID
@property (retain, nonatomic) NSString *storeFrontID; // ivar: _storeFrontID
@property (retain, nonatomic) NSString *storeID; // ivar: _storeID
@property (nonatomic) NSInteger subscriptionAdamID; // ivar: _subscriptionAdamID
@property (nonatomic) int systemReleaseType; // ivar: _systemReleaseType
@property (retain, nonatomic) NSData *timedMetadata; // ivar: _timedMetadata
@property (retain, nonatomic) NSData *trackInfo; // ivar: _trackInfo
@property (nonatomic) NSInteger tvShowPurchasedAdamID; // ivar: _tvShowPurchasedAdamID
@property (nonatomic) NSInteger tvShowSubscriptionAdamID; // ivar: _tvShowSubscriptionAdamID


-(BOOL)isEqual:(id)arg0 ;
-(BOOL)readFrom:(id)arg0 ;
-(NSUInteger)hash;
-(id)containerTypeAsString:(int)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)dictionaryRepresentation;
-(id)displayTypeAsString:(int)arg0 ;
-(id)endReasonTypeAsString:(int)arg0 ;
-(id)eventTypeAsString:(int)arg0 ;
-(id)itemTypeAsString:(int)arg0 ;
-(id)mediaTypeAsString:(int)arg0 ;
-(id)reasonHintTypeAsString:(int)arg0 ;
-(id)sourceTypeAsString:(int)arg0 ;
-(id)systemReleaseTypeAsString:(int)arg0 ;
-(int)StringAsContainerType:(id)arg0 ;
-(int)StringAsDisplayType:(id)arg0 ;
-(int)StringAsEndReasonType:(id)arg0 ;
-(int)StringAsEventType:(id)arg0 ;
-(int)StringAsItemType:(id)arg0 ;
-(int)StringAsMediaType:(id)arg0 ;
-(int)StringAsReasonHintType:(id)arg0 ;
-(int)StringAsSourceType:(id)arg0 ;
-(int)StringAsSystemReleaseType:(id)arg0 ;
-(void)copyTo:(id)arg0 ;
-(void)mergeFrom:(id)arg0 ;
-(void)writeTo:(id)arg0 ;


@end


#endif