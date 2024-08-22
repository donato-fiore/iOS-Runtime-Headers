// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef _UIVIEWCONTROLLERONETOONETRANSITIONCONTEXT_H
#define _UIVIEWCONTROLLERONETOONETRANSITIONCONTEXT_H

@class UIViewControllerTransitionContext;


#import "UIView.h"
#import "UIViewController.h"

@interface _UIViewControllerOneToOneTransitionContext : UIViewControllerTransitionContext {
    BOOL _isToViewSet;
    BOOL _isFromViewSet;
    UIView *_toView;
    UIView *_fromView;
}


@property (nonatomic, setter=_setIsDeferred:) BOOL _isDeferred; // ivar: __isDeferred
@property (nonatomic, setter=_setFromEndFrame:) CGRect fromEndFrame; // ivar: _fromEndFrame
@property (nonatomic, setter=_setFromStartFrame:) CGRect fromStartFrame; // ivar: _fromStartFrame
@property (retain, nonatomic, getter=_fromView, setter=_setFromView:) UIView *fromView;
@property (retain, nonatomic, setter=_setFromViewController:) UIViewController *fromViewController; // ivar: _fromViewController
@property (nonatomic, setter=_setToEndFrame:) CGRect toEndFrame; // ivar: _toEndFrame
@property (nonatomic, setter=_setToStartFrame:) CGRect toStartFrame; // ivar: _toStartFrame
@property (retain, nonatomic, getter=_toView, setter=_setToView:) UIView *toView;
@property (retain, nonatomic, setter=_setToViewController:) UIViewController *toViewController; // ivar: _toViewController


-(id)viewControllerForKey:(id)arg0 ;
-(id)viewForKey:(id)arg0 ;
-(struct CGRect )finalFrameForViewController:(id)arg0 ;
-(struct CGRect )initialFrameForViewController:(id)arg0 ;
-(void)dealloc;


@end


#endif