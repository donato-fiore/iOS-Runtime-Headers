// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef AKARROWANNOTATIONEVENTHANDLER_H
#define AKARROWANNOTATIONEVENTHANDLER_H



#import "AKAnnotationEventHandler.h"

@interface AKArrowAnnotationEventHandler : AKAnnotationEventHandler



-(struct CGPoint )_updatedMidPointForAnnotation:(id)arg0 withNewStartPt:(struct CGPoint )arg1 andNewEndPt:(struct CGPoint )arg2 ;
-(void)getInitialDraggedPoint:(struct CGPoint *)arg0 otherPoint:(struct CGPoint *)arg1 center:(struct CGPoint *)arg2 forEvent:(id)arg3 orRecognizer:(id)arg4 ;
-(void)setupDraggingConstraints;
-(void)updateModelWithCurrentPoint:(struct CGPoint )arg0 options:(NSUInteger)arg1 ;


@end


#endif