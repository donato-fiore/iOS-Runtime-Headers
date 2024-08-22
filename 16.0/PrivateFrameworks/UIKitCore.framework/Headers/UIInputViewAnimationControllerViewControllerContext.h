// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef UIINPUTVIEWANIMATIONCONTROLLERVIEWCONTROLLERCONTEXT_H
#define UIINPUTVIEWANIMATIONCONTROLLERVIEWCONTROLLERCONTEXT_H

@class NSString;
@protocol UIViewControllerKeyboardContextTransitioning, UIInputViewAnimationHost, UIViewControllerContextTransitioning;

#import <Foundation/Foundation.h>

#import "_UIViewControllerTransitionContext.h"
#import "UIView.h"
#import "UIKBViewTreeSnapshotter.h"

@interface UIInputViewAnimationControllerViewControllerContext : NSObject <UIViewControllerKeyboardContextTransitioning>

 {
    _UIViewControllerTransitionContext *_context;
    id<UIInputViewAnimationHost> *_host;
    UIView *_from;
    UIView *_to;
    CGRect _fromRect;
    CGRect _toRect;
    UIKBViewTreeSnapshotter *_kbSnapshotter;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) UIView *fromKeyboard;
@property (readonly, nonatomic) CGRect fromKeyboardFrame;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) NSObject<UIViewControllerContextTransitioning> *mainContext;
@property (readonly) Class superclass;
@property (readonly, nonatomic) UIView *toKeyboard;
@property (readonly, nonatomic) CGRect toKeyboardFrame;


+(id)contextWithHost:(id)arg0 startPlacement:(id)arg1 endPlacement:(id)arg2 transitionContext:(id)arg3 ;
-(id)initWithHost:(id)arg0 startPlacement:(id)arg1 endPlacement:(id)arg2 transitionContext:(id)arg3 ;
-(void)dealloc;


@end


#endif