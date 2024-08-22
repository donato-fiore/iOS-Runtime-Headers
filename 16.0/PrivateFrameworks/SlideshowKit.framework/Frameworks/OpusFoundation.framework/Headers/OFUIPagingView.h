// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef OFUIPAGINGVIEW_H
#define OFUIPAGINGVIEW_H

@class UIScrollView, NSMutableSet, NSString;
@protocol UIScrollViewDelegate, OFUIPagingViewDelegate;


#import "OFUIView.h"
#import "OFUIPagingViewController.h"

@interface OFUIPagingView : OFUIView <UIScrollViewDelegate>

 {
    UIScrollView *_scrollView;
    NSMutableSet *_recycledPages;
    NSMutableSet *_visiblePages;
    BOOL _rotationInProgress;
}


@property (nonatomic) NSInteger currentPageIndex; // ivar: _currentPageIndex
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) NSObject<OFUIPagingViewDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) NSInteger firstLoadedPageIndex; // ivar: _firstLoadedPageIndex
@property (readonly, nonatomic) NSInteger firstVisiblePageIndex;
@property (nonatomic) CGFloat gapBetweenPages; // ivar: _gapBetweenPages
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) BOOL isScrolling; // ivar: _scrollViewIsMoving
@property (readonly, nonatomic) NSInteger lastLoadedPageIndex; // ivar: _lastLoadedPageIndex
@property (readonly, nonatomic) NSInteger lastVisiblePageIndex;
@property (readonly, nonatomic) NSInteger pageCount; // ivar: _pageCount
@property (nonatomic) NSInteger pagesToPreload; // ivar: _pagesToPreload
@property (nonatomic) OFUIPagingViewController *pagingViewController; // ivar: _pagingViewController
@property (readonly, nonatomic) NSInteger previousPageIndex; // ivar: _previousPageIndex
@property (nonatomic) BOOL recyclingEnabled; // ivar: _recyclingEnabled
@property (readonly) Class superclass;


-(id)dequeueReusablePage;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithFrame:(struct CGRect )arg0 ;
-(id)viewForPageAtIndex:(NSUInteger)arg0 ;
-(struct CGRect )frameForPageAtIndex:(NSUInteger)arg0 ;
-(struct CGRect )frameForScrollView;
-(void)commonInit;
-(void)configurePage:(id)arg0 forIndex:(NSInteger)arg1 ;
-(void)configurePages;
-(void)dealloc;
-(void)didRotate;
-(void)knownToBeIdle;
-(void)knownToBeMoving;
-(void)layoutSubviews;
-(void)recyclePage:(id)arg0 ;
-(void)reloadData;
-(void)scrollViewDidEndDecelerating:(id)arg0 ;
-(void)scrollViewDidEndDragging:(id)arg0 willDecelerate:(BOOL)arg1 ;
-(void)scrollViewDidScroll:(id)arg0 ;
-(void)scrollViewWillBeginDragging:(id)arg0 ;
-(void)setFrame:(struct CGRect )arg0 ;
-(void)willAnimateRotation;


@end


#endif