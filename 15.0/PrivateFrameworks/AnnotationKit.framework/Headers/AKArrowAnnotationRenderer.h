// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef AKARROWANNOTATIONRENDERER_H
#define AKARROWANNOTATIONRENDERER_H



#import "AKAnnotationRenderer.h"

@interface AKArrowAnnotationRenderer : AKAnnotationRenderer



+(BOOL)_concretePointIsOnBorder:(struct CGPoint )arg0 ofAnnotation:(id)arg1 minimumBorderThickness:(CGFloat)arg2 ;
+(BOOL)_concretePointIsOnInside:(struct CGPoint )arg0 ofAnnotation:(id)arg1 ;
+(CGFloat)_oneDimensionalCubicBezierValueForParameter:(CGFloat)arg0 start:(CGFloat)arg1 controlPt1:(CGFloat)arg2 controlPt2:(CGFloat)arg3 end:(CGFloat)arg4 ;
+(NSUInteger)_drawableArrowHeads:(id)arg0 ;
+(struct CGPath *)_newConcreteTextExclusionPathForAnnotation:(id)arg0 withOptionalAnnotationRect:(struct CGRect )arg1 ;
+(struct CGPath *)_newLinePathForArrow:(id)arg0 withHeads:(BOOL)arg1 fromBezierParameter:(CGFloat)arg2 toBezierParameter:(CGFloat)arg3 optionalPageController:(id)arg4 optionalContext:(struct CGContext *)arg5 ;
+(struct CGPoint )_cubicBezierPointForParameter:(CGFloat)arg0 start:(struct CGPoint )arg1 controlPt1:(struct CGPoint )arg2 controlPt2:(struct CGPoint )arg3 end:(struct CGPoint )arg4 ;
+(struct CGRect )_concreteDrawingBoundsOfAnnotation:(id)arg0 ;
+(struct CGRect )_concreteTextBoundsOfAnnotation:(id)arg0 withOptionalAnnotationRect:(struct CGRect )arg1 optionalText:(id)arg2 ;
+(struct CGSize )_concreteDraggingBoundsInsetsForAnnotation:(id)arg0 ;
+(void)_arrowHeadLineIntersection:(id)arg0 outStartIntersection:(struct CGPoint *)arg1 outBezierStartParameter:(*CGFloat)arg2 outEndIntersection:(struct CGPoint *)arg3 outBezierEndParameter:(*CGFloat)arg4 ;
+(void)_arrowHeadPathsForArrow:(id)arg0 inOutStartArrowHead:(struct CGPath *)arg1 outBezierStartParameter:(*CGFloat)arg2 inOutEndArrowHead:(struct CGPath *)arg3 outBezierEndParameter:(*CGFloat)arg4 ;
+(void)_concreteRenderAnnotation:(id)arg0 intoContext:(struct CGContext *)arg1 forDisplay:(BOOL)arg2 pageControllerOrNil:(id)arg3 ;
+(void)_controlPointsForArrow:(id)arg0 outControlPoint1:(struct CGPoint *)arg1 outControlPoint2:(struct CGPoint *)arg2 ;
+(void)_drawPathForArrow:(id)arg0 inContext:(struct CGContext *)arg1 inPath:(struct CGPath *)arg2 pageControllerForPixelAlignmentOrNil:(id)arg3 minimumGrabbableBorderThickness:(CGFloat)arg4 ;


@end


#endif