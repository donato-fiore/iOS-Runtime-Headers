// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef SKUIMODALDOCUMENTCONTROLLER_H
#define SKUIMODALDOCUMENTCONTROLLER_H

@class NSMutableArray, UINavigationController, UIPopoverController, NSString, NSArray, UIViewController;
@protocol AAUIFamilySetupDelegate, SKUIComposeReviewDelegate, SKUIGiftViewControllerDelegate, SKUIModalDocumentController, SKUIOverlayContainerDelegate, UIPopoverControllerDelegate, UIPopoverPresentationControllerDelegate, SKUIModalDocumentDataSource, SKUIModalDocumentDelegate, SKUIModalSourceViewProvider, UINavigationControllerDelegate;

#import <Foundation/Foundation.h>

#import "SKUIStoreDialogController.h"
#import "SKUIReportAConcernViewController.h"
#import "SKUIOverlayContainerViewController.h"
#import "SKUIClientContext.h"

@interface SKUIModalDocumentController : NSObject <AAUIFamilySetupDelegate, SKUIComposeReviewDelegate, SKUIGiftViewControllerDelegate, SKUIModalDocumentController, SKUIOverlayContainerDelegate, UIPopoverControllerDelegate, UIPopoverPresentationControllerDelegate>

 {
    NSMutableArray *_composeReviewViewControllers;
    SKUIStoreDialogController *_dialogController;
    SKUIReportAConcernViewController *_reportAConcernViewController;
    NSMutableArray *_giftViewControllers;
    UINavigationController *_overlayNavigationController;
    SKUIOverlayContainerViewController *_overlayViewController;
    UIPopoverController *_popoverController;
    NSMutableArray *_stackItems;
}


@property (readonly, nonatomic) UINavigationController *_overlayNavigationController;
@property (readonly, nonatomic) SKUIOverlayContainerViewController *_overlayViewController;
@property (retain, nonatomic) SKUIClientContext *clientContext; // ivar: _clientContext
@property (weak, nonatomic) NSObject<SKUIModalDocumentDataSource> *dataSource; // ivar: _dataSource
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<SKUIModalDocumentDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) NSArray *documents;
@property (readonly) NSUInteger hash;
@property (weak, nonatomic) NSObject<SKUIModalSourceViewProvider> *modalSourceViewProvider; // ivar: _modalSourceViewProvider
@property (weak, nonatomic) NSObject<UINavigationControllerDelegate> *navigationControllerDelegate; // ivar: _navigationControllerDelegate
@property (retain, nonatomic) UIViewController *rootViewController; // ivar: _rootViewController
@property (readonly) Class superclass;


-(BOOL)_popoverController:(id)arg0 containsStackItem:(id)arg1 ;
-(BOOL)composeReviewViewController:(id)arg0 shouldSubmitReview:(id)arg1 ;
-(id)_imageForImageViewElement:(id)arg0 ;
-(id)_overlayStackItems;
-(id)_presenterViewController;
-(id)_showOverlayContainerViewController;
-(id)init;
-(id)navigationDocumentForDocument:(id)arg0 ;
-(id)navigationDocumentForNavigationController:(id)arg0 ;
-(struct CGRect )_centerRect:(id)arg0 adjust:(BOOL)arg1 ;
-(void)_composeReviewViewControllerDidFinish:(id)arg0 finished:(BOOL)arg1 ;
-(void)_dismissOverlayControllerWithStackItem:(id)arg0 animated:(BOOL)arg1 ;
-(void)_garbageCollectActivityViewController:(id)arg0 ;
-(void)_overlayControllerBackstopAction:(id)arg0 ;
-(void)_popDocument:(BOOL)arg0 completion:(id)arg1 ;
-(void)_popDocumentSkippingUserInterfaceUpdates;
-(void)_popOverlayStackItem:(id)arg0 animated:(BOOL)arg1 completion:(id)arg2 ;
-(void)_popPopoverStackItem:(id)arg0 animated:(BOOL)arg1 completion:(id)arg2 ;
-(void)_presentAlertForDialog:(id)arg0 ;
-(void)_presentOverlayViewControllersFromNavigationController:(id)arg0 ;
-(void)_presetPopoverSheetDocument:(id)arg0 viewController:(id)arg1 popoverPresentationController:(id)arg2 ;
-(void)_promptForStarRating:(id)arg0 ;
-(void)_pushCharityDocument:(id)arg0 options:(id)arg1 ;
-(void)_pushDialogDocument:(id)arg0 options:(id)arg1 ;
-(void)_pushFamilySetupDocument:(id)arg0 options:(id)arg1 ;
-(void)_pushGiftDocument:(id)arg0 options:(id)arg1 ;
-(void)_pushOverlayStackItem:(id)arg0 ;
-(void)_pushPlaylistDocument:(id)arg0 options:(id)arg1 ;
-(void)_pushPopoverSheetDocument:(id)arg0 viewController:(id)arg1 popoverPresentationController:(id)arg2 options:(id)arg3 ;
-(void)_pushPopoverStackItem:(id)arg0 ;
-(void)_pushRedeemDocument:(id)arg0 options:(id)arg1 ;
-(void)_pushSheetDocument:(id)arg0 viewController:(id)arg1 ;
-(void)_pushSheetStackItem:(id)arg0 ;
-(void)_sendDidFinishIfApplicable;
-(void)_unloadDocumentForPopoverController:(id)arg0 ;
-(void)_unloadDocumentForViewController:(id)arg0 ;
-(void)composeReviewViewController:(id)arg0 didFailWithDialog:(id)arg1 ;
-(void)composeReviewViewController:(id)arg0 didSubmitWithEdit:(BOOL)arg1 ;
-(void)composeReviewViewController:(id)arg0 presentDialog:(id)arg1 ;
-(void)composeReviewViewControllerDidCancel:(id)arg0 ;
-(void)dealloc;
-(void)ensureOverlayNavigationControllerStackConsistencyForNavigationController:(id)arg0 ;
-(void)familySetupViewController:(id)arg0 didCompleteWithSuccess:(BOOL)arg1 ;
-(void)giftViewController:(id)arg0 didFinishWithResult:(BOOL)arg1 ;
-(void)overlayContainerViewController:(id)arg0 willPopViewController:(id)arg1 ;
-(void)popAllDocuments;
-(void)popDocument;
-(void)popToDocument:(id)arg0 ;
-(void)popoverControllerDidDismissPopover:(id)arg0 ;
-(void)popoverPresentationController:(id)arg0 willRepositionPopoverToRect:(struct CGRect *)arg1 inView:(*id)arg2 ;
-(void)popoverPresentationControllerDidDismissPopover:(id)arg0 ;
-(void)presentOverlayViewControllersFromNavigationController:(id)arg0 ;
-(void)pushDocument:(id)arg0 options:(id)arg1 ;
-(void)replaceDocument:(id)arg0 withDocument:(id)arg1 options:(id)arg2 ;
-(void)setOverlayNavigationController:(id)arg0 withTransitionCoordinator:(id)arg1 ;
-(void)unloadDocumentForViewController:(id)arg0 ;


@end


#endif