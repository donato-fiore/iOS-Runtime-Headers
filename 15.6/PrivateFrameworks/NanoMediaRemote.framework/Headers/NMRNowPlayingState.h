// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef NMRNOWPLAYINGSTATE_H
#define NMRNOWPLAYINGSTATE_H

@class NSString, NSData, MPArtworkCatalog, MPIdentifierSet, NSNumber, NSDate;
@protocol NSCopying;

#import <Foundation/Foundation.h>


@interface NMRNowPlayingState : NSObject <NSCopying>



@property (readonly, nonatomic, getter=isAdvertisement) BOOL advertisement;
@property (readonly, nonatomic) NSString *album;
@property (readonly, nonatomic, getter=isAlwaysLive) BOOL alwaysLive;
@property (readonly, nonatomic) NSString *applicationBundleIdentifier;
@property (readonly, nonatomic) NSString *applicationDisplayName;
@property (readonly, nonatomic) NSData *applicationIconImageData;
@property (readonly, nonatomic) NSString *artist;
@property (readonly, nonatomic) MPArtworkCatalog *artworkCatalog;
@property (readonly, nonatomic, getter=isAutoPlay) BOOL autoPlay;
@property (readonly, nonatomic, getter=isBanCommandEnabled) BOOL banCommandEnabled;
@property (readonly, nonatomic) NSInteger banCommandPresentationStyle;
@property (readonly, nonatomic, getter=isBanCommandSupported) BOOL banCommandSupported;
@property (readonly, nonatomic, getter=isBannedActive) BOOL bannedActive;
@property (readonly, nonatomic, getter=isBookmarkCommandEnabled) BOOL bookmarkCommandEnabled;
@property (readonly, nonatomic, getter=isBookmarkCommandSupported) BOOL bookmarkCommandSupported;
@property (readonly, nonatomic, getter=isBookmarkedActive) BOOL bookmarkedActive;
@property (readonly, nonatomic) NSString *collectionTitle;
@property (readonly, nonatomic) CGFloat duration;
@property (readonly, nonatomic) CGFloat elapsedTime;
@property (readonly, nonatomic) CGFloat elapsedTimeAtLastUpdate;
@property (readonly, nonatomic, getter=isExplicitTrack) BOOL explicitTrack;
@property (readonly, nonatomic) CGFloat fastForwardTimeInterval;
@property (readonly, nonatomic, getter=isFirstPartyApp) BOOL firstPartyApp;
@property (readonly, nonatomic) BOOL hasNowPlayingInfo;
@property (readonly, nonatomic) BOOL hasNowPlayingItem;
@property (readonly, nonatomic) BOOL hasUpNextQueue;
@property (readonly, nonatomic) MPIdentifierSet *identifiers;
@property (readonly, nonatomic) NSNumber *itemAlbumPersistentID;
@property (readonly, nonatomic) NSNumber *itemCompanionPersistentID;
@property (readonly, nonatomic) NSNumber *itemPersistentID;
@property (readonly, nonatomic, getter=isLikeCommandEnabled) BOOL likeCommandEnabled;
@property (readonly, nonatomic) NSInteger likeCommandPresentationStyle;
@property (readonly, nonatomic, getter=isLikeCommandSupported) BOOL likeCommandSupported;
@property (readonly, nonatomic, getter=isLikedActive) BOOL likedActive;
@property (readonly, nonatomic) NSString *localizedBanTitle;
@property (readonly, nonatomic) NSString *localizedBookmarkTitle;
@property (readonly, nonatomic) NSString *localizedLikeTitle;
@property (readonly, nonatomic, getter=isNextTrackCommandEnabled) BOOL nextTrackCommandEnabled;
@property (readonly, nonatomic) NSString *nmr_localApplicationBundleIdentifier;
@property (readonly, nonatomic) float playbackRate;
@property (readonly, nonatomic, getter=isPlaybackRateCommandSupported) BOOL playbackRateCommandSupported;
@property (readonly, nonatomic) unsigned int playbackState;
@property (readonly, nonatomic, getter=isPlaying) BOOL playing;
@property (readonly, nonatomic, getter=isPlayingRadio) BOOL playingRadio;
@property (readonly, nonatomic) float preferredPlaybackRate; // ivar: _preferredPlaybackRate
@property (readonly, nonatomic, getter=isPreviousTrackCommandEnabled) BOOL previousTrackCommandEnabled;
@property (readonly, nonatomic) int queueEndAction;
@property (readonly, nonatomic, getter=isQueueEndActionCommandSupported) BOOL queueEndActionCommandSupported;
@property (readonly, nonatomic) NSString *radioStationHash;
@property (readonly, nonatomic) NSNumber *radioStationIdentifier;
@property (readonly, nonatomic) NSString *radioStationName;
@property (readonly, nonatomic) int repeatMode;
@property (readonly, nonatomic, getter=isRepeatModeCommandSupported) BOOL repeatModeCommandSupported;
@property (readonly, nonatomic) CGFloat rewindTimeInterval;
@property (readonly, nonatomic) int shuffleMode;
@property (readonly, nonatomic, getter=isShuffleModeCommandSupported) BOOL shuffleModeCommandSupported;
@property (readonly, nonatomic, getter=isSkipBackwardCommandEnabled) BOOL skipBackwardCommandEnabled;
@property (readonly, nonatomic, getter=isSkipForwardCommandEnabled) BOOL skipForwardCommandEnabled;
@property (readonly, nonatomic) NSNumber *storeAdamID;
@property (readonly, nonatomic) NSDate *timestamp;
@property (readonly, nonatomic) NSString *title;


+(id)emptyNowPlayingState;
-(BOOL)isQueueEndActionSupported:(int)arg0 ;
-(NSUInteger)compareWithNowPlayingState:(id)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;


@end


#endif