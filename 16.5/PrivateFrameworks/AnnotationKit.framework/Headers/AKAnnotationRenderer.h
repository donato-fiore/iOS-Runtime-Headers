// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef AKANNOTATIONRENDERER_H
#define AKANNOTATIONRENDERER_H


#import <Foundation/Foundation.h>


@interface AKAnnotationRenderer : NSObject



+(BOOL)_concretePointIsOnBorder:(struct CGPoint )arg0 ofAnnotation:(id)arg1 minimumBorderThickness:(CGFloat)arg2 ;
+(BOOL)_concretePointIsOnInside:(struct CGPoint )arg0 ofAnnotation:(id)arg1 ;
+(BOOL)annotationShouldAvoidRedrawDuringLiveResize:(id)arg0 ;
+(BOOL)pointIsOnBorder:(struct CGPoint )arg0 ofAnnotation:(id)arg1 minimumBorderThickness:(CGFloat)arg2 ;
+(BOOL)pointIsOnInside:(struct CGPoint )arg0 ofAnnotation:(id)arg1 ;
+(Class)_rendererClassForAnnotation:(id)arg0 ;
+(struct CGPath *)_newConcreteTextExclusionPathForAnnotation:(id)arg0 withOptionalAnnotationRect:(struct CGRect )arg1 ;
+(struct CGPath *)newTextExclusionPathForAnnotation:(id)arg0 withOptionalAnnotationRect:(struct CGRect )arg1 ;
+(struct CGRect )_concreteDrawingBoundsOfAnnotation:(id)arg0 ;
+(struct CGRect )_concreteRectangleForAnnotation:(id)arg0 withTextBounds:(struct CGRect )arg1 ;
+(struct CGRect )_concreteTextBoundsOfAnnotation:(id)arg0 withOptionalAnnotationRect:(struct CGRect )arg1 optionalText:(id)arg2 ;
+(struct CGRect )drawingBoundsOfAnnotation:(id)arg0 ;
+(struct CGRect )rectangleForAnnotation:(id)arg0 withTextBounds:(struct CGRect )arg1 ;
+(struct CGRect )textBoundsOfAnnotation:(id)arg0 withOptionalAnnotationRect:(struct CGRect )arg1 optionalText:(id)arg2 ;
+(struct CGSize )_concreteDraggingBoundsInsetsForAnnotation:(id)arg0 ;
+(struct CGSize )draggingBoundsInsetsForAnnotation:(id)arg0 ;
+(void)_concreteRenderAnnotation:(id)arg0 intoContext:(struct CGContext *)arg1 forDisplay:(BOOL)arg2 pageControllerOrNil:(id)arg3 ;
+(void)_testRenderAnnotation:(id)arg0 intoContext:(struct CGContext *)arg1 forDisplay:(BOOL)arg2 pageControllerOrNil:(id)arg3 ;
+(void)_transformContextToModelCoordinates:(struct CGContext *)arg0 forAnnotation:(id)arg1 forDisplay:(BOOL)arg2 pageControllerOrNil:(id)arg3 ;
+(void)renderAnnotation:(id)arg0 intoContext:(struct CGContext *)arg1 forDisplay:(BOOL)arg2 pageControllerOrNil:(id)arg3 ;


@end


#endif