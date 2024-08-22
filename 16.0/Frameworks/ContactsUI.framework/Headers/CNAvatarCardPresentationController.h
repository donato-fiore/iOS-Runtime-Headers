// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef CNAVATARCARDPRESENTATIONCONTROLLER_H
#define CNAVATARCARDPRESENTATIONCONTROLLER_H

@class UIPresentationController, UIVisualEffectView, UIView, UIViewController, UITapGestureRecognizer;
@protocol CNCardTransitioning;


#import "CNAvatarCardTransition.h"

@interface CNAvatarCardPresentationController : UIPresentationController

@property (nonatomic) unsigned int alignmentEdge; // ivar: _alignmentEdge
@property (nonatomic) CGFloat alignmentY; // ivar: _alignmentY
@property (retain, nonatomic) UIVisualEffectView *backgroundView; // ivar: _backgroundView
@property (retain, nonatomic) UIView *cardView; // ivar: _cardView
@property (retain, nonatomic) UIView *contentView; // ivar: _contentView
@property (retain, nonatomic) UIView *dimmingView; // ivar: _dimmingView
@property (retain, nonatomic) NSObject<CNCardTransitioning> *originalTransitioning; // ivar: _originalTransitioning
@property (nonatomic) CGRect sourceRect; // ivar: _sourceRect
@property (nonatomic) CGRect sourceTargetRect; // ivar: _sourceTargetRect
@property (retain, nonatomic) UIView *sourceView; // ivar: _sourceView
@property (retain, nonatomic) UIViewController *sourceViewController; // ivar: _sourceViewController
@property (retain, nonatomic) UITapGestureRecognizer *tapGestureRecognizer; // ivar: _tapGestureRecognizer
@property (retain, nonatomic) CNAvatarCardTransition *transition; // ivar: _transition
@property (retain, nonatomic) UIVisualEffectView *vibrancyView; // ivar: _vibrancyView


-(BOOL)shouldPresentInFullscreen;
-(id)initWithPresentedViewController:(id)arg0 presentingViewController:(id)arg1 ;
-(id)presentedView;
-(struct CGRect )_frameOfPresentedViewControllerViewInSuperview;
-(struct CGRect )frameOfPresentedViewInContainerView;
-(void)_layoutViews;
-(void)containerViewWillLayoutSubviews;
-(void)dismissalTransitionDidEnd:(BOOL)arg0 ;
-(void)presentationTransitionDidEnd:(BOOL)arg0 ;
-(void)presentationTransitionWillBegin;
-(void)systemLayoutFittingSizeDidChangeForChildContentContainer:(id)arg0 ;
-(void)tapGestureRecognized:(id)arg0 ;


@end


#endif