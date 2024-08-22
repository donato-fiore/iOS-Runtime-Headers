// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef UIKEYBOARDFLOATINGPINCHGESTURERECOGNIZER_H
#define UIKEYBOARDFLOATINGPINCHGESTURERECOGNIZER_H

@class NSMutableSet;


#import "UIPinchGestureRecognizer.h"

@interface UIKeyboardFloatingPinchGestureRecognizer : UIPinchGestureRecognizer {
    NSMutableSet *_activeTouches;
}




-(id)initWithTarget:(id)arg0 action:(SEL)arg1 ;
-(void)reset;
-(void)touchesBegan:(id)arg0 withEvent:(id)arg1 ;
-(void)touchesCancelled:(id)arg0 withEvent:(id)arg1 ;
-(void)touchesEnded:(id)arg0 withEvent:(id)arg1 ;


@end


#endif