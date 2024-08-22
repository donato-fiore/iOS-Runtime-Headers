// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef _TTC7NEWSUI231MODALCARDPRESENTATIONCONTROLLER_H
#define _TTC7NEWSUI231MODALCARDPRESENTATIONCONTROLLER_H

@class UIPresentationController;



@interface _TtC7NewsUI231ModalCardPresentationController : UIPresentationController {
    ? effectView;
    ? observation;
    ? useBlurEffect;
}


@property (nonatomic, readonly) CGRect frameOfPresentedViewInContainerView;


-(id)initWithPresentedViewController:(id)arg0 presentingViewController:(id)arg1 ;
-(void)dismissModal;
-(void)dismissalTransitionWillBegin;
-(void)presentationTransitionWillBegin;


@end


#endif