// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef AKTHOUGHTBUBBLEPOINTOFINTERESTHELPER_H
#define AKTHOUGHTBUBBLEPOINTOFINTERESTHELPER_H



#import "AKEightPointRectangularPointOfInterestHelper.h"

@interface AKThoughtBubblePointOfInterestHelper : AKEightPointRectangularPointOfInterestHelper



+(CGFloat)maxOutset;
+(CGFloat)minOutset;
+(NSUInteger)_concreteDraggableAreaForPointOfInterestWithIndex:(NSUInteger)arg0 ofAnnotation:(id)arg1 onPageController:(id)arg2 ;
+(struct CGPoint )_concreteValidatePoint:(struct CGPoint )arg0 ofDraggableArea:(NSUInteger)arg1 forAnnotation:(id)arg2 onPageController:(id)arg3 ;
+(struct CGPoint )_constrainPointyPointToOutset:(struct CGPoint )arg0 forAnnotation:(id)arg1 outsetIsMin:(BOOL)arg2 ;
+(void)_concretePointsOfInterest:(*id)arg0 withVisualStyle:(*id)arg1 ofAnnotation:(id)arg2 pageControllerForPixelAlignment:(id)arg3 ;


@end


#endif