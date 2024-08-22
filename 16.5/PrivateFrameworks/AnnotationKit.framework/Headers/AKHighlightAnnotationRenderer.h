// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef AKHIGHLIGHTANNOTATIONRENDERER_H
#define AKHIGHLIGHTANNOTATIONRENDERER_H



#import "AKAnnotationRenderer.h"

@interface AKHighlightAnnotationRenderer : AKAnnotationRenderer



+(BOOL)_concretePointIsOnBorder:(struct CGPoint )arg0 ofAnnotation:(id)arg1 minimumBorderThickness:(CGFloat)arg2 ;
+(BOOL)_concretePointIsOnInside:(struct CGPoint )arg0 ofAnnotation:(id)arg1 ;
+(CGFloat)_highlightOutsetFactor;
+(struct CGRect )_concreteDrawingBoundsOfAnnotation:(id)arg0 ;
+(struct CGRect )_rectForQuad:(struct AKQuadrilateral )arg0 rotationAngle:(*CGFloat)arg1 ;
+(struct CGSize )_concreteDraggingBoundsInsetsForAnnotation:(id)arg0 ;
+(void)_concreteRenderAnnotation:(id)arg0 intoContext:(struct CGContext *)arg1 forDisplay:(BOOL)arg2 pageControllerOrNil:(id)arg3 ;
+(void)_enumerateQuadPathsOfAnnotation:(id)arg0 applyStyle:(BOOL)arg1 handler:(id)arg2 ;


@end


#endif