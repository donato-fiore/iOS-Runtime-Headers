// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PLCLICKPRESENTATIONDISMISSALTRANSITION_H
#define PLCLICKPRESENTATIONDISMISSALTRANSITION_H



#import "PLClickPresentationTransition.h"
#import "PLClickPresentationPresentationTransition.h"

@interface PLClickPresentationDismissalTransition : PLClickPresentationTransition

@property (weak, nonatomic) PLClickPresentationPresentationTransition *presentationTransition; // ivar: _presentationTransition


-(id)_newAnimator;
-(id)initWithTransitionDelegate:(id)arg0 presentingViewController:(id)arg1 presentedViewController:(id)arg2 completion:(id)arg3 ;
-(void)_configureTransitionContextWithFromView:(id)arg0 toView:(id)arg1 containerView:(id)arg2 ;
-(void)updateBackgroundViewForTransition;


@end


#endif