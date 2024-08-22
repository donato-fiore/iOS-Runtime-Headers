// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef AKRECTANGULARANNOTATIONEVENTHANDLER_H
#define AKRECTANGULARANNOTATIONEVENTHANDLER_H



#import "AKAnnotationEventHandler.h"

@interface AKRectangularAnnotationEventHandler : AKAnnotationEventHandler

@property CGPoint lastMungedPositionInModel; // ivar: _lastMungedPositionInModel


-(struct CGRect )_rectForModifiedRotatedRect:(struct CGRect )arg0 withOriginal:(struct CGRect )arg1 andRotation:(CGFloat)arg2 ;
-(void)_updateModelFlippednessWithCurrentPoint:(struct CGPoint )arg0 ;
-(void)getInitialDraggedPoint:(struct CGPoint *)arg0 otherPoint:(struct CGPoint *)arg1 center:(struct CGPoint *)arg2 forEvent:(id)arg3 orRecognizer:(id)arg4 ;
-(void)setupDraggingConstraints;
-(void)updateModelWithCurrentPoint:(struct CGPoint )arg0 options:(NSUInteger)arg1 ;


@end


#endif