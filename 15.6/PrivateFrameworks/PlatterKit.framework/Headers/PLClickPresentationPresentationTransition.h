// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef PLCLICKPRESENTATIONPRESENTATIONTRANSITION_H
#define PLCLICKPRESENTATIONPRESENTATIONTRANSITION_H



#import "PLClickPresentationTransition.h"

@interface PLClickPresentationPresentationTransition : PLClickPresentationTransition

@property (readonly, nonatomic) CGAffineTransform targetTransform;


-(id)_newAnimator;
-(id)initWithTransitionDelegate:(id)arg0 presentingViewController:(id)arg1 presentedViewController:(id)arg2 completion:(id)arg3 ;
-(void)_configureTransitionContextWithFromView:(id)arg0 toView:(id)arg1 containerView:(id)arg2 ;
-(void)updateBackgroundViewForTransition;


@end


#endif