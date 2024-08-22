// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef _UINAVIGATIONCONTROLLERVISUALSTYLE_H
#define _UINAVIGATIONCONTROLLERVISUALSTYLE_H

@protocol UIViewControllerInteractiveTransitioning, UIViewControllerAnimatedTransitioning;

#import <Foundation/Foundation.h>

#import "UINavigationController.h"

@interface _UINavigationControllerVisualStyle : NSObject

@property (readonly, nonatomic) NSObject<UIViewControllerInteractiveTransitioning> *interactionController;
@property (readonly, nonatomic) BOOL isUsingParallaxTransition;
@property (nonatomic) UINavigationController *navigationController; // ivar: _navigationController
@property (readonly, nonatomic) NSObject<UIViewControllerAnimatedTransitioning> *transitionController;


-(BOOL)shouldUseInteractionControllerForInteractiveTransition;
-(id)initWithNavigationController:(id)arg0 ;
-(void)containerViewWillLayoutSubviews:(id)arg0 ;
-(void)layoutContainerViewSemanticContentAttributeChanged:(id)arg0 ;
-(void)navigationBarFrameChanged;
-(void)navigationBarVisibilityChanged;
-(void)toolbarFrameChanged;
-(void)toolbarVisibilityChanged;
-(void)updateTransitionControllerWithOperation:(NSInteger)arg0 ;


@end


#endif