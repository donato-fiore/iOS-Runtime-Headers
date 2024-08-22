// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PLVIEWCONTROLLEREDGEANIMATOR_H
#define PLVIEWCONTROLLEREDGEANIMATOR_H



#import "PLViewControllerAnimator.h"

@interface PLViewControllerEdgeAnimator : PLViewControllerAnimator



+(BOOL)drivesAnimation;
-(id)_newPropertyAnimator;
-(void)_animateTransitionToEdge:(NSUInteger)arg0 withTransitionContext:(id)arg1 ;
-(void)_performTransitionWithContext:(id)arg0 ;


@end


#endif