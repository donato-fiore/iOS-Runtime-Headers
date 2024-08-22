// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef SKUIIPHONEPRODUCTPAGEVIEWCONTROLLER_H
#define SKUIIPHONEPRODUCTPAGEVIEWCONTROLLER_H

@class UIViewController<SKUIProductPageChildViewController>, SSMetricsPageEvent, NSOperationQueue, NSURLRequest, NSURL, NSString;
@protocol SKUIMetricsViewController, SKUINetworkErrorDelegate, SKUIProductPageHeaderViewDelegate, SKUIProductPageChildViewControllerDelegate, UIScrollViewDelegate, SKStoreProductViewControllerDelegate, SKUIMessageBannerDelegate, SKUIIPhoneProductPageDelegate;


#import "SKUIViewController.h"
#import "SKUIMessageBanner.h"
#import "SKUIProductPageDetailsViewController.h"
#import "SKUINetworkErrorViewController.h"
#import "SKUIProductPageHeaderViewController.h"
#import "SKUIIncompatibleAppViewController.h"
#import "SKUIProductPagePlaceholderViewController.h"
#import "SKUILoadProductPageOperation.h"
#import "SKUIMetricsController.h"
#import "SKUISwooshArrayViewController.h"
#import "SKUIProductPageReviewsViewController.h"
#import "SKUIItem.h"
#import "SKUIProductPage.h"

@interface SKUIIPhoneProductPageViewController : SKUIViewController <SKUIMetricsViewController, SKUINetworkErrorDelegate, SKUIProductPageHeaderViewDelegate, SKUIProductPageChildViewControllerDelegate, UIScrollViewDelegate, SKStoreProductViewControllerDelegate, SKUIMessageBannerDelegate>

 {
    SKUIMessageBanner *_banner;
    UIViewController<SKUIProductPageChildViewController> *_childViewController;
    SKUIProductPageDetailsViewController *_detailsViewController;
    SKUINetworkErrorViewController *_errorViewController;
    SKUIProductPageHeaderViewController *_headerViewController;
    SKUIIncompatibleAppViewController *_incompatibleViewController;
    SSMetricsPageEvent *_lastPageEvent;
    SKUIProductPagePlaceholderViewController *_loadingViewController;
    SKUILoadProductPageOperation *_loadOperation;
    NSInteger _lookupItemIdentifier;
    SKUIMetricsController *_metricsController;
    NSOperationQueue *_operationQueue;
    SKUIProductPagePlaceholderViewController *_relatedPlaceholderViewController;
    SKUISwooshArrayViewController *_relatedViewController;
    SKUIProductPageReviewsViewController *_reviewsViewController;
    NSInteger _sectionIndex;
    NSURLRequest *_urlRequest;
    BOOL _wantsActivityViewController;
}


@property (readonly, nonatomic) NSURL *URL;
@property (nonatomic) BOOL askPermission; // ivar: _askPermission
@property (copy, nonatomic) NSString *bannerText; // ivar: _bannerText
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<SKUIIPhoneProductPageDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) SKUIItem *item; // ivar: _item
@property (readonly, nonatomic) SKUIProductPage *productPage; // ivar: _productPage
@property (readonly) Class superclass;


-(BOOL)_isIncompatibleItem;
-(id)_detailsViewController;
-(id)_headerViewController;
-(id)_initSKUIIPhoneProductPageViewController;
-(id)_loadingViewController;
-(id)_relatedPlaceholderViewController;
-(id)_relatedViewController;
-(id)_reviewsViewController;
-(id)_viewControllerForSectionIndex:(NSUInteger)arg0 ;
-(id)activeMetricsController;
-(id)contentScrollView;
-(id)initWithItem:(id)arg0 ;
-(id)initWithItemIdentifier:(NSInteger)arg0 ;
-(id)initWithProductPage:(id)arg0 ;
-(id)initWithURL:(id)arg0 ;
-(id)initWithURLRequest:(id)arg0 ;
-(id)metricsControllerForProductPageHeader:(id)arg0 ;
-(struct CGPoint )topContentOffset;
-(void)_animateAddToWishlist;
-(void)_hideBanner;
-(void)_invalidateChildViewControllers;
-(void)_metricsEnterEventNotification:(id)arg0 ;
-(void)_presentHTMLProductPage;
-(void)_reloadChildViewControllers;
-(void)_setContentInsetsForChildViewController:(id)arg0 ;
-(void)_setHeaderPositionForChildViewController:(id)arg0 ;
-(void)_setMetricsController:(id)arg0 ;
-(void)_setSectionIndexWithFragment:(NSInteger)arg0 ;
-(void)_shareButtonAction:(id)arg0 ;
-(void)_showActivityViewController;
-(void)_showBanner;
-(void)_showError:(id)arg0 ;
-(void)askPermissionBannerDidSelect:(id)arg0 ;
-(void)configureMetricsWithPageEvent:(id)arg0 ;
-(void)dealloc;
-(void)didRotateFromInterfaceOrientation:(NSInteger)arg0 ;
-(void)loadView;
-(void)networkErrorViewControllerInvalidated:(id)arg0 ;
-(void)productPageChildOpenItem:(id)arg0 ;
-(void)productPageChildOpenURL:(id)arg0 viewControllerBlock:(id)arg1 ;
-(void)productPageChildViewControllerDidLoad:(id)arg0 ;
-(void)productPageChildViewControllerDidLoadScrollView:(id)arg0 ;
-(void)productPageChildViewControllerDidScroll:(id)arg0 ;
-(void)productPageHeaderView:(id)arg0 didReloadItemOffer:(id)arg1 ;
-(void)productPageHeaderView:(id)arg0 didSelectSectionIndex:(NSInteger)arg1 ;
-(void)productPageHeaderView:(id)arg0 didSelectURL:(id)arg1 ;
-(void)productPageHeaderViewDidWantAskPermissionBanner:(id)arg0 ;
-(void)productViewControllerDidFinish:(id)arg0 ;
-(void)reloadData;
-(void)viewDidLayoutSubviews;
-(void)viewWillAppear:(BOOL)arg0 ;


@end


#endif