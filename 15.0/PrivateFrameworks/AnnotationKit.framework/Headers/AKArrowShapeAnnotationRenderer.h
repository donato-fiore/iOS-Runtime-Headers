// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef AKARROWSHAPEANNOTATIONRENDERER_H
#define AKARROWSHAPEANNOTATIONRENDERER_H



#import "AKAnnotationRenderer.h"

@interface AKArrowShapeAnnotationRenderer : AKAnnotationRenderer



+(BOOL)_concretePointIsOnBorder:(struct CGPoint )arg0 ofAnnotation:(id)arg1 minimumBorderThickness:(CGFloat)arg2 ;
+(BOOL)_concretePointIsOnInside:(struct CGPoint )arg0 ofAnnotation:(id)arg1 ;
+(struct CGPath *)_newConcreteTextExclusionPathForAnnotation:(id)arg0 withOptionalAnnotationRect:(struct CGRect )arg1 ;
+(struct CGRect )_concreteDrawingBoundsOfAnnotation:(id)arg0 ;
+(struct CGRect )_concreteTextBoundsOfAnnotation:(id)arg0 withOptionalAnnotationRect:(struct CGRect )arg1 optionalText:(id)arg2 ;
+(struct CGSize )_concreteDraggingBoundsInsetsForAnnotation:(id)arg0 ;
+(void)_concreteRenderAnnotation:(id)arg0 intoContext:(struct CGContext *)arg1 forDisplay:(BOOL)arg2 pageControllerOrNil:(id)arg3 ;
+(void)_drawPathForArrowShape:(id)arg0 inContext:(struct CGContext *)arg1 inPath:(struct CGPath *)arg2 ;


@end


#endif