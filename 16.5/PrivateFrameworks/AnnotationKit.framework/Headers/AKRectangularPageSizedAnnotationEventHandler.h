// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef AKRECTANGULARPAGESIZEDANNOTATIONEVENTHANDLER_H
#define AKRECTANGULARPAGESIZEDANNOTATIONEVENTHANDLER_H



#import "AKRectangularAnnotationEventHandler.h"

@interface AKRectangularPageSizedAnnotationEventHandler : AKRectangularAnnotationEventHandler



-(struct CGRect )_validateAnnotationRectForDrag:(struct CGRect )arg0 ;
-(struct CGRect )_validateAnnotationRectForResize:(struct CGRect )arg0 ;
-(void)getInitialDraggedPoint:(struct CGPoint *)arg0 otherPoint:(struct CGPoint *)arg1 center:(struct CGPoint *)arg2 forEvent:(id)arg3 orRecognizer:(id)arg4 ;
-(void)updateModelWithCurrentPoint:(struct CGPoint )arg0 options:(NSUInteger)arg1 ;


@end


#endif