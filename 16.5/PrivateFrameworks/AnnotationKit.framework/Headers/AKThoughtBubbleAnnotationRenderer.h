// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef AKTHOUGHTBUBBLEANNOTATIONRENDERER_H
#define AKTHOUGHTBUBBLEANNOTATIONRENDERER_H



#import "AKAnnotationRenderer.h"

@interface AKThoughtBubbleAnnotationRenderer : AKAnnotationRenderer



+(BOOL)_concretePointIsOnBorder:(struct CGPoint )arg0 ofAnnotation:(id)arg1 minimumBorderThickness:(CGFloat)arg2 ;
+(BOOL)_concretePointIsOnInside:(struct CGPoint )arg0 ofAnnotation:(id)arg1 ;
+(CGFloat)_templateToUnitPointyPointScaleForAnnotation:(id)arg0 ;
+(CGFloat)_unitCloudRadius;
+(struct CGPath *)_newCloudPathScaledToModelSpaceForAnnotation:(id)arg0 ;
+(struct CGPath *)_newConcreteTextExclusionPathForAnnotation:(id)arg0 withOptionalAnnotationRect:(struct CGRect )arg1 ;
+(struct CGPath *)_newLargestBubblePathScaledToModelSpaceForAnnotation:(id)arg0 ;
+(struct CGPath *)_newPathTransformedFromUnitToModelSpace:(struct CGPath *)arg0 forAnnotation:(id)arg1 ;
+(struct CGPath *)_newSmallBubblePathForAnnotation:(id)arg0 atCenter:(struct CGPoint )arg1 withSize:(struct CGSize )arg2 ;
+(struct CGPath *)_newSmallestBubblePathScaledToModelSpaceForAnnotation:(id)arg0 ;
+(struct CGPoint )_templatePointyPointToCircleIntersect;
+(struct CGPoint )_unitAnnotationPointyPointForAnnotation:(id)arg0 ;
+(struct CGPoint )_unitCloudCenter;
+(struct CGRect )_concreteDrawingBoundsOfAnnotation:(id)arg0 ;
+(struct CGRect )_concreteRectangleForAnnotation:(id)arg0 withTextBounds:(struct CGRect )arg1 ;
+(struct CGRect )_concreteTextBoundsOfAnnotation:(id)arg0 withOptionalAnnotationRect:(struct CGRect )arg1 optionalText:(id)arg2 ;
+(struct CGSize )_concreteDraggingBoundsInsetsForAnnotation:(id)arg0 ;
+(void)_concreteRenderAnnotation:(id)arg0 intoContext:(struct CGContext *)arg1 forDisplay:(BOOL)arg2 pageControllerOrNil:(id)arg3 ;
+(void)_fillAndStrokePath:(struct CGPath *)arg0 forAnnotation:(id)arg1 inContext:(struct CGContext *)arg2 ;


@end


#endif