// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef QLPAGEVIEWCONTROLLER_H
#define QLPAGEVIEWCONTROLLER_H

@class UIPageViewController, NSMapTable, UIScrollView, UIViewController, NSString;
@protocol UIPageViewControllerDataSource, UIPageViewControllerDelegate, UIScrollViewDelegate, QLPageViewControllerDataSource;


#import "QLDelegateProxy.h"

@interface QLPageViewController : UIPageViewController <UIPageViewControllerDataSource, UIPageViewControllerDelegate, UIScrollViewDelegate>

 {
    NSMapTable *_pages;
    NSUInteger _nextPageIndex;
    CGPoint _scrollingStartOffset;
    id<UIPageViewControllerDelegate> *_definedDelegate;
    UIScrollView *_scrollView;
    QLDelegateProxy *_scrollViewDelegateProxy;
    QLDelegateProxy *_pageViewControllerDelegateProxy;
    CGFloat _interPageSpacing;
    NSInteger _currentPageIndexForAppliedParallaxEffect;
    BOOL _pageClipsToBounds;
    BOOL _isTransitioning;
}


@property (readonly, weak, nonatomic) UIViewController *currentPage;
@property (nonatomic) NSUInteger currentPageIndex; // ivar: _currentPageIndex
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (weak, nonatomic) NSObject<QLPageViewControllerDataSource> *indexedDataSource; // ivar: _indexedDataSource
@property (nonatomic) CGFloat parallaxIntensity; // ivar: _parallaxIntensity
@property (readonly, weak, nonatomic) UIScrollView *scrollView;
@property (weak, nonatomic) NSObject<UIScrollViewDelegate> *scrollViewDelegate; // ivar: _scrollViewDelegate
@property (readonly) Class superclass;


-(NSUInteger)_indexOfViewController:(id)arg0 ;
-(id)_cachedViewControllerAtIndex:(NSUInteger)arg0 offset:(NSInteger)arg1 ;
-(id)_retrieveAndStoreViewControllerAtIndex:(NSUInteger)arg0 offset:(NSUInteger)arg1 ;
-(id)_viewControllerAtIndex:(NSUInteger)arg0 offset:(NSInteger)arg1 ;
-(id)delegate;
-(id)init;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithTransitionStyle:(NSInteger)arg0 navigationOrientation:(NSInteger)arg1 options:(id)arg2 ;
-(id)pageViewController:(id)arg0 viewControllerAfterViewController:(id)arg1 ;
-(id)pageViewController:(id)arg0 viewControllerBeforeViewController:(id)arg1 ;
-(void)_applyParallaxEffectWithTransitionProgress:(CGFloat)arg0 ;
-(void)_loadAndCacheViewControllersBeforeAndAfterIndex:(NSInteger)arg0 ;
-(void)_rearrangeCachedViewControllersWithNewCurrentPageIndex:(NSInteger)arg0 ;
-(void)_setUp;
-(void)_setViewControllers:(id)arg0 direction:(NSInteger)arg1 animated:(BOOL)arg2 completion:(id)arg3 ;
-(void)_unsetParallaxEffect;
-(void)clearInternalCache;
-(void)pageViewController:(id)arg0 didFinishAnimating:(BOOL)arg1 previousViewControllers:(id)arg2 transitionCompleted:(BOOL)arg3 ;
-(void)pageViewController:(id)arg0 willTransitionToViewControllers:(id)arg1 ;
-(void)scrollViewDidEndDecelerating:(id)arg0 ;
-(void)scrollViewDidScroll:(id)arg0 ;
-(void)scrollViewWillBeginDragging:(id)arg0 ;
-(void)scrollViewWillEndDragging:(id)arg0 withVelocity:(struct CGPoint )arg1 targetContentOffset:(struct CGPoint *)arg2 ;
-(void)setDataSource:(id)arg0 ;
-(void)setDelegate:(id)arg0 ;
-(void)setViewControllers:(id)arg0 direction:(NSInteger)arg1 animated:(BOOL)arg2 completion:(id)arg3 ;
-(void)viewWillAppear:(BOOL)arg0 ;


@end


#endif