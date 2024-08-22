// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PKPAYMENTSETUPPRODUCTSVIEWCONTROLLER_H
#define PKPAYMENTSETUPPRODUCTSVIEWCONTROLLER_H

@class PKPaymentSetupProductCategory, NSArray, PKPaymentSetupProduct, NSString;
@protocol PKPaymentSetupProductsSectionControllerDelegate, PKPaymentSetupActivitySpinnerProtocol, PKPaymentProvisioningControllerDelegate, PKPaymentSetupPresentationProtocol;


#import "PKPaymentSetupOptionsViewController.h"
#import "PKPaymentSetupProductsSectionController.h"
#import "PKPaymentSetupFlowController.h"

@interface PKPaymentSetupProductsViewController : PKPaymentSetupOptionsViewController <PKPaymentSetupProductsSectionControllerDelegate, PKPaymentSetupActivitySpinnerProtocol, PKPaymentProvisioningControllerDelegate, PKPaymentSetupPresentationProtocol>

 {
    PKPaymentSetupProductCategory *_category;
    NSArray *_paymentSetupProducts;
    PKPaymentSetupProductsSectionController *_primaryProductSectionController;
    PKPaymentSetupFlowController *_flowController;
    PKPaymentSetupProduct *_currentlyLoadingProduct;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(BOOL)didSelectManualEntryWithCompletion:(id)arg0 ;
-(BOOL)didSelectProduct:(id)arg0 completion:(id)arg1 ;
-(NSUInteger)paymentSetupMarker;
-(id)initWithProvisioningController:(id)arg0 context:(NSInteger)arg1 delegate:(id)arg2 category:(id)arg3 paymentSetupProducts:(id)arg4 ;
-(void)_didSelectAddADifferentCard;
-(void)_didSelectAddADifferentCardWithCompletion:(id)arg0 ;
-(void)dealloc;
-(void)displayNoResultsViewWithSubtitle:(id)arg0 needsManualEntryButton:(BOOL)arg1 ;
-(void)hideNoResultsView;
-(void)provisioningControllerUpdatedProducts:(id)arg0 ;
-(void)reloadData;
-(void)reloadSectionIdentifier:(id)arg0 animated:(BOOL)arg1 ;
-(void)reloadSectionsRequired;
-(void)searchBarCancelButtonClicked;
-(void)searchTextDidChangeTo:(id)arg0 ;
-(void)viewDidLoad;


@end


#endif