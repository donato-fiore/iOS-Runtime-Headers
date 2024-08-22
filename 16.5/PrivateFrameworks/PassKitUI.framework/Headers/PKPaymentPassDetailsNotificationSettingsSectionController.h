// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PKPAYMENTPASSDETAILSNOTIFICATIONSETTINGSSECTIONCONTROLLER_H
#define PKPAYMENTPASSDETAILSNOTIFICATIONSETTINGSSECTIONCONTROLLER_H

@class PKPaymentPass, PKPaymentApplication, PKPeerPaymentAccount, PKAccount, PKTransactionSourceCollection;
@protocol PKPaymentDataProvider, PKPaymentPassDetailsNotificationSettingsSectionControllerDelegate;


#import "PKPaymentPassDetailSectionController.h"

@interface PKPaymentPassDetailsNotificationSettingsSectionController : PKPaymentPassDetailSectionController {
    PKPaymentPass *_pass;
    PKPaymentApplication *_paymentApplication;
    NSInteger _detailViewStyle;
    PKPeerPaymentAccount *_peerPaymentAccount;
    PKAccount *_account;
    id<PKPaymentDataProvider> *_paymentDataProvider;
    PKTransactionSourceCollection *_transactionSourceCollection;
}


@property (readonly, weak, nonatomic) NSObject<PKPaymentPassDetailsNotificationSettingsSectionControllerDelegate> *delegate; // ivar: _delegate
@property (readonly, nonatomic) NSInteger notificationAuthorizationStatus; // ivar: _notificationAuthorizationStatus


+(BOOL)_showsTransactionHistorySwitchForPass:(id)arg0 peerPaymentAccount:(id)arg1 account:(id)arg2 ;
+(BOOL)canShowSectionforPass:(id)arg0 dataProvider:(id)arg1 peerPaymentAccount:(id)arg2 account:(id)arg3 transactionSourceCollection:(id)arg4 ;
+(BOOL)validForPaymentPass:(id)arg0 ;
+(NSInteger)_countOfRowsForPass:(id)arg0 peerPaymentAccount:(id)arg1 account:(id)arg2 ;
+(id)_updatedPeerPaymentAccountForPeerPaymentAccount:(id)arg0 pass:(id)arg1 ;
-(BOOL)_shouldMapSection;
-(BOOL)shouldDrawBottomSeparatorForSectionIdentifier:(id)arg0 ;
-(BOOL)shouldDrawTopSeparatorForSectionIdentifier:(id)arg0 ;
-(NSInteger)_countOfRows;
-(NSInteger)tableView:(id)arg0 numberOfRowsInSectionIdentifier:(id)arg1 ;
-(NSUInteger)_accountFeature;
-(id)_accountServiceNotificationsSwitchCellForIndexPath:(id)arg0 tableView:(id)arg1 ;
-(id)_cellForType:(NSInteger)arg0 ;
-(id)_indexPathForRowType:(NSInteger)arg0 ;
-(id)_peerPaymentNotificationsSwitchCellForIndexPath:(id)arg0 tableView:(id)arg1 ;
-(id)_transactionsSwitchCellForIndexPath:(id)arg0 tableView:(id)arg1 ;
-(id)init;
-(id)initWithPass:(id)arg0 peerPaymentAccount:(id)arg1 account:(id)arg2 paymentDataProvider:(id)arg3 transactionSourceCollection:(id)arg4 detailViewStyle:(NSInteger)arg5 delegate:(id)arg6 ;
-(id)tableView:(id)arg0 cellForRowAtIndexPath:(id)arg1 sectionIdentifier:(id)arg2 ;
-(id)titleForFooterInSectionIdentifier:(id)arg0 ;
-(id)titleForHeaderInSectionIdentifier:(id)arg0 ;
-(void)_dailyCashSwitchChanged:(id)arg0 ;
-(void)_notificationSwitchChanged:(id)arg0 ;
-(void)_passSettingsChanged:(id)arg0 ;
-(void)_transactionsSwitchChanged:(id)arg0 ;
-(void)dealloc;
-(void)fetchAuthorizationStatusWithCompletion:(id)arg0 ;
-(void)setTransactionsEnabled:(BOOL)arg0 ;
-(void)tableView:(id)arg0 didSelectRowAtIndexPath:(id)arg1 sectionIdentifier:(id)arg2 ;


@end


#endif