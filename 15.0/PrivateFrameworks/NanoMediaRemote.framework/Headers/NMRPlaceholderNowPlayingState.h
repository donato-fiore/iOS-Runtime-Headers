// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef NMRPLACEHOLDERNOWPLAYINGSTATE_H
#define NMRPLACEHOLDERNOWPLAYINGSTATE_H

@class NSString, MPArtworkCatalog, NSNumber;


#import "NMRNowPlayingState.h"

@interface NMRPlaceholderNowPlayingState : NMRNowPlayingState

@property (copy, nonatomic) NSString *album; // ivar: album
@property (nonatomic, getter=isAlwaysLive) BOOL alwaysLive; // ivar: alwaysLive
@property (copy, nonatomic) NSString *artist; // ivar: artist
@property (retain, nonatomic) MPArtworkCatalog *artworkCatalog; // ivar: artworkCatalog
@property (copy, nonatomic) NSString *collectionTitle; // ivar: collectionTitle
@property (nonatomic, getter=isExplicitTrack) BOOL explicitTrack; // ivar: explicitTrack
@property (nonatomic) CGFloat fastForwardTimeInterval; // ivar: fastForwardTimeInterval
@property (copy, nonatomic) NSNumber *itemPersistentID; // ivar: itemPersistentID
@property (nonatomic, getter=isNextTrackCommandEnabled) BOOL nextTrackCommandEnabled; // ivar: nextTrackCommandEnabled
@property (nonatomic) float playbackRate; // ivar: playbackRate
@property (nonatomic, getter=isPlaybackRateCommandSupported) BOOL playbackRateCommandSupported; // ivar: playbackRateCommandSupported
@property (nonatomic) unsigned int playbackState; // ivar: playbackState
@property (nonatomic) float preferredPlaybackRate; // ivar: preferredPlaybackRate
@property (nonatomic, getter=isPreviousTrackCommandEnabled) BOOL previousTrackCommandEnabled; // ivar: previousTrackCommandEnabled
@property (retain, nonatomic) NSString *radioStationName; // ivar: radioStationName
@property (nonatomic) CGFloat rewindTimeInterval; // ivar: rewindTimeInterval
@property (nonatomic, getter=isSkipBackwardCommandEnabled) BOOL skipBackwardCommandEnabled; // ivar: skipBackwardCommandEnabled
@property (nonatomic, getter=isSkipForwardCommandEnabled) BOOL skipForwardCommandEnabled; // ivar: skipForwardCommandEnabled
@property (copy, nonatomic) NSString *title; // ivar: title




@end


#endif