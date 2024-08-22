// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef SFTOASTVIEWCONTROLLER_H
#define SFTOASTVIEWCONTROLLER_H

@class UIViewController, UIView, NSTimer, UIPanGestureRecognizer, UIVisualEffectView, NSLayoutConstraint;
@protocol SFToastViewControllerDelegate;



@interface SFToastViewController : UIViewController {
    UIView *_contentContainerView;
    CGFloat _contentOffset;
    NSTimer *_dismissalTimer;
    UIPanGestureRecognizer *_panRecognizer;
    CGFloat _remainingToastDuration;
    UIVisualEffectView *_backgroundVisualEffectView;
    NSLayoutConstraint *_contentPreferredWidthConstraint;
    NSLayoutConstraint *_contentPreferredHeightConstraint;
    NSLayoutConstraint *_contentTopConstraint;
}


@property (readonly, nonatomic) UIViewController *contentViewController; // ivar: _contentViewController
@property (weak, nonatomic) NSObject<SFToastViewControllerDelegate> *delegate; // ivar: _delegate
@property (nonatomic) CGFloat toastDuration; // ivar: _toastDuration


-(id)initWithContentViewController:(id)arg0 ;
-(void)_didReceivePan:(id)arg0 ;
-(void)_scheduleToastTimerIfNeeded;
-(void)preferredContentSizeDidChangeForChildContentContainer:(id)arg0 ;
-(void)updateViewConstraints;
-(void)viewDidAppear:(BOOL)arg0 ;
-(void)viewDidLayoutSubviews;
-(void)viewDidLoad;
-(void)viewWillAppear:(BOOL)arg0 ;
-(void)viewWillDisappear:(BOOL)arg0 ;


@end


#endif