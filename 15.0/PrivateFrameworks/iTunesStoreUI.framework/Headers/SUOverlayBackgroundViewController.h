// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef SUOVERLAYBACKGROUNDVIEWCONTROLLER_H
#define SUOVERLAYBACKGROUNDVIEWCONTROLLER_H

@class NSMutableArray, UISwipeGestureRecognizer, NSString, NSArray;
@protocol SUScalingFlipViewDelegate, UIGestureRecognizerDelegate, SUOverlayBackgroundDelegate;


#import "SUViewController.h"
#import "SUScalingFlipView.h"
#import "SUTouchCaptureView.h"
#import "SUOverlayViewController.h"

@interface SUOverlayBackgroundViewController : SUViewController <SUScalingFlipViewDelegate, UIGestureRecognizerDelegate>

 {
    NSMutableArray *_actionQueue;
    SUScalingFlipView *_activeFlipView;
    BOOL _askingToDismissEverything;
    BOOL _askingToDismissSelection;
    SUTouchCaptureView *_captureView;
    CGRect _keyboardFrame;
    NSInteger _selectedViewControllerIndex;
    UISwipeGestureRecognizer *_swipeGestureRecognizer;
}


@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) NSObject<SUOverlayBackgroundDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) SUOverlayViewController *selectedViewController;
@property (readonly) Class superclass;
@property (readonly, nonatomic) NSArray *viewControllers; // ivar: _viewControllers


-(BOOL)gestureRecognizer:(id)arg0 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)arg1 ;
-(BOOL)shouldExcludeFromNavigationHistory;
-(CGFloat)_viewControllerHorizontalPadding;
-(CGFloat)_viewControllerKeyboardOffset;
-(id)_copyTransitionForTransition:(id)arg0 action:(id)arg1 ;
-(id)copyArchivableContext;
-(id)copyArchivableJetsamContext;
-(id)copyChildViewControllersForReason:(NSInteger)arg0 ;
-(id)init;
-(id)viewControllerForScriptWindowContext:(id)arg0 ;
-(struct CGRect )_centeredFrameForViewController:(id)arg0 ;
-(struct CGRect )_frameForSlideFromBottomForViewController:(id)arg0 ;
-(void)_addViewController:(id)arg0 ;
-(void)_backgroundAnimationDidStop:(id)arg0 finished:(id)arg1 context:(*void)arg2 ;
-(void)_captureViewAction:(id)arg0 ;
-(void)_enqueueAction:(id)arg0 ;
-(void)_finishDismissAction:(id)arg0 ;
-(void)_finishDismissEverythingAction:(id)arg0 ;
-(void)_finishDismissOfViewController:(id)arg0 animated:(BOOL)arg1 ;
-(void)_finishPresentAction:(id)arg0 ;
-(void)_layoutForKeyboardChangeWithInfo:(id)arg0 ;
-(void)_overlayActionDidFinish;
-(void)_overlayAnimationDidFinish;
-(void)_performDismissAction:(id)arg0 ;
-(void)_performDismissEverythingAction:(id)arg0 ;
-(void)_performFlipForAction:(id)arg0 ;
-(void)_performNextAction;
-(void)_performPresentAction:(id)arg0 ;
-(void)_reloadGestureRecognizers;
-(void)_removeViewController:(id)arg0 ;
-(void)_sendDidDismiss;
-(void)_shouldDismissFinishedWithValue:(id)arg0 ;
-(void)_swipe:(id)arg0 ;
-(void)_tearDownFlipView;
-(void)dealloc;
-(void)dismissAnimated:(BOOL)arg0 ;
-(void)dismissOverlay:(id)arg0 animated:(BOOL)arg1 ;
-(void)keyboardWillHideWithInfo:(id)arg0 ;
-(void)keyboardWillShowWithInfo:(id)arg0 ;
-(void)layoutViewControllers;
-(void)loadView;
-(void)overlayPageViewTapped:(id)arg0 ;
-(void)populateNavigationHistoryWithItems:(id)arg0 ;
-(void)presentOverlay:(id)arg0 withTransition:(id)arg1 ;
-(void)restoreArchivableContext:(id)arg0 ;
-(void)scalingFlipViewDidFinish:(id)arg0 ;
-(void)storePage:(id)arg0 finishedWithSuccess:(BOOL)arg1 ;
-(void)viewDidAppear:(BOOL)arg0 ;
-(void)willAnimateRotationToInterfaceOrientation:(NSInteger)arg0 duration:(CGFloat)arg1 ;


@end


#endif