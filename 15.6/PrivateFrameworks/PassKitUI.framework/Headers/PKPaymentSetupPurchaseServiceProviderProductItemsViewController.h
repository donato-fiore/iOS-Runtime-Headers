// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef PKPAYMENTSETUPPURCHASESERVICEPROVIDERPRODUCTITEMSVIEWCONTROLLER_H
#define PKPAYMENTSETUPPURCHASESERVICEPROVIDERPRODUCTITEMSVIEWCONTROLLER_H

@class PKDigitalIssuanceServiceProviderItem, PKPaymentProvisioningController, PKDigitalIssuanceServiceProviderProduct, PKPaymentProvisioningMethodMetadata, UIImageView, PKPaymentAuthorizationCoordinator, PKServiceProviderPurchase, UIImage, UIActivityIndicatorView, NSString, PKPaymentSetupProduct;
@protocol PKPaymentAuthorizationCoordinatorDelegate, PKPaymentAuthorizationCoordinatorPrivateDelegate, PKPaymentSetupViewControllerDelegate, PKPaymentSetupPurchaseControllerDelegate, PKPaymentServiceProviderItemsListSectionControllerDelegate, RemoteUIControllerDelegate, PKPaymentSetupDelegate, PKViewControllerPreflightable;


#import "PKDynamicCollectionViewController.h"
#import "PKPaymentSetupCardImageHeaderView.h"
#import "PKPaymentServiceProviderItemsListSectionController.h"
#import "PKPaymentSetupPurchaseController.h"

@interface PKPaymentSetupPurchaseServiceProviderProductItemsViewController : PKDynamicCollectionViewController <PKPaymentAuthorizationCoordinatorDelegate, PKPaymentAuthorizationCoordinatorPrivateDelegate, PKPaymentSetupViewControllerDelegate, PKPaymentSetupPurchaseControllerDelegate, PKPaymentServiceProviderItemsListSectionControllerDelegate, RemoteUIControllerDelegate, PKPaymentSetupDelegate, PKViewControllerPreflightable>

 {
    BOOL _snapshotNeedsCorners;
    unsigned char _visibility;
    PKPaymentSetupCardImageHeaderView *_headerView;
    BOOL _hasSelectedItems;
    PKDigitalIssuanceServiceProviderItem *_selectedItem;
    PKPaymentProvisioningController *_provisioningController;
    NSInteger _setupContext;
    id<PKPaymentSetupViewControllerDelegate> *_setupDelegate;
    PKDigitalIssuanceServiceProviderProduct *_serviceProviderProduct;
    PKPaymentProvisioningMethodMetadata *_provisioningMethodMetadata;
    UIImageView *_passView;
    PKPaymentAuthorizationCoordinator *_authorizationCoordinator;
    PKServiceProviderPurchase *_purchase;
    UIImage *_cardImage;
    UIActivityIndicatorView *_activityIndicator;
    PKPaymentServiceProviderItemsListSectionController *_listSectionController;
}


@property (nonatomic) BOOL acceptedTerms; // ivar: _acceptedTerms
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) PKPaymentSetupProduct *product; // ivar: _product
@property (readonly, nonatomic) PKPaymentSetupPurchaseController *purchaseController; // ivar: _purchaseController
@property (readonly) Class superclass;


-(id)_rightBarButton;
-(id)_spinnerBarButton;
-(id)initWithProvisioningController:(id)arg0 context:(NSInteger)arg1 setupDelegate:(id)arg2 product:(id)arg3 serviceProviderProduct:(id)arg4 ;
-(void)_rightBarButtonPressed:(id)arg0 ;
-(void)_showSpinner:(BOOL)arg0 ;
-(void)didSelectServiceProviderItem:(id)arg0 ;
-(void)paymentAuthorizationCoordinator:(id)arg0 didAuthorizePayment:(id)arg1 handler:(id)arg2 ;
-(void)paymentAuthorizationCoordinator:(id)arg0 didAuthorizePurchase:(id)arg1 completion:(id)arg2 ;
-(void)paymentAuthorizationCoordinatorDidFinish:(id)arg0 ;
-(void)paymentSetupDidFinish:(id)arg0 ;
-(void)preflightWithCompletion:(id)arg0 ;
-(void)remoteUIController:(id)arg0 didReceiveObjectModel:(id)arg1 actionSignal:(*NSUInteger)arg2 ;
-(void)showSpinner:(BOOL)arg0 ;
-(void)viewControllerDidTerminateSetupFlow:(id)arg0 ;
-(void)viewDidAppear:(BOOL)arg0 ;
-(void)viewDidDisappear:(BOOL)arg0 ;
-(void)viewDidLoad;
-(void)viewWillAppear:(BOOL)arg0 ;
-(void)viewWillDisappear:(BOOL)arg0 ;
-(void)viewWillLayoutSubviews;


@end


#endif