// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef KNANIMATEDSLIDEMODEL_H
#define KNANIMATEDSLIDEMODEL_H

@class NSMutableArray, NSMapTable, NSSet, NSArray;

#import <Foundation/Foundation.h>

#import "KNAnimatedSlideView.h"
#import "KNPlaybackSession.h"
#import "KNTransitionRenderer.h"

@interface KNAnimatedSlideModel : NSObject {
    KNAnimatedSlideView *_ASV;
    NSMutableArray *_buildEvents;
    NSMapTable *_infoToArrayOfAnimatedBuildsMap;
    NSMapTable *_animatedBuildToRendererMap;
}


@property (readonly, nonatomic) NSSet *ambientBuildRenderers; // ivar: _ambientBuildRenderers
@property (readonly, nonatomic) NSArray *animatedBuilds; // ivar: _animatedBuilds
@property (readonly, nonatomic) NSUInteger buildEventCount;
@property (readonly, nonatomic, getter=isFirstBuildEventAutomatic) BOOL firstBuildEventAutomatic;
@property (readonly, nonatomic) NSArray *infos; // ivar: _infos
@property (readonly, nonatomic) BOOL isMetalSlide; // ivar: _isMetalSlide
@property (nonatomic) NSUInteger numberOfAddedEvents; // ivar: _numberOfAddedEvents
@property (weak, nonatomic) KNPlaybackSession *session; // ivar: _session
@property (readonly, nonatomic) KNTransitionRenderer *transitionRenderer; // ivar: _transitionRenderer


-(BOOL)info:(id)arg0 isVisibleDuringEvent:(NSInteger)arg1 ;
-(BOOL)p_isEmphasisBuild:(id)arg0 ;
-(BOOL)p_isInfoInvalidWithImplicitAmbientAnimations:(id)arg0 ;
-(BOOL)p_shouldAnimateImplicitAmbientAnimatingDrawableAtFirstEvent:(id)arg0 ;
-(CGFloat)durationForEventIndexes:(id)arg0 ;
-(CGFloat)initialDelayForEventIndex:(NSUInteger)arg0 ;
-(CGFloat)maxScaleFactorForDrawable:(id)arg0 ;
-(Class)p_effectClassForEffect:(id)arg0 animationType:(NSInteger)arg1 hasParentBuild:(BOOL)arg2 ;
-(Class)p_rendererClassForBuildChunk:(id)arg0 parentBuild:(id)arg1 effectClass:(*Class)arg2 ;
-(Class)p_rendererClassForEffect:(id)arg0 animationType:(NSInteger)arg1 drawable:(id)arg2 parentBuild:(id)arg3 effectClass:(*Class)arg4 ;
-(NSInteger)inEventForInfo:(id)arg0 ;
-(NSInteger)outEventForInfo:(id)arg0 ;
-(NSInteger)p_lastEventNumberForInfo:(id)arg0 animationType:(NSInteger)arg1 defaultResult:(NSInteger)arg2 ;
-(id)actionEffectForDrawable:(id)arg0 atBeginningOfEvent:(NSInteger)arg1 ;
-(id)animatedBuildForInfo:(id)arg0 aroundEvent:(NSInteger)arg1 isAtEndOfBuild:(*BOOL)arg2 ;
-(id)animatedBuildForInfo:(id)arg0 atEvent:(NSInteger)arg1 ;
-(id)buildChunksForEventRange:(struct _NSRange )arg0 ;
-(id)description;
-(id)eventsAtIndex:(NSUInteger)arg0 ;
-(id)finalActionEffectForDrawable:(id)arg0 ;
-(id)firstAnimatedBuildForInfo:(id)arg0 ;
-(id)initWithBuildChunks:(id)arg0 infos:(id)arg1 session:(id)arg2 animatedSlideView:(id)arg3 ;
-(id)lastAnimatedBuildForInfo:(id)arg0 ;
-(id)nextAnimatedBuildForInfo:(id)arg0 afterBuild:(id)arg1 ;
-(id)nextRendererAfterRenderer:(id)arg0 ;
-(id)p_animatedBuildForInfo:(id)arg0 event:(NSInteger)arg1 buildIn:(BOOL)arg2 ;
-(id)p_animatedBuildsForInfo:(id)arg0 animationType:(NSInteger)arg1 duringEvent:(NSInteger)arg2 time:(CGFloat)arg3 ;
-(id)p_applyThemeCurvesToBuildAttributes:(id)arg0 ;
-(id)p_createBuildAnimationRecords:(id)arg0 info:(id)arg1 event:(NSInteger)arg2 start:(CGFloat)arg3 eventStart:(CGFloat)arg4 animateAtEndOfPreviousBuild:(BOOL)arg5 previousAnimatedBuild:(id)arg6 parentBuild:(id)arg7 ;
-(id)p_getCurrentDocumentRoot;
-(id)p_newImplicitAmbientBuildRendererWithDrawable:(id)arg0 stageIndex:(NSInteger)arg1 buildChunk:(id)arg2 startTime:(CGFloat)arg3 eventStartTime:(CGFloat)arg4 event:(NSInteger)arg5 animateAtEndOfPreviousBuild:(BOOL)arg6 ;
-(id)p_newTransition;
-(id)p_previousAnimatedBuildOfType:(NSInteger)arg0 forInfo:(id)arg1 priorToBuild:(id)arg2 ;
-(id)previousAnimatedBuildForInfo:(id)arg0 priorToBuild:(id)arg1 ;
-(id)previousBuildInForInfo:(id)arg0 priorToBuild:(id)arg1 ;
-(id)previousContentBuildForInfo:(id)arg0 priorToBuild:(id)arg1 ;
-(id)previousRendererBeforeRenderer:(id)arg0 ;
-(id)rendererForAnimatedBuild:(id)arg0 ;
-(id)sortRenderers:(id)arg0 ;
-(id)visibleInfosDuringEvent:(NSInteger)arg0 ;
-(void)dealloc;
-(void)enumerateAnimatedBuildsAndTimeRangesAtIndex:(NSUInteger)arg0 ignoreInitialDelay:(BOOL)arg1 usingBlock:(id)arg2 ;
-(void)enumerateAnimatedBuildsAndTimeRangesAtIndex:(NSUInteger)arg0 usingBlock:(id)arg1 ;
-(void)p_addAmbientBuildRenderer:(id)arg0 ;
-(void)p_checkIfSlideIsMetalCapableWithBuildChunks:(id)arg0 ;
-(void)p_convertToBuildEvents:(id)arg0 ;
-(void)p_insertInitialAmbientAnimations;
-(void)p_setRenderer:(id)arg0 forAnimatedBuild:(id)arg1 ;
-(void)p_sortAnimatedBuilds;
-(void)p_updatePreviousAndFinalAttributes;
-(void)p_updateVisibilityOnAnimatedBuild:(id)arg0 ;


@end


#endif