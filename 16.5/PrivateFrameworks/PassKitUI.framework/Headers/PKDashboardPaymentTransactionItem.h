// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PKDASHBOARDPAYMENTTRANSACTIONITEM_H
#define PKDASHBOARDPAYMENTTRANSACTIONITEM_H

@class PKPaymentPass, PKAccount, PKAccountUserCollection, NSString, PKFamilyMemberCollection, NSSet, PKTransactionSource, PKPaymentTransaction, PKTransactionSourceCollection;
@protocol PKDashboardItem;

#import <Foundation/Foundation.h>


@interface PKDashboardPaymentTransactionItem : NSObject <PKDashboardItem>

 {
    PKPaymentPass *_pass;
}


@property (retain, nonatomic) PKAccount *account; // ivar: _account
@property (retain, nonatomic) PKAccountUserCollection *accountUserCollection; // ivar: _accountUserCollection
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (retain, nonatomic) PKFamilyMemberCollection *familyCollection; // ivar: _familyCollection
@property (readonly) NSUInteger hash;
@property (nonatomic) BOOL isFeaturedTransaction; // ivar: _isFeaturedTransaction
@property (copy, nonatomic) NSSet *physicalCards; // ivar: _physicalCards
@property (retain, nonatomic) PKTransactionSource *secondaryTransactionSource; // ivar: _secondaryTransactionSource
@property (readonly) Class superclass;
@property (readonly, nonatomic) PKPaymentTransaction *transaction; // ivar: _transaction
@property (readonly, nonatomic) PKTransactionSourceCollection *transactionSourceCollection; // ivar: _transactionSourceCollection


+(id)identifier;
-(BOOL)isEqual:(id)arg0 ;
-(id)initWithTransactionSourceCollection:(id)arg0 familyCollection:(id)arg1 transaction:(id)arg2 account:(id)arg3 accountUserCollection:(id)arg4 ;


@end


#endif