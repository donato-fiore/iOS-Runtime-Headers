// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef TSWPEQUATIONREP_H
#define TSWPEQUATIONREP_H



#import "TSWPEquationBaseRep.h"
#import "TSWPEquationInfo.h"
#import "TSWPEquationFloatingLayout.h"

@interface TSWPEquationRep : TSWPEquationBaseRep

@property (readonly, nonatomic) TSWPEquationInfo *equationInfo;
@property (readonly, nonatomic) TSWPEquationFloatingLayout *equationLayout;
@property (nonatomic) BOOL layerContentsAreFlipped; // ivar: _layerContentsAreFlipped


+(CGFloat)magicMoveAttributeMatchPercentBetweenOutgoingObject:(id)arg0 incomingObject:(id)arg1 mixingTypeContext:(id)arg2 ;
-(BOOL)canDrawInParallel;
-(BOOL)canDrawShadowInOneStepWithChildren:(BOOL)arg0 ;
-(BOOL)canPasteDataFromPhysicalKeyboard:(id)arg0 ;
-(BOOL)isPlaceholder;
-(BOOL)p_drawsInOneStep;
-(BOOL)p_shouldFlipShadowsInContext:(struct CGContext *)arg0 forLayer:(BOOL)arg1 ;
-(BOOL)shouldAllowReplacementFromPaste;
-(id)imageOfStroke:(struct CGRect *)arg0 ;
-(id)initWithLayout:(id)arg0 canvas:(id)arg1 ;
-(id)resizedGeometryForTransform:(struct CGAffineTransform )arg0 ;
-(struct CGRect )clipRect;
-(void)drawInContextWithoutEffects:(struct CGContext *)arg0 withContent:(BOOL)arg1 strokeDrawOptions:(NSUInteger)arg2 withOpacity:(BOOL)arg3 forAlphaOnly:(BOOL)arg4 drawChildren:(BOOL)arg5 keepingChildrenPassingTest:(id)arg6 ;
-(void)drawInLayerContext:(struct CGContext *)arg0 ;
-(void)p_drawInContext:(struct CGContext *)arg0 withContent:(BOOL)arg1 strokeDrawOptions:(NSUInteger)arg2 withOpacity:(CGFloat)arg3 withMask:(BOOL)arg4 forLayer:(BOOL)arg5 forShadow:(BOOL)arg6 forHitTest:(BOOL)arg7 ;
-(void)willBeRemoved;


@end


#endif