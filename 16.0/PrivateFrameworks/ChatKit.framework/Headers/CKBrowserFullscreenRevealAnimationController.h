// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef CKBROWSERFULLSCREENREVEALANIMATIONCONTROLLER_H
#define CKBROWSERFULLSCREENREVEALANIMATIONCONTROLLER_H

@class UIViewPropertyAnimator, NSString;
@protocol UIViewControllerAnimatedTransitioning;

#import <Foundation/Foundation.h>


@interface CKBrowserFullscreenRevealAnimationController : NSObject <UIViewControllerAnimatedTransitioning>



@property (retain, nonatomic) UIViewPropertyAnimator *ascentDescentAnimator; // ivar: _ascentDescentAnimator
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (nonatomic, getter=isPresenting) BOOL presenting; // ivar: _presenting
@property (readonly) Class superclass;


-(CGFloat)transitionDuration:(id)arg0 ;
-(id)initWithDirection:(BOOL)arg0 ;
-(void)animateTransition:(id)arg0 ;


@end


#endif