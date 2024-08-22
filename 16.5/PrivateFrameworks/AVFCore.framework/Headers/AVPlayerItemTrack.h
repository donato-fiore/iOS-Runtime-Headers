// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef AVPLAYERITEMTRACK_H
#define AVPLAYERITEMTRACK_H

@class NSArray;

#import <Foundation/Foundation.h>

#import "AVPlayerItemTrackInternal.h"
#import "AVAssetTrack.h"

@interface AVPlayerItemTrack : NSObject {
    AVPlayerItemTrackInternal *_playerItemTrack;
}


@property (readonly, nonatomic) AVAssetTrack *assetTrack;
@property (readonly) float currentVideoFrameRate;
@property (nonatomic, getter=isEnabled) BOOL enabled;
@property (readonly, nonatomic) NSArray *outputs;


+(id)playerItemTrackWithFigPlaybackItem:(struct OpaqueFigPlaybackItem *)arg0 readyForInspection:(BOOL)arg1 trackID:(int)arg2 asset:(id)arg3 playerItem:(id)arg4 ;
-(BOOL)_figPlaybackItemIsReadyForInspection;
-(BOOL)disableColorMatching;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)willTrimShortDurationAudioSamples;
-(NSInteger)activeHapticChannelIndex;
-(NSUInteger)hash;
-(float)hapticVolume;
-(id)_initWithFigPlaybackItem:(struct OpaqueFigPlaybackItem *)arg0 readyForInspection:(BOOL)arg1 trackID:(int)arg2 asset:(id)arg3 playerItem:(id)arg4 ;
-(id)_playerItem;
-(id)_weakReferenceToPlayerItem;
-(id)description;
-(id)effectiveLoudnessInfo;
-(id)fallbackTrack;
-(id)loudnessInfo;
-(id)videoEnhancementFilterOptions;
-(int)effectiveEQPreset;
-(int)trackID;
-(void)_attachToFigPlaybackItemOfPlayerItem:(id)arg0 ;
-(void)_respondToFigPlaybackItemBecomingReadyForInpection;
-(void)_transferActiveHapticChannelIndexToFig;
-(void)_transferDisableColorMatchingToFig;
-(void)_transferEnabledToFig;
-(void)_transferHapticVolumeToFig;
-(void)_transferLoudnessInfoToFig;
-(void)_transferVideoEnhancementOptionsToFig;
-(void)_updateTrackExtractionIDArrayProperty;
-(void)addOutput:(id)arg0 ;
-(void)dealloc;
-(void)removeOutput:(id)arg0 ;
-(void)setActiveHapticChannelIndex:(NSInteger)arg0 ;
-(void)setDisableColorMatching:(BOOL)arg0 ;
-(void)setHapticVolume:(float)arg0 ;
-(void)setLoudnessInfo:(id)arg0 ;
-(void)setVideoEnhancementFilterOptions:(id)arg0 ;


@end


#endif