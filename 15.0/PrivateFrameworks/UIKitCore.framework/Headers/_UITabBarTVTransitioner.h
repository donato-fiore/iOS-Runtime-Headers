// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef _UITABBARTVTRANSITIONER_H
#define _UITABBARTVTRANSITIONER_H

@class NSString;
@protocol _UITabBarControllerInterruptibleTransitioning, UIViewControllerContextTransitioning;

#import <Foundation/Foundation.h>

#import "UISpringTimingParameters.h"
#import "UIView.h"

@interface _UITabBarTVTransitioner : NSObject <_UITabBarControllerInterruptibleTransitioning>

 {
    BOOL _fromViewOriginalShouldRasterize;
    CGFloat _fromViewLayerOriginalRasterizationScale;
    BOOL _toViewOriginalShouldRasterize;
    CGFloat _toViewLayerOriginalRasterizationScale;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) UISpringTimingParameters *slideTimingParameters; // ivar: _slideTimingParameters
@property (readonly) Class superclass;
@property (retain, nonatomic) UIView *toViewXFlippedScreenShot; // ivar: _toViewXFlippedScreenShot
@property (retain, nonatomic) NSObject<UIViewControllerContextTransitioning> *transitionContext; // ivar: _transitionContext
@property (nonatomic) BOOL transitionFromRight; // ivar: _transitionFromRight
@property (nonatomic) NSInteger transitionStyle; // ivar: _transitionStyle


-(CGFloat)transitionDuration:(id)arg0 ;
-(id)init;
-(void)animateTransition:(id)arg0 ;
-(void)finishTransition;
-(void)interruptTabBarControllerTransition;


@end


#endif