// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef KNANIMATEDSLIDEVIEW_H
#define KNANIMATEDSLIDEVIEW_H

@class NSMutableSet, NSMapTable, NSLock, NSArray, NSMutableArray, TSDCanvas, NSString, NSIndexSet, NSSet;
@protocol KNCanvasDelegate, TSDConnectedInfoReplacing, OS_os_log, TSDCanvasProxyDelegate;

#import <Foundation/Foundation.h>

#import "KNAnimationDelayedCallbacks.h"
#import "KNAnimatedSlideModel.h"
#import "KNAnimatedSlideView.h"
#import "KNPlaybackSession.h"
#import "KNSlide.h"
#import "KNSlideNode.h"

@interface KNAnimatedSlideView : NSObject <KNCanvasDelegate, TSDConnectedInfoReplacing>

 {
    NSUInteger _animationsActive;
    NSUInteger _animationsStarted;
    NSMutableSet *_ambientBuildRenderers;
    NSMapTable *_buildsToStartAfterAmbientBuildStartsMap;
    NSLock *_textureDescriptionAndSetForRepMapLock;
    NSMapTable *_textureDescriptionAndSetForRepMap;
    NSArray *_precachedStaticTextureSets;
    BOOL _didRenderPrecachedStaticTextures;
    CGFloat _transitionStartTime;
    NSMapTable *_eventToSlideTextureMap;
    NSMutableArray *_isMotionBlurEnabledForEvent;
    BOOL _isSlideBuildable;
    BOOL _shouldStopAnimations;
    BOOL _isInDelayBeforeActiveBuild;
    BOOL _isSerialized;
    BOOL _transitionHasFinishedCallbackPending;
    id *_eventStartCallbackTarget;
    SEL _eventStartCallbackSelector;
    id *_eventAnimationActiveCallbackTarget;
    SEL _eventAnimationActiveCallbackSelector;
    id *_eventEndCallbackTarget;
    SEL _eventEndCallbackSelector;
    id *_eventImmediateEndCallbackTarget;
    SEL _eventImmediateEndCallbackSelector;
    id *_ambientBuildStartCallbackTarget;
    SEL _ambientBuildStartCallbackSelector;
    id *_ambientBuildEndCallbackTarget;
    SEL _ambientBuildEndCallbackSelector;
    NSObject<OS_os_log> *_signpostLog;
}


@property (readonly, copy, nonatomic) NSMutableSet *activeAnimatedBuilds; // ivar: _activeAnimatedBuilds
@property (readonly, nonatomic) NSArray *allInfos;
@property (readonly, nonatomic) NSArray *allInfosIncludingAudio;
@property (readonly, nonatomic) NSArray *allReps;
@property (readonly, nonatomic) NSUInteger buildEventCount;
@property (retain, nonatomic) TSDCanvas *canvas; // ivar: _canvas
@property (retain) NSLock *canvasLock; // ivar: _canvasLock
@property (readonly, nonatomic) NSObject<TSDCanvasProxyDelegate> *canvasProxyDelegate;
@property (nonatomic) NSUInteger currentEventIndex; // ivar: _currentEventIndex
@property (readonly, copy) NSString *debugDescription;
@property (readonly, nonatomic) KNAnimationDelayedCallbacks *delayedCallbacks; // ivar: _delayedCallbacks
@property (readonly, copy) NSString *description;
@property (copy, nonatomic) NSIndexSet *eventIndexesToAnimate; // ivar: _eventIndexesToAnimate
@property (nonatomic) BOOL hasEventStarted; // ivar: _hasEventStarted
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) NSArray *infosCurrentlyVisible;
@property (readonly, nonatomic) BOOL isAmbientAnimationAnimating;
@property (readonly, nonatomic) BOOL isAnimating;
@property (readonly, nonatomic) BOOL isDoneAnimating; // ivar: _isDoneAnimating
@property (readonly, nonatomic) BOOL isInDelayBeforeActiveTransition; // ivar: _isInDelayBeforeActiveTransition
@property (readonly, nonatomic) BOOL isNonAmbientAnimationActive;
@property (readonly, nonatomic) BOOL isNonAmbientAnimationAnimating;
@property (readonly, nonatomic) KNAnimatedSlideModel *model; // ivar: _model
@property (readonly, nonatomic) NSSet *movieRenderers;
@property (readonly, nonatomic) KNAnimatedSlideView *nextASV;
@property (nonatomic) BOOL playsAutomaticTransitions; // ivar: _playsAutomaticTransitions
@property (readonly, nonatomic) NSArray *repsCurrentlyVisible;
@property (readonly, weak, nonatomic) KNPlaybackSession *session; // ivar: _session
@property (readonly, nonatomic) BOOL shouldPreCache;
@property (readonly, nonatomic) BOOL shouldPrepareAnimationsAsynchronously;
@property (readonly, nonatomic) KNSlide *slide; // ivar: _slide
@property (readonly, nonatomic) KNSlideNode *slideNode; // ivar: _slideNode
@property (readonly, nonatomic) NSUInteger slideNumber; // ivar: _slideNumber
@property (readonly) Class superclass;
@property (nonatomic) BOOL triggerQueued; // ivar: _triggerQueued
@property (readonly, nonatomic) BOOL verticalTextAllowed;


+(void)initialize;
+(void)registerUserDefaults;
-(BOOL)hasTransitionAtEventIndex:(NSInteger)arg0 ;
-(BOOL)isAtFirstEvent;
-(BOOL)isCanvasDrawingIntoPDF:(id)arg0 ;
-(BOOL)isInfoAKeynoteTemplateObject:(id)arg0 ;
-(BOOL)isMotionBlurEnabledWithEvent:(NSUInteger)arg0 ;
-(BOOL)isRenderingForKPF;
-(BOOL)p_shouldSkipActionBuild:(id)arg0 onDrawable:(id)arg1 ;
-(BOOL)playAutomaticEvents;
-(BOOL)shouldShowInstructionalTextForLayout:(id)arg0 ;
-(BOOL)shouldSuppressBackgrounds;
-(CGFloat)p_minimumDelay;
-(id)documentRoot;
-(id)infoToConnectToForConnectionLineConnectedToInfo:(id)arg0 ;
-(id)infosVisibleAtEvent:(NSUInteger)arg0 ignoreBuildVisibility:(BOOL)arg1 ;
-(id)initForSlideNode:(id)arg0 session:(id)arg1 ;
-(id)newSlideTextureForEvent:(NSUInteger)arg0 ;
-(id)nonCachedTextureSetForRep:(id)arg0 description:(id)arg1 shouldRender:(BOOL)arg2 ;
-(id)p_addParentLayerForInfo:(id)arg0 ;
-(id)p_initializeTextureSetForRep:(id)arg0 info:(id)arg1 eventIndex:(NSUInteger)arg2 ignoreBuildVisibility:(BOOL)arg3 isRenderingToContext:(BOOL)arg4 ;
-(id)p_repsForInfos:(id)arg0 ;
-(id)p_textureSetForRep:(id)arg0 shouldRender:(BOOL)arg1 ;
-(id)textureSetForInfo:(id)arg0 eventIndex:(NSUInteger)arg1 ignoreBuildVisibility:(BOOL)arg2 ;
-(id)textureSetForRep:(id)arg0 description:(id)arg1 shouldRender:(BOOL)arg2 ;
-(struct CGRect )boundingRectOnCanvasForInfo:(id)arg0 ;
-(void)addActiveAnimatedBuild:(id)arg0 ;
-(void)buildHasFinishedAnimating:(id)arg0 ;
-(void)clearActiveAnimatedBuilds;
-(void)dealloc;
-(void)didBecomeCurrent;
-(void)generateTextures;
-(void)interruptAndReset;
-(void)p_addAmbientBuildRenderer:(id)arg0 ;
-(void)p_addInfoToLayerTree:(id)arg0 rep:(id)arg1 renderer:(id)arg2 builtInfos:(id)arg3 ;
-(void)p_ambientBuildEnded:(id)arg0 ;
-(void)p_ambientBuildStarted:(id)arg0 ;
-(void)p_animateBuild:(id)arg0 ;
-(void)p_animateBuild:(id)arg0 afterDelay:(CGFloat)arg1 ;
-(void)p_animateBuild:(id)arg0 isAmbientBuild:(BOOL)arg1 ;
-(void)p_animateCurrentEventIgnoringDelays:(BOOL)arg0 ;
-(void)p_animateTransition:(id)arg0 ;
-(void)p_clearAmbientBuildRenderers;
-(void)p_evictCacheAmbientBuildTexturesForTransition:(id)arg0 ;
-(void)p_notifyAmbientBuildEndWithObject:(id)arg0 ;
-(void)p_notifyAmbientBuildStartWithObject:(id)arg0 ;
-(void)p_notifyEventAnimationActiveWithObject:(id)arg0 ;
-(void)p_notifyEventEndWithObject:(id)arg0 ;
-(void)p_notifyEventImmediateEndWithObject:(id)arg0 ;
-(void)p_notifyEventStart;
-(void)p_performAnimationWithTarget:(id)arg0 selector:(SEL)arg1 object:(id)arg2 delay:(CGFloat)arg3 performAsynchronously:(BOOL)arg4 ;
-(void)p_recursivelyRemoveCallbackObserversFromAnimatedBuilds:(id)arg0 ;
-(void)p_removeAmbientBuildRenderer:(id)arg0 ;
-(void)p_renderCurrentEvent;
-(void)p_renderSlideContentWithCALayers;
-(void)p_setMotionBlurStatus;
-(void)p_setupTransitionStartTime;
-(void)p_stopAllAmbientBuildRenderers;
-(void)pauseAnimations;
-(void)prepareAnimations;
-(void)registerForAmbientBuildEndCallback:(SEL)arg0 target:(id)arg1 ;
-(void)registerForAmbientBuildStartCallback:(SEL)arg0 target:(id)arg1 ;
-(void)registerForEventAnimationActiveCallback:(SEL)arg0 target:(id)arg1 ;
-(void)registerForEventEndCallback:(SEL)arg0 target:(id)arg1 ;
-(void)registerForEventImmediateEndCallback:(SEL)arg0 target:(id)arg1 ;
-(void)registerForEventStartCallback:(SEL)arg0 target:(id)arg1 ;
-(void)removeActiveAnimatedBuild:(id)arg0 ;
-(void)renderCurrentEvent;
-(void)renderIntoContext:(struct CGContext *)arg0 eventIndex:(NSUInteger)arg1 ignoreBuildVisibility:(BOOL)arg2 ;
-(void)renderTextures;
-(void)reset;
-(void)resetAmbientBuildTextures;
-(void)resumeAnimationsIfPaused;
-(void)serializeTextures;
-(void)setTexture:(id)arg0 forRep:(id)arg1 forDescription:(id)arg2 ;
-(void)stopAnimations;
-(void)tearDown;
-(void)tearDownTransition;
-(void)transitionHasFinishedAnimating:(id)arg0 ;
-(void)transitionHasImmediatelyFinishedAnimating:(id)arg0 ;
-(void)triggerNextEvent;
-(void)triggerNextEventIgnoringDelay:(BOOL)arg0 ;
-(void)waitUntilAsyncRenderingIsCompleteShouldCancel:(BOOL)arg0 ;


@end


#endif