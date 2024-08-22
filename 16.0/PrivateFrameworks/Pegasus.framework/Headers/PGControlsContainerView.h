// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PGCONTROLSCONTAINERVIEW_H
#define PGCONTROLSCONTAINERVIEW_H

@class UIView, UIViewPropertyAnimator, UITapGestureRecognizer, UIGestureRecognizer, NSTimer, NSMutableSet, NSString;
@protocol PGControlsViewModelDelegate, UIGestureRecognizerDelegate, PGCommandHandler;


#import "PGControlsViewModel.h"
#import "PGControlsView.h"

@interface PGControlsContainerView : UIView <PGControlsViewModelDelegate, UIGestureRecognizerDelegate>

 {
    PGControlsViewModel *_viewModel;
    PGControlsView *_controlsView;
    UIViewPropertyAnimator *_containerViewVisibilityAnimator;
    UIViewPropertyAnimator *_controlsViewVisibilityAnimator;
    UIViewPropertyAnimator *_hidableControlsVisibilityAnimator;
    UIView *_interruptionDimmingView;
    UITapGestureRecognizer *_singleTapGestureRecognizer;
    UITapGestureRecognizer *_doubleTapGestureRecognizer;
    UITapGestureRecognizer *_doubleDoubleTapGestureRecognizer;
    UIGestureRecognizer *_hoverGestureRecognizer;
    NSTimer *_hideControlsAfterDelayTimer;
    NSMutableSet *_preventAutoHideOfControlsAssertionIdentifiers;
}


@property (weak, nonatomic) NSObject<PGCommandHandler> *commandHandler; // ivar: _commandHandler
@property (copy, nonatomic) id *coordinatedAnimationsForControlsVisibiity; // ivar: _coordinatedAnimationsForControlsVisibiity
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (nonatomic, getter=isInteractivelyResizing) BOOL interactivelyResizing; // ivar: _interactivelyResizing
@property (nonatomic, getter=isShowingControlsForHoverActive) BOOL showingControlsForHoverActive; // ivar: _showingControlsForHoverActive
@property (nonatomic) BOOL showsPictureInPictureUnavailableIndicator; // ivar: _showsPictureInPictureUnavailableIndicator
@property (readonly) Class superclass;


-(BOOL)_controlsShouldAutoHide;
-(BOOL)gestureRecognizer:(id)arg0 shouldRequireFailureOfGestureRecognizer:(id)arg1 ;
-(BOOL)gestureRecognizerShouldBegin:(id)arg0 ;
-(id)PG_acquireAssertionToPreventAutoHideOfControlsWithReason:(id)arg0 ;
-(id)_acquirePreventAutoHideOfControlsAssertionWithReason:(id)arg0 ;
// -(id)_performVisibilityTransitionAnimated:(BOOL)arg0 existingAnimator:(id)arg1 animations:(id)arg2 success:(unk)arg3  ;
-(id)_updateVisibilityOfView:(id)arg0 hidden:(BOOL)arg1 animated:(BOOL)arg2 existingAnimator:(id)arg3 ;
-(id)initWithFrame:(struct CGRect )arg0 viewModel:(id)arg1 ;
-(id)viewModel;
-(void)_handleDoubleDoubleTapGestureRecognizer:(id)arg0 ;
-(void)_handleDoubleTapGestureRecognizer:(id)arg0 ;
-(void)_handleHoverGestureRecognizer:(id)arg0 ;
-(void)_handleSingleTapGestureRecognizer:(id)arg0 ;
-(void)_invalidateTimer;
-(void)_setContinuousCornerRadius:(CGFloat)arg0 ;
-(void)_setControlsHidden:(BOOL)arg0 animated:(BOOL)arg1 ;
-(void)_setPrefersControlsHidden:(BOOL)arg0 animated:(BOOL)arg1 ;
-(void)_updateHideControlsAfterDelayTimer;
-(void)controlsViewModel:(id)arg0 didIssueCommand:(id)arg1 ;
-(void)controlsViewModel:(id)arg0 valuesChangedFromOldValue:(id)arg1 ;
-(void)didMoveToWindow;
-(void)layoutSubviews;
-(void)setControlsContainerHidden:(BOOL)arg0 animated:(BOOL)arg1 ;


@end


#endif