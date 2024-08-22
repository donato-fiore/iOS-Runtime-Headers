// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef NMRPLAYERRESPONSENOWPLAYINGSTATE_H
#define NMRPLAYERRESPONSENOWPLAYINGSTATE_H

@class MPCPlayerResponse;
@protocol NSCopying;


#import "NMRNowPlayingState.h"

@interface NMRPlayerResponseNowPlayingState : NMRNowPlayingState <NSCopying>



@property (readonly, nonatomic) MPCPlayerResponse *playerResponse; // ivar: _playerResponse


-(BOOL)hasNowPlayingItem;
-(BOOL)hasUpNextQueue;
-(BOOL)isAdvertisement;
-(BOOL)isAlwaysLive;
-(BOOL)isAutoPlay;
-(BOOL)isBanCommandEnabled;
-(BOOL)isBanCommandSupported;
-(BOOL)isBannedActive;
-(BOOL)isBookmarkCommandEnabled;
-(BOOL)isBookmarkCommandSupported;
-(BOOL)isBookmarkedActive;
-(BOOL)isExplicitTrack;
-(BOOL)isLikeCommandEnabled;
-(BOOL)isLikeCommandSupported;
-(BOOL)isLikedActive;
-(BOOL)isNextTrackCommandEnabled;
-(BOOL)isPlaybackRateCommandSupported;
-(BOOL)isPreviousTrackCommandEnabled;
-(BOOL)isQueueEndActionCommandSupported;
-(BOOL)isQueueEndActionSupported:(int)arg0 ;
-(BOOL)isRepeatModeCommandSupported;
-(BOOL)isShuffleModeCommandSupported;
-(BOOL)isSkipBackwardCommandEnabled;
-(BOOL)isSkipForwardCommandEnabled;
-(CGFloat)duration;
-(CGFloat)elapsedTimeAtLastUpdate;
-(CGFloat)fastForwardTimeInterval;
-(CGFloat)rewindTimeInterval;
-(NSInteger)banCommandPresentationStyle;
-(NSInteger)likeCommandPresentationStyle;
-(float)playbackRate;
-(float)preferredPlaybackRate;
-(id)_nowPlayingRadioStation;
-(id)_nowPlayingSong;
-(id)album;
-(id)applicationBundleIdentifier;
-(id)applicationDisplayName;
-(id)artist;
-(id)artworkCatalog;
-(id)collectionTitle;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)identifiers;
-(id)initWithPlayerResponse:(id)arg0 ;
-(id)itemAlbumPersistentID;
-(id)itemCompanionPersistentID;
-(id)itemPersistentID;
-(id)localizedBanTitle;
-(id)localizedBookmarkTitle;
-(id)localizedLikeTitle;
-(id)radioStationHash;
-(id)radioStationIdentifier;
-(id)radioStationName;
-(id)storeAdamID;
-(id)timestamp;
-(id)title;
-(int)queueEndAction;
-(int)repeatMode;
-(int)shuffleMode;
-(unsigned int)playbackState;


@end


#endif