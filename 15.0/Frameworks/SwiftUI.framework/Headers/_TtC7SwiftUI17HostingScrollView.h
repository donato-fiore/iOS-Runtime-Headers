// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef _TTC7SWIFTUI17HOSTINGSCROLLVIEW_H
#define _TTC7SWIFTUI17HOSTINGSCROLLVIEW_H

@class UIScrollView;
@protocol UIScrollViewDelegate, _UIUpdateCycleIdleObserver;



@interface _TtC7SwiftUI17HostingScrollView : UIScrollView <UIScrollViewDelegate, _UIUpdateCycleIdleObserver>

 {
    ? viewType;
    ? state;
    ? prefetchState;
    ? host;
    ? responder;
    ? layoutDirection;
    ? ignoreUpdates;
    ? pendingUpdate;
    ? lastContentInset;
    ? uiLastSafeAreaInset;
    ? animationTarget;
    ? animationOffset;
    ? isAnimationCompletionCheckPending;
    ? animationListener;
    ? beginDraggingOffset;
    ? configuration;
}


@property (nonatomic, readonly) BOOL _shouldScrollToContentBeginningInRightToLeft;
@property (nonatomic) CGRect bounds;
@property (nonatomic, readonly) UIEdgeInsets safeAreaInsets;


-(id)initWithCoder:(id)arg0 ;
-(id)initWithFrame:(struct CGRect )arg0 ;
-(void)_updateCycleIdleUntil:(NSUInteger)arg0 ;
-(void)adjustedContentInsetDidChange;
-(void)didMoveToWindow;
-(void)scrollViewDidEndScrollingAnimation:(id)arg0 ;
-(void)scrollViewWillBeginDragging:(id)arg0 ;
-(void)scrollViewWillEndDragging:(id)arg0 withVelocity:(struct CGPoint )arg1 targetContentOffset:(struct CGPoint *)arg2 ;
-(void)setContentOffset:(struct CGPoint )arg0 animated:(BOOL)arg1 ;


@end


#endif