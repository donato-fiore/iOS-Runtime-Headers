// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef AKARROWSHAPEPOINTOFINTERESTHELPER_H
#define AKARROWSHAPEPOINTOFINTERESTHELPER_H



#import "AKTwoPointLinePointOfInterestHelper.h"

@interface AKArrowShapePointOfInterestHelper : AKTwoPointLinePointOfInterestHelper



+(NSUInteger)_concreteDraggableAreaForPointOfInterestWithIndex:(NSUInteger)arg0 ofAnnotation:(id)arg1 onPageController:(id)arg2 ;
+(struct CGPoint )_arrowHeadInnerControlPoint:(id)arg0 ;
+(struct CGPoint )_arrowHeadOuterControlPoint:(id)arg0 ;
+(struct CGPoint )_centeredBaseControlPoint:(id)arg0 ;
+(struct CGPoint )_concreteValidatePoint:(struct CGPoint )arg0 ofDraggableArea:(NSUInteger)arg1 forAnnotation:(id)arg2 onPageController:(id)arg3 ;
+(struct CGPoint )_normalizedDirectionVector:(id)arg0 ;
+(void)_concretePointsOfInterest:(*id)arg0 withVisualStyle:(*id)arg1 ofAnnotation:(id)arg2 pageControllerForPixelAlignment:(id)arg3 ;


@end


#endif