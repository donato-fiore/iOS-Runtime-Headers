// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef _UIKBUNDOGESTUREOBSERVER_H
#define _UIKBUNDOGESTUREOBSERVER_H



#import "UIGestureRecognizer.h"

@interface _UIKBUndoGestureObserver : UIGestureRecognizer



+(id)undoGestureObserverWithTarget:(id)arg0 action:(SEL)arg1 delegate:(id)arg2 ;
-(BOOL)_affectedByGesture:(id)arg0 ;
-(BOOL)_analyticsIsGestureHandled;
-(BOOL)canBePreventedByGestureRecognizer:(id)arg0 ;
-(BOOL)canPreventGestureRecognizer:(id)arg0 ;
-(void)_failOrCancelIfNecessary;
-(void)touchesCancelled:(id)arg0 withEvent:(id)arg1 ;
-(void)touchesEnded:(id)arg0 withEvent:(id)arg1 ;


@end


#endif