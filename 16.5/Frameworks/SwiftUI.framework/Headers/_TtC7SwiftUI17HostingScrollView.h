// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef _TTC7SWIFTUI17HOSTINGSCROLLVIEW_H
#define _TTC7SWIFTUI17HOSTINGSCROLLVIEW_H

@protocol UIScrollViewDelegate, _UIUpdateCycleIdleObserver;


#import "UIKitScrollViewBase.h"

@interface _TtC7SwiftUI17HostingScrollView : UIKitScrollViewBase <UIScrollViewDelegate, _UIUpdateCycleIdleObserver>

 {
    ? viewType;
    ? layoutState;
    ? eventState;
    ? prefetchState;
    ? host;
    ? responder;
    ? layoutDirection;
    ? ignoreUpdates;
    ? pendingUpdate;
    ? lastContentInset;
    ? uiLastSafeAreaInset;
    ? lastAdditionalInset;
    ? animationTarget;
    ? animationOffset;
    ? isAnimationCompletionCheckPending;
    ? safeAreaTransitionState;
    ? beginDraggingOffset;
    ? onScrollToTopGesture;
    ? configuration;
}


@property (nonatomic, readonly) BOOL _shouldScrollToContentBeginningInRightToLeft;
@property (nonatomic) CGRect bounds;
@property (nonatomic, readonly) UIEdgeInsets safeAreaInsets;


-(BOOL)scrollViewShouldScrollToTop:(id)arg0 ;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithFrame:(struct CGRect )arg0 ;
-(void)_swiftui_focusedItem:(id)arg0 isMinX:(*BOOL)arg1 isMaxX:(*BOOL)arg2 isMinY:(*BOOL)arg3 isMaxY:(*BOOL)arg4 ;
-(void)_updateCycleIdleUntil:(NSUInteger)arg0 ;
-(void)adjustedContentInsetDidChange;
-(void)didMoveToWindow;
-(void)scrollViewDidEndDecelerating:(id)arg0 ;
-(void)scrollViewDidEndDragging:(id)arg0 willDecelerate:(BOOL)arg1 ;
-(void)scrollViewDidEndScrollingAnimation:(id)arg0 ;
-(void)scrollViewWillBeginDragging:(id)arg0 ;
-(void)scrollViewWillEndDragging:(id)arg0 withVelocity:(struct CGPoint )arg1 targetContentOffset:(struct CGPoint *)arg2 ;
-(void)setContentOffset:(struct CGPoint )arg0 animated:(BOOL)arg1 ;


@end


#endif