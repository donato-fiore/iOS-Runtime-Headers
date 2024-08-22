// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef TSDMOVIEREP_H
#define TSDMOVIEREP_H

@class AVPlayerLayer, CALayer, AVAsset, NSString;
@protocol TSKAVPlayerControllerDelegate, TSDTilingLayerDelegate;


#import "TSDMediaRep.h"
#import "TSKAVPlayerController.h"
#import "TSDFrameRep.h"
#import "TSDButtonKnob.h"
#import "TSDMovieInfo.h"

@interface TSDMovieRep : TSDMediaRep <TSKAVPlayerControllerDelegate, TSDTilingLayerDelegate>

 {
    TSKAVPlayerController *mPlayerController;
    BOOL mCurrentlyObservingPlayerLayer;
    BOOL mPlayerLayerShouldBeDisplayed;
    AVPlayerLayer *mPlayerLayer;
    CALayer *mLayerToStroke;
    CALayer *mMovieReflectionLayer;
    CALayer *mMovieReflectionMaskLayer;
    AVPlayerLayer *mReflectionPlayerLayer;
    CALayer *mReflectionPlayerStrokeMaskLayer;
    BOOL mPreventDisposeOfPlayerLayer;
    CALayer *mPlayerStrokeLayer;
    CALayer *mReflectionPlayerStrokeLayer;
    TSDFrameRep *mReflectionFrameRep;
    CALayer *mReflectionFrameMaskLayer;
    AVAsset *mAssetForPlayability;
    BOOL mDidCheckPlayability;
    TSDButtonKnob *mPlayButtonKnob;
    BOOL mPlayButtonKnobVisible;
    BOOL mDidCancelUpdatingPlayButtonVisibility;
    BOOL mInReadMode;
    NSUInteger mIsChangingDynamicVisibleTimeCount;
    float mDynamicVolume;
    BOOL mIsChangingDynamicVolume;
    BOOL mNeedsTeardownPlayerController;
}


@property (nonatomic) *CGImage alternatePosterImage; // ivar: mAlternatePosterImage
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) TSDMovieInfo *movieInfo;
@property (readonly, nonatomic) BOOL p_playButtonFitsInFrame;
@property (readonly, nonatomic) TSDButtonKnob *p_playButtonKnob;
@property (readonly, nonatomic, getter=isPlayable) BOOL playable; // ivar: mIsPlayable
@property (readonly, nonatomic, getter=isPlaying) BOOL playing;
@property (readonly, nonatomic) BOOL shouldSingleTapPlay;
@property (readonly) Class superclass;
@property (readonly, nonatomic) CGFloat visibleTime;
@property (readonly, nonatomic) float volume;


+(CGFloat)magicMoveAttributeMatchPercentBetweenOutgoingObject:(id)arg0 incomingObject:(id)arg1 ;
-(BOOL)canResetMediaSize;
-(BOOL)directlyManagesLayerContent;
-(BOOL)directlyManagesVisibilityOfKnob:(id)arg0 ;
-(BOOL)handleSingleTapAtPoint:(struct CGPoint )arg0 ;
-(BOOL)isDraggable;
-(BOOL)p_needsTilingLayerForStroke:(id)arg0 ;
-(BOOL)p_shouldPlayerControllerExistThroughoutSelection;
-(BOOL)shouldShowMediaReplaceUI;
-(BOOL)wantsToHandleTapsWhenLocked;
-(NSUInteger)enabledKnobMask;
-(id)actionForLayer:(id)arg0 forKey:(id)arg1 ;
-(id)additionalLayersOverLayer;
-(id)additionalLayersUnderLayer;
-(id)initWithLayout:(id)arg0 canvas:(id)arg1 ;
-(id)movieLayout;
-(id)p_shapeLayerForPlayerStroke;
-(id)p_shapeLayerForReflectionStroke;
-(id)p_tilingLayerForPlayerStroke;
-(id)p_tilingLayerForReflectionStroke;
-(id)playerController;
-(id)playerStrokeLayer;
-(id)reflectionPlayerStrokeLayer;
-(struct CGRect )p_strokeFrameForLayerFrame:(struct CGRect )arg0 ;
-(void)addKnobsToArray:(id)arg0 ;
-(void)becameNotSelected;
-(void)becameSelected;
-(void)createReflectionLayer;
-(void)dealloc;
-(void)didUpdateLayer:(id)arg0 ;
-(void)disposeReflectionLayer;
-(void)drawInContextWithoutEffects:(struct CGContext *)arg0 withContent:(BOOL)arg1 withStroke:(BOOL)arg2 withOpacity:(BOOL)arg3 forAlphaOnly:(BOOL)arg4 drawChildren:(BOOL)arg5 ;
-(void)drawInLayerContext:(struct CGContext *)arg0 ;
-(void)drawLayer:(id)arg0 inContext:(struct CGContext *)arg1 ;
-(void)dynamicVisibleTimeChangeDidBegin;
-(void)dynamicVisibleTimeChangeDidEnd;
-(void)dynamicVisibleTimeUpdateToValue:(CGFloat)arg0 withTolerance:(CGFloat)arg1 completionHandler:(id)arg2 ;
-(void)dynamicVolumeChangeDidBegin;
-(void)dynamicVolumeChangeDidEnd;
-(void)dynamicVolumeUpdateToValue:(float)arg0 ;
-(void)i_updateFrameRep;
-(void)observeValueForKeyPath:(id)arg0 ofObject:(id)arg1 change:(id)arg2 context:(*void)arg3 ;
-(void)p_addPlayButtonToKnobs:(id)arg0 ;
-(void)p_applyBasicStrokeToLayer:(id)arg0 layer:(id)arg1 bounds:(struct CGRect )arg2 ;
-(void)p_arrangeLayerVisibility:(id)arg0 ;
-(void)p_cancelUpdatingUIStateForMoviePlayability;
-(void)p_checkAndsyncTilingLayerState:(BOOL)arg0 ;
-(void)p_commonDrawStrokeInContext:(struct CGContext *)arg0 ;
-(void)p_createMaskLayerForLayer:(id)arg0 ;
-(void)p_createReflectionPlayerStrokeMaskLayer;
-(void)p_disposeMaskLayer;
-(void)p_disposeReflectionStrokeLayers;
-(void)p_disposeStrokeLayer;
-(void)p_drawInContext:(struct CGContext *)arg0 withContent:(BOOL)arg1 withStroke:(BOOL)arg2 withOpacity:(CGFloat)arg3 withMask:(BOOL)arg4 forShadowOrHitTest:(BOOL)arg5 ;
-(void)p_drawPosterImageInContext:(struct CGContext *)arg0 ;
-(void)p_drawReflectionGradientIntoMovieReflectionLayer:(struct CGContext *)arg0 reflectionSize:(struct CGSize )arg1 ;
-(void)p_drawReflectionStrokeInContext:(struct CGContext *)arg0 ;
-(void)p_drawStrokeInContext:(struct CGContext *)arg0 ;
-(void)p_hideReflectionLayer;
-(void)p_placeReflectionPlayerLayer:(struct CGRect )arg0 transform:(struct CGAffineTransform )arg1 ;
-(void)p_playForKnob;
-(void)p_setNeedsTeardownPlayerControllerOnUpdateLayer;
-(void)p_setPositionAndBoundsIfDifferent:(id)arg0 position:(struct CGPoint )arg1 bounds:(struct CGRect )arg2 ;
-(void)p_setupPlayerControllerIfNecessary;
-(void)p_setupPlayerLayerIfNecessary;
-(void)p_setupPlayerStrokeLayers:(BOOL)arg0 ;
-(void)p_setupReflectionPlayerLayerIfNecessary;
-(void)p_setupShapePlayerStrokeLayer;
-(void)p_setupShapeReflectionPlayerStrokeLayer;
-(void)p_setupStrokeLayers:(BOOL)arg0 needsMaskLayer:(BOOL)arg1 isFrame:(BOOL)arg2 ;
-(void)p_setupTilingPlayerStrokeLayer;
-(void)p_setupTilingReflectionPlayerStrokeLayer;
-(void)p_showReflectionLayer;
-(void)p_stopUpdatingUIStateForMoviePlayability;
-(void)p_teardownPlayerController;
-(void)p_teardownPlayerControllerIfNeeded;
-(void)p_togglePlaying;
-(void)p_updateEndTime;
-(void)p_updateMovieReflectionMaskLayer;
-(void)p_updatePlayButtonVisibility;
-(void)p_updateReflectionFrameRep;
-(void)p_updateRepeatMode;
-(void)p_updateStartTime;
-(void)p_updateStrokeLayerForStroke:(id)arg0 repLayer:(id)arg1 ;
-(void)p_updateUIStateForMoviePlayability;
-(void)p_updateVolume;
-(void)playbackDidStopForPlayerController:(id)arg0 ;
-(void)playerController:(id)arg0 playbackDidFailWithError:(id)arg1 ;
-(void)processChangedProperty:(int)arg0 ;
-(void)screenScaleDidChange;
-(void)setShapeReflectionPlayerStrokeLayer:(id)arg0 ;
-(void)updateFromLayout;
-(void)updateLayerGeometryFromLayout:(id)arg0 ;
-(void)willBeRemoved;
-(void)willBeginReadMode;
-(void)willEndReadMode;
-(void)willUpdateLayer:(id)arg0 ;


@end


#endif