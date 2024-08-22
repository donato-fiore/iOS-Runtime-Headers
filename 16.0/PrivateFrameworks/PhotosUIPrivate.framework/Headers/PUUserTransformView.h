// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PUUSERTRANSFORMVIEW_H
#define PUUSERTRANSFORMVIEW_H

@class UIView, CADisplayLink, UIScrollView, NSString, UIImage;
@protocol UIScrollViewDelegate, PUUserTransformViewDelegate;



@interface PUUserTransformView : UIView <UIScrollViewDelegate>

 {
    ? _delegateFlags;
}


@property (nonatomic, setter=_setContentCenter:) CGPoint _contentCenter; // ivar: __contentCenter
@property (nonatomic, setter=_setContentZoomScale:) CGFloat _contentZoomScale; // ivar: __contentZoomScale
@property (nonatomic, setter=_setDesiredZoomScale:) CGFloat _desiredZoomScale; // ivar: __desiredZoomScale
@property (retain, nonatomic, setter=_setDisplayLink:) CADisplayLink *_displayLink; // ivar: __displayLink
@property (nonatomic, setter=_setDoubleTapZoomScale:) CGFloat _doubleTapZoomScale; // ivar: __doubleTapZoomScale
@property (nonatomic, setter=_setAnimatingZoomEnd:) BOOL _isAnimatingZoomEnd; // ivar: __isAnimatingZoomEnd
@property (nonatomic, setter=_setContentAnimating:) BOOL _isContentAnimating; // ivar: __isContentAnimating
@property (nonatomic, setter=_setUpdatingState:) BOOL _isUpdatingState; // ivar: __isUpdatingState
@property (nonatomic, setter=_setUserDeceleratingPan:) BOOL _isUserDeceleratingPan; // ivar: __isUserDeceleratingPan
@property (nonatomic, setter=_setUserEndingZoom:) BOOL _isUserEndingZoom; // ivar: __isUserEndingZoom
@property (nonatomic, setter=_setUserPanning:) BOOL _isUserPanning; // ivar: __isUserPanning
@property (nonatomic, setter=_setUserPanningOrDecelerating:) BOOL _isUserPanningOrDecelerating; // ivar: __isUserPanningOrDecelerating
@property (nonatomic, setter=_setUserZooming:) BOOL _isUserZooming; // ivar: __isUserZooming
@property (nonatomic, setter=_setUserZoomingOrBouncing:) BOOL _isUserZoomingOrBouncing; // ivar: __isUserZoomingOrBouncing
@property (nonatomic, setter=_setNeedsUpdateAnimatingZoomEnd:) BOOL _needsUpdateAnimatingZoomEnd; // ivar: __needsUpdateAnimatingZoomEnd
@property (nonatomic, setter=_setNeedsUpdateContentState:) BOOL _needsUpdateContentState; // ivar: __needsUpdateContentState
@property (nonatomic, setter=_setNeedsUpdateScrollView:) BOOL _needsUpdateScrollView; // ivar: __needsUpdateScrollView
@property (nonatomic, setter=_setNeedsUpdateShouldTrackContentAnimation:) BOOL _needsUpdateShouldTrackContentAnimation; // ivar: __needsUpdateShouldTrackContentAnimation
@property (nonatomic, setter=_setNeedsUpdateUserAffineTransform:) BOOL _needsUpdateUserAffineTransform; // ivar: __needsUpdateUserAffineTransform
@property (nonatomic, setter=_setNeedsUpdateUserInteracting:) BOOL _needsUpdateUserInteracting; // ivar: __needsUpdateUserInteracting
@property (nonatomic, setter=_setNeedsUpdateUserPanningOrDecelerating:) BOOL _needsUpdateUserPanningOrDecelerating; // ivar: __needsUpdateUserPanningOrDecelerating
@property (nonatomic, setter=_setNeedsUpdateUserZoomingOrBouncing:) BOOL _needsUpdateUserZoomingOrBouncing; // ivar: __needsUpdateUserZoomingOrBouncing
@property (nonatomic, setter=_setNeedsUpdateZoomAndScroll:) BOOL _needsUpdateZoomAndScroll; // ivar: __needsUpdateZoomAndScroll
@property (nonatomic, setter=_setNumberOfNestedStateChanges:) NSInteger _numberOfNestedStateChanges; // ivar: __numberOfNestedStateChanges
@property (nonatomic, setter=_setNumberOfNestedZoomAndScrollChanges:) NSInteger _numberOfNestedZoomAndScrollChanges; // ivar: __numberOfNestedZoomAndScrollChanges
@property (nonatomic, setter=_setPreferredMaximumZoomScale:) CGFloat _preferredMaximumZoomScale; // ivar: __preferredMaximumZoomScale
@property (nonatomic, setter=_setPreferredMinimumZoomScale:) CGFloat _preferredMinimumZoomScale; // ivar: __preferredMinimumZoomScale
@property (readonly, nonatomic) UIView *_scrollContentView; // ivar: __scrollContentView
@property (readonly, nonatomic) UIScrollView *_scrollView; // ivar: __scrollView
@property (nonatomic, setter=_setShouldTrackContentAnimation:) BOOL _shouldTrackContentAnimation; // ivar: __shouldTrackContentAnimation
@property (nonatomic, getter=_isUpdatingScrollView, setter=_setUpdatingScrollView:) BOOL _updatingScrollView; // ivar: __updatingScrollView
@property (nonatomic, setter=_setWasUserInteractingBeforeStateUpdate:) BOOL _wasUserInteractingBeforeStateUpdate; // ivar: __wasUserInteractingBeforeStateUpdate
@property (nonatomic) CGSize contentPixelSize; // ivar: _contentPixelSize
@property (readonly, copy) NSString *debugDescription;
@property (retain, nonatomic) UIImage *debugScrollViewContentImage; // ivar: _debugScrollViewContentImage
@property (weak, nonatomic) NSObject<PUUserTransformViewDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (nonatomic) NSUInteger enabledInteractions; // ivar: _enabledInteractions
@property (readonly) NSUInteger hash;
@property (nonatomic, setter=_setUserInteracting:) BOOL isUserInteracting; // ivar: _isUserInteracting
@property (readonly, nonatomic) CGRect normalizedVisibleRect;
@property (nonatomic) BOOL requireTwoTouchesForPan; // ivar: _requireTwoTouchesForPan
@property (readonly, nonatomic) UIView *scrollContentView;
@property (nonatomic) CGSize scrollPadding; // ivar: _scrollPadding
@property (readonly, nonatomic) UIScrollView *scrollViewForGestureRecognizers;
@property (readonly) Class superclass;
@property (nonatomic) CGRect untransformedContentFrame; // ivar: _untransformedContentFrame
@property (nonatomic) CGAffineTransform userAffineTransform; // ivar: _userAffineTransform
@property (readonly, nonatomic) CGRect visibleRect;


-(BOOL)_needsStateUpdate;
-(BOOL)contentContainsLocationFromProvider:(id)arg0 ;
-(BOOL)pointInside:(struct CGPoint )arg0 withEvent:(id)arg1 ;
-(id)initWithFrame:(struct CGRect )arg0 ;
-(id)viewForZoomingInScrollView:(id)arg0 ;
-(struct CGPoint )_contentOffsetAdjustmentForContentInsets:(struct UIEdgeInsets )arg0 ;
-(struct UIEdgeInsets )_contentInsetsForContentScale:(CGFloat)arg0 ;
-(void)_assertInsideStateChangeBlock;
-(void)_assertInsideStateUpdate;
-(void)_assertInsideZoomAndScrollChangeBlock;
-(void)_didChangeState;
-(void)_handleDisplayLink:(id)arg0 ;
-(void)_invalidateAnimatingZoomEnd;
-(void)_invalidateContentState;
-(void)_invalidateScrollView;
-(void)_invalidateShouldTrackContentAnimation;
-(void)_invalidateUserAffineTransform;
-(void)_invalidateUserInteracting;
-(void)_invalidateUserPanningOrDecelerating;
-(void)_invalidateUserZoomingOrBouncing;
-(void)_invalidateZoomAndScroll;
-(void)_performStateChanges:(id)arg0 ;
-(void)_performZoomAndScrollChanges:(id)arg0 ;
-(void)_setNeedsStateUpdate;
-(void)_updateAnimatingZoomEndIfNeeded;
-(void)_updateContentStateIfNeeded;
-(void)_updateDisplayLink;
-(void)_updateScrollViewIfNeeded;
-(void)_updateShouldTrackContentAnimationIfNeeded;
-(void)_updateStateIfNeeded;
-(void)_updateUserAffineTransformIfNeeded;
-(void)_updateUserInteractingIfNeeded;
-(void)_updateUserPanningOrDeceleratingIfNeeded;
-(void)_updateUserZoomingOrBouncingIfNeeded;
-(void)_updateZoomAndScrollIfNeeded;
-(void)_willChangeState;
-(void)handleDoubleTapWithLocationProvider:(id)arg0 ;
-(void)layoutSubviews;
-(void)scrollViewDidEndDecelerating:(id)arg0 ;
-(void)scrollViewDidEndDragging:(id)arg0 willDecelerate:(BOOL)arg1 ;
-(void)scrollViewDidEndZooming:(id)arg0 withView:(id)arg1 atScale:(CGFloat)arg2 ;
-(void)scrollViewDidScroll:(id)arg0 ;
-(void)scrollViewDidZoom:(id)arg0 ;
-(void)scrollViewWillBeginDragging:(id)arg0 ;
-(void)scrollViewWillBeginZooming:(id)arg0 withView:(id)arg1 ;


@end


#endif