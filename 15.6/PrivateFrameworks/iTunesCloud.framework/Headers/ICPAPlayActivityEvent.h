// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef ICPAPLAYACTIVITYEVENT_H
#define ICPAPLAYACTIVITYEVENT_H

@class PBCodable, NSMutableArray, NSString, NSData;
@protocol NSCopying;


#import "ICPAPlayActivityEnqueuerProperties.h"
#import "ICPAPlayModeDictionary.h"
#import "ICPAAudioQualityDictionary.h"

@interface ICPAPlayActivityEvent : PBCodable <NSCopying>

 {
    NSInteger _characterDisplayedCount;
    NSUInteger _cloudPlaylistID;
    NSInteger _containerAdamID;
    NSInteger _equivalencySourceAdamID;
    CGFloat _eventDateTimestamp;
    CGFloat _eventSecondsFromGMT;
    NSUInteger _itemCloudID;
    CGFloat _itemDuration;
    CGFloat _itemEndTime;
    CGFloat _itemStartTime;
    NSInteger _persistentID;
    NSInteger _purchasedAdamID;
    NSInteger _radioAdamID;
    NSInteger _reportingAdamID;
    NSInteger _sharedActivityGroupSizeCurrent;
    NSInteger _sharedActivityGroupSizeMax;
    NSInteger _stationID;
    NSUInteger _storeAccountID;
    NSInteger _subscriptionAdamID;
    NSInteger _tvShowPurchasedAdamID;
    NSInteger _tvShowSubscriptionAdamID;
    int _audioQualityPreference;
    NSMutableArray *_buildFeatures;
    NSString *_buildVersion;
    NSString *_cloudAlbumID;
    NSString *_containerID;
    int _containerType;
    NSString *_deviceName;
    int _displayType;
    int _endReasonType;
    ICPAPlayActivityEnqueuerProperties *_enqueuerProperties;
    NSString *_eventTimeZoneName;
    int _eventType;
    NSString *_externalID;
    NSString *_featureName;
    NSString *_globalPlaylistID;
    NSString *_householdID;
    int _itemType;
    NSString *_lyricLanguage;
    NSString *_lyricsID;
    int _mediaType;
    NSString *_personalizedContainerID;
    ICPAPlayModeDictionary *_playMode;
    int _playbackFormatPreference;
    NSString *_playlistVersionHash;
    ICPAAudioQualityDictionary *_providedAudioQuality;
    NSString *_queueGroupingID;
    int _reasonHintType;
    NSData *_recommendationData;
    NSString *_requestingBundleIdentifier;
    NSString *_requestingBundleVersion;
    int _sourceType;
    NSString *_stationHash;
    NSString *_stationStringID;
    NSString *_storeFrontID;
    NSString *_storeID;
    int _systemReleaseType;
    ICPAAudioQualityDictionary *_targetedAudioQuality;
    NSData *_timedMetadata;
    NSData *_trackInfo;
    BOOL _internalBuild;
    BOOL _offline;
    BOOL _privateListeningEnabled;
    BOOL _sBEnabled;
    BOOL _siriInitiated;
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