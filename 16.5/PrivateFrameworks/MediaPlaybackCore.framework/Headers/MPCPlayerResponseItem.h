// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef MPCPLAYERRESPONSEITEM_H
#define MPCPLAYERRESPONSEITEM_H

@class NSArray, NSString, NSIndexPath, MPModelGenericObject, MPNowPlayingInfoAudioFormat;
@protocol MPCPlayerResponseItemMusicAudio;

#import <Foundation/Foundation.h>

#import "MPCPlayerAudioFormat.h"
#import "MPCPlayerAudioRoute.h"
#import "MPCPlayerResponseParticipant.h"
#import "MPCPlayerResponse.h"

@interface MPCPlayerResponseItem : NSObject <MPCPlayerResponseItemMusicAudio>

 {
    NSUInteger _seekSupport;
}


@property (readonly, nonatomic) MPCPlayerAudioFormat *activeFormat; // ivar: _activeFormat
@property (readonly, nonatomic) NSInteger activeFormatJustification; // ivar: _activeFormatJustification
@property (readonly, nonatomic) NSArray *alternateFormats; // ivar: _alternateFormats
@property (readonly, nonatomic) MPCPlayerAudioRoute *audioRoute; // ivar: _audioRoute
@property (readonly, nonatomic, getter=isAutoPlay) BOOL autoPlay; // ivar: _autoPlay
@property (readonly, copy, nonatomic) NSString *contentItemIdentifier; // ivar: _contentItemIdentifier
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) ? duration; // ivar: _duration
@property (readonly, nonatomic) MPCPlayerResponseParticipant *enqueueingParticipant; // ivar: _enqueueingParticipant
@property (readonly, copy, nonatomic) NSString *explicitBadge; // ivar: _explicitBadge
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) NSIndexPath *indexPath; // ivar: _indexPath
@property (readonly, nonatomic) NSArray *languageOptionGroups; // ivar: _languageOptionGroups
@property (readonly, copy, nonatomic) NSString *localizedDurationString; // ivar: _localizedDurationString
@property (readonly, nonatomic) MPModelGenericObject *metadataObject; // ivar: _metadataObject
@property (readonly, nonatomic) NSObject<MPCPlayerResponseItemMusicAudio> *musicAudio;
@property (readonly, copy, nonatomic) MPNowPlayingInfoAudioFormat *nowPlayingAudioFormat;
@property (readonly, nonatomic, getter=isPlaceholder) BOOL placeholder; // ivar: _placeholder
@property (readonly, nonatomic) MPCPlayerAudioFormat *preferredFormat; // ivar: _preferredFormat
@property (readonly, nonatomic) NSUInteger preferredTiers; // ivar: _preferredTiers
@property (readonly, weak, nonatomic) MPCPlayerResponse *response; // ivar: _response
@property (readonly, nonatomic) NSInteger revision; // ivar: _revision
@property (readonly) Class superclass;


-(NSUInteger)_determineSeekSupport;
-(id)_buildLanguageOptionGroups:(id)arg0 currentLanguageOptions:(id)arg1 ;
-(id)_feedbackCommandWithMediaRemoteCommand:(unsigned int)arg0 ;
-(id)_stateDumpObject;
-(id)dislikeCommand;
-(id)initWithModelGenericObject:(id)arg0 indexPath:(id)arg1 response:(id)arg2 ;
-(id)likeCommand;
-(id)playbackRateCommand;
-(id)rateCommand;
-(id)remove;
-(id)seekCommand;
-(id)switchToAlternativeFormat:(id)arg0 ;
-(id)wishlistCommand;


@end


#endif