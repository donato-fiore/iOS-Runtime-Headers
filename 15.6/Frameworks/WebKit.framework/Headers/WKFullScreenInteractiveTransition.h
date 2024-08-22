// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef WKFULLSCREENINTERACTIVETRANSITION_H
#define WKFULLSCREENINTERACTIVETRANSITION_H

@class NSString;
@protocol UIViewControllerInteractiveTransitioning;

#import <Foundation/Foundation.h>

#import "WKFullscreenAnimationController.h"

@interface WKFullScreenInteractiveTransition : NSObject <UIViewControllerInteractiveTransitioning>

 {
    RetainPtr<WKFullscreenAnimationController> _animator;
    RetainPtr<id<UIViewControllerContextTransitioning>> _context;
    CGPoint _anchor;
}


@property (readonly, nonatomic) WKFullscreenAnimationController *animator;
@property (readonly, nonatomic) NSInteger completionCurve;
@property (readonly, nonatomic) CGFloat completionSpeed;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;
@property (readonly, nonatomic) BOOL wantsInteractiveStart;


-(id)initWithAnimator:(id)arg0 anchor:(struct CGPoint )arg1 ;
-(void)cancelInteractiveTransition;
-(void)finishInteractiveTransition;
-(void)startInteractiveTransition:(id)arg0 ;
-(void)updateInteractiveTransition:(CGFloat)arg0 withScale:(CGFloat)arg1 andTranslation:(struct CGSize )arg2 ;
-(void)updateInteractiveTransition:(CGFloat)arg0 withTranslation:(struct CGSize )arg1 ;


@end


#endif