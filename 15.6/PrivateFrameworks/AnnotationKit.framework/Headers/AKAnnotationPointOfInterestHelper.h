// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef AKANNOTATIONPOINTOFINTERESTHELPER_H
#define AKANNOTATIONPOINTOFINTERESTHELPER_H


#import <Foundation/Foundation.h>


@interface AKAnnotationPointOfInterestHelper : NSObject



+(BOOL)_point:(struct CGPoint )arg0 isInCircleWithRadius:(CGFloat)arg1 atPoint:(struct CGPoint )arg2 ;
+(BOOL)_point:(struct CGPoint )arg0 isInRectWithSize:(CGFloat)arg1 atPoint:(struct CGPoint )arg2 ;
+(CGFloat)draggableAreaScaleFactorForScaleFactor:(CGFloat)arg0 ;
+(Class)_poiHelperClassForAnnotation:(id)arg0 ;
+(NSUInteger)_concreteDraggableAreaForPoint:(struct CGPoint )arg0 onAnnotation:(id)arg1 withScale:(CGFloat)arg2 pageControllerForPixelAlignment:(id)arg3 ;
+(NSUInteger)_concreteDraggableAreaForPointOfInterestWithIndex:(NSUInteger)arg0 ofAnnotation:(id)arg1 onPageController:(id)arg2 ;
+(NSUInteger)draggableAreaForPoint:(struct CGPoint )arg0 onAnnotation:(id)arg1 withScale:(CGFloat)arg2 pageControllerForPixelAlignment:(id)arg3 ;
+(struct CGPoint )_concreteValidatePoint:(struct CGPoint )arg0 ofDraggableArea:(NSUInteger)arg1 forAnnotation:(id)arg2 onPageController:(id)arg3 ;
+(struct CGPoint )pointForDraggableArea:(NSUInteger)arg0 onAnnotation:(id)arg1 pageControllerForPixelAlignment:(id)arg2 ;
+(struct CGPoint )validatePoint:(struct CGPoint )arg0 ofDraggableArea:(NSUInteger)arg1 forAnnotation:(id)arg2 onPageController:(id)arg3 ;
+(void)_concretePointsOfInterest:(*id)arg0 withVisualStyle:(*id)arg1 ofAnnotation:(id)arg2 pageControllerForPixelAlignment:(id)arg3 ;
+(void)pointsOfInterest:(*id)arg0 withVisualStyle:(*id)arg1 ofAnnotation:(id)arg2 pageControllerForPixelAlignment:(id)arg3 ;


@end


#endif