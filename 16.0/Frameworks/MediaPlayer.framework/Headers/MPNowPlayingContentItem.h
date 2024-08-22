// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef MPNOWPLAYINGCONTENTITEM_H
#define MPNOWPLAYINGCONTENTITEM_H

@class NSDictionary, NSString, NSArray, NSDate;
@protocol NSCopying, MPNowPlayingContentItemArtworkDataSource;


#import "MPContentItem.h"
#import "MPNowPlayingInfoAudioFormat.h"
#import "MPMediaItemArtwork.h"
#import "MPNowPlayingInfoAudioRoute.h"
#import "MPNowPlayingInfoLyricsItem.h"

@interface MPNowPlayingContentItem : MPContentItem <NSCopying>

 {
    NSDictionary *_nowPlayingInfo;
}


@property (copy, nonatomic) MPNowPlayingInfoAudioFormat *activeFormat;
@property (nonatomic) NSInteger activeFormatJustification;
@property (nonatomic, getter=isAdvertisement) BOOL advertisement;
@property (copy, nonatomic) NSString *albumArtistName;
@property (copy, nonatomic) NSString *albumName;
@property (nonatomic) NSUInteger albumTraits;
@property (copy, nonatomic) NSString *albumYear;
@property (copy, nonatomic) NSArray *alternativeFormats;
@property (nonatomic, getter=isAlwaysLiveItem) BOOL alwaysLiveItem;
@property (retain, nonatomic) MPMediaItemArtwork *artwork;
@property (retain, nonatomic) NSObject<MPNowPlayingContentItemArtworkDataSource> *artworkDataSource; // ivar: _artworkDataSource
@property (copy, nonatomic) NSString *artworkIdentifier;
@property (copy, nonatomic) NSString *artworkURL;
@property (copy, nonatomic) NSArray *artworkURLTemplates;
@property (copy, nonatomic) MPNowPlayingInfoAudioRoute *audioRoute;
@property (readonly, nonatomic) NSDictionary *auxiliaryNowPlayingInfo;
@property (copy, nonatomic) NSArray *availableLanguageOptions;
@property (readonly, nonatomic) CGFloat calculatedElapsedTime;
@property (copy, nonatomic) NSString *collectionIdentifier;
@property (copy, nonatomic) NSDictionary *collectionInfo;
@property (copy, nonatomic) NSString *composerName;
@property (copy, nonatomic) NSArray *currentLanguageOptions;
@property (nonatomic) float defaultPlaybackRate;
@property (copy, nonatomic) NSDictionary *deviceSpecificUserInfo;
@property (copy, nonatomic) NSString *directorName;
@property (nonatomic) NSInteger discNumber;
@property (nonatomic) CGFloat duration;
@property (nonatomic) NSInteger editingStyleFlags;
@property (nonatomic) CGFloat elapsedTime;
@property (readonly, nonatomic) CGFloat elapsedTimeTimestamp;
@property (nonatomic) NSInteger episodeNumber;
@property (nonatomic) NSInteger episodeType;
@property (nonatomic, getter=isExplicitItem) BOOL explicitItem;
@property (copy, nonatomic) NSString *externalContentIdentifier;
@property (nonatomic) NSUInteger formatTierPreference;
@property (copy, nonatomic) NSString *genreName;
@property (nonatomic) BOOL hasArtwork;
@property (nonatomic) BOOL hasDescription;
@property (nonatomic) BOOL hasLanguageOptions;
@property (nonatomic) BOOL hasLyrics;
@property (copy, nonatomic) NSString *info;
@property (nonatomic) NSInteger legacyUniqueID;
@property (nonatomic, getter=isLoading) BOOL loading;
@property (copy, nonatomic) NSString *localizedContentRating;
@property (copy, nonatomic) NSString *localizedDurationString;
@property (copy, nonatomic) MPNowPlayingInfoLyricsItem *lyrics;
@property (nonatomic) NSUInteger mediaType;
@property (copy, nonatomic) NSDictionary *nowPlayingInfo;
@property (nonatomic) NSInteger numberOfChildren;
@property (nonatomic) NSInteger playCount;
@property (nonatomic) float playbackRate;
@property (nonatomic) NSUInteger playlistTraits;
@property (nonatomic) NSInteger playlistType;
@property (copy, nonatomic) MPNowPlayingInfoAudioFormat *preferredFormat;
@property (copy, nonatomic) NSString *profileIdentifier;
@property (copy, nonatomic) NSString *radioStationName;
@property (copy, nonatomic) NSString *radioStationStringIdentifier;
@property (nonatomic) NSInteger radioStationType;
@property (copy, nonatomic) NSDate *releaseDate;
@property (nonatomic) NSInteger seasonNumber;
@property (copy, nonatomic) NSArray *sections;
@property (copy, nonatomic) NSString *seriesName;
@property (copy, nonatomic) NSString *serviceIdentifier;
@property (nonatomic, getter=isSharableItem) BOOL sharableItem; // ivar: _sharableItem
@property (nonatomic) NSUInteger songTraits;
@property (nonatomic) CGFloat startTime;
@property (nonatomic, getter=isSteerable) BOOL steerable;
@property (nonatomic) NSInteger storeAlbumID;
@property (nonatomic) NSInteger storeArtistID;
@property (nonatomic) NSInteger storeID;
@property (nonatomic) NSInteger storeSubscriptionID;
@property (nonatomic) NSInteger totalDiscCount;
@property (nonatomic) NSInteger totalTrackCount;
@property (copy, nonatomic) NSString *trackArtistName;
@property (nonatomic) NSInteger trackNumber;
@property (copy, nonatomic) NSDictionary *userInfo;


+(BOOL)shouldPushArtworkData;
-(id)copyWithNewIdentifier:(id)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(void)_mergeContentItem:(id)arg0 ;
-(void)invalidateArtwork;
-(void)invalidateDescription;
-(void)invalidateLanguageOptions;
-(void)invalidateLyrics;


@end


#endif