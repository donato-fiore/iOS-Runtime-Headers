// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef KNPLAYBACKSESSION_H
#define KNPLAYBACKSESSION_H

@class NSMutableArray, CALayer, TSKAccessController, KNAnimationTestResultLogger, TSDBitmapRenderingQualityInfo, NSArray, NSString, TSDMPSImageConversionStorage, TSDGLLayer;
@protocol TSDAnimationSession, TSKAccessControllerReadTicket, TSDCanvasDelegate, KNPlaybackLayerHost;

#import <Foundation/Foundation.h>

#import "KNPlaybackSessionConfiguration.h"
#import "KNSlideNode.h"
#import "KNAnimatedSlideView.h"
#import "KNAnimationContext.h"
#import "KNSlide.h"
#import "KNAnimationRegistryWithFallbacks.h"
#import "KNShow.h"
#import "KNAnimatedTextureManager.h"

@interface KNPlaybackSession : NSObject <TSDAnimationSession>

 {
    KNPlaybackSessionConfiguration *_configuration;
    KNSlideNode *_currentSlideNode;
    NSMutableArray *_breadCrumbTrail;
    BOOL _hasEndShowHandlerBeenCancelled;
    CALayer *_noMetalBadgeLayer;
    CALayer *_sceneRenderingMetalBadgeLayer;
}


@property (readonly, nonatomic) TSKAccessController *accessController;
@property (retain, nonatomic) NSObject<TSKAccessControllerReadTicket> *accessControllerReadTicket; // ivar: _accessControllerReadTicket
@property (retain, nonatomic) KNSlideNode *alternateNextSlideNode; // ivar: _alternateNextSlideNode
@property (nonatomic) NSUInteger analyticsHDRMovieCount; // ivar: _analyticsHDRMovieCount
@property (nonatomic) NSUInteger analyticsMovieCount; // ivar: _analyticsMovieCount
@property (readonly, nonatomic) KNAnimatedSlideView *animatedSlideViewForCurrentSlide;
@property (readonly, nonatomic) KNAnimationContext *animationContext; // ivar: _animationContext
@property (readonly, nonatomic) NSMutableArray *animationDurationArray; // ivar: _animationDurationArray
@property (readonly, nonatomic) NSMutableArray *animationStringArray; // ivar: _animationStringArray
@property (readonly, nonatomic) KNAnimationTestResultLogger *animationTestResultLogger; // ivar: _animationTestResultLogger
@property (readonly, nonatomic) BOOL atBeginningOfDeck;
@property (readonly, nonatomic) BOOL atEndOfDeck;
@property (nonatomic) CGFloat autoplayBuildDelay; // ivar: _autoplayBuildDelay
@property (nonatomic) CGFloat autoplayTransitionDelay; // ivar: _autoplayTransitionDelay
@property (retain, nonatomic) TSDBitmapRenderingQualityInfo *bitmapRenderingQualityInfo; // ivar: _bitmapRenderingQualityInfo
@property (copy, nonatomic) NSArray *breadCrumbTrail;
@property (weak, nonatomic) NSObject<TSDCanvasDelegate> *canvasDelegate; // ivar: _canvasDelegate
@property (readonly, nonatomic) KNSlide *currentSlide;
@property (readonly, nonatomic) KNSlideNode *currentSlideNode;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic) BOOL disableAutoAnimationRemoval; // ivar: _disableAutoAnimationRemoval
@property (nonatomic) BOOL disableTransitionTextureCaching; // ivar: _disableTransitionTextureCaching
@property (copy, nonatomic) id *endShowHandler; // ivar: _endShowHandler
@property (readonly, nonatomic) NSMutableArray *eventDurationArray; // ivar: _eventDurationArray
@property (readonly, nonatomic) KNSlideNode *firstSlideNode;
@property (nonatomic) NSInteger floatingCommentBehavior; // ivar: _floatingCommentBehavior
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) BOOL isDisplayLinkThread;
@property (nonatomic) BOOL isExitingShow; // ivar: _isExitingShow
@property (nonatomic) BOOL isExportingToPDF; // ivar: _isExportingToPDF
@property (readonly, nonatomic) BOOL isMetalEnabled;
@property (nonatomic) BOOL isMovieExport; // ivar: _isMovieExport
@property (readonly, nonatomic) BOOL isOffscreenPlayback;
@property (readonly, nonatomic) BOOL isPreCachingOperationActive;
@property (readonly, nonatomic) BOOL isPreview;
@property (readonly, nonatomic) BOOL isPrintingCanvas;
@property (readonly, nonatomic) BOOL isRealtime;
@property (readonly, nonatomic) BOOL isSceneRenderingEnabled;
@property (nonatomic) BOOL isShowLayerVisible; // ivar: _isShowLayerVisible
@property (readonly, nonatomic) BOOL isTexturePreCachingThread;
@property (readonly, nonatomic) BOOL isWideGamut;
@property (readonly, nonatomic) KNSlideNode *lastSlideNode;
@property (readonly, nonatomic) NSObject<KNPlaybackLayerHost> *layerHost;
@property (readonly, nonatomic) TSDMPSImageConversionStorage *mpsImageConversionStorage; // ivar: _mpsImageConversionStorage
@property (readonly, nonatomic) KNSlide *nextSlideAfterCurrent;
@property (readonly, nonatomic) KNSlideNode *nextSlideNodeAfterCurrent;
@property (nonatomic) NSInteger playMode; // ivar: _playMode
@property (readonly, nonatomic) NSArray *playableSlideNodes;
@property (readonly, nonatomic) KNSlideNode *previousSlideNodeBeforeCurrent;
@property (readonly, nonatomic) KNAnimationRegistryWithFallbacks *registry; // ivar: _registry
@property (readonly, nonatomic) TSDGLLayer *sharedGLLayer; // ivar: _sharedGLLayer
@property (nonatomic) BOOL shouldAllowBackgroundAlpha; // ivar: _shouldAllowBackgroundAlpha
@property (nonatomic) BOOL shouldAlwaysLoop; // ivar: _shouldAlwaysLoop
@property (nonatomic) BOOL shouldAlwaysSetCurrentGLContextWhenDrawing; // ivar: _shouldAlwaysSetCurrentGLContextWhenDrawing
@property (nonatomic) BOOL shouldAnimateNullTransitions; // ivar: _shouldAnimateNullTransitions
@property (nonatomic) BOOL shouldAnimateTransitionOnLastSlide; // ivar: _shouldAnimateTransitionOnLastSlide
@property (nonatomic) BOOL shouldAutomaticallyPlayMovies; // ivar: _shouldAutomaticallyPlayMovies
@property (nonatomic) BOOL shouldDrawTexturesAsynchronously; // ivar: _shouldDrawTexturesAsynchronously
@property (nonatomic) BOOL shouldForceTextureGeneration; // ivar: _shouldForceTextureGeneration
@property (readonly, nonatomic) BOOL shouldIgnoreBuildVisibility;
@property (nonatomic) BOOL shouldNotBakeActionTextures; // ivar: _shouldNotBakeActionTextures
@property (nonatomic) BOOL shouldPreferCARenderer; // ivar: _shouldPreferCARenderer
@property (nonatomic) BOOL shouldRespectSkippedSlides; // ivar: _shouldRespectSkippedSlides
@property (readonly, nonatomic) BOOL shouldShowInstructionalText;
@property (nonatomic) BOOL shouldShowLiveVideos; // ivar: _shouldShowLiveVideos
@property (nonatomic) BOOL shouldShowVideoReflectionsAndMasks; // ivar: _shouldShowVideoReflectionsAndMasks
@property (nonatomic) BOOL shouldSkipBuilds; // ivar: _shouldSkipBuilds
@property (nonatomic) BOOL shouldUseContentlessLayers; // ivar: _shouldUseContentlessLayers
@property (nonatomic) BOOL shouldUseSourceImage; // ivar: _shouldUseSourceImage
@property (readonly, nonatomic) KNShow *show; // ivar: _show
@property (readonly, nonatomic) CGFloat showScale;
@property (copy, nonatomic) NSArray *slideNodesWithinPlayableRange; // ivar: _slideNodesWithinPlayableRange
@property (readonly) Class superclass;
@property (readonly, nonatomic) KNAnimatedTextureManager *textureManager; // ivar: _textureManager
@property (readonly, nonatomic) NSMutableArray *workDurationArray; // ivar: _workDurationArray


+(CGFloat)p_viewScaleByUpdatingShowLayerGeometry:(id)arg0 forConfiguration:(id)arg1 showSize:(struct CGSize )arg2 ;
+(void)p_updateAnimationContext:(id)arg0 fromConfiguration:(id)arg1 ;
-(BOOL)canMakeInfoVisible:(id)arg0 allowAudioOnlyMovies:(BOOL)arg1 ;
-(BOOL)p_checkArrayInclusionIncludingUUID:(id)arg0 object:(id)arg1 ;
-(BOOL)p_checkNodeEqualityIncludingUUID:(id)arg0 secondSlideNode:(id)arg1 ;
-(BOOL)p_slideNodeIsPlayable:(id)arg0 ;
-(NSUInteger)p_findIndexIncludingUUID:(id)arg0 object:(id)arg1 ;
-(NSUInteger)slideNumberForSlideNode:(id)arg0 ;
-(id)animatedSlideViewFor:(id)arg0 ;
-(id)breadCrumb;
-(id)gotoFirstSlide;
-(id)gotoLastSlide;
-(id)gotoNextSlide;
-(id)gotoPreviousSlide;
-(id)initWithShow:(id)arg0 configuration:(id)arg1 canvasDelegate:(id)arg2 ;
-(id)newCanvasForInfos:(id)arg0 ;
-(id)nextSlideNodeAfterSlideNode:(id)arg0 ;
-(id)p_intersectArraysWithUUIDEquality:(id)arg0 secondArray:(id)arg1 ;
-(id)p_nextBestSlideNodeToSlideNode:(id)arg0 ;
-(id)previousSlideNodeBeforeSlideNode:(id)arg0 ;
-(id)repForInfo:(id)arg0 onCanvas:(id)arg1 ;
-(void)cancelEndShowHandler;
-(void)dealloc;
-(void)didChangeRootLayerGeometryAndScreenEnvironment;
-(void)dropABreadCrumb;
-(void)enableMetalBadge:(BOOL)arg0 ;
-(void)executeEndShowHandlerAfterDelay:(CGFloat)arg0 ;
-(void)gotoSlideNode:(id)arg0 ;
-(void)makeSharedMetalLayerVisible:(BOOL)arg0 ;
-(void)p_executeEndShowHandler;
-(void)performSlideRead:(id)arg0 ;
-(void)setSharedGLContextAsCurrentContextShouldCreate:(BOOL)arg0 ;
-(void)tearDown;
-(void)tearDownSharedGLLayer;
-(void)waitUntilSlideTextureRenderingIsCompleteForIdentifier:(id)arg0 ;


@end


#endif