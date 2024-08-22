// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef _CRKCARDVIEWCONTROLLERTRANSITIONANIMATOR_H
#define _CRKCARDVIEWCONTROLLERTRANSITIONANIMATOR_H

@protocol _CRKCardViewControllerTransitionAnimatorDelegate;

#import <Foundation/Foundation.h>


@interface _CRKCardViewControllerTransitionAnimator : NSObject

@property (weak, nonatomic) NSObject<_CRKCardViewControllerTransitionAnimatorDelegate> *delegate; // ivar: _delegate


+(id)sectionShuffleTransitionAnimator;
-(void)_prepareAnimationFromCardViewController:(id)arg0 toCardViewController:(id)arg1 withAnimationCoordinator:(id)arg2 ;
-(void)transitionFromCardViewController:(id)arg0 toCardViewController:(id)arg1 animated:(BOOL)arg2 completion:(id)arg3 ;


@end


#endif