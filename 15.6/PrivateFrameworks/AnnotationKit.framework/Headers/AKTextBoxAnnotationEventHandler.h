// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef AKTEXTBOXANNOTATIONEVENTHANDLER_H
#define AKTEXTBOXANNOTATIONEVENTHANDLER_H



#import "AKRectangularAnnotationEventHandler.h"

@interface AKTextBoxAnnotationEventHandler : AKRectangularAnnotationEventHandler



-(BOOL)canLockAspectRatio;
-(void)updateModelWithCurrentPoint:(struct CGPoint )arg0 options:(NSUInteger)arg1 ;


@end


#endif