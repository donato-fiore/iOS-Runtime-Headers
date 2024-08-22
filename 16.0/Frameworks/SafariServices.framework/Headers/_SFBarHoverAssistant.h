// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef _SFBARHOVERASSISTANT_H
#define _SFBARHOVERASSISTANT_H

@class UIHoverGestureRecognizer, UIView<_SFBarCommon>, UIView, NSString;
@protocol _SFDynamicBarAnimatorStateObserver;

#import <Foundation/Foundation.h>

#import "_SFDynamicBarAnimator.h"

@interface _SFBarHoverAssistant : NSObject <_SFDynamicBarAnimatorStateObserver>

 {
    UIHoverGestureRecognizer *_hoverRecognizer;
    BOOL _didShowBarFromHover;
}


@property (readonly, weak, nonatomic) UIView<_SFBarCommon> *bar; // ivar: _bar
@property (readonly, weak, nonatomic) UIView *containerView; // ivar: _containerView
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, weak, nonatomic) _SFDynamicBarAnimator *dynamicBarAnimator; // ivar: _dynamicBarAnimator
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


+(void)attachToBar:(id)arg0 withAnimator:(id)arg1 inContainerView:(id)arg2 ;
-(BOOL)_gestureIsOverBar;
-(id)initWithBar:(id)arg0 withAnimator:(id)arg1 inContainerView:(id)arg2 ;
-(void)_hover:(id)arg0 ;
-(void)dealloc;
-(void)dynamicBarAnimatorStateDidChange:(id)arg0 ;
-(void)dynamicBarAnimatorWillLeaveSteadyState:(id)arg0 ;


@end


#endif