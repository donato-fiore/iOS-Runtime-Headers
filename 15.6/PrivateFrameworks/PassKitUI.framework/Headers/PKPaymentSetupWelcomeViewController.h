// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef PKPAYMENTSETUPWELCOMEVIEWCONTROLLER_H
#define PKPAYMENTSETUPWELCOMEVIEWCONTROLLER_H

@class NSString, PKPaymentSetupProductModel;
@protocol PKPaymentSetupCategoriesSectionControllerDelegate, PKPaymentSetupAppExtensionsSectionControllerDelegate, PKPaymentSetupActivitySpinnerProtocol, PKViewControllerPreflightable, PKPaymentProvisioningControllerDelegate;


#import "PKPaymentSetupOptionsViewController.h"
#import "PKPaymentSetupCategoriesSectionController.h"
#import "PKPaymentSetupAppExtensionsSectionController.h"
#import "PKPaymentSetupFlowController.h"

@interface PKPaymentSetupWelcomeViewController : PKPaymentSetupOptionsViewController <PKPaymentSetupCategoriesSectionControllerDelegate, PKPaymentSetupAppExtensionsSectionControllerDelegate, PKPaymentSetupActivitySpinnerProtocol, PKViewControllerPreflightable, PKPaymentProvisioningControllerDelegate>

 {
    PKPaymentSetupCategoriesSectionController *_categoriesSectionController;
    PKPaymentSetupAppExtensionsSectionController *_appExtensionSectionController;
    PKPaymentSetupFlowController *_flowController;
    NSString *_loadingIdentifier;
    PKPaymentSetupProductModel *_filteredPaymentSetupProductModel;
    NSUInteger _currentConfiguredRequirements;
    BOOL _isDisplayingError;
    BOOL _didPreflight;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(BOOL)_didSelectItemWithIdentifier:(id)arg0 title:(id)arg1 category:(id)arg2 productidentifiers:(id)arg3 completion:(id)arg4 ;
-(BOOL)didSelectAppExtensionWithIdentifier:(id)arg0 title:(id)arg1 completion:(id)arg2 ;
-(BOOL)didSelectCategory:(id)arg0 completion:(id)arg1 ;
-(BOOL)didSelectYourCardsWithCompletion:(id)arg0 ;
-(id)initWithProvisioningController:(id)arg0 context:(NSInteger)arg1 delegate:(id)arg2 ;
-(void)_updateFilteredPaymentSetupProductModelForRequirements:(NSUInteger)arg0 provisoningController:(id)arg1 forceReload:(BOOL)arg2 ;
-(void)_updateHeaderContentsWithProvisoningController:(id)arg0 ;
-(void)dealloc;
-(void)didTapFooterLink:(id)arg0 ;
-(void)preflightRequirementsUpdated:(NSUInteger)arg0 displaybleError:(id)arg1 ;
-(void)preflightWithCompletion:(id)arg0 ;
-(void)provisioningControllerUpdatedAccounts:(id)arg0 ;
-(void)provisioningControllerUpdatedProducts:(id)arg0 ;
-(void)reloadRequiredForSectionIdentifier:(id)arg0 animated:(BOOL)arg1 ;
-(void)reloadSectionsForRequirements:(NSUInteger)arg0 animated:(BOOL)arg1 forceReload:(BOOL)arg2 ;
-(void)viewDidDisappear:(BOOL)arg0 ;
-(void)viewDidLoad;
-(void)viewWillAppear:(BOOL)arg0 ;


@end


#endif