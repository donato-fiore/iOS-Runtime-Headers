// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef UIUNDOGESTUREOBSERVER_H
#define UIUNDOGESTUREOBSERVER_H



#import "UIGestureRecognizer.h"

@interface UIUndoGestureObserver : UIGestureRecognizer



-(BOOL)_affectedByGesture:(id)arg0 ;
-(BOOL)_analyticsIsGestureHandled;
-(BOOL)canBePreventedByGestureRecognizer:(id)arg0 ;
-(BOOL)canPreventGestureRecognizer:(id)arg0 ;
-(void)_failOrCancelIfNecessary;
-(void)touchesCancelled:(id)arg0 withEvent:(id)arg1 ;
-(void)touchesEnded:(id)arg0 withEvent:(id)arg1 ;


@end


#endif