// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef PXUISCROLLVIEWCONTROLLER_H
#define PXUISCROLLVIEWCONTROLLER_H

@class NSString, UIScrollView;
@protocol PXUIScrollViewDelegate, _PXUIScrollViewFocusItemProvider, UIScrollViewDelegate, PXUIScrollViewControllerFocusItemProvider;


#import "PXScrollViewController.h"
#import "_PXUIScrollView.h"

@interface PXUIScrollViewController : PXScrollViewController <PXUIScrollViewDelegate, _PXUIScrollViewFocusItemProvider, UIScrollViewDelegate>

 {
    _PXUIScrollView *_scrollView;
    BOOL _isScrollViewDecelerating;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (weak, nonatomic) NSObject<PXUIScrollViewControllerFocusItemProvider> *focusItemProvider; // ivar: _focusItemProvider
@property (readonly) NSUInteger hash;
@property (nonatomic) BOOL ignoresSafeAreaInsets; // ivar: _ignoresSafeAreaInsets
@property (nonatomic, setter=setScrollingToTop:) BOOL isScrollingToTop; // ivar: _isScrollingToTop
@property (readonly, nonatomic) UIScrollView *scrollView;
@property (readonly) Class superclass;


-(BOOL)clipsToBounds;
-(BOOL)deferContentOffsetUpdates;
-(BOOL)hasWindow;
-(BOOL)isDecelerating;
-(BOOL)isDragging;
-(BOOL)isScrolledAtEdge:(unsigned int)arg0 tolerance:(CGFloat)arg1 ;
-(BOOL)isTracking;
-(BOOL)respectsContentZOrder;
-(BOOL)scrollViewShouldScrollToTop:(id)arg0 ;
-(BOOL)showsHorizontalScrollIndicator;
-(BOOL)showsVerticalScrollIndicator;
-(id)contentCoordinateSpace;
-(id)focusItemsForScrollView:(id)arg0 inRect:(struct CGRect )arg1 ;
-(id)initWithFrame:(struct CGRect )arg0 ;
-(void)_checkScrollViewDeceleration;
-(void)_scheduleScrollViewDecelerationCheck;
-(void)addFloatingSublayer:(id)arg0 forAxis:(NSInteger)arg1 ;
-(void)addGestureRecognizer:(id)arg0 ;
-(void)addSubview:(id)arg0 ;
-(void)addSubviewToScrollView:(id)arg0 ;
-(void)applyScrollInfo:(id)arg0 ;
-(void)decelerationRateDidChange;
-(void)removeGestureRecognizer:(id)arg0 ;
-(void)scrollRectToVisible:(struct CGRect )arg0 avoidingContentInsetEdges:(NSUInteger)arg1 animated:(BOOL)arg2 ;
-(void)scrollToEdge:(unsigned int)arg0 animated:(BOOL)arg1 ;
-(void)scrollToEdge:(unsigned int)arg0 animated:(BOOL)arg1 completionHandler:(id)arg2 ;
-(void)scrollView:(id)arg0 willBeginScrollingAnimationTowardsContentEdges:(NSUInteger)arg1 ;
-(void)scrollViewDidEndDecelerating:(id)arg0 ;
-(void)scrollViewDidEndDragging:(id)arg0 willDecelerate:(BOOL)arg1 ;
-(void)scrollViewDidEndScrollingAnimation:(id)arg0 ;
-(void)scrollViewDidLayoutSubviews:(id)arg0 ;
-(void)scrollViewDidScroll:(id)arg0 ;
-(void)scrollViewDidScrollToTop:(id)arg0 ;
-(void)scrollViewWillBeginDragging:(id)arg0 ;
-(void)scrollViewWillEndDragging:(id)arg0 withVelocity:(struct CGPoint )arg1 targetContentOffset:(struct CGPoint *)arg2 ;
-(void)scrollViewWillLayoutSubviews:(id)arg0 ;
-(void)setClipsToBounds:(BOOL)arg0 ;
-(void)setDeferContentOffsetUpdates:(BOOL)arg0 ;
-(void)setRespectsContentZOrder:(BOOL)arg0 ;
-(void)setShowsHorizontalScrollIndicator:(BOOL)arg0 ;
-(void)setShowsVerticalScrollIndicator:(BOOL)arg0 ;
-(void)setVisibleOrigin:(struct CGPoint )arg0 ;
-(void)stopScrollingAndZoomingAnimations;


@end


#endif