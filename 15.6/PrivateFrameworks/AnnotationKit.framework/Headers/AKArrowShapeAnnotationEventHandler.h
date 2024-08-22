// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef AKARROWSHAPEANNOTATIONEVENTHANDLER_H
#define AKARROWSHAPEANNOTATIONEVENTHANDLER_H



#import "AKArrowAnnotationEventHandler.h"

@interface AKArrowShapeAnnotationEventHandler : AKArrowAnnotationEventHandler



-(void)getInitialDraggedPoint:(struct CGPoint *)arg0 otherPoint:(struct CGPoint *)arg1 center:(struct CGPoint *)arg2 forEvent:(id)arg3 orRecognizer:(id)arg4 ;
-(void)updateModelWithCurrentPoint:(struct CGPoint )arg0 options:(NSUInteger)arg1 ;


@end


#endif