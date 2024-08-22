// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef OKNAVIGATORCOLLECTIONVIEWCONTROLLERPROXY_H
#define OKNAVIGATORCOLLECTIONVIEWCONTROLLERPROXY_H

@class NSArray, NSString;
@protocol UICollectionViewDelegate, UICollectionViewDataSource, UIScrollViewDelegate;


#import "OKNavigatorViewController.h"
#import "OKNavigatorCollectionView.h"
#import "OKPageViewController.h"

@interface OKNavigatorCollectionViewControllerProxy : OKNavigatorViewController <UICollectionViewDelegate, UICollectionViewDataSource, UIScrollViewDelegate>

 {
    OKNavigatorCollectionView *_collectionView;
    CGPoint _collectionViewContentPreviousOffset;
    BOOL _scrollViewDidEndDragging;
    NSArray *_orderedPagesNames;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) OKPageViewController *lastPageViewController; // ivar: _lastPageViewController
@property (readonly) Class superclass;


+(id)supportedSettings;
+(void)setupJavascriptContext:(id)arg0 ;
-(BOOL)isHorizontal;
-(BOOL)prepareForDisplay;
-(BOOL)prepareForUnload;
-(BOOL)prepareForWarmup;
-(BOOL)scrollViewShouldScrollToTop:(id)arg0 ;
-(NSInteger)collectionView:(id)arg0 numberOfItemsInSection:(NSInteger)arg1 ;
-(NSInteger)numberOfSectionsInCollectionView:(id)arg0 ;
-(id)collectionView:(id)arg0 cellForItemAtIndexPath:(id)arg1 ;
-(id)currentPageViewControllerIndexPath;
-(void)_scrollViewDidCompleteScrolling;
-(void)collectionView:(id)arg0 didEndDisplayingCell:(id)arg1 forItemAtIndexPath:(id)arg2 ;
-(void)commonInit;
-(void)dealloc;
-(void)didMoveToParentViewController:(id)arg0 ;
-(void)didReceiveMemoryWarning;
-(void)navigateToPageWithName:(id)arg0 animated:(BOOL)arg1 completion:(id)arg2 ;
-(void)prepareAdjacentPages;
-(void)prepareAdjacentPages:(NSUInteger)arg0 ;
-(void)prepareAdjacentPages:(NSUInteger)arg0 withDirection:(NSUInteger)arg1 ;
-(void)prepareAdjacentPagesForScrolling;
-(void)resolutionDidChange;
-(void)scrollViewDidEndDecelerating:(id)arg0 ;
-(void)scrollViewDidEndDragging:(id)arg0 willDecelerate:(BOOL)arg1 ;
-(void)scrollViewDidScroll:(id)arg0 ;
-(void)scrollViewDidScrollToTop:(id)arg0 ;
-(void)scrollViewWillBeginDragging:(id)arg0 ;
-(void)setSettingOrientation:(NSUInteger)arg0 ;
-(void)setSettingTransition:(NSUInteger)arg0 ;
-(void)updateCollectionView;
-(void)updateCollectionViewLayoutItemSize;
-(void)updateCurrentPageViewController;
-(void)viewDidAppear:(BOOL)arg0 ;
-(void)viewDidDisappear:(BOOL)arg0 ;
-(void)viewDidLayoutSubviews;
-(void)viewDidLoad;
-(void)viewWillAppear:(BOOL)arg0 ;
-(void)viewWillDisappear:(BOOL)arg0 ;
-(void)viewWillLayoutSubviews;
-(void)willMoveToParentViewController:(id)arg0 ;


@end


#endif