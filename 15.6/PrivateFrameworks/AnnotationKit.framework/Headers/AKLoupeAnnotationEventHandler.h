// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef AKLOUPEANNOTATIONEVENTHANDLER_H
#define AKLOUPEANNOTATIONEVENTHANDLER_H



#import "AKAnnotationEventHandler.h"

@interface AKLoupeAnnotationEventHandler : AKAnnotationEventHandler



-(void)getInitialDraggedPoint:(struct CGPoint *)arg0 otherPoint:(struct CGPoint *)arg1 center:(struct CGPoint *)arg2 forEvent:(id)arg3 orRecognizer:(id)arg4 ;
-(void)setupDraggingConstraints;
-(void)updateModelWithCurrentPoint:(struct CGPoint )arg0 options:(NSUInteger)arg1 ;


@end


#endif