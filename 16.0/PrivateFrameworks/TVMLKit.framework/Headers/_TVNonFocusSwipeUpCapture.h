// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef _TVNONFOCUSSWIPEUPCAPTURE_H
#define _TVNONFOCUSSWIPEUPCAPTURE_H

@class UIView, NSString, UIPanGestureRecognizer;
@protocol UIGestureRecognizerDelegate;

#import <Foundation/Foundation.h>


@interface _TVNonFocusSwipeUpCapture : NSObject <UIGestureRecognizerDelegate>

 {
    UIView *_initiallyFocusedView;
    CGPoint _translation;
    CGPoint _velocity;
}


@property (readonly, nonatomic) SEL action; // ivar: _action
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) UIPanGestureRecognizer *gestureRecognizer; // ivar: _gestureRecognizer
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;
@property (readonly, weak, nonatomic) id *target; // ivar: _target


-(BOOL)gestureRecognizer:(id)arg0 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)arg1 ;
-(id)initWithTarget:(id)arg0 action:(SEL)arg1 ;
-(void)_onPan:(id)arg0 ;


@end


#endif