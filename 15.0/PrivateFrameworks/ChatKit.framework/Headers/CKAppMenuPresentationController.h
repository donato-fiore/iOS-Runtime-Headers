// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef CKAPPMENUPRESENTATIONCONTROLLER_H
#define CKAPPMENUPRESENTATIONCONTROLLER_H

@class UIPresentationController, NSString, UIView, UITapGestureRecognizer;
@protocol UIGestureRecognizerDelegate;



@interface CKAppMenuPresentationController : UIPresentationController <UIGestureRecognizerDelegate>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) UIView *sourceView;
@property (readonly) Class superclass;
@property (retain, nonatomic) UITapGestureRecognizer *tapRecognizer; // ivar: _tapRecognizer


-(BOOL)gestureRecognizerShouldBegin:(id)arg0 ;
-(id)initWithPresentedViewController:(id)arg0 presentingViewController:(id)arg1 sourceView:(id)arg2 ;
-(struct CGRect )frameOfPresentedViewInContainerView;
-(void)dismissalTransitionDidEnd:(BOOL)arg0 ;
-(void)presentationTransitionDidEnd:(BOOL)arg0 ;
-(void)tapOutsideMenu;


@end


#endif