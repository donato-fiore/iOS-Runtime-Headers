// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef BNBANNERTRANSITIONANIMATOR_H
#define BNBANNERTRANSITIONANIMATOR_H



#import "BNBannerAnimator.h"

@interface BNBannerTransitionAnimator : BNBannerAnimator

@property (readonly, nonatomic, getter=isPresenting) BOOL presenting; // ivar: _presenting


// +(void)animateInteractive:(BOOL)arg0 animations:(id)arg1 completion:(unk)arg2  ;
-(CGFloat)transitionDuration:(id)arg0 ;
-(id)initForPresenting:(BOOL)arg0 ;
-(void)actionsForTransition:(id)arg0 ;


@end


#endif