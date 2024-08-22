// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef AKHIGHLIGHTANNOTATIONEVENTHANDLER_H
#define AKHIGHLIGHTANNOTATIONEVENTHANDLER_H



#import "AKAnnotationEventHandler.h"

@interface AKHighlightAnnotationEventHandler : AKAnnotationEventHandler



+(BOOL)allowsDragging;
-(BOOL)continueDraggableAreaEventTrackingLoopWithEvent:(id)arg0 orRecognizer:(id)arg1 ;
-(BOOL)enterDraggableAreaEventTrackingLoopWithEvent:(id)arg0 orRecognizer:(id)arg1 ;
-(BOOL)handleDownEvent:(id)arg0 orRecognizer:(id)arg1 ;


@end


#endif