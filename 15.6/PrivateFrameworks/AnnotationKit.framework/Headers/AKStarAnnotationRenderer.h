// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef AKSTARANNOTATIONRENDERER_H
#define AKSTARANNOTATIONRENDERER_H



#import "AKPolygonAnnotationRenderer.h"

@interface AKStarAnnotationRenderer : AKPolygonAnnotationRenderer



+(BOOL)_concretePointIsOnBorder:(struct CGPoint )arg0 ofAnnotation:(id)arg1 minimumBorderThickness:(CGFloat)arg2 ;
+(BOOL)_concretePointIsOnInside:(struct CGPoint )arg0 ofAnnotation:(id)arg1 ;
+(CGFloat)_segLengthOfStarWithPoints:(id)arg0 ;
+(CGFloat)defaultInnerRadiusForStar:(id)arg0 ;
+(CGFloat)innerRadiusFactorForPoint:(struct CGPoint )arg0 inAnnotation:(id)arg1 onPageController:(id)arg2 ;
+(id)_innerStarPoints:(id)arg0 withInnerRadiusFactor:(CGFloat)arg1 ;
+(id)innerStarPoints:(id)arg0 ;
+(id)starPoints:(id)arg0 ;
+(struct CGPath *)_newPathForAnnotation:(id)arg0 ;
+(struct CGRect )_concreteDrawingBoundsOfAnnotation:(id)arg0 ;
+(struct CGRect )_concreteRectangleForAnnotation:(id)arg0 withTextBounds:(struct CGRect )arg1 ;
+(struct CGRect )_concreteTextBoundsOfAnnotation:(id)arg0 withOptionalAnnotationRect:(struct CGRect )arg1 optionalText:(id)arg2 ;
+(void)_concreteRenderAnnotation:(id)arg0 intoContext:(struct CGContext *)arg1 forDisplay:(BOOL)arg2 pageControllerOrNil:(id)arg3 ;


@end


#endif