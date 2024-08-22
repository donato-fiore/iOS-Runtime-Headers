// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef _UIWINDOWANIMATIONCONTROLLER_H
#define _UIWINDOWANIMATIONCONTROLLER_H

@class NSString;
@protocol UIViewControllerAnimatedTransitioning;

#import <Foundation/Foundation.h>

#import "UIWindow.h"

@interface _UIWindowAnimationController : NSObject <UIViewControllerAnimatedTransitioning>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (nonatomic) BOOL shouldCrossfade; // ivar: _shouldCrossfade
@property (readonly) Class superclass;
@property (nonatomic) UIWindow *window; // ivar: _window


+(id)animationControllerWithWindow:(id)arg0 ;
-(CGFloat)transitionDuration:(id)arg0 ;
-(id)initWithWindow:(id)arg0 ;
-(void)_performCrossfadeAnimationWithContext:(id)arg0 windowGeometryUpdatingBlock:(id)arg1 ;
-(void)_performLayoutAnimationWithContext:(id)arg0 windowGeometryUpdatingBlock:(id)arg1 ;
-(void)animateTransition:(id)arg0 ;


@end


#endif