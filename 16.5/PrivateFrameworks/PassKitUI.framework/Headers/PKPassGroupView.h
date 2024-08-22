// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PKPASSGROUPVIEW_H
#define PKPASSGROUPVIEW_H

@class UIView, NSMutableDictionary, PKRemoveableAnimationTrackerStore, UIScrollView, UIPanGestureRecognizer, UILongPressGestureRecognizer, UIMotionEffectGroup, UIViewController, NSString, PKGroup, UIPageControl;
@protocol WLCardViewDelegate, PKGroupDelegate, UIScrollViewDelegate, UIGestureRecognizerDelegate, PKPassGroupViewDelegate;


#import "PKPassView.h"
#import "PKReusablePassViewQueue.h"

@interface PKPassGroupView : UIView <WLCardViewDelegate, PKGroupDelegate, UIScrollViewDelegate, UIGestureRecognizerDelegate>

 {
    unsigned short _animationCounter;
    unsigned short _pageControlAnimationCounter;
    unsigned short _frontFaceContentModePinningCounter;
    ? _layoutState;
    NSMutableDictionary *_passViewsByUniqueID;
    PKRemoveableAnimationTrackerStore *_delayedAnimations;
    UIScrollView *_horizontalScrollView;
    CGFloat _dimmerValue;
    BOOL _canPan;
    UIPanGestureRecognizer *_panGestureRecognizer;
    UILongPressGestureRecognizer *_longPressGestureRecognizer;
    UIMotionEffectGroup *_motionEffectGroup;
    BOOL _isAuthenticating;
    UIViewController *_detailsVC;
    NSString *_passBeingPresented;
    BOOL _groupWasMarkedDeleted;
    BOOL _passBeingPresentedWasDeleted;
    BOOL _invalidated;
    BOOL _effectivePaused;
}


@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<PKPassGroupViewDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) NSUInteger displayIndex;
@property (retain, nonatomic) PKPassView *frontmostPassView; // ivar: _frontmostPassView
@property (readonly, nonatomic) PKGroup *group; // ivar: _group
@property (readonly) NSUInteger hash;
@property (nonatomic, getter=isLoaned) BOOL loaned; // ivar: _loaned
@property (nonatomic, getter=isModallyPresented) BOOL modallyPresented; // ivar: _modallyPresented
@property (readonly, nonatomic) UIOffset offsetForFrontmostPassWhileStacked;
@property (readonly, nonatomic) UIPageControl *pageControl; // ivar: _pageControl
@property (weak, nonatomic) PKReusablePassViewQueue *passViewQueue; // ivar: _passViewQueue
@property (nonatomic, getter=isPaused) BOOL paused; // ivar: _paused
@property (nonatomic) NSInteger presentationState; // ivar: _presentationState
@property (readonly, nonatomic) UILongPressGestureRecognizer *pressGestureRecognizer; // ivar: _pressGestureRecognizer
@property (readonly) Class superclass;


-(BOOL)_isOurGestureRecognizer:(id)arg0 ;
-(BOOL)gestureRecognizer:(id)arg0 shouldReceiveTouch:(id)arg1 ;
-(BOOL)gestureRecognizer:(id)arg0 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)arg1 ;
-(BOOL)gestureRecognizerShouldBegin:(id)arg0 ;
-(BOOL)passView:(id)arg0 deleteButtonEnabledForPass:(id)arg1 ;
-(CGFloat)continuousShadowIndex;
-(NSInteger)_defaultContentModeForIndex:(NSUInteger)arg0 ;
-(id)_loadCardViewForIndex:(NSUInteger)arg0 contentMode:(NSInteger)arg1 ;
-(id)hitTest:(struct CGPoint )arg0 withEvent:(id)arg1 ;
-(id)initWithGroup:(id)arg0 delegate:(id)arg1 presentationState:(NSInteger)arg2 ;
-(id)passViewForIndex:(NSUInteger)arg0 ;
-(struct CGPoint )_stackingPositionForPassViewLayer:(id)arg0 atStackIndex:(NSUInteger)arg1 withSeparation:(BOOL)arg2 ;
-(struct CGRect )_pagingFrameForCardView:(id)arg0 atIndex:(NSUInteger)arg1 ;
-(struct CGSize )_contentSize;
-(struct CGSize )sizeThatFits:(struct CGSize )arg0 ;
-(struct _NSRange )_rangeOfFannedIndices;
-(struct _NSRange )_rangeOfPagingIndices;
-(struct _NSRange )_rangeOfVisibleIndices;
-(void)_addPanAndLongPressGestureRecognizers;
-(void)_applyContentMode:(NSInteger)arg0 toPassView:(id)arg1 animated:(BOOL)arg2 ;
-(void)_beginTrackingAnimation;
-(void)_endTrackingAnimation;
-(void)_enumerateIndicesInFannedOrderWithHandler:(id)arg0 ;
-(void)_enumerateIndicesInStackOrderWithHandler:(id)arg0 ;
-(void)_enumeratePassViewsInStackOrderWithHandler:(id)arg0 ;
-(void)_handleLongPress:(id)arg0 ;
-(void)_handlePanGesture:(id)arg0 ;
-(void)_handlePress:(id)arg0 ;
-(void)_pageControlChanged:(id)arg0 ;
-(void)_preparePageControlForReuse;
-(void)_removeDelayedAnimations;
-(void)_removePanAndLongPressGestureRecognizers;
-(void)_updateCachedGroupState;
-(void)_updateCachedLayoutState;
-(void)_updateDelegateResponderCache;
-(void)_updateFrontmostPassViewIfNecessary;
-(void)_updateLoadedViews:(BOOL)arg0 ;
-(void)_updatePageControlVisibilityWithDelay:(CGFloat)arg0 ;
-(void)_updatePageControlWithDisplayIndex;
-(void)_updatePausedState;
-(void)applyContentModesAnimated:(BOOL)arg0 ;
-(void)beginPinningFrontFaceContentMode;
-(void)dealloc;
-(void)dismissBackOfPassIfNecessaryForUniqueID:(id)arg0 ;
-(void)endPinningFrontFaceContentMode;
-(void)faceFrameDidChangeForPassView:(id)arg0 ;
-(void)group:(id)arg0 didInsertPass:(id)arg1 atIndex:(NSUInteger)arg2 ;
-(void)group:(id)arg0 didMovePassFromIndex:(NSUInteger)arg1 toIndex:(NSUInteger)arg2 ;
-(void)group:(id)arg0 didRemovePass:(id)arg1 atIndex:(NSUInteger)arg2 ;
-(void)group:(id)arg0 didUpdatePass:(id)arg1 atIndex:(NSUInteger)arg2 ;
-(void)invalidate;
-(void)layoutPagesAnimated:(BOOL)arg0 ;
-(void)layoutStackAnimated:(BOOL)arg0 ;
-(void)layoutSubviews;
-(void)layoutSubviewsAnimated:(BOOL)arg0 ;
-(void)markGroupDeleted;
-(void)passView:(id)arg0 deleteButtonPressedForPass:(id)arg1 ;
-(void)passView:(id)arg0 didPresentPassDetailsViewController:(id)arg1 ;
-(void)passView:(id)arg0 willPresentPassDetailsViewController:(id)arg1 ;
-(void)passViewDidResize:(id)arg0 animated:(BOOL)arg1 ;
-(void)passViewExpandButtonTapped:(id)arg0 ;
-(void)passViewTapped:(id)arg0 ;
-(void)presentDiff:(id)arg0 completion:(id)arg1 ;
-(void)presentPassWithUniqueID:(id)arg0 ;
-(void)presentPassWithUniqueID:(id)arg0 withContext:(id)arg1 animated:(BOOL)arg2 ;
-(void)removeFromSuperview;
-(void)scrollViewDidEndDecelerating:(id)arg0 ;
-(void)scrollViewDidEndDragging:(id)arg0 willDecelerate:(BOOL)arg1 ;
-(void)scrollViewDidEndScrollingAnimation:(id)arg0 ;
-(void)scrollViewDidScroll:(id)arg0 ;
-(void)setDimmer:(CGFloat)arg0 animated:(BOOL)arg1 ;
-(void)setPassViewExpanded:(BOOL)arg0 forPass:(id)arg1 animated:(BOOL)arg2 ;
-(void)sizeToFit;
-(void)updatePageControlFrame;
-(void)updateToStackWithProgress:(CGFloat)arg0 originalPosition:(struct CGPoint )arg1 timingFunction:(id)arg2 ;


@end


#endif