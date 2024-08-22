// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef FIUIPAGEVIEWCONTROLLER_H
#define FIUIPAGEVIEWCONTROLLER_H

@class UIViewController, UICollectionView, UICollectionViewFlowLayout, NSString, UIPageControl, NSCache;
@protocol UICollectionViewDataSource, UICollectionViewDataSourcePrefetching, UICollectionViewDelegateFlowLayout, FIUIPageViewControllerDataSource, FIUIPageViewControllerDelegate;



@interface FIUIPageViewController : UIViewController <UICollectionViewDataSource, UICollectionViewDataSourcePrefetching, UICollectionViewDelegateFlowLayout>



@property (retain, nonatomic) UICollectionView *collectionView; // ivar: _collectionView
@property (retain, nonatomic) UICollectionViewFlowLayout *collectionViewLayout; // ivar: _collectionViewLayout
@property (nonatomic) NSInteger currentlyDisplayedIndex; // ivar: _currentlyDisplayedIndex
@property (readonly, nonatomic) UIViewController *currentlyDisplayedViewController;
@property (weak, nonatomic) NSObject<FIUIPageViewControllerDataSource> *dataSource; // ivar: _dataSource
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<FIUIPageViewControllerDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) UIPageControl *pageControl; // ivar: _pageControl
@property (nonatomic) NSInteger scrollDirection; // ivar: _scrollDirection
@property (nonatomic) BOOL shouldNotifyDelegateWhenScrollViewSettles; // ivar: _shouldNotifyDelegateWhenScrollViewSettles
@property (nonatomic) BOOL showsPagingIndicator; // ivar: _showsPagingIndicator
@property (readonly) Class superclass;
@property (nonatomic) BOOL userDidTapPageControl; // ivar: _userDidTapPageControl
@property (retain, nonatomic) NSCache *viewControllerForIndexPath; // ivar: _viewControllerForIndexPath


-(NSInteger)collectionView:(id)arg0 numberOfItemsInSection:(NSInteger)arg1 ;
-(NSInteger)numberOfSectionsInCollectionView:(id)arg0 ;
-(id)collectionView:(id)arg0 cellForItemAtIndexPath:(id)arg1 ;
-(id)initWithNibName:(id)arg0 bundle:(id)arg1 ;
-(void)_addViewController:(id)arg0 toCell:(id)arg1 ;
-(void)_pageSelectedWithControl:(id)arg0 ;
-(void)_scrollViewDidStop;
-(void)collectionView:(id)arg0 didEndDisplayingCell:(id)arg1 forItemAtIndexPath:(id)arg2 ;
-(void)collectionView:(id)arg0 prefetchItemsAtIndexPaths:(id)arg1 ;
-(void)collectionView:(id)arg0 willDisplayCell:(id)arg1 forItemAtIndexPath:(id)arg2 ;
-(void)loadView;
-(void)reloadData;
-(void)scrollViewDidEndDecelerating:(id)arg0 ;
-(void)scrollViewDidEndDragging:(id)arg0 willDecelerate:(BOOL)arg1 ;
-(void)scrollViewDidEndScrollingAnimation:(id)arg0 ;
-(void)scrollViewDidScroll:(id)arg0 ;
-(void)viewWillLayoutSubviews;


@end


#endif