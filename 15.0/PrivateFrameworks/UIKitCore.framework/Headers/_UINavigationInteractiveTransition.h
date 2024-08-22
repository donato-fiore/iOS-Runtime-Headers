// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef _UINAVIGATIONINTERACTIVETRANSITION_H
#define _UINAVIGATIONINTERACTIVETRANSITION_H

@class UINavigationInteractiveTransitionBase;


#import "_UIParallaxTransitionPanGestureRecognizer.h"
#import "UIScreenEdgePanGestureRecognizer.h"

@interface _UINavigationInteractiveTransition : UINavigationInteractiveTransitionBase {
    _UIParallaxTransitionPanGestureRecognizer *_edgePanRecognizer;
}


@property (readonly, nonatomic) UIScreenEdgePanGestureRecognizer *screenEdgePanGestureRecognizer;


-(BOOL)_gestureRecognizer:(id)arg0 shouldBeRequiredToFailByGestureRecognizer:(id)arg1 ;
-(BOOL)_gestureRecognizer:(id)arg0 shouldReceiveEvent:(id)arg1 ;
-(BOOL)gestureRecognizer:(id)arg0 shouldReceiveTouch:(id)arg1 ;
-(BOOL)gestureRecognizer:(id)arg0 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)arg1 ;
-(BOOL)gestureRecognizerShouldBegin:(id)arg0 ;
-(id)gestureRecognizerView;
-(id)initWithViewController:(id)arg0 animator:(id)arg1 ;
-(void)_configureNavigationGesture;
-(void)_setShouldReverseLayoutDirection:(BOOL)arg0 ;
-(void)setNotInteractiveTransition;
-(void)startInteractiveTransition;


@end


#endif