// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef SBFPAGEDSCROLLVIEW_H
#define SBFPAGEDSCROLLVIEW_H

@class BSUIScrollView, NSArray;



@interface SBFPagedScrollView : BSUIScrollView {
    BOOL _changingScrollViewLayout;
}


@property (nonatomic) NSUInteger currentPageIndex; // ivar: _currentPageIndex
@property (nonatomic) BOOL gestureEnabled; // ivar: _gestureEnabled
@property (copy, nonatomic) NSArray *pageViews; // ivar: _pageViews
@property (nonatomic) _NSRange visiblePageRange; // ivar: _visiblePageRange


-(BOOL)gestureRecognizer:(id)arg0 shouldReceiveTouch:(id)arg1 ;
-(BOOL)gestureRecognizer:(id)arg0 shouldRequireFailureOfGestureRecognizer:(id)arg1 ;
-(BOOL)resetContentOffsetToCurrentPage;
-(BOOL)scrollToPageAtIndex:(NSUInteger)arg0 animated:(BOOL)arg1 ;
-(BOOL)scrollToPageAtIndex:(NSUInteger)arg0 animated:(BOOL)arg1 withCompletion:(id)arg2 ;
-(BOOL)scrollToPageAtIndex:(NSUInteger)arg0 withAnimationSettings:(id)arg1 withCompletion:(id)arg2 ;
-(CGFloat)pageRelativeScrollOffset;
-(CGFloat)unclippedPageRelativeScrollOffset;
-(id)initWithFrame:(struct CGRect )arg0 ;
-(struct ? )currentScrollInterval;
-(struct CGPoint )contentOffsetForPageAtIndex:(NSUInteger)arg0 ;
-(void)_bs_didEndScrolling;
-(void)_bs_didScrollWithContext:(struct ? )arg0 ;
-(void)_bs_willBeginScrolling;
-(void)_layoutScrollView;
-(void)_updateCurrentPageForScrollOffset;
-(void)_updateVisiblePages;
-(void)layoutPages;
-(void)layoutSubviews;
-(void)setFrame:(struct CGRect )arg0 ;


@end


#endif