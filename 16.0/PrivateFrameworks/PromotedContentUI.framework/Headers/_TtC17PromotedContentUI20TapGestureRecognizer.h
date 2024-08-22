// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef _TTC17PROMOTEDCONTENTUI20TAPGESTURERECOGNIZER_H
#define _TTC17PROMOTEDCONTENTUI20TAPGESTURERECOGNIZER_H

@class UIGestureRecognizer;
@protocol UIGestureRecognizerDelegate;



@interface _TtC17PromotedContentUI20TapGestureRecognizer : UIGestureRecognizer <UIGestureRecognizerDelegate>

 {
    ? kMaximumTimeSinceTap;
    ? touchDownHandler;
    ? touchMovedHandler;
    ? touchUpHandler;
    ? shouldBlockNavigation;
    ? mostRecentTapLocation;
    ? lastTrackedTouch;
    ? mostRecentTapTimestamp;
    ? location;
    ? pointIsInsideView;
    ? preventedTouches;
    ? $__lazy_storage_$_scrollableAncestor;
}




-(BOOL)canBePreventedByGestureRecognizer:(id)arg0 ;
-(BOOL)canPreventGestureRecognizer:(id)arg0 ;
-(BOOL)gestureRecognizer:(id)arg0 shouldReceiveTouch:(id)arg1 ;
-(BOOL)gestureRecognizer:(id)arg0 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)arg1 ;
-(id)init;
-(id)initWithTarget:(id)arg0 action:(SEL)arg1 ;
-(void)reset;
-(void)touchesBegan:(id)arg0 withEvent:(id)arg1 ;
-(void)touchesCancelled:(id)arg0 withEvent:(id)arg1 ;
-(void)touchesEnded:(id)arg0 withEvent:(id)arg1 ;
-(void)touchesMoved:(id)arg0 withEvent:(id)arg1 ;


@end


#endif