// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef CCUICONTENTMODULECONTAINERTRANSITION_H
#define CCUICONTENTMODULECONTAINERTRANSITION_H

@class UIViewPropertyAnimator, NSString, UITargetedPreview;
@protocol _UIClickPresentationTransition;

#import <Foundation/Foundation.h>

#import "CCUIContentModuleContainerViewController.h"

@interface CCUIContentModuleContainerTransition : NSObject <_UIClickPresentationTransition>



@property (nonatomic, getter=isAppearanceTransition) BOOL appearanceTransition; // ivar: _appearanceTransition
@property (nonatomic) CGRect contentRestOverrideFrame; // ivar: _contentRestOverrideFrame
@property (readonly, nonatomic) UIViewPropertyAnimator *customAnimator;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (copy, nonatomic) UITargetedPreview *sourcePreview;
@property (readonly) Class superclass;
@property (weak, nonatomic) CCUIContentModuleContainerViewController *viewController; // ivar: _viewController


-(void)performTransitionFromView:(id)arg0 toView:(id)arg1 containerView:(id)arg2 ;
-(void)prepareTransitionFromView:(id)arg0 toView:(id)arg1 containerView:(id)arg2 ;
-(void)transitionDidEnd:(BOOL)arg0 ;


@end


#endif