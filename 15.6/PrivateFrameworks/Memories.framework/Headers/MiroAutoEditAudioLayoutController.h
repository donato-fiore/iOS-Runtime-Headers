// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef MIROAUTOEDITAUDIOLAYOUTCONTROLLER_H
#define MIROAUTOEDITAUDIOLAYOUTCONTROLLER_H

@class NSDictionary, NSArray;

#import <Foundation/Foundation.h>

#import "MiroBlueprint.h"
#import "MiroAutoEditLogger.h"
#import "Project.h"

@interface MiroAutoEditAudioLayoutController : NSObject

@property (retain, nonatomic) MiroBlueprint *blueprint; // ivar: _blueprint
@property (retain, nonatomic) NSDictionary *freezeRanges; // ivar: _freezeRanges
@property (nonatomic) BOOL isFirstAutoEdit; // ivar: _isFirstAutoEdit
@property (nonatomic) ? lastBeatTime; // ivar: _lastBeatTime
@property (retain, nonatomic) NSArray *layoutClips; // ivar: _layoutClips
@property (retain, nonatomic) MiroAutoEditLogger *logger; // ivar: _logger
@property (retain, nonatomic) Project *project; // ivar: _project


-(BOOL)_attemptToRollEditFromTime:(int)arg0 toTime:(int)arg1 firstClip:(id)arg2 secondClip:(id)arg3 failureReasons:(id)arg4 allowSlack:(BOOL)arg5 ;
-(BOOL)_clipLimitsRoll:(id)arg0 ;
-(BOOL)_hasMusic:(id)arg0 ;
-(BOOL)_hasVoiceAndFacesForClip:(id)arg0 gatherLoudness:(*id)arg1 peak:(*id)arg2 voiceRanges:(*id)arg3 ;
-(NSUInteger)_computeMuteStateForClip:(id)arg0 hasAnalysis:(BOOL)arg1 hasVoice:(BOOL)arg2 hasVoiceAndFaces:(BOOL)arg3 hasMusic:(BOOL)arg4 ;
-(NSUInteger)indexOfClipInLayoutClips:(id)arg0 ;
-(id)_applyFrozenVolumeAndReturnRemainingItems;
-(id)_interestingBeatTimedMetaItemsForFlexAudioClip:(id)arg0 forFrameTime:(int)arg1 withGranularity:(id)arg2 ;
-(id)_onsetDrivenInterestingBeatsForTime:(struct ? )arg0 metadataDict:(id)arg1 ;
-(id)_rollCutsToBeatsWithGranularity:(id)arg0 excludingTimes:(id)arg1 ;
-(id)_segmentAndBeatsBasedInterestingBeatsForTime:(struct ? )arg0 metadataDict:(id)arg1 ;
-(id)_timedMetadataItemAtTime:(struct ? )arg0 forFlexAudioClip:(id)arg1 withIdentifier:(id)arg2 ;
-(id)applyAudioPolishToProject:(id)arg0 blueprint:(id)arg1 freezeRanges:(id)arg2 isFirstAutoEdit:(BOOL)arg3 layoutClips:(id)arg4 ;
-(void)_applyComputedVolumesForClips:(id)arg0 ;
-(void)_computeVolumesForClip:(id)arg0 loudnessValues:(id)arg1 peakValues:(id)arg2 returnNormalVolume:(*float)arg3 returnDimmedVolume:(*float)arg4 ;
-(void)_enumerateClipsWithAudio:(id)arg0 usingBlock:(id)arg1 ;
-(void)analyzeLoudness:(id)arg0 ;
-(void)applyBackgroundAudioVolume;
-(void)applyClipVolumes;
-(void)applyJAndLCuts;
-(void)rollCutsToBeats;


@end


#endif