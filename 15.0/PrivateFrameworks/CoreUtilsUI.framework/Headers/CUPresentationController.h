// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef CUPRESENTATIONCONTROLLER_H
#define CUPRESENTATIONCONTROLLER_H

@class UIPresentationController, UIView;



@interface CUPresentationController : UIPresentationController {
    UIView *_dimmingView;
}




-(void)containerViewWillLayoutSubviews;
-(void)dismissalTransitionDidEnd:(BOOL)arg0 ;
-(void)dismissalTransitionWillBegin;
-(void)presentationTransitionDidEnd:(BOOL)arg0 ;
-(void)presentationTransitionWillBegin;


@end


#endif