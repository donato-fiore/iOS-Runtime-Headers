// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef AKSTARSHAPEPOINTOFINTERESTHELPER_H
#define AKSTARSHAPEPOINTOFINTERESTHELPER_H



#import "AKPolygonPointOfInterestHelper.h"

@interface AKStarShapePointOfInterestHelper : AKPolygonPointOfInterestHelper



+(NSUInteger)_concreteDraggableAreaForPointOfInterestWithIndex:(NSUInteger)arg0 ofAnnotation:(id)arg1 onPageController:(id)arg2 ;
+(NSUInteger)maxPolygonPoints;
+(NSUInteger)minPolygonPoints;
+(void)_concretePointsOfInterest:(*id)arg0 withVisualStyle:(*id)arg1 ofAnnotation:(id)arg2 pageControllerForPixelAlignment:(id)arg3 ;


@end


#endif