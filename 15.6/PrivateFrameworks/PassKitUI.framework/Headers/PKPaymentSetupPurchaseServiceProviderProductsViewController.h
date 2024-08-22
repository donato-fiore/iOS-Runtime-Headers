// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef PKPAYMENTSETUPPURCHASESERVICEPROVIDERPRODUCTSVIEWCONTROLLER_H
#define PKPAYMENTSETUPPURCHASESERVICEPROVIDERPRODUCTSVIEWCONTROLLER_H

@class PKPaymentProvisioningController, PKPaymentProvisioningMethodMetadata, UIImageView, UILabel, UIImage, NSString, PKPaymentSetupProduct;
@protocol PKPaymentServiceProviderProductsListSectionControllerDelegate, PKViewControllerPreflightable, PKPaymentSetupViewControllerDelegate;


#import "PKDynamicCollectionViewController.h"
#import "PKPaymentSetupCardImageHeaderView.h"
#import "PKPaymentSetupFlowController.h"
#import "PKPaymentServiceProviderProductsListSectionController.h"

@interface PKPaymentSetupPurchaseServiceProviderProductsViewController : PKDynamicCollectionViewController <PKPaymentServiceProviderProductsListSectionControllerDelegate, PKViewControllerPreflightable>

 {
    BOOL _snapshotNeedsCorners;
    unsigned char _visibility;
    PKPaymentSetupCardImageHeaderView *_headerView;
    PKPaymentSetupFlowController *_flowController;
    PKPaymentProvisioningController *_provisioningController;
    NSInteger _setupContext;
    id<PKPaymentSetupViewControllerDelegate> *_setupDelegate;
    PKPaymentProvisioningMethodMetadata *_provisioningMethodMetadata;
    UIImageView *_passView;
    UILabel *_titleLabel;
    UIImage *_cardImage;
    PKPaymentServiceProviderProductsListSectionController *_listSectionController;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) PKPaymentSetupProduct *product; // ivar: _product
@property (readonly) Class superclass;


-(id)initWithProvisioningController:(id)arg0 context:(NSInteger)arg1 setupDelegate:(id)arg2 flowController:(id)arg3 product:(id)arg4 ;
-(void)didSelectServiceProviderProduct:(id)arg0 ;
-(void)preflightWithCompletion:(id)arg0 ;
-(void)viewDidLoad;


@end


#endif