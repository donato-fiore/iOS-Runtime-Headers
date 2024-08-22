// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PKPAYMENTPASSDETAILSNOTIFICATIONSETTINGSSECTIONCONTROLLER_H
#define PKPAYMENTPASSDETAILSNOTIFICATIONSETTINGSSECTIONCONTROLLER_H

@class PKPaymentPass, PKPaymentApplication, PKPeerPaymentAccount, PKAccount, PKTransactionSourceCollection, NSArray, NSString;
@protocol PKPaymentPassDetailTableViewSectionController, PKPaymentDataProvider, PKPaymentPassDetailsNotificationSettingsSectionControllerDelegate;

#import <Foundation/Foundation.h>


@interface PKPaymentPassDetailsNotificationSettingsSectionController : NSObject <PKPaymentPassDetailTableViewSectionController>

 {
    PKPaymentPass *_pass;
    PKPaymentApplication *_paymentApplication;
    NSInteger _detailViewStyle;
    PKPeerPaymentAccount *_peerPaymentAccount;
    PKAccount *_account;
    id<PKPaymentDataProvider> *_paymentDataProvider;
    PKTransactionSourceCollection *_transactionSourceCollection;
}


@property (readonly, nonatomic) NSArray *allSectionIdentifiers; // ivar: _allSectionIdentifiers
@property (readonly, copy) NSString *debugDescription;
@property (readonly, weak, nonatomic) NSObject<PKPaymentPassDetailsNotificationSettingsSectionControllerDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) NSInteger notificationAuthorizationStatus; // ivar: _notificationAuthorizationStatus
@property (readonly, nonatomic) NSArray *sectionIdentifiers; // ivar: _sectionIdentifiers
@property (readonly) Class superclass;


+(BOOL)_showsTransactionHistorySwitchForPass:(id)arg0 peerPaymentAccount:(id)arg1 account:(id)arg2 ;
+(BOOL)canShowSectionforPass:(id)arg0 dataProvider:(id)arg1 peerPaymentAccount:(id)arg2 account:(id)arg3 transactionSourceCollection:(id)arg4 ;
+(BOOL)validForPaymentPass:(id)arg0 ;
+(NSInteger)_countOfRowsForPass:(id)arg0 peerPaymentAccount:(id)arg1 account:(id)arg2 ;
+(id)_updatedPeerPaymentAccountForPeerPaymentAccount:(id)arg0 pass:(id)arg1 ;
-(BOOL)_shouldMapSection;
-(BOOL)shouldDrawBottomSeparatorForSectionIdentifier:(id)arg0 ;
-(BOOL)shouldDrawTopSeparatorForSectionIdentifier:(id)arg0 ;
-(NSInteger)_countOfRows;
-(NSInteger)editingStyleForRowAtIndexPath:(id)arg0 sectionIdentifier:(id)arg1 ;
-(NSInteger)tableView:(id)arg0 numberOfRowsInSectionIdentifier:(id)arg1 ;
-(NSUInteger)_accountFeature;
-(id)_accountServiceNotificationsSwitchCellForIndexPath:(id)arg0 tableView:(id)arg1 ;
-(id)_cellForType:(NSInteger)arg0 ;
-(id)_defaultCellWithTextColor:(id)arg0 forTableView:(id)arg1 ;
-(id)_indexPathForRowType:(NSInteger)arg0 ;
-(id)_linkCellWithText:(id)arg0 forTableView:(id)arg1 ;
-(id)_peerPaymentNotificationsSwitchCellForIndexPath:(id)arg0 tableView:(id)arg1 ;
-(id)_settingsTableCellWithTitle:(id)arg0 action:(SEL)arg1 setOn:(BOOL)arg2 enabled:(BOOL)arg3 ;
-(id)_transactionsSwitchCellForIndexPath:(id)arg0 tableView:(id)arg1 ;
-(id)init;
-(id)initWithPass:(id)arg0 peerPaymentAccount:(id)arg1 account:(id)arg2 paymentDataProvider:(id)arg3 transactionSourceCollection:(id)arg4 detailViewStyle:(NSInteger)arg5 delegate:(id)arg6 ;
-(id)tableView:(id)arg0 cellForRowAtIndexPath:(id)arg1 sectionIdentifier:(id)arg2 ;
-(id)tableView:(id)arg0 trailingSwipeActionsConfigurationForRowAtIndexPath:(id)arg1 sectionIdentifier:(id)arg2 ;
-(id)titleForFooterInSectionIdentifier:(id)arg0 ;
-(id)titleForHeaderInSectionIdentifier:(id)arg0 ;
-(void)_applyDefaultDynamicStylingToCell:(id)arg0 ;
-(void)_dailyCashSwitchChanged:(id)arg0 ;
-(void)_notificationSwitchChanged:(id)arg0 ;
-(void)_passSettingsChanged:(id)arg0 ;
-(void)_reportPassDetailsAnalyticsForToggleTag:(id)arg0 toggleResult:(BOOL)arg1 additionalAnalytics:(id)arg2 ;
-(void)_transactionsSwitchChanged:(id)arg0 ;
-(void)dealloc;
-(void)fetchAuthorizationStatusWithCompletion:(id)arg0 ;
-(void)setTransactionsEnabled:(BOOL)arg0 ;
-(void)tableView:(id)arg0 didSelectRowAtIndexPath:(id)arg1 sectionIdentifier:(id)arg2 ;


@end


#endif