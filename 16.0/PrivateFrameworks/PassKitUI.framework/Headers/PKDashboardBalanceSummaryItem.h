// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PKDASHBOARDBALANCESUMMARYITEM_H
#define PKDASHBOARDBALANCESUMMARYITEM_H

@class PKAccount, PKAccountUserCollection, NSString, PKFamilyMemberCollection, NSDate, PKCreditAccountMergeSummaryAccountDetails, NSSet, PKCurrencyAmount, PKCreditAccountStatement, NSArray, PKCreditAccountSummary, PKPaymentTransactionGroup, PKTransactionSourceCollection, PKPaymentWebService;
@protocol PKDashboardItem;

#import <Foundation/Foundation.h>


@interface PKDashboardBalanceSummaryItem : NSObject <PKDashboardItem>



@property (retain, nonatomic) PKAccount *account; // ivar: _account
@property (retain, nonatomic) PKAccountUserCollection *accountUserCollection; // ivar: _accountUserCollection
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (retain, nonatomic) PKFamilyMemberCollection *familyCollection; // ivar: _familyCollection
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) NSDate *mergeDate; // ivar: _mergeDate
@property (retain, nonatomic) PKCreditAccountMergeSummaryAccountDetails *mergeSummaryAccountDetails; // ivar: _mergeSummaryAccountDetails
@property (retain, nonatomic) NSSet *physicalCards; // ivar: _physicalCards
@property (retain, nonatomic) PKCurrencyAmount *rewardsCurrencyAmount; // ivar: _rewardsCurrencyAmount
@property (retain, nonatomic) PKCreditAccountStatement *statement; // ivar: _statement
@property (retain, nonatomic) NSArray *statements; // ivar: _statements
@property (retain, nonatomic) PKCreditAccountSummary *summary; // ivar: _summary
@property (readonly) Class superclass;
@property (retain, nonatomic) PKPaymentTransactionGroup *transactionGroup; // ivar: _transactionGroup
@property (retain, nonatomic) PKTransactionSourceCollection *transactionSourceCollection; // ivar: _transactionSourceCollection
@property (nonatomic) NSUInteger type; // ivar: _type
@property (retain, nonatomic) PKPaymentWebService *webService; // ivar: _webService


+(id)identifier;


@end


#endif