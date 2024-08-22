// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef TSDSHAPEREP_H
#define TSDSHAPEREP_H

@class NSString;
@protocol CALayerDelegate, TSDMagicMoveMatching;


#import "TSDStyledRep.h"

@interface TSDShapeRep : TSDStyledRep <CALayerDelegate, TSDMagicMoveMatching>

 {
    CGRect mFrameInUnscaledCanvasRelativeToSuper;
    BOOL mFrameInUnscaledCanvasIsValid;
    BOOL mDirectlyManagesLayerContent;
    CGRect mOriginalAliasedAlignmentFrameInLayerFrame;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (nonatomic) BOOL shadowOnChildrenDisabled; // ivar: mShadowOnChildrenDisabled
@property (readonly) Class superclass;


+(CGFloat)magicMoveAttributeMatchPercentBetweenOutgoingObject:(id)arg0 incomingObject:(id)arg1 ;
-(BOOL)canBeUsedForImageMask;
-(BOOL)canDrawInParallel;
-(BOOL)canDrawShadowInOneStepWithChildren:(BOOL)arg0 ;
-(BOOL)canMakePathEditable;
-(BOOL)canUseSpecializedHitRegionForKnob:(id)arg0 ;
-(BOOL)containsPoint:(struct CGPoint )arg0 ;
-(BOOL)directlyManagesLayerContent;
-(BOOL)directlyManagesVisibilityOfKnob:(id)arg0 ;
-(BOOL)i_editMenuOverlapsEndKnobs;
-(BOOL)intersectsUnscaledRect:(struct CGRect )arg0 ;
-(BOOL)isDraggable;
-(BOOL)isEditingChildRep;
-(BOOL)isEditingPath;
-(BOOL)isInvisible;
-(BOOL)isPathEditable;
-(BOOL)p_beginApplyOpacity:(struct CGContext *)arg0 forDrawingInOneStep:(BOOL)arg1 ;
-(BOOL)p_canApplyFillToLayer;
-(BOOL)p_canApplyStrokeToLayer;
-(BOOL)p_drawsSelfInOneStep;
-(BOOL)p_pathIsAxisAlignedRect;
-(BOOL)shouldExpandHitRegionWhenSmall;
-(BOOL)shouldHideSelectionHighlightDueToRectangularPath;
-(BOOL)shouldShowAdditionalKnobs;
-(BOOL)shouldShowAdvancedGradientKnobs;
-(BOOL)shouldShowSelectionHighlight;
-(BOOL)shouldShowShadow;
-(BOOL)shouldShowSmartShapeKnobs;
-(CGFloat)shortestDistanceToPoint:(struct CGPoint )arg0 countAsHit:(*BOOL)arg1 ;
-(NSUInteger)enabledKnobMask;
-(id)additionalLayersOverLayer;
-(id)editablePathSource;
-(id)imageOfStroke:(struct CGRect *)arg0 ;
-(id)initWithLayout:(id)arg0 canvas:(id)arg1 ;
-(id)overlayLayers;
-(id)pathSourceForSelectionHighlightBehavior;
-(id)shapeInfo;
-(id)shapeLayout;
-(struct CGAffineTransform )naturalToEditablePathSpaceTransform;
-(struct CGPoint )centerForGuideLayerPlacement;
-(struct CGRect )clipRect;
-(struct CGRect )frameInUnscaledCanvas;
-(struct CGRect )layerFrameInScaledCanvas;
-(struct CGRect )layerFrameInScaledCanvasRelativeToParent;
-(struct CGRect )targetRectForEditMenu;
-(void)addBitmapsToRenderingQualityInfo:(id)arg0 inContext:(struct CGContext *)arg1 ;
-(void)addSelectionKnobsToArray:(id)arg0 ;
-(void)didUpdateLayer:(id)arg0 ;
-(void)drawInContextWithoutEffects:(struct CGContext *)arg0 withContent:(BOOL)arg1 withStroke:(BOOL)arg2 withOpacity:(BOOL)arg3 forAlphaOnly:(BOOL)arg4 drawChildren:(BOOL)arg5 ;
-(void)drawInLayerContext:(struct CGContext *)arg0 ;
-(void)invalidateEffectLayersForChildren;
-(void)layoutInRootChangedFrom:(id)arg0 to:(id)arg1 translatedOnly:(BOOL)arg2 ;
-(void)p_beginDynamicallyResizingOrMovingLineEnd;
-(void)p_drawChildrenWithoutOpacityInContext:(struct CGContext *)arg0 ;
-(void)p_drawInContext:(struct CGContext *)arg0 withContent:(BOOL)arg1 withStroke:(BOOL)arg2 withOpacity:(BOOL)arg3 ;
-(void)p_drawLineEndForHead:(BOOL)arg0 withDelta:(struct CGPoint )arg1 andStroke:(id)arg2 inContext:(struct CGContext *)arg3 useFastDrawing:(BOOL)arg4 ;
-(void)p_endApplyOpacity:(struct CGContext *)arg0 apply:(BOOL)arg1 ;
-(void)p_endDynamicallyResizingOrMovingLineEnd;
-(void)processChangedProperty:(int)arg0 ;
-(void)recursivelyDrawChildrenInContext:(struct CGContext *)arg0 ;
-(void)updatePositionsOfKnobs:(id)arg0 ;
-(void)willBeRemoved;
-(void)willUpdateLayer:(id)arg0 ;


@end


#endif