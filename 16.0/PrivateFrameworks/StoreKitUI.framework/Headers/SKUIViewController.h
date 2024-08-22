// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef SKUIVIEWCONTROLLER_H
#define SKUIVIEWCONTROLLER_H

@class UIViewController, UIBarButtonItem, NSString, NSOperationQueue;
@protocol SKUINetworkErrorDelegate, SKUIProductPageOverlayDelegate, UIPopoverControllerDelegate, SKUITabBarItemRootViewController, SKUIClientContextConsuming, SKUIWishlistDelegate;


#import "SKUINetworkErrorViewController.h"
#import "SKUIProductPageOverlayController.h"
#import "SKUIIPadSearchController.h"
#import "SKUIPopoverObserver.h"
#import "SKUIWishlistViewController.h"
#import "SKUIClientContext.h"

@interface SKUIViewController : UIViewController <SKUINetworkErrorDelegate, SKUIProductPageOverlayDelegate, UIPopoverControllerDelegate, SKUITabBarItemRootViewController, SKUIClientContextConsuming, SKUIWishlistDelegate>

 {
    SKUINetworkErrorViewController *_networkErrorViewController;
    SKUIProductPageOverlayController *_productPageOverlayController;
    SKUIIPadSearchController *_searchController;
    BOOL _wishlistButtonHidden;
    SKUIPopoverObserver *_wishlistPopoverObserver;
    SKUIWishlistViewController *_wishlistViewController;
}


@property (readonly, nonatomic) SKUIIPadSearchController *IPadSearchController;
@property (readonly, nonatomic) UIBarButtonItem *_wishlistButtonItem; // ivar: _wishlistButtonItem
@property (retain, nonatomic) SKUIClientContext *clientContext; // ivar: _clientContext
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) NSOperationQueue *operationQueue; // ivar: _operationQueue
@property (readonly) Class superclass;


-(BOOL)showingError;
-(NSUInteger)supportedInterfaceOrientations;
-(id)_defaultLeftBarButtonItems;
-(id)_defaultRightBarButtonItemsIsCompact:(BOOL)arg0 ;
-(id)initWithTabBarItem:(id)arg0 ;
-(void)_presentWishlistFromPopover:(id)arg0 ;
-(void)_presentWishlistFromSheet;
-(void)_reloadForOrientation:(NSInteger)arg0 ;
-(void)_setWishlistButtonHidden:(BOOL)arg0 ;
-(void)_showDialogWithError:(id)arg0 ;
-(void)_wishlistAction:(id)arg0 ;
-(void)_wishlistPopoverDidDismiss;
-(void)dealloc;
-(void)forceOrientationBackToSupportedOrientation;
-(void)networkErrorViewControllerInvalidated:(id)arg0 ;
-(void)productPageOverlayDidDismiss:(id)arg0 ;
-(void)reloadData;
-(void)showDefaultNavigationItems;
-(void)showDefaultNavigationItemsForSize:(struct CGSize )arg0 ;
-(void)showDefaultNavigationItemsIsCompact:(BOOL)arg0 ;
-(void)showError:(id)arg0 ;
-(void)skui_viewWillAppear:(BOOL)arg0 ;
-(void)viewWillAppear:(BOOL)arg0 ;
-(void)willAnimateRotationToInterfaceOrientation:(NSInteger)arg0 duration:(CGFloat)arg1 ;
-(void)wishlist:(id)arg0 didSelectItem:(id)arg1 atIndexPath:(id)arg2 ;


@end


#endif