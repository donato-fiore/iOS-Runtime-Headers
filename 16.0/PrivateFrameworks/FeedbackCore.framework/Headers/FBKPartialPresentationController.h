// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef FBKPARTIALPRESENTATIONCONTROLLER_H
#define FBKPARTIALPRESENTATIONCONTROLLER_H

@class UIPresentationController, UIView;



@interface FBKPartialPresentationController : UIPresentationController

@property (retain, nonatomic) UIView *dimmingView; // ivar: _dimmingView
@property (nonatomic) CGFloat height; // ivar: _height


-(BOOL)isPresentingFullScreen;
-(NSInteger)adaptivePresentationStyle;
-(id)initWithPresentedViewController:(id)arg0 presentingViewController:(id)arg1 ;
-(struct CGRect )frameOfPresentedViewInContainerView;
-(void)containerViewWillLayoutSubviews;
-(void)dismissPresentation:(id)arg0 ;
-(void)dismissalTransitionDidEnd:(BOOL)arg0 ;
-(void)dismissalTransitionWillBegin;
-(void)presentationTransitionWillBegin;


@end


#endif