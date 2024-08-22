// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef _UIQUEUINGSCROLLVIEW_H
#define _UIQUEUINGSCROLLVIEW_H

@class NSArray, NSMutableArray;
@protocol _UIQueuingScrollViewDataSource, _UIQueuingScrollViewDelegate;


#import "UIScrollView.h"
#import "UIView.h"

@interface _UIQueuingScrollView : UIScrollView {
    NSInteger _navigationOrientation;
    NSArray *_views;
    NSArray *_wrapperViews;
    UIView *_pendingVisibleView;
    NSMutableArray *_viewStateQueue;
    NSMutableArray *_completionStateQueue;
    BOOL _manualScrollInProgress;
    ? _delegateFlags;
}


@property (nonatomic) CGRect disabledScrollingRegion; // ivar: _disabledScrollingRegion
@property (nonatomic) CGFloat pageSpacing; // ivar: _pageSpacing
@property (weak, nonatomic) NSObject<_UIQueuingScrollViewDataSource> *qDataSource; // ivar: _qDataSource
@property (weak, nonatomic) NSObject<_UIQueuingScrollViewDelegate> *qDelegate; // ivar: _qDelegate
@property (readonly, nonatomic) UIView *visibleView;


-(BOOL)_dataSourceProvidesViews;
-(BOOL)_gestureRecognizer:(id)arg0 shouldReceiveTouch:(id)arg1 ;
-(BOOL)_isDeceleratingInOppositionToNavigationDirection:(NSInteger)arg0 ;
-(BOOL)_isScrollInProgress:(BOOL)arg0 ;
-(BOOL)canBecomeFocused;
-(BOOL)isManualScrollInProgress;
-(BOOL)isPreviousScrollCompatibleWithScrollInDirection:(NSInteger)arg0 ;
-(NSInteger)_navigationDirectionForActiveScroll:(BOOL)arg0 ;
-(NSInteger)_navigationDirectionFromCurrentOffset;
-(NSUInteger)_abuttedPagingEdges;
-(id)_dequeueViewForIndex:(NSInteger)arg0 ;
-(id)_requestViewForIndex:(NSInteger)arg0 ;
-(id)_viewAfterView:(id)arg0 ;
-(id)_viewAtIndex:(NSInteger)arg0 loadingIfNecessary:(BOOL)arg1 updatingContents:(BOOL)arg2 animated:(BOOL)arg3 ;
-(id)_viewBefore:(BOOL)arg0 view:(id)arg1 ;
-(id)_viewBeforeView:(id)arg0 ;
-(id)initWithFrame:(struct CGRect )arg0 navigationOrientation:(NSInteger)arg1 ;
-(void)_adjustContentInsets;
-(void)_boundsDidChangeToSize:(struct CGSize )arg0 ;
-(void)_cleanUpCompletionState:(id)arg0 didFinish:(BOOL)arg1 didComplete:(BOOL)arg2 ;
-(void)_commitGestureDrivenScrollRevealingView:(id)arg0 concealingView:(id)arg1 inDirection:(NSInteger)arg2 canComplete:(BOOL)arg3 ;
-(void)_didEndDraggingManualScroll;
-(void)_didEndManualScroll;
-(void)_didEndProgrammaticScroll;
-(void)_didEndScroll:(BOOL)arg0 ;
-(void)_didScrollWithAnimation:(BOOL)arg0 force:(BOOL)arg1 ;
-(void)_enqueueAnimatedScrollInDirection:(NSInteger)arg0 withView:(id)arg1 completion:(id)arg2 ;
-(void)_enqueueCompletionState:(id)arg0 ;
-(void)_flushView:(id)arg0 animated:(BOOL)arg1 ;
-(void)_handleDirectionalPageWithHorizontalVelocity:(CGFloat)arg0 verticalVelocity:(CGFloat)arg1 ;
-(void)_invalidateOffscreenViews;
-(void)_notifyDelegateDidBailoutOfScrollAndRevealedView:(id)arg0 ;
-(void)_notifyDelegateDidCommitManualScroll:(BOOL)arg0 toRevealView:(id)arg1 concealView:(id)arg2 direction:(NSInteger)arg3 animated:(BOOL)arg4 canComplete:(BOOL)arg5 ;
-(void)_notifyDelegateDidEndManualScroll:(BOOL)arg0 toRevealView:(id)arg1 direction:(NSInteger)arg2 animated:(BOOL)arg3 didFinish:(BOOL)arg4 didComplete:(BOOL)arg5 ;
-(void)_notifyDelegateDidFinishScrolling;
-(void)_notifyDelegateWillManuallyScroll:(BOOL)arg0 toRevealView:(id)arg1 concealingView:(id)arg2 animated:(BOOL)arg3 ;
-(void)_replaceViews:(id)arg0 updatingContents:(BOOL)arg1 adjustContentInsets:(BOOL)arg2 animated:(BOOL)arg3 ;
-(void)_scrollViewAnimationEnded:(id)arg0 finished:(BOOL)arg1 ;
-(void)_scrollViewDidEndDecelerating;
-(void)_scrollViewDidEndDraggingWithDeceleration:(BOOL)arg0 ;
-(void)_setFrameAndApplyPageSpacing:(struct CGRect )arg0 ;
-(void)_setWrappedViewAtIndex:(NSInteger)arg0 withView:(id)arg1 ;
-(void)layoutSubviews;
-(void)scrollRectToVisible:(struct CGRect )arg0 animated:(BOOL)arg1 ;
-(void)setBounds:(struct CGRect )arg0 ;
-(void)setFrame:(struct CGRect )arg0 ;
-(void)setView:(id)arg0 direction:(NSInteger)arg1 animated:(BOOL)arg2 completion:(id)arg3 ;


@end


#endif