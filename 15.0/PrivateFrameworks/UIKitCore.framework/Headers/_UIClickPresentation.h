// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef _UICLICKPRESENTATION_H
#define _UICLICKPRESENTATION_H

@protocol _UIClickPresentationTransition;

#import <Foundation/Foundation.h>

#import "UIView.h"
#import "UIPresentationController.h"
#import "UIViewController.h"

@interface _UIClickPresentation : NSObject

@property (retain, nonatomic) NSObject<_UIClickPresentationTransition> *appearanceTransition; // ivar: _appearanceTransition
@property (retain, nonatomic) UIView *customContainerView; // ivar: _customContainerView
@property (retain, nonatomic) UIView *customViewForTouchContinuation; // ivar: _customViewForTouchContinuation
@property (retain, nonatomic) NSObject<_UIClickPresentationTransition> *disappearanceTransition; // ivar: _disappearanceTransition
@property (readonly, nonatomic) UIPresentationController *presentationController; // ivar: _presentationController
@property (readonly, nonatomic) UIViewController *viewController; // ivar: _viewController


-(BOOL)_presentsSelf;
-(id)initWithPresentedViewController:(id)arg0 presentationController:(id)arg1 ;


@end


#endif