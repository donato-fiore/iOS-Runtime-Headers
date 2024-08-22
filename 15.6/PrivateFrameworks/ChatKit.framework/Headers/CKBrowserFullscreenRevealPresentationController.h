// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef CKBROWSERFULLSCREENREVEALPRESENTATIONCONTROLLER_H
#define CKBROWSERFULLSCREENREVEALPRESENTATIONCONTROLLER_H

@class UIPresentationController, UIView, UIStatusBar, UIStatusBarWindow;


#import "CKBrowserFullscreenRevealDimmingView.h"

@interface CKBrowserFullscreenRevealPresentationController : UIPresentationController

@property (retain, nonatomic) CKBrowserFullscreenRevealDimmingView *dimmingView; // ivar: _dimmingView
@property (copy, nonatomic) id *dismissHandler; // ivar: _dismissHandler
@property (nonatomic, getter=isDismissing) BOOL dismissing; // ivar: _dismissing
@property (nonatomic, getter=isPresenting) BOOL presenting; // ivar: _presenting
@property (nonatomic) CGRect presentingSnapshotFrame; // ivar: _presentingSnapshotFrame
@property (retain, nonatomic) UIView *presentingSnapshotView; // ivar: _presentingSnapshotView
@property (retain, nonatomic) UIStatusBar *statusBar; // ivar: _statusBar
@property (nonatomic) NSUInteger statusBarResizeMask; // ivar: _statusBarResizeMask
@property (retain, nonatomic) UIStatusBarWindow *statusBarWindow; // ivar: _statusBarWindow


-(BOOL)_shouldGrabPresentersView;
-(BOOL)shouldRemovePresentersView;
-(id)_viewsToApplyCornerRadius;
-(id)_viewsToApplyTransform;
-(id)initWithPresentedViewController:(id)arg0 presentingViewController:(id)arg1 ;
-(struct CGRect )frameOfPresentedViewInContainerView;
-(void)_cleanupPresentation;
-(void)_configureViewsForDismissedState;
-(void)_configureViewsForPresentedState;
-(void)_prepareViewHierarchyForPresentation;
-(void)_willChangeStatusBarFrame:(id)arg0 ;
-(void)containerViewDidLayoutSubviews;
-(void)containerViewWillLayoutSubviews;
-(void)dealloc;
-(void)dimmingViewTapped:(id)arg0 ;
-(void)dismissalTransitionDidEnd:(BOOL)arg0 ;
-(void)dismissalTransitionWillBegin;
-(void)presentationTransitionDidEnd:(BOOL)arg0 ;
-(void)presentationTransitionWillBegin;


@end


#endif