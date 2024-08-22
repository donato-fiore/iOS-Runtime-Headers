// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PKDASHBOARDTRANSACTIONRECEIPTITEM_H
#define PKDASHBOARDTRANSACTIONRECEIPTITEM_H

@class PKAccount, PKAccountUserCollection, NSString, PKFamilyMemberCollection, NSSet, PKTransactionReceipt, PKPaymentTransaction, PKTransactionSourceCollection;
@protocol PKDashboardItem;

#import <Foundation/Foundation.h>


@interface PKDashboardTransactionReceiptItem : NSObject <PKDashboardItem>



@property (retain, nonatomic) PKAccount *account; // ivar: _account
@property (retain, nonatomic) PKAccountUserCollection *accountUserCollection; // ivar: _accountUserCollection
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (retain, nonatomic) PKFamilyMemberCollection *familyCollection; // ivar: _familyCollection
@property (readonly) NSUInteger hash;
@property (copy, nonatomic) NSSet *physicalCards; // ivar: _physicalCards
@property (retain, nonatomic) PKTransactionReceipt *receipt; // ivar: _receipt
@property (readonly) Class superclass;
@property (retain, nonatomic) PKPaymentTransaction *transaction; // ivar: _transaction
@property (retain, nonatomic) PKTransactionSourceCollection *transactionSourceCollection; // ivar: _transactionSourceCollection


+(id)identifier;


@end


#endif