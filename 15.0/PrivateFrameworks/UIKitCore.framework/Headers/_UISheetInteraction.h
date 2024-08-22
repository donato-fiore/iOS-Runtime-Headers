// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef _UISHEETINTERACTION_H
#define _UISHEETINTERACTION_H

@class NSString, NSMutableArray;
@protocol _UIScrollViewScrollableAncestor, UIPanGestureRecognizerDelegateInternal, _UIHyperInteractorDelegate, _UIHyperOutOfProcessViewAnimatorDelegate, UIInteraction, _UISheetInteractionDelegate, NSObject;

#import <Foundation/Foundation.h>

#import "_UIHyperOutOfProcessViewAnimator.h"
#import "UIPanGestureRecognizer.h"
#import "_UIHyperrectangle.h"
#import "_UIHyperregionUnion.h"
#import "_UIHyperAsymmetricExtender.h"
#import "_UIHyperInteractor.h"
#import "UIView.h"

@interface _UISheetInteraction : NSObject <_UIScrollViewScrollableAncestor, UIPanGestureRecognizerDelegateInternal, _UIHyperInteractorDelegate, _UIHyperOutOfProcessViewAnimatorDelegate, UIInteraction>



@property (readonly, nonatomic) _UIHyperOutOfProcessViewAnimator *animator; // ivar: _animator
@property (readonly, nonatomic) CGPoint attachmentPoint;
@property (readonly, nonatomic) UIPanGestureRecognizer *backgroundGestureRecognizer; // ivar: _backgroundGestureRecognizer
@property (readonly, nonatomic) CGPoint currentOffset;
@property (copy, nonatomic) id *currentOffsetWasInvalidated; // ivar: _currentOffsetWasInvalidated
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<_UISheetInteractionDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) _UIHyperrectangle *detentContinuum; // ivar: _detentContinuum
@property (readonly, nonatomic) NSMutableArray *detentPoints; // ivar: _detentPoints
@property (readonly, nonatomic) _UIHyperregionUnion *detentUnion; // ivar: _detentUnion
@property (copy, nonatomic) id *detentsGetter; // ivar: _detentsGetter
@property (retain, nonatomic) NSObject<NSObject> *dragSource; // ivar: _dragSource
@property (readonly, nonatomic, getter=isDragging) BOOL dragging;
@property (nonatomic, getter=isEnabled) BOOL enabled; // ivar: _enabled
@property (readonly, nonatomic) _UIHyperAsymmetricExtender *extender; // ivar: _extender
@property (nonatomic, getter=isGeneratingAnimations) BOOL generatingAnimations; // ivar: _generatingAnimations
@property (readonly) NSUInteger hash;
@property (nonatomic) NSInteger indexOfCurrentDetent; // ivar: _indexOfCurrentDetent
@property (copy, nonatomic) id *indexOfCurrentDetentGetter; // ivar: _indexOfCurrentDetentGetter
@property (readonly, nonatomic) _UIHyperInteractor *interactor; // ivar: _interactor
@property (readonly, nonatomic) NSMutableArray *registeredPanGestureRecognizers; // ivar: _registeredPanGestureRecognizers
@property (copy, nonatomic) id *rubberBandExtentBeyondMaximumOffsetGetter; // ivar: _rubberBandExtentBeyondMaximumOffsetGetter
@property (copy, nonatomic) id *rubberBandExtentBeyondMinimumOffsetGetter; // ivar: _rubberBandExtentBeyondMinimumOffsetGetter
@property (nonatomic, getter=isScrollInteractionEnabled) BOOL scrollInteractionEnabled; // ivar: _scrollInteractionEnabled
@property (nonatomic) BOOL scrollingExpandsToLargerDetentWhenScrolledToEdge; // ivar: _scrollingExpandsToLargerDetentWhenScrolledToEdge
@property (readonly) Class superclass;
@property (weak, nonatomic) UIView *view; // ivar: _view


-(BOOL)_descendentScrollView:(id)arg0 shouldPreserveStartOffset:(struct CGPoint )arg1 ;
-(BOOL)_descendentScrollViewShouldScrollHorizontally:(id)arg0 ;
-(BOOL)_descendentScrollViewShouldScrollVertically:(id)arg0 ;
-(BOOL)_panGestureRecognizer:(id)arg0 shouldTryToBeginHorizontallyWithEvent:(id)arg1 ;
-(BOOL)_panGestureRecognizer:(id)arg0 shouldTryToBeginVerticallyWithEvent:(id)arg1 ;
-(BOOL)_shouldInteractWithDescendentScrollView:(id)arg0 startOffset:(struct CGPoint )arg1 maxTopOffset:(CGFloat)arg2 ;
-(BOOL)gestureRecognizer:(id)arg0 shouldReceiveTouch:(id)arg1 ;
-(BOOL)gestureRecognizer:(id)arg0 shouldRequireFailureOfGestureRecognizer:(id)arg1 ;
-(BOOL)isUnconstrainedOffsetBeyondSideOrTopExtentInverted:(BOOL)arg0 ;
-(id)_currentDragPanGesture;
-(id)init;
-(struct CGPoint )_scrollView:(id)arg0 adjustedUnconstrainedOffsetForUnconstrainedOffset:(struct CGPoint )arg1 startOffset:(struct CGPoint )arg2 horizontalVelocity:(*CGFloat)arg3 verticalVelocity:(*CGFloat)arg4 animator:(*id)arg5 ;
-(void)_animateWithParameters:(id)arg0 animations:(id)arg1 ;
-(void)_descendentScrollViewDidCancelDragging:(id)arg0 ;
-(void)_descendentScrollViewDidEndDragging:(id)arg0 ;
-(void)_hyperInteractorApplyPresentationPoint:(id)arg0 ;
-(void)_hyperOutOfProcessViewAnimator:(id)arg0 getPresentationPointForInterruptedAnimation:(*CGFloat)arg1 ;
-(void)cancelDraggingIfNeeded;
-(void)didMoveToView:(id)arg0 ;
-(void)draggingBeganFromSource:(id)arg0 withRubberBandCoefficient:(CGFloat)arg1 ;
-(void)draggingCancelledInSource:(id)arg0 ;
-(void)draggingChangedInSource:(id)arg0 withTranslation:(struct CGPoint )arg1 velocity:(struct CGPoint )arg2 animateChange:(BOOL)arg3 ;
-(void)draggingEndedInSource:(id)arg0 ;
-(void)handlePan:(id)arg0 ;
-(void)invalidateDetents;
-(void)invalidateIndexOfCurrentDetent;
-(void)invalidateRubberBandExtentBeyondMaximumOffset;
-(void)invalidateRubberBandExtentBeyondMinimumOffset;
-(void)registerPanGestureRecognizer:(id)arg0 ;
-(void)sendCurrentOffsetDidChange;
-(void)unregisterPanGestureRecognizer:(id)arg0 ;
-(void)updateRegisteredPanGestureRecognizerEnabled:(id)arg0 ;
-(void)willMoveToView:(id)arg0 ;


@end


#endif