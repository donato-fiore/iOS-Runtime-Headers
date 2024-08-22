// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef AKTWOPOINTRECTANGULARTEXTPOINTOFINTERESTHELPER_H
#define AKTWOPOINTRECTANGULARTEXTPOINTOFINTERESTHELPER_H



#import "AKAnnotationPointOfInterestHelper.h"

@interface AKTwoPointRectangularTextPointOfInterestHelper : AKAnnotationPointOfInterestHelper



+(NSUInteger)_concreteDraggableAreaForPointOfInterestWithIndex:(NSUInteger)arg0 ofAnnotation:(id)arg1 onPageController:(id)arg2 ;
+(struct CGPoint )_concreteValidatePoint:(struct CGPoint )arg0 ofDraggableArea:(NSUInteger)arg1 forAnnotation:(id)arg2 onPageController:(id)arg3 ;
+(void)_concretePointsOfInterest:(*id)arg0 withVisualStyle:(*id)arg1 ofAnnotation:(id)arg2 pageControllerForPixelAlignment:(id)arg3 ;


@end


#endif