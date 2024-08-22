// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef SBSEARCHGESTURE_H
#define SBSEARCHGESTURE_H

@class NSHashTable, UIPanGestureRecognizer, NSMutableSet, NSString, UIView;
@protocol UIScrollViewDelegate, SBSearchScrollViewDelegate, BSDescriptionProviding, SBSearchGestureDelegate;

#import <Foundation/Foundation.h>

#import "SBSearchScrollView.h"

@interface SBSearchGesture : NSObject <UIScrollViewDelegate, SBSearchScrollViewDelegate, BSDescriptionProviding>

 {
    NSHashTable *_observers;
    SBSearchScrollView *_scrollView;
    BOOL _suppressObserverCallbacks;
    UIPanGestureRecognizer *_panGestureRecognizer;
    CGFloat _lastOffset;
    NSMutableSet *_disabledReasons;
    BOOL _isDismissing;
    BOOL _ignoreScrollingEnded;
    BOOL _isDraggingAccordingToScrollView;
}


@property (readonly, nonatomic, getter=isAnimatingResetOrReveal) BOOL animatingResetOrReveal; // ivar: _animatingResetOrReveal
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<SBSearchGestureDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic, getter=isDragging) BOOL dragging;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic, getter=isShowingSearch) BOOL showingSearch;
@property (readonly) Class superclass;
@property (retain, nonatomic) UIView *targetView; // ivar: _targetView
@property (readonly, nonatomic, getter=isTracking) BOOL tracking;


+(CGFloat)searchHeaderHeight;
-(BOOL)searchScrollViewShouldRecognize:(id)arg0 ;
-(id)descriptionBuilderWithMultilinePrefix:(id)arg0 ;
-(id)descriptionWithMultilinePrefix:(id)arg0 ;
-(id)init;
-(id)succinctDescription;
-(id)succinctDescriptionBuilder;
-(struct CGPoint )locationInView:(id)arg0 ;
-(void)_notifyThaWeStartedShowingOrHiding;
-(void)_notifyThatGestureEndedWithShowingIfNeeded:(BOOL)arg0 ;
-(void)_updateForFinalContentOffset;
-(void)_updateForScrollingEnded;
-(void)_updateScrollingEnabled;
-(void)addObserver:(id)arg0 ;
-(void)removeObserver:(id)arg0 ;
-(void)requireGestureRecognizerToFail:(id)arg0 ;
-(void)resetAnimated:(BOOL)arg0 ;
-(void)revealAnimated:(BOOL)arg0 ;
-(void)scrollViewDidEndDecelerating:(id)arg0 ;
-(void)scrollViewDidEndDragging:(id)arg0 willDecelerate:(BOOL)arg1 ;
-(void)scrollViewDidEndScrollingAnimation:(id)arg0 ;
-(void)scrollViewDidScroll:(id)arg0 ;
-(void)scrollViewDidScrollToTop:(id)arg0 ;
-(void)scrollViewWillBeginDragging:(id)arg0 ;
-(void)scrollViewWillEndDragging:(id)arg0 withVelocity:(struct CGPoint )arg1 targetContentOffset:(struct CGPoint *)arg2 ;
-(void)setDisabled:(BOOL)arg0 forReason:(id)arg1 ;
-(void)updateForRotation;


@end


#endif