// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PKDAILYCASHSELECTIONSECTIONCONTROLLER_H
#define PKDAILYCASHSELECTIONSECTIONCONTROLLER_H

@class NSString, PKAccount, PKAccountUserCollection, PKPeerPaymentAccount, NSArray, PKAccountService, UICollectionViewCellRegistration;
@protocol PKPeerPaymentAccountResolutionControllerDelegate, PKAccountServiceObserver, PKPaymentSetupDelegate, PKDynamicSectionController, PKViewControllerPreflightable, PKRewardsHubSectionControllerDelegate;

#import <Foundation/Foundation.h>

#import "PKPeerPaymentAccountResolutionController.h"
#import "PKApplyController.h"

@interface PKDailyCashSelectionSectionController : NSObject <PKPeerPaymentAccountResolutionControllerDelegate, PKAccountServiceObserver, PKPaymentSetupDelegate, PKDynamicSectionController, PKViewControllerPreflightable>

 {
    NSString *_identifier;
    id<PKRewardsHubSectionControllerDelegate> *_delegate;
    PKAccount *_account;
    PKAccountUserCollection *_accountUserCollection;
    PKPeerPaymentAccount *_peerPaymentAccount;
    NSArray *_accounts;
    NSUInteger _currentDestination;
    NSUInteger _loadingDestination;
    BOOL _hasRedeemed;
    BOOL _allowStatementCreditRedemption;
    PKAccountService *_accountService;
    PKPeerPaymentAccountResolutionController *_peerPaymentAccountResolutionController;
    PKApplyController *_applyController;
    NSArray *_currentDailyCashSelectionItems;
}


@property (retain, nonatomic) UICollectionViewCellRegistration *cellRegistration;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) NSArray *identifiers;
@property (readonly) Class superclass;


-(BOOL)shouldHighlightItem:(id)arg0 ;
-(Class)supplementaryRegistrationClassForKind:(id)arg0 sectionIdentifier:(id)arg1 ;
-(id)_applyAccessory;
-(id)_checkmarkAccessory;
-(id)_disclosureAccessory;
-(id)_eligibleAccountOfType:(NSUInteger)arg0 ;
-(id)_hasRedeemedAccessory;
-(id)_presentingViewController;
-(id)_setupAccessory;
-(id)_spinnerAccessory;
-(id)analyticsEventReportWithPreSelect:(BOOL)arg0 ;
-(id)cellRegistrationForItem:(id)arg0 ;
-(id)dailyCashSelectionItems;
-(id)footerTitle;
-(id)headerTitle;
-(id)initWithSectionIdentifier:(id)arg0 account:(id)arg1 accountService:(id)arg2 delegate:(id)arg3 ;
-(id)layoutWithLayoutEnvironment:(id)arg0 sectionIdentifier:(id)arg1 ;
-(id)snapshotWithPreviousSnapshot:(id)arg0 forSectionIdentifier:(id)arg1 ;
-(void)_applyRewardsAsStatementCredit;
-(void)_changeRewardsDestination:(NSUInteger)arg0 ;
-(void)_changeRewardsDestinationAndOpenAccountIfNeeded:(NSUInteger)arg0 ;
-(void)_presentPeerPaymentNotEnabledAlert;
-(void)_reloadSection;
-(void)_reportDailyCashConfirmationEventWithRedemptionType:(NSUInteger)arg0 button:(id)arg1 ;
-(void)_reportDestinationButtonTapWithRedemptionType:(NSUInteger)arg0 ;
-(void)accountAdded:(id)arg0 ;
-(void)accountChanged:(id)arg0 ;
-(void)accountRemoved:(id)arg0 ;
-(void)configureSupplementaryRegistration:(id)arg0 elementKind:(id)arg1 sectionIdentifier:(id)arg2 ;
-(void)didSelectItem:(id)arg0 ;
-(void)paymentSetupDidFinish:(id)arg0 ;
-(void)peerPaymentAccountResolutionController:(id)arg0 requestsDismissCurrentViewControllerAnimated:(BOOL)arg1 ;
-(void)peerPaymentAccountResolutionController:(id)arg0 requestsPresentViewController:(id)arg1 animated:(BOOL)arg2 ;
-(void)preflightWithCompletion:(id)arg0 ;
-(void)presentConfirmationAlertWithTitle:(id)arg0 redemptionType:(NSUInteger)arg1 confirmationHandler:(id)arg2 ;


@end


#endif