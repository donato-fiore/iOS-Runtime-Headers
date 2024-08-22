// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef AKCROPANNOTATIONRENDERER_H
#define AKCROPANNOTATIONRENDERER_H



#import "AKAnnotationRenderer.h"

@interface AKCropAnnotationRenderer : AKAnnotationRenderer



+(BOOL)_concretePointIsOnBorder:(struct CGPoint )arg0 ofAnnotation:(id)arg1 minimumBorderThickness:(CGFloat)arg2 ;
+(BOOL)_concretePointIsOnInside:(struct CGPoint )arg0 ofAnnotation:(id)arg1 ;
+(struct CGPath *)_newClipMaskEOPathForAnnotation:(id)arg0 withPageController:(id)arg1 ;
+(struct CGPath *)_newRectanglePathForAnnotation:(id)arg0 withPageController:(id)arg1 outLineWidth:(*CGFloat)arg2 ;
+(struct CGPath *)cropHandle:(NSInteger)arg0 forAnnotation:(id)arg1 withPageController:(id)arg2 ;
+(struct CGPath *)newBottomEdgePathForAnnotation:(id)arg0 withPageController:(id)arg1 ;
+(struct CGPath *)newBottomLeftCornerPathForAnnotation:(id)arg0 withPageController:(id)arg1 ;
+(struct CGPath *)newBottomRightCornerPathForAnnotation:(id)arg0 withPageController:(id)arg1 ;
+(struct CGPath *)newLeftEdgePathForAnnotation:(id)arg0 withPageController:(id)arg1 ;
+(struct CGPath *)newRightEdgePathForAnnotation:(id)arg0 withPageController:(id)arg1 ;
+(struct CGPath *)newTopEdgePathForAnnotation:(id)arg0 withPageController:(id)arg1 ;
+(struct CGPath *)newTopLeftCornerPathForAnnotation:(id)arg0 withPageController:(id)arg1 ;
+(struct CGPath *)newTopRightCornerPathForAnnotation:(id)arg0 withPageController:(id)arg1 ;
+(struct CGRect )_concreteDrawingBoundsOfAnnotation:(id)arg0 ;
+(struct CGSize )_concreteDraggingBoundsInsetsForAnnotation:(id)arg0 ;
+(void)_concreteRenderAnnotation:(id)arg0 intoContext:(struct CGContext *)arg1 forDisplay:(BOOL)arg2 pageControllerOrNil:(id)arg3 ;
+(void)_pixelAlignedBaseRect:(struct CGRect *)arg0 interiorRect:(struct CGRect *)arg1 scaleFactor:(*CGFloat)arg2 forAnnotation:(id)arg3 withPageController:(id)arg4 ;


@end


#endif