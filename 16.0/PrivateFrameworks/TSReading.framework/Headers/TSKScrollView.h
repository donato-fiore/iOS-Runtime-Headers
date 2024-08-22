// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef TSKSCROLLVIEW_H
#define TSKSCROLLVIEW_H

@class UIScrollView, UIView;
@protocol UIScrollViewDelegate><TSKScrollViewDelegate;



@interface TSKScrollView : UIScrollView {
    NSUInteger mAnimatingContentOffsetCount;
}


@property (readonly, nonatomic) UIView *contentView;
@property (nonatomic) NSObject<UIScrollViewDelegate><TSKScrollViewDelegate> *delegate;
@property (nonatomic) BOOL mayPassScrollEventsToNextResponder; // ivar: _mayPassScrollEventsToNextResponder
@property (readonly, nonatomic) CGRect scrollableAreaBounds; // ivar: _scrollableAreaBounds
@property (readonly, nonatomic, getter=isScrolling) BOOL scrolling;
@property (nonatomic) BOOL shouldDisableScrollingWhenCursorIsHidden; // ivar: _shouldDisableScrollingWhenCursorIsHidden
@property (readonly, nonatomic) CGRect tsk_bounds;


-(struct CGRect )visibleFrame;
-(struct CGSize )tsk_contentSize;
-(void)hideScrollIndicators;
-(void)layoutSubviews;
-(void)scrollRectToVisible:(struct CGRect )arg0 animated:(BOOL)arg1 ;
-(void)setContentOffset:(struct CGPoint )arg0 ;
-(void)setContentOffset:(struct CGPoint )arg0 animated:(BOOL)arg1 ;
-(void)setContentOffset:(struct CGPoint )arg0 animated:(BOOL)arg1 completionBlock:(id)arg2 ;


@end


#endif