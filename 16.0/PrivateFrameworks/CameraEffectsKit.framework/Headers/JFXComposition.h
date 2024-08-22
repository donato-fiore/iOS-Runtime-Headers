// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef JFXCOMPOSITION_H
#define JFXCOMPOSITION_H

@class NSMutableDictionary, AVMutableAudioMix, NSMutableArray, AVMutableComposition, AVPlayerItem, NSMapTable, PVColorSpace, AVMutableVideoComposition;
@protocol JFXCompositionPlayableElementsDataSource, JFXPlayableElement;

#import <Foundation/Foundation.h>

#import "JFXCompositionTrackGroup.h"

@interface JFXComposition : NSObject

@property (retain, nonatomic) NSMutableDictionary *assetsUsed; // ivar: _assetsUsed
@property (retain, nonatomic) AVMutableAudioMix *audioMix; // ivar: _audioMix
@property (retain, nonatomic) NSMutableArray *audioMixParameters; // ivar: _audioMixParameters
@property (retain, nonatomic) AVMutableComposition *avComposition; // ivar: _avComposition
@property (retain, nonatomic) AVPlayerItem *avPlayerItem; // ivar: _avPlayerItem
@property (nonatomic) NSInteger backgroundAudioTrackCount; // ivar: _backgroundAudioTrackCount
@property (retain, nonatomic) NSMapTable *clipCustomRendererMap; // ivar: _clipCustomRendererMap
@property (retain, nonatomic) NSMapTable *clipFaceTrackingPlaybackDelegates; // ivar: _clipFaceTrackingPlaybackDelegates
@property (retain, nonatomic) NSObject<JFXCompositionPlayableElementsDataSource> *clipsDataSource; // ivar: _clipsDataSource
@property (readonly, nonatomic) PVColorSpace *compositionOutputColorSpace;
@property (nonatomic) ? duration; // ivar: _duration
@property (nonatomic) NSInteger foregroundAudioTrackCount; // ivar: _foregroundAudioTrackCount
@property (nonatomic) float globalAudioVolume; // ivar: _globalAudioVolume
@property (nonatomic) PVTransformAnimationInfo liveCompositionTransform; // ivar: _liveCompositionTransform
@property (retain, nonatomic) NSObject<JFXPlayableElement> *liveTransformClip; // ivar: _liveTransformClip
@property (nonatomic) BOOL needsUpdate; // ivar: _needsUpdate
@property (nonatomic) unsigned int parentCode; // ivar: _parentCode
@property (retain, nonatomic) AVPlayerItem *playerItem; // ivar: _playerItem
@property (nonatomic) CGSize previousRenderSize; // ivar: _previousRenderSize
@property (retain, nonatomic) JFXCompositionTrackGroup *trackGroupA; // ivar: _trackGroupA
@property (retain, nonatomic) JFXCompositionTrackGroup *trackGroupB; // ivar: _trackGroupB
@property (retain, nonatomic) AVMutableVideoComposition *videoComposition; // ivar: _videoComposition
@property (retain, nonatomic) NSMutableArray *videoCompositionInstructions; // ivar: _videoCompositionInstructions
@property (nonatomic) CGSize viewSize; // ivar: _viewSize


+(Class)instructionBuilderClass;
-(BOOL)CARenderingRequiredForClip:(id)arg0 ;
-(BOOL)JFX_hasEffectThatRequiresCustomRendering;
-(BOOL)JFX_isContigousSplitClip:(id)arg0 nextClip:(id)arg1 ;
-(BOOL)emptySegments:(id)arg0 ;
-(BOOL)removeTrackIfEmpty:(id)arg0 ;
-(BOOL)validate;
-(float)JFX_preferredRenderScale;
-(float)volumeForClip:(id)arg0 ;
-(id)AVComposition;
-(id)animojiCustomRendererPropsForClip:(id)arg0 currentCustomProperties:(id)arg1 sharedMediaDataReaderManager:(id)arg2 ;
-(id)buildClipList;
-(id)dissolveGraphNode:(struct ? )arg0 from:(id)arg1 to:(id)arg2 ;
-(id)initWithClipsDataSource:(id)arg0 ;
-(id)instructionToHideTrackID:(int)arg0 whileHidingTrackID:(int)arg1 timeRange:(struct ? )arg2 requiresCARendering:(BOOL)arg3 ;
-(id)instructionToShowClip:(id)arg0 withTrackID:(int)arg1 withTransform:(struct CGAffineTransform )arg2 timeRange:(struct ? )arg3 requiresCARendering:(BOOL)arg4 ;
-(id)instructionToShowImageWithClip:(id)arg0 withTransform:(struct CGAffineTransform )arg1 timeRange:(struct ? )arg2 requiresCARendering:(BOOL)arg3 ;
-(id)newInstructionGraphNodeForClip:(id)arg0 clipTransform:(struct CGAffineTransform )arg1 compositionTrackID:(int)arg2 requiresTweening:(*BOOL)arg3 isContainedClip:(BOOL)arg4 ;
-(id)updateVideoAndAudioInstructionForState:(id)arg0 previousInstructions:(id)arg1 waitingForResource:(BOOL)arg2 ;
-(int)outputFrameRate;
-(struct ? )compositionItemsForState:(id)arg0 compositionItem:(*id)arg1 backfillCompositionItem:(*id)arg2 ;
-(struct ? )timeRangeForClip:(id)arg0 ;
-(struct CGAffineTransform )clipTransform:(id)arg0 ;
-(void)CFX_updateFaceTrackingPlaybackDelegateForClip:(id)arg0 sharedMediaDataReaderManager:(id)arg1 ;
-(void)JFX_applyPropertiesForCustomVideoCompositor:(id)arg0 ;
-(void)JFX_finalizeVideoComposition;
-(void)JFX_setScrubbingModeForPlaybackDelegates:(BOOL)arg0 ;
-(void)JFX_updateFaceTrackPropertiesForEffectsAtTime:(struct ? )arg0 ;
-(void)JFX_updatePlaybackDelegatesForClip:(id)arg0 ;
-(void)addBackTracksIfRemoved;
-(void)applyExportProperties;
-(void)applyPlayerItemProperties;
-(void)applyPropertiesForCustomVideoCompositor:(id)arg0 ;
-(void)assetUsed:(id)arg0 ;
-(void)burnInPlaybackSettings:(id)arg0 ;
-(void)clearPlayerItemProperties;
-(void)dealloc;
-(void)logAddedTrack:(id)arg0 trackID:(int)arg1 ;
-(void)logRemovedTrack:(id)arg0 trackID:(int)arg1 ;
-(void)markDirty;
-(void)noteEffectChangeForClip:(id)arg0 ;
-(void)notifyNeedsEffectPropertiesUpdatedForPlaybackTime:(struct ? )arg0 ;
-(void)notifyPlaybackDidStopAtTime:(struct ? )arg0 ;
-(void)notifyPlaybackWillBegin;
-(void)playerItemDidReachEnd:(id)arg0 ;
-(void)rebuildCompositionInstructionsForVideoStillTitleCard:(id)arg0 ;
-(void)refreshAVComposition;
-(void)removeEmptyTracks;
-(void)removeTrackFromAudioMix:(int)arg0 ;
-(void)setRenderScale;
-(void)update;
-(void)updateRenderSizeIfNeeded;


@end


#endif