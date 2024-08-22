// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef AVPLAYERLAYER_H
#define AVPLAYERLAYER_H

@class CALayer, NSString, NSDictionary;
@protocol AVKeyPathDependencyHost, AVWeakObservable;


#import "AVPlayerLayerInternal.h"
#import "AVPlayer.h"

@interface AVPlayerLayer : CALayer <AVKeyPathDependencyHost, AVWeakObservable>

 {
    AVPlayerLayerInternal *_playerLayer;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (copy, nonatomic) NSDictionary *pixelBufferAttributes;
@property (retain, nonatomic) AVPlayer *player;
@property (readonly, nonatomic, getter=isReadyForDisplay) BOOL readyForDisplay;
@property (readonly) Class superclass;
@property (copy) NSString *videoGravity;
@property (readonly, nonatomic) CGRect videoRect;


+(id)keyPathsForValuesAffectingVideoRect;
+(id)makeClosedCaptionLayer;
+(id)playerLayerWithPlayer:(id)arg0 ;
+(void)_swapSublayersBetweenPlayerLayer:(id)arg0 andPlayerLayer:(id)arg1 ;
-(BOOL)_currentWindowSceneIsForeground;
-(BOOL)_currentWindowSceneIsForegroundDefault;
-(BOOL)_isConnectedToSecondScreen;
-(BOOL)_isPartOfForegroundScene;
-(BOOL)_preventsChangesToSublayerHierarchy;
-(BOOL)_showInterstitialInstead;
-(BOOL)_willManageSublayersAsSwappedLayers;
-(BOOL)isForScrubbingOnly;
-(BOOL)isLanczosFilterDownscalingEnabled;
-(BOOL)isLegibleDisplayEnabled;
-(BOOL)isOverscanSubtitleSupportEnabled;
-(BOOL)isPIPModeEnabled;
-(NSInteger)_activeMode;
-(NSInteger)lanczosFilterDownscaleFactor;
-(id)_associatedRemoteModeLayer;
-(id)_closedCaptionLayer;
-(id)_interstitialLayer;
-(id)_maskLayer;
-(id)_sublayersForPIP;
-(id)_subtitleLayer;
-(id)_videoLayer;
-(id)init;
-(id)initWithLayer:(id)arg0 ;
-(id)placeholderContentLayerDuringPIPMode;
-(id)videoPerformanceMetrics;
-(struct CGRect )_videoRectForBounds:(struct CGRect )arg0 ;
-(struct CGSize )_displaySize;
-(struct NSEdgeInsets )legibleContentInsets;
-(void)_addAnimationsForClosedCaptionLayer:(id)arg0 gravity:(id)arg1 forKey:(id)arg2 ;
-(void)_addAnimationsForMaskLayer:(id)arg0 forKey:(id)arg1 ;
-(void)_addAnimationsForPIPPlaceholderLayer:(id)arg0 forKey:(id)arg1 ;
-(void)_addAnimationsForVideoLayer:(id)arg0 size:(struct CGSize )arg1 gravity:(id)arg2 forKey:(id)arg3 ;
-(void)_addBoundsAnimationToLayer:(id)arg0 usingAnimation:(id)arg1 forKey:(id)arg2 ;
-(void)_addPositionAnimationToLayer:(id)arg0 usingAnimation:(id)arg1 forKey:(id)arg2 ;
-(void)_addSublayerTransformAnimationToLayer:(id)arg0 fromTransform:(struct CATransform3D )arg1 usingAnimation:(id)arg2 gravity:(id)arg3 presentationSize:(struct CGSize )arg4 forKey:(id)arg5 ;
-(void)_applyCurrentItemPresentationSizeChangeAndForceUpdate:(BOOL)arg0 ;
-(void)_associateWithLayer:(id)arg0 forMode:(NSInteger)arg1 ;
-(void)_configurePlayerWhenEnteringPIP;
-(void)_configurePlayerWhenLeavingPIP;
-(void)_disassociateWithLayerForMode:(NSInteger)arg0 ;
-(void)_enterPIPModeRedirectingVideoToLayer:(id)arg0 ;
-(void)_enterSecondScreenModeRedirectingVideoToLayer:(id)arg0 ;
-(void)_forBoundsAnimations:(id)arg0 applyBlock:(id)arg1 ;
-(void)_forceLayout;
-(void)_forceWindowSceneEvent:(BOOL)arg0 ;
-(void)_getMaskLayer:(*id)arg0 videoLayer:(*id)arg1 subtitleLayer:(*id)arg2 closedCaptionLayer:(*id)arg3 interstitialLayer:(*id)arg4 ;
-(void)_handleIsDisplayingClosedCaptionsDidChange:(BOOL)arg0 player:(id)arg1 ;
-(void)_handleNonForcedSubtitleDisplayDidChange:(BOOL)arg0 player:(id)arg1 ;
-(void)_handlePlayerCurrentItemDidChangeForPlayer:(id)arg0 ;
-(void)_leavePIPModeForLayer:(id)arg0 ;
-(void)_leaveSecondScreenModeForLayer:(id)arg0 ;
-(void)_mergeClientLayersIntoMaskLayer:(id)arg0 ;
-(void)_notifyPlayerOfDisplaySize;
-(void)_notifyPlayerOfLayerForegroundStateChange;
-(void)_restoreClientLayers:(id)arg0 intoMaskLayer:(id)arg1 ;
-(void)_setIsConnectedToSecondScreen:(BOOL)arg0 ;
-(void)_setIsPartOfForegroundScene:(BOOL)arg0 ;
-(void)_setPreventsChangesToSublayerHierarchy:(BOOL)arg0 ;
-(void)_setShowInterstitialInstead:(BOOL)arg0 ;
-(void)_setSublayersForPIP:(id)arg0 ;
-(void)_setSublayersPreventChangesToSublayerHierarchy:(BOOL)arg0 ;
-(void)_setWillManageSublayersAsSwappedLayers:(BOOL)arg0 ;
-(void)_startObservingPlayer:(id)arg0 ;
-(void)_stashClientLayers;
-(void)_stopObservingPlayer:(id)arg0 ;
-(void)_unstashClientLayers;
-(void)_updateIsPartOfForegroundScene;
-(void)_updateReadyForDisplayForPlayerCurrentItem;
-(void)_windowSceneDidEnterBackground;
-(void)_windowSceneDidEnterBackground:(id)arg0 ;
-(void)_windowSceneWillEnterForeground;
-(void)_windowSceneWillEnterForeground:(id)arg0 ;
-(void)addAnimation:(id)arg0 forKey:(id)arg1 ;
-(void)addCallbackToCancelDuringDeallocation:(id)arg0 ;
-(void)addSublayer:(id)arg0 ;
-(void)dealloc;
-(void)declareKeyPathDependenciesWithRegistry:(id)arg0 ;
-(void)enterPIPModeRedirectingVideoToLayer:(id)arg0 ;
-(void)hasEnqueuedVideoFrameChanged:(id)arg0 ;
-(void)insertSublayer:(id)arg0 above:(id)arg1 ;
-(void)insertSublayer:(id)arg0 atIndex:(unsigned int)arg1 ;
-(void)insertSublayer:(id)arg0 below:(id)arg1 ;
-(void)layerDidBecomeVisible:(BOOL)arg0 ;
-(void)layoutSublayers;
-(void)leavePIPMode;
-(void)observeValueForKeyPath:(id)arg0 ofObject:(id)arg1 change:(id)arg2 context:(*void)arg3 ;
-(void)removeAllAnimations;
-(void)removeAnimationForKey:(id)arg0 ;
-(void)removeFromSuperlayer;
-(void)replaceSublayer:(id)arg0 with:(id)arg1 ;
-(void)setBounds:(struct CGRect )arg0 ;
-(void)setContentsScale:(CGFloat)arg0 ;
-(void)setForScrubbingOnly:(BOOL)arg0 ;
-(void)setLanczosFilterDownscaleFactor:(NSInteger)arg0 ;
-(void)setLanczosFilterDownscalingEnabled:(BOOL)arg0 ;
-(void)setLegibleContentInsets:(struct NSEdgeInsets )arg0 ;
-(void)setLegibleDisplayEnabled:(BOOL)arg0 ;
-(void)setOverscanSubtitleSupportEnabled:(BOOL)arg0 ;
-(void)setPIPModeEnabled:(BOOL)arg0 ;
-(void)setPlaceholderContentLayerDuringPIPMode:(id)arg0 ;
-(void)setSublayers:(id)arg0 ;
-(void)setToneMapToStandardDynamicRange:(BOOL)arg0 ;
-(void)startRedirectingVideoToLayer:(id)arg0 forMode:(NSInteger)arg1 ;
-(void)stopRedirectingVideoToLayer:(id)arg0 ;


@end


#endif