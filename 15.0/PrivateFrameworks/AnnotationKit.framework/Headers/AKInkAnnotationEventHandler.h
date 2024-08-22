// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef AKINKANNOTATIONEVENTHANDLER_H
#define AKINKANNOTATIONEVENTHANDLER_H



#import "AKRectangularAnnotationEventHandler.h"

@interface AKInkAnnotationEventHandler : AKRectangularAnnotationEventHandler



+(BOOL)allowsDraggingOfAnnotation:(id)arg0 ;
-(BOOL)alwaysLockAspectRatio;
-(BOOL)enterDraggableAreaEventTrackingLoopWithEvent:(id)arg0 orRecognizer:(id)arg1 ;
-(BOOL)handleDownEvent:(id)arg0 orRecognizer:(id)arg1 ;
-(struct CGSize )naturalSizeForAnnotation;


@end


#endif