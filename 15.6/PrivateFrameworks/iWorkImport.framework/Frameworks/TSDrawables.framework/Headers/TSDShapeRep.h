// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef TSDSHAPEREP_H
#define TSDSHAPEREP_H

@class NSMutableDictionary;
@protocol TSDMagicMoveMatching;


#import "TSDStyledRep.h"
#import "TSDShapeInfo.h"
#import "TSDShapeLayout.h"

@interface TSDShapeRep : TSDStyledRep <TSDMagicMoveMatching>

 {
    CGRect mFrameInUnscaledCanvasRelativeToSuper;
    BOOL mFrameInUnscaledCanvasIsValid;
    BOOL mDirectlyManagesLayerContentCacheValid;
    BOOL mDirectlyManagesLayerContent;
    CGRect mOriginalAliasedAlignmentFrameInLayerFrame;
    BOOL mShadowOnChildrenDisabled;
    *CGContext mCommittedPathContext;
    *CGImage mCommittedPathImage;
    CGRect mCommittedPathImageUnscaledRect;
    _NSRange mCommittedPointRange;
    _NSRange mAvailableToCommitPointRange;
    BOOL mOverrideState;
    CGFloat mOverriddenValue;
    CGRect mLastDynamicInvalidRect;
    BOOL mFillChanged;
    BOOL mShouldForceRenderableGeometryUpdate;
    BOOL mIsInvisibleCacheValid;
    BOOL mIsInvisibleCache;
    BOOL mNeedsDisplay;
    NSMutableDictionary *mHitTestCache;
}


@property (readonly, nonatomic) BOOL isMoreOptimalToDrawWithOtherShapeRepsIfPossible;
@property (readonly, nonatomic) BOOL isPartiallyAnimated;
@property (readonly, nonatomic) TSDShapeInfo *shapeInfo;
@property (readonly, nonatomic) TSDShapeLayout *shapeLayout;
@property (readonly, nonatomic) CGFloat strokeEnd;


+(CGFloat)magicMoveAttributeMatchPercentBetweenOutgoingObject:(id)arg0 incomingObject:(id)arg1 mixingTypeContext:(id)arg2 ;
-(BOOL)canDrawShadowInOneStepWithChildren:(BOOL)arg0 ;
-(BOOL)canDrawWithOtherShapeRep:(id)arg0 ;
-(BOOL)isInvisible;
-(BOOL)p_beginApplyOpacity:(struct CGContext *)arg0 forDrawingInOneStep:(BOOL)arg1 ;
-(BOOL)p_drawsSelfInOneStep;
-(BOOL)p_hasFreehandDrawingBrushStroke;
-(BOOL)p_isInsidePlayingFreehandDrawing;
-(BOOL)p_isNormalShapeInsideFreehandDrawing;
-(BOOL)p_shouldDrawStrokeWide:(id)arg0 ;
-(BOOL)p_shouldUpgradeStrokeForPlayback:(id)arg0 ;
-(CGFloat)opacity;
-(NSUInteger)p_bitmapContextOptionsForContextDestinedToDrawIntoCALayerContextForDrawingStroke:(id)arg0 ;
-(NSUInteger)p_bitmapContextOptionsForDrawingStroke:(id)arg0 ;
-(id)colorBehindLayer:(id)arg0 ;
-(id)imageOfStroke:(struct CGRect *)arg0 ;
-(id)initWithLayout:(id)arg0 canvas:(id)arg1 ;
-(id)p_brushStrokeFromStroke:(id)arg0 ;
-(id)p_drawingPlaybackSession;
-(id)p_strokeForRenderingIncludingPlaybackFromStroke:(id)arg0 ;
-(struct CGRect )clipRect;
-(struct CGRect )frameInUnscaledCanvas;
-(struct CGRect )strokeBoundsWithOptions:(NSUInteger)arg0 fallbackBounds:(struct CGRect )arg1 ;
-(void)dealloc;
-(void)drawInContext:(struct CGContext *)arg0 usingPathOverride:(id)arg1 patternOffsetsBySubpathOverride:(id)arg2 transparencyLayersBySubpath:(id)arg3 ;
-(void)drawInContextWithoutEffects:(struct CGContext *)arg0 withContent:(BOOL)arg1 strokeDrawOptions:(NSUInteger)arg2 withOpacity:(BOOL)arg3 forAlphaOnly:(BOOL)arg4 drawChildren:(BOOL)arg5 keepingChildrenPassingTest:(id)arg6 ;
-(void)drawInLayerContext:(struct CGContext *)arg0 ;
-(void)dynamicOverrideDidChange;
-(void)p_drawChildrenWithoutOpacityInContext:(struct CGContext *)arg0 keepingChildrenPassingTest:(id)arg1 ;
-(void)p_drawInContext:(struct CGContext *)arg0 withContent:(BOOL)arg1 strokeDrawOptions:(NSUInteger)arg2 withOpacity:(BOOL)arg3 ;
-(void)p_drawInContext:(struct CGContext *)arg0 withContent:(BOOL)arg1 strokeDrawOptions:(NSUInteger)arg2 withOpacity:(BOOL)arg3 usingPathOverride:(id)arg4 patternOffsetsBySubpathOverride:(id)arg5 transparencyLayersBySubpath:(id)arg6 ;
-(void)p_drawLineEndForHead:(BOOL)arg0 withDelta:(struct CGPoint )arg1 andStroke:(id)arg2 inContext:(struct CGContext *)arg3 useFastDrawing:(BOOL)arg4 ;
-(void)p_endApplyOpacity:(struct CGContext *)arg0 apply:(BOOL)arg1 ;
-(void)recursivelyDrawChildrenInContext:(struct CGContext *)arg0 keepingChildrenPassingTest:(id)arg1 ;
-(void)setTextureAttributes:(id)arg0 textureBounds:(struct CGRect )arg1 ;


@end


#endif