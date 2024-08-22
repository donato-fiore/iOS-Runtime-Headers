// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef PRXCARDSLIDEUPPRESENTATIONCONTROLLER_H
#define PRXCARDSLIDEUPPRESENTATIONCONTROLLER_H

@class UIPresentationController, UIView;



@interface PRXCardSlideUpPresentationController : UIPresentationController

@property (readonly, nonatomic) UIView *dimmingView; // ivar: _dimmingView


-(id)initWithDimmingStyle:(NSInteger)arg0 presentedViewController:(id)arg1 presentingViewController:(id)arg2 ;
-(id)initWithPresentedViewController:(id)arg0 presentingViewController:(id)arg1 ;
-(void)dismissalTransitionDidEnd:(BOOL)arg0 ;
-(void)dismissalTransitionWillBegin;
-(void)presentationTransitionDidEnd:(BOOL)arg0 ;
-(void)presentationTransitionWillBegin;


@end


#endif