// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef TSWPEQUATIONINLINEREP_H
#define TSWPEQUATIONINLINEREP_H



#import "TSWPEquationBaseRep.h"
#import "TSWPEquationInfo.h"
#import "TSWPEquationInlineLayout.h"

@interface TSWPEquationInlineRep : TSWPEquationBaseRep

@property (readonly, nonatomic) TSWPEquationInfo *equationInfo;
@property (readonly, nonatomic) TSWPEquationInlineLayout *equationLayout;


+(CGFloat)magicMoveAttributeMatchPercentBetweenOutgoingObject:(id)arg0 incomingObject:(id)arg1 mixingTypeContext:(id)arg2 ;
-(BOOL)canDrawInParallel;
-(BOOL)canPasteDataFromPhysicalKeyboard:(id)arg0 ;
-(BOOL)isPlaceholder;
-(BOOL)p_shouldFlipShadowsInContext:(struct CGContext *)arg0 forLayer:(BOOL)arg1 ;
-(BOOL)shouldAllowReplacementFromPaste;
-(id)actionForLayer:(id)arg0 forKey:(id)arg1 ;
-(id)imageOfStroke:(struct CGRect *)arg0 ;
-(id)initWithLayout:(id)arg0 canvas:(id)arg1 ;
-(id)resizedGeometryForTransform:(struct CGAffineTransform )arg0 ;
-(struct CGRect )clipRect;
-(void)drawErrorIconInContext:(struct CGContext *)arg0 ;
-(void)drawInContext:(struct CGContext *)arg0 ;
-(void)drawInContextWithoutEffects:(struct CGContext *)arg0 withContent:(BOOL)arg1 strokeDrawOptions:(NSUInteger)arg2 withOpacity:(BOOL)arg3 forAlphaOnly:(BOOL)arg4 drawChildren:(BOOL)arg5 keepingChildrenPassingTest:(id)arg6 ;
-(void)drawInLayerContext:(struct CGContext *)arg0 ;
-(void)p_drawInContext:(struct CGContext *)arg0 withContent:(BOOL)arg1 strokeDrawOptions:(NSUInteger)arg2 withOpacity:(CGFloat)arg3 withMask:(BOOL)arg4 forLayer:(BOOL)arg5 forShadow:(BOOL)arg6 forHitTest:(BOOL)arg7 ;
-(void)willBeRemoved;


@end


#endif