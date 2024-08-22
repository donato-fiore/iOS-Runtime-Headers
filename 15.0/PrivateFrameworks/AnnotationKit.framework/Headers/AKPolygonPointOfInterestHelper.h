// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef AKPOLYGONPOINTOFINTERESTHELPER_H
#define AKPOLYGONPOINTOFINTERESTHELPER_H



#import "AKEightPointRectangularPointOfInterestHelper.h"

@interface AKPolygonPointOfInterestHelper : AKEightPointRectangularPointOfInterestHelper



+(CGFloat)_degreesBetweenPointsForPointsControl;
+(CGFloat)_degreesForPointsControlGivenPolygonWithNumberOfPoints:(NSUInteger)arg0 ;
+(CGFloat)pointsControlPointDistanceFactor;
+(NSUInteger)_concreteDraggableAreaForPointOfInterestWithIndex:(NSUInteger)arg0 ofAnnotation:(id)arg1 onPageController:(id)arg2 ;
+(NSUInteger)maxPolygonPoints;
+(NSUInteger)minPolygonPoints;
+(NSUInteger)numberOfPolygonPointsForControlPoint:(struct CGPoint )arg0 inAnnotation:(id)arg1 onPageController:(id)arg2 ;
+(struct CGPoint )_concreteValidatePoint:(struct CGPoint )arg0 ofDraggableArea:(NSUInteger)arg1 forAnnotation:(id)arg2 onPageController:(id)arg3 ;
+(struct CGPoint )_pointForPointsControlOfPolygonWithNumberOfPoints:(NSUInteger)arg0 inAnnotation:(id)arg1 onPageController:(id)arg2 ;
+(void)_concretePointsOfInterest:(*id)arg0 withVisualStyle:(*id)arg1 ofAnnotation:(id)arg2 pageControllerForPixelAlignment:(id)arg3 ;


@end


#endif