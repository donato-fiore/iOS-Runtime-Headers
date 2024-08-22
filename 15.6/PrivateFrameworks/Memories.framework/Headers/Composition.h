// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef COMPOSITION_H
#define COMPOSITION_H

@class AVMutableComposition, AVPlayerItem, AVMutableCompositionTrack, NSMutableArray, NSMutableDictionary, AVMutableAudioMix, NSArray, AVMutableVideoComposition;

#import <Foundation/Foundation.h>

#import "CompositionTrackGroup.h"
#import "CompositionDuckingTimes.h"
#import "Project.h"

@interface Composition : NSObject {
    AVMutableComposition *m_avComposition;
    AVPlayerItem *m_avPlayerItem;
    CompositionTrackGroup *m_trackGroupA;
    CompositionTrackGroup *m_trackGroupB;
    CompositionTrackGroup" m_backgroundAudioTrackGroup;
    CompositionTrackGroup" m_foregroundAudioTrackGroup;
    CompositionTrackGroup *m_transitionAudioTrackGroup;
    CompositionTrackGroup *m_cutawayTrackGroup;
    AVMutableCompositionTrack *m_audioWorkaroundEmptyTrack;
    NSMutableArray *m_videoCompositionInstructions;
    NSMutableArray *m_audioMixParameters;
    NSInteger m_backgroundAudioTrackCount;
    NSInteger m_foregroundAudioTrackCount;
    CGSize m_previousRenderSize;
    BOOL m_setNeedsUpdate;
    NSMutableDictionary *m_assetsUsed;
}


@property (readonly, nonatomic) AVMutableComposition *AVComposition;
@property (nonatomic) CGFloat aspect; // ivar: _aspect
@property (readonly, nonatomic) AVMutableAudioMix *audioMix; // ivar: m_audioMix
@property (retain, nonatomic) CompositionDuckingTimes *compositionDuckingTimes; // ivar: m_compositionDuckingTimes
@property (copy, nonatomic) id *compositionDuckingTimesCreationBlock; // ivar: _compositionDuckingTimesCreationBlock
@property (readonly, nonatomic) ? duration;
@property (nonatomic) float dynamicScale; // ivar: _dynamicScale
@property (nonatomic) NSArray *editList; // ivar: m_editList
@property (nonatomic) BOOL fullScreen; // ivar: _fullScreen
@property (nonatomic) BOOL fullScreenPlaybackOnExternalDisplay; // ivar: _fullScreenPlaybackOnExternalDisplay
@property (nonatomic) float globalAudioVolume; // ivar: m_globalAudioVolume
@property (nonatomic) BOOL hasMemoryConstraints; // ivar: _hasMemoryConstraints
@property (nonatomic) BOOL isDynamicPlayBack; // ivar: _isDynamicPlayBack
@property (nonatomic) BOOL isExporting; // ivar: _isExporting
@property (readonly, nonatomic) AVPlayerItem *playerItem;
@property (readonly, nonatomic) Project *project; // ivar: m_project
@property (retain) NSMutableArray *switchEffects; // ivar: _switchEffects
@property (retain) NSMutableArray *titleEffectCopies; // ivar: _titleEffectCopies
@property (retain, nonatomic) NSArray *transitionInputs; // ivar: m_transitionInputs
@property (nonatomic) BOOL useShortenedCompositionToEditClip; // ivar: m_useShortenedCompositionToEditClip
@property (readonly, nonatomic) AVMutableVideoComposition *videoComposition; // ivar: m_videoComposition
@property (readonly, nonatomic) int videotrackAStartAt; // ivar: m_videotrackAStartAt
@property (readonly, nonatomic) int videotrackBStartAt; // ivar: m_videotrackBStartAt
@property (nonatomic) CGSize viewSize; // ivar: _viewSize


-(BOOL)CARenderingRequiredForClip:(id)arg0 ;
-(BOOL)addVolumeRampToTrackGroup:(id)arg0 forClip:(id)arg1 shouldUseDucking:(BOOL)arg2 ;
-(BOOL)assembleAudioCompositionTrackGroups:(*id)arg0 destinationTrackGroupCount:(NSInteger)arg1 audioItem:(id)arg2 clip:(id)arg3 shouldUseDucking:(BOOL)arg4 shouldLoopClipContents:(BOOL)arg5 ;
-(BOOL)cutIsContiguous:(id)arg0 transition:(id)arg1 next:(id)arg2 ;
-(BOOL)emptySegments:(id)arg0 ;
-(BOOL)insertASilentAudioTrackAsWorkaround;
-(BOOL)removeTrackIfEmpty:(id)arg0 ;
-(BOOL)shouldInsertASilentAudioTrackAsWorkaround;
-(BOOL)validate;
-(BOOL)writeVolumeRampToCompositionFromTrackGroup:(id)arg0 endOfComposition:(struct ? )arg1 ;
-(float)percentBetweenRange:(struct ? )arg0 forTime:(struct ? )arg1 firstRange:(struct ? *)arg2 secondRange:(struct ? *)arg3 ;
-(float)volumeForClip:(id)arg0 ;
-(id)compositionOutputColorSpace;
-(id)cutawaysIntersectingWithClip:(id)arg0 previousTransition:(id)arg1 nextTransition:(id)arg2 cutaways:(id)arg3 ;
-(id)init;
-(id)instructionToHideTrackID:(int)arg0 whileHidingTrackID:(int)arg1 timeRange:(struct ? )arg2 requiresCARendering:(BOOL)arg3 ;
-(id)instructionToShowClip:(id)arg0 withTrackID:(int)arg1 withTransform:(struct CGAffineTransform )arg2 timeRange:(struct ? )arg3 requiresCARendering:(BOOL)arg4 isFreezeFrame:(BOOL)arg5 applyTitleEffect:(BOOL)arg6 ;
-(id)instructionToShowImageWithClip:(id)arg0 withTransform:(struct CGAffineTransform )arg1 timeRange:(struct ? )arg2 requiresCARendering:(BOOL)arg3 applyTitleEffect:(BOOL)arg4 ;
-(id)instructionToTransitionTracksForRange:(struct ? )arg0 requiresCARendering:(BOOL)arg1 incomingClipIsNarrower:(BOOL)arg2 incomingClipRequiresBG:(BOOL)arg3 outgoingClipRequiresBG:(BOOL)arg4 incomingClipIsZoomed:(BOOL)arg5 outgoingClipIsZoomed:(BOOL)arg6 transitionClip:(id)arg7 applyTitleEffect:(BOOL)arg8 ;
-(id)makeAudioPointsArrayForClip:(id)arg0 shouldUseDuckingArrays:(BOOL)arg1 ;
-(id)newInstructionGraphNodeForClip:(id)arg0 clipTransform:(struct CGAffineTransform )arg1 compositionTrackID:(int)arg2 requiresTweening:(*BOOL)arg3 isContainedClip:(BOOL)arg4 applyTitleEffect:(BOOL)arg5 ;
-(id)newInstructionGraphNodeForClipTitleEffect:(id)arg0 inputIGNode:(id)arg1 ;
-(id)newInstructionGraphNodeToShowGeneratorClip:(id)arg0 ;
-(id)newInstructionGraphNodeToShowImageWithClip:(id)arg0 clipTransform:(struct CGAffineTransform )arg1 isContainedClip:(BOOL)arg2 ;
-(id)newInstructionGraphNodeToShowKenBurnsEffect:(id)arg0 withInfo:(id)arg1 inputNode:(id)arg2 isContainedClip:(BOOL)arg3 ;
-(id)newInstructionGraphNodeToShowMovieClip:(id)arg0 clipTransform:(struct CGAffineTransform )arg1 compositionTrackID:(int)arg2 dataTrackID:(int)arg3 ;
-(id)newInstructionGraphNodeToShowMultiUpClip:(id)arg0 clipTransform:(struct CGAffineTransform )arg1 compositionTrackID:(int)arg2 requiresTweening:(*BOOL)arg3 applyTitleEffect:(BOOL)arg4 ;
-(id)splitCompositionInstruction:(id)arg0 atTime:(struct ? )arg1 options:(int)arg2 ;
-(id)splitCompositionState:(id)arg0 atTime:(struct ? )arg1 ;
-(id)splitCompositionState:(id)arg0 forCutaways:(id)arg1 searchIndex:(*int)arg2 projectDuration:(struct ? )arg3 ;
-(id)transitionBottomTrack;
-(id)transitionTopTrack;
-(int)outputFrameRate;
-(struct ? )compositionItemsForState:(id)arg0 compositionItem:(*id)arg1 backfillCompositionItem:(*id)arg2 ;
-(struct ? )extensionForTransitionsSupportingEatLeftRight:(id)arg0 leftSideOfTransition:(BOOL)arg1 splitClip:(*BOOL)arg2 ;
-(struct ? )fadeToBlackDurationCMTime;
-(struct ? )fadeToBlackStartCMTime;
-(struct ? )sourceTimeRangeForAudioClip:(id)arg0 endOfComposition:(struct ? )arg1 ;
-(struct ? )sourceTimeRangeForClip:(id)arg0 endOfComposition:(struct ? )arg1 projectStartTime:(struct ? *)arg2 ;
-(struct ? )timeRangeForClipIncludingTransitions:(id)arg0 ;
-(struct ? )transitionExtensionForClip:(id)arg0 left:(BOOL)arg1 splitClip:(*BOOL)arg2 ;
-(struct CGAffineTransform )transformForCutaway:(id)arg0 underlayTransform:(struct CGAffineTransform *)arg1 forSize:(struct CGSize )arg2 ;
-(struct CGAffineTransform )transformKBForVisibleRect:(struct CGRect )arg0 imageSize:(struct CGSize )arg1 aspect:(CGFloat)arg2 isContainedClip:(BOOL)arg3 ;
-(struct CGSize )naturalSizeForClipAfterTransform:(id)arg0 ;
-(void)addAlternatesForClip:(id)arg0 toInstruction:(id)arg1 trackID:(int)arg2 ;
-(void)addAudioPointsToArray:(id)arg0 atFrameTime:(int)arg1 volume:(CGFloat)arg2 ;
-(void)addBackTracksIfRemoved;
-(void)addCutaway:(id)arg0 toInstruction:(id)arg1 transform:(struct CGAffineTransform )arg2 underlayTransform:(struct CGAffineTransform )arg3 ;
-(void)addIntersectingCutaways:(id)arg0 toInstruction:(id)arg1 ;
-(void)addTitleSoundsForState:(id)arg0 ;
-(void)addTransitionSoundsForState:(id)arg0 ;
-(void)addVideoInstructionsForTransition:(id)arg0 forRange:(struct ? )arg1 toInstructions:(id)arg2 previousTrackID:(int)arg3 previousClip:(id)arg4 previousClipRequiresCA:(BOOL)arg5 nextTrackID:(int)arg6 nextClip:(id)arg7 nextClipRequiresCA:(BOOL)arg8 cutawaysIntersection:(id)arg9 ;
-(void)applyPlayerItemProperties;
-(void)assetUsed:(id)arg0 ;
-(void)burnInPlaybackSettings:(id)arg0 ;
-(void)checkIt:(id)arg0 timeRange:(struct ? )arg1 ;
-(void)clearPlayerItemProperties;
-(void)compositeAlternateNodes:(id)arg0 intoOriginalInstruction:(id)arg1 ;
-(void)dealloc;
-(void)discardPlayerItem;
-(void)finalizeVideoComposition;
-(void)logAddedTrack:(id)arg0 trackID:(int)arg1 ;
-(void)logRemovedTrack:(id)arg0 trackID:(int)arg1 ;
-(void)lowerDynamicResolution;
-(void)markDirty;
-(void)noteEffectChanged:(id)arg0 ;
-(void)noteTitleScaleChanged:(id)arg0 ;
-(void)playerItemDidReachEnd:(id)arg0 ;
-(void)raiseDynamicResolution;
-(void)rebuildCompositionInstructionsForClip:(id)arg0 ;
-(void)rebuildCompositionInstructionsForMovieKenBurnsExtra:(id)arg0 ;
-(void)refresh:(id)arg0 ;
-(void)refreshCompositionInstructionsWithinRange:(struct ? )arg0 ;
-(void)removeEmptyTracks;
-(void)removeTrackFromAudioMix:(int)arg0 ;
-(void)setDynamicPlayBack:(BOOL)arg0 ;
-(void)setRenderScale;
-(void)splitCompositionInstructionListAtTime:(struct ? )arg0 options:(int)arg1 ;
-(void)update;
-(void)updateBackgroundAudioCompositionTracks:(struct ? )arg0 ;
-(void)updateCutawayCompositionTracks:(struct ? )arg0 ;
-(void)updateForegroundAudioCompositionTracks:(struct ? )arg0 ;
-(void)updateInstructionsWithTitles:(id)arg0 ;
-(void)updateVideoAndAudioInstructionForState:(id)arg0 cutSwaped:(BOOL)arg1 originalState:(id)arg2 ;


@end


#endif