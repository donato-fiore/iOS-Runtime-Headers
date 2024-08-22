// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef WKSWIPETRANSITIONCONTROLLER_H
#define WKSWIPETRANSITIONCONTROLLER_H

@class NSString;
@protocol _UINavigationInteractiveTransitionBaseDelegate;

#import <Foundation/Foundation.h>


@interface WKSwipeTransitionController : NSObject <_UINavigationInteractiveTransitionBaseDelegate>

 {
    *void _gestureController;
    RetainPtr<_UINavigationInteractiveTransitionBase> _backTransitionController;
    RetainPtr<_UINavigationInteractiveTransitionBase> _forwardTransitionController;
    WeakObjCPtr<UIView> _gestureRecognizerView;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(BOOL)interactiveTransition:(id)arg0 gestureRecognizer:(id)arg1 shouldReceiveTouch:(id)arg2 ;
-(BOOL)interactiveTransition:(id)arg0 gestureRecognizer:(id)arg1 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)arg2 ;
-(BOOL)isNavigationSwipeGestureRecognizer:(id)arg0 ;
-(BOOL)shouldBeginInteractiveTransition:(id)arg0 ;
-(id)gestureRecognizerForInteractiveTransition:(id)arg0 WithTarget:(id)arg1 action:(SEL)arg2 ;
-(id)initWithViewGestureController:(*void)arg0 gestureRecognizerView:(id)arg1 ;
-(id)transitionForDirection:(int)arg0 ;
-(int)directionForTransition:(id)arg0 ;
-(void)invalidate;
-(void)startInteractiveTransition:(id)arg0 ;


@end


#endif