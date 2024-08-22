// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef SKUIIPADPRODUCTPAGEVIEWCONTROLLER_H
#define SKUIIPADPRODUCTPAGEVIEWCONTROLLER_H

@class UIViewController, SSMetricsPageEvent, NSOperationQueue, UIView, NSURLRequest, NSURL, NSString;
@protocol SKUIMetricsViewController, SKUINetworkErrorDelegate, SKUIProductPageHeaderViewDelegate, SKUIProductPageChildViewControllerDelegate, SKUIMessageBannerDelegate, SKUIIPadProductPageDelegate;


#import "SKUIMessageBanner.h"
#import "SKUIProductPageDetailsViewController.h"
#import "SKUIProductPageHeaderViewController.h"
#import "SKUIIncompatibleAppViewController.h"
#import "SKUILoadProductPageOperation.h"
#import "SKUIMetricsController.h"
#import "SKUINetworkErrorViewController.h"
#import "SKUIProductPagePlaceholderViewController.h"
#import "SKUISwooshArrayViewController.h"
#import "SKUIProductPageReviewsViewController.h"
#import "SKUIClientContext.h"
#import "SKUIItem.h"
#import "SKUIProductPage.h"

@interface SKUIIPadProductPageViewController : UIViewController <SKUIMetricsViewController, SKUINetworkErrorDelegate, SKUIProductPageHeaderViewDelegate, SKUIProductPageChildViewControllerDelegate, SKUIMessageBannerDelegate>

 {
    SKUIMessageBanner *_banner;
    NSInteger _defaultSelectedSectionIndex;
    SKUIProductPageDetailsViewController *_detailsViewController;
    BOOL _didSendCannotOpen;
    SKUIProductPageHeaderViewController *_headerViewController;
    SKUIIncompatibleAppViewController *_incompatibleViewController;
    SSMetricsPageEvent *_lastPageEvent;
    SKUILoadProductPageOperation *_loadOperation;
    NSInteger _lookupItemIdentifier;
    SKUIMetricsController *_metricsController;
    SKUINetworkErrorViewController *_networkErrorViewController;
    NSOperationQueue *_operationQueue;
    UIView *_overlayView;
    SKUIProductPagePlaceholderViewController *_placeholderViewController;
    SKUISwooshArrayViewController *_relatedViewController;
    SKUIProductPageReviewsViewController *_reviewsViewController;
    NSInteger _selectedSectionIndex;
    NSURLRequest *_urlRequest;
}


@property (readonly, nonatomic) NSURL *URL;
@property (nonatomic) BOOL askPermission; // ivar: _askPermission
@property (copy, nonatomic) NSString *bannerText; // ivar: _bannerText
@property (retain, nonatomic) SKUIClientContext *clientContext; // ivar: _clientContext
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<SKUIIPadProductPageDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) SKUIItem *item; // ivar: _item
@property (readonly, nonatomic) SKUIProductPage *productPage; // ivar: _productPage
@property (readonly) Class superclass;


-(BOOL)_isIncompatibleItem;
-(id)_detailsViewController;
-(id)_initSKUIIPadProductPageViewController;
-(id)_placeholderViewController;
-(id)_relatedViewController;
-(id)_reviewsViewController;
-(id)_viewControllerForSectionIndex:(NSInteger)arg0 ;
-(id)activeMetricsController;
-(id)initWithItem:(id)arg0 ;
-(id)initWithItemIdentifier:(NSInteger)arg0 ;
-(id)initWithProductPage:(id)arg0 ;
-(id)initWithURL:(id)arg0 ;
-(id)initWithURLRequest:(id)arg0 ;
-(id)metricsControllerForProductPageHeader:(id)arg0 ;
-(struct CGPoint )topContentOffset;
-(void)_metricsEnterEventNotification:(id)arg0 ;
-(void)_reloadHeaderViewController;
-(void)_selectSectionIndex:(NSInteger)arg0 ;
-(void)_sendCannotOpen;
-(void)_setDefaultSectionIndexWithFragment:(NSInteger)arg0 ;
-(void)_setMetricsController:(id)arg0 ;
-(void)_showBanner;
-(void)_showError:(id)arg0 ;
-(void)_showIncompatibleView;
-(void)_showViewController:(id)arg0 ;
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
-(void)productPageHeaderView:(id)arg0 didSelectSectionIndex:(NSInteger)arg1 ;
-(void)productPageHeaderView:(id)arg0 didSelectURL:(id)arg1 ;
-(void)productPageHeaderViewDidWantAskPermissionBanner:(id)arg0 ;
-(void)reloadData;
-(void)viewDidLayoutSubviews;
-(void)viewWillAppear:(BOOL)arg0 ;


@end


#endif