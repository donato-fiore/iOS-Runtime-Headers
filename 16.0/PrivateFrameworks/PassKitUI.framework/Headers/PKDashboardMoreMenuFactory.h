// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PKDASHBOARDMOREMENUFACTORY_H
#define PKDASHBOARDMOREMENUFACTORY_H

@class PKPaymentDefaultDataProvider, PKTransitPassProperties, PKTransitBalanceModel, PKPaymentWebService, PKPassLibraryDefaultDataProvider, PKExpressPassController, PKAccountService, PKPeerPaymentAccount, NSArray, PKAccount, NSString, UINavigationController, PKPass;
@protocol PKPaymentDataProviderDelegate, PKAccountServiceObserver, PKDashboardMoreMenuFactoryDelegate;

#import <Foundation/Foundation.h>

#import "PKIdentityReplaceFingerprintHelper.h"
#import "PKNavigationDashboardPassViewController.h"

@interface PKDashboardMoreMenuFactory : NSObject <PKPaymentDataProviderDelegate, PKAccountServiceObserver>

 {
    PKIdentityReplaceFingerprintHelper *_fingerprintHelper;
    PKPaymentDefaultDataProvider *_paymentServiceDataProvider;
    PKTransitPassProperties *_transitPassProperties;
    PKTransitBalanceModel *_transitBalanceModel;
    PKPaymentWebService *_webService;
    PKPassLibraryDefaultDataProvider *_passLibraryDataProvider;
    PKExpressPassController *_expressPassController;
    PKAccountService *_accountService;
    PKPeerPaymentAccount *_peerPaymentAccount;
    NSArray *_accounts;
}


@property (retain, nonatomic) PKAccount *account; // ivar: _account
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<PKDashboardMoreMenuFactoryDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (nonatomic) NSInteger moreMenuType; // ivar: _moreMenuType
@property (weak, nonatomic) UINavigationController *navigationController; // ivar: _navigationController
@property (weak, nonatomic) PKNavigationDashboardPassViewController *navigationDashboardPassVC; // ivar: _navigationDashboardPassVC
@property (retain, nonatomic) PKPass *pass; // ivar: _pass
@property (readonly) Class superclass;


-(BOOL)_canRemoveAccessPass;
-(BOOL)_canShowNotificationsInfo;
-(BOOL)_canShowPaymentCardNumberAction;
-(BOOL)_hasGroupActions;
-(BOOL)_hasTransitCardNumber;
-(BOOL)_hasValidEnteredValueActions;
-(BOOL)_hasValidSelectedItemActions;
-(BOOL)_isAppleBalancePass;
-(BOOL)_isCreditPass;
-(BOOL)_isPayLaterPass;
-(BOOL)_isPeerPaymentPass;
-(id)_accessPassMenuItems;
-(id)_addMoneyAppleBalanceAction;
-(id)_addMoneyPeerPaymentAction;
-(id)_appleBalanceMenuItems;
-(id)_appleCardMenuItems;
-(id)_appleCashMenuItems;
-(id)_barcodePassMenuItems;
-(id)_eMoneyPassMenuItems;
-(id)_identityPassMenuItems;
-(id)_openRewardsHubAction;
-(id)_payLaterMenuItems;
-(id)_paymentPassMenuItems;
-(id)_redeemAction;
-(id)_removePassAction;
-(id)_removePassLocalizedTitle;
-(id)_showEnteredValuePassActions;
-(id)_showInstallmentPlansAction;
-(id)_showPassActionGroups;
-(id)_showPassInfoAction;
-(id)_showPassInfoLocalizedTitle;
-(id)_showPassManageNotifications;
-(id)_showPaymentCardNumberAction;
-(id)_showSelectedItemPassActions;
-(id)_showTransitCardNumberAction;
-(id)_transferToBank;
-(id)_transitPassMenuItems;
-(id)init;
-(id)moreMenu;
-(void)_recalculateTransitPassDetails;
-(void)_reevaluateMoreMenuType;
-(void)_reloadMoreMenuItems;
-(void)accountChanged:(id)arg0 ;
-(void)dealloc;
-(void)paymentPassWithUniqueIdentifier:(id)arg0 didReceiveBalanceUpdate:(id)arg1 ;
-(void)paymentPassWithUniqueIdentifier:(id)arg0 didReceivePlanUpdate:(id)arg1 ;
-(void)paymentPassWithUniqueIdentifier:(id)arg0 didUpdateWithTransitPassProperties:(id)arg1 ;


@end


#endif