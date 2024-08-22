// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef SKUIPRODUCTPAGEREVIEWSVIEWCONTROLLER_H
#define SKUIPRODUCTPAGEREVIEWSVIEWCONTROLLER_H

@class UIViewController, SKComposeReviewViewController, NSMutableIndexSet, SSVLoadURLOperation, NSString, NSOperationQueue, UIScrollView;
@protocol SKUILayoutCacheDelegate, SKComposeReviewDelegate, SKUIReviewsFacebookViewControllerDelegate, UITableViewDataSource, UITableViewDelegate, SKUIProductPageChildViewController, SKUIProductPageChildViewControllerDelegate;


#import "SKUIReviewsFacebookViewController.h"
#import "SKUIReviewsHistogramViewController.h"
#import "SKUILayoutCache.h"
#import "SKUIReviewList.h"
#import "SKUIIPadCustomerReviewsHeaderView.h"
#import "SKUIStarRatingQueue.h"
#import "SKUIProductPageTableView.h"
#import "SKUIClientContext.h"
#import "SKUIFacebookLikeStatus.h"
#import "SKUIProductPageHeaderViewController.h"
#import "SKUIProductPage.h"

@interface SKUIProductPageReviewsViewController : UIViewController <SKUILayoutCacheDelegate, SKComposeReviewDelegate, SKUIReviewsFacebookViewControllerDelegate, UITableViewDataSource, UITableViewDelegate, SKUIProductPageChildViewController>

 {
    SKComposeReviewViewController *_composeViewController;
    NSMutableIndexSet *_expandedIndexSet;
    SKUIReviewsFacebookViewController *_facebookViewController;
    SKUIReviewsHistogramViewController *_histogramViewController;
    BOOL _isPad;
    SKUILayoutCache *_layoutCache;
    NSInteger _loadedPageCount;
    SSVLoadURLOperation *_loadOperation;
    SKUIReviewList *_reviewList;
    SKUIIPadCustomerReviewsHeaderView *_reviewsHeaderView;
    NSInteger _sortOrder;
    BOOL _showAllVersions;
    SKUIStarRatingQueue *_starRatingQueue;
    SKUIProductPageTableView *_tableView;
}


@property (nonatomic) BOOL askPermission; // ivar: _askPermission
@property (retain, nonatomic) SKUIClientContext *clientContext; // ivar: _clientContext
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<SKUIProductPageChildViewControllerDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (copy, nonatomic) SKUIFacebookLikeStatus *facebookLikeStatus;
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) SKUIProductPageHeaderViewController *headerViewController; // ivar: _headerViewController
@property (readonly, nonatomic) NSOperationQueue *operationQueue; // ivar: _operationQueue
@property (readonly, nonatomic) SKUIProductPage *productPage; // ivar: _productPage
@property (readonly, nonatomic) UIScrollView *scrollView;
@property (readonly) Class superclass;


-(BOOL)_shouldShowLoadMoreCell;
-(CGFloat)_defaultPageWidth;
-(CGFloat)tableView:(id)arg0 heightForHeaderInSection:(NSInteger)arg1 ;
-(CGFloat)tableView:(id)arg0 heightForRowAtIndexPath:(id)arg1 ;
-(NSInteger)numberOfSectionsInTableView:(id)arg0 ;
-(NSInteger)tableView:(id)arg0 numberOfRowsInSection:(NSInteger)arg1 ;
-(id)_bottomBorderColorForScheme:(id)arg0 ;
-(id)_histogramViewController;
-(id)_loadMoreCellForTableView:(id)arg0 indexPath:(id)arg1 ;
-(id)_reviewsHeaderView;
-(id)_tableView;
-(id)_textBoxCellForTableView:(id)arg0 indexPath:(id)arg1 ;
-(id)_textLayoutRequestWithText:(id)arg0 ;
-(id)_urlStringWithPageNumber:(NSInteger)arg0 ;
-(id)initWithProductPage:(id)arg0 ;
-(id)tableView:(id)arg0 cellForRowAtIndexPath:(id)arg1 ;
-(id)tableView:(id)arg0 viewForHeaderInSection:(NSInteger)arg1 ;
-(void)_addHeaderView;
-(void)_addReviewsFromResponse:(id)arg0 error:(id)arg1 ;
-(void)_appSupportAction:(id)arg0 ;
-(void)_loadNextPageIfNecessaryForOffset:(struct CGPoint )arg0 ;
-(void)_reloadData;
-(void)_resetPersonalStarRating;
-(void)_setReviewListWithResponse:(id)arg0 error:(id)arg1 ;
-(void)_sortSelectionAction:(id)arg0 ;
-(void)_starRatingAction:(id)arg0 ;
-(void)_versionSelectionAction:(id)arg0 ;
-(void)_writeAReviewAction:(id)arg0 ;
-(void)dealloc;
-(void)layoutCacheDidFinishBatch:(id)arg0 ;
-(void)loadView;
-(void)reloadData;
-(void)reviewComposeViewControllerDidFinish:(id)arg0 ;
-(void)reviewsFacebookViewControllerDidChange:(id)arg0 ;
-(void)scrollViewDidScroll:(id)arg0 ;
-(void)scrollViewWillEndDragging:(id)arg0 withVelocity:(struct CGPoint )arg1 targetContentOffset:(struct CGPoint *)arg2 ;
-(void)tableView:(id)arg0 didEndDisplayingCell:(id)arg1 forRowAtIndexPath:(id)arg2 ;
-(void)tableView:(id)arg0 didSelectRowAtIndexPath:(id)arg1 ;
-(void)tableView:(id)arg0 willDisplayCell:(id)arg1 forRowAtIndexPath:(id)arg2 ;
-(void)viewDidAppear:(BOOL)arg0 ;
-(void)viewWillAppear:(BOOL)arg0 ;


@end


#endif