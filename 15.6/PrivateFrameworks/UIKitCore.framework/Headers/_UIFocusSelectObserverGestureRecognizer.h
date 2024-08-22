// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef _UIFOCUSSELECTOBSERVERGESTURERECOGNIZER_H
#define _UIFOCUSSELECTOBSERVERGESTURERECOGNIZER_H



#import "UIGestureRecognizer.h"

@interface _UIFocusSelectObserverGestureRecognizer : UIGestureRecognizer



-(BOOL)_affectedByGesture:(id)arg0 ;
-(BOOL)canBePreventedByGestureRecognizer:(id)arg0 ;
-(BOOL)canPreventGestureRecognizer:(id)arg0 ;
-(BOOL)shouldBeRequiredToFailByGestureRecognizer:(id)arg0 ;
-(BOOL)shouldRequireFailureOfGestureRecognizer:(id)arg0 ;
-(id)initWithTarget:(id)arg0 action:(SEL)arg1 ;
-(void)pressesBegan:(id)arg0 withEvent:(id)arg1 ;
-(void)pressesCancelled:(id)arg0 withEvent:(id)arg1 ;
-(void)pressesEnded:(id)arg0 withEvent:(id)arg1 ;


@end


#endif