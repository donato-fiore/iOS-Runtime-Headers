// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PKTRANSACTIONHISTORYHEADERITEM_H
#define PKTRANSACTIONHISTORYHEADERITEM_H

@class CNContact, NSString, PKCreditInstallmentPlanProduct, PKMerchant, PKPaymentTransaction, PKPaymentTransactionGroup;
@protocol PKDashboardItem;

#import <Foundation/Foundation.h>


@interface PKTransactionHistoryHeaderItem : NSObject <PKDashboardItem>



@property (nonatomic) NSInteger category; // ivar: _category
@property (retain, nonatomic) CNContact *contact; // ivar: _contact
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic) NSUInteger featureIdentifier; // ivar: _featureIdentifier
@property (readonly) NSUInteger hash;
@property (nonatomic) NSUInteger historyCount; // ivar: _historyCount
@property (retain, nonatomic) PKCreditInstallmentPlanProduct *installmentProduct; // ivar: _installmentProduct
@property (retain, nonatomic) PKMerchant *merchant; // ivar: _merchant
@property (copy, nonatomic) NSString *peerPaymentCounterpartHandle; // ivar: _peerPaymentCounterpartHandle
@property (nonatomic) BOOL showDetailedPropertyLocation; // ivar: _showDetailedPropertyLocation
@property (readonly) Class superclass;
@property (retain, nonatomic) NSString *title; // ivar: _title
@property (retain, nonatomic) PKPaymentTransaction *transaction; // ivar: _transaction
@property (retain, nonatomic) PKPaymentTransactionGroup *transactionGroup; // ivar: _transactionGroup
@property (nonatomic) NSInteger transactionType; // ivar: _transactionType
@property (readonly, nonatomic) NSUInteger type; // ivar: _type


+(id)identifier;
-(id)initWithType:(NSUInteger)arg0 ;


@end


#endif