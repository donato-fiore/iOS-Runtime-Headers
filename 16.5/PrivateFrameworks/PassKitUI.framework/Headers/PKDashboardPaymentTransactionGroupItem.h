// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PKDASHBOARDPAYMENTTRANSACTIONGROUPITEM_H
#define PKDASHBOARDPAYMENTTRANSACTIONGROUPITEM_H

@class PKAccount, PKAccountUserCollection, NSString, PKFamilyMemberCollection, PKPaymentTransactionGroup, NSSet, NSArray, PKTransactionSourceCollection;
@protocol PKDashboardItem;

#import <Foundation/Foundation.h>


@interface PKDashboardPaymentTransactionGroupItem : NSObject <PKDashboardItem>



@property (retain, nonatomic) PKAccount *account; // ivar: _account
@property (retain, nonatomic) PKAccountUserCollection *accountUserCollection; // ivar: _accountUserCollection
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (retain, nonatomic) PKFamilyMemberCollection *familyCollection; // ivar: _familyCollection
@property (retain, nonatomic) PKPaymentTransactionGroup *group; // ivar: _group
@property (readonly) NSUInteger hash;
@property (copy, nonatomic) NSSet *physicalCards; // ivar: _physicalCards
@property (readonly) Class superclass;
@property (retain, nonatomic) NSArray *tokens; // ivar: _tokens
@property (retain, nonatomic) PKTransactionSourceCollection *transactionSourceCollection; // ivar: _transactionSourceCollection


+(id)identifier;
-(BOOL)isEqual:(id)arg0 ;


@end


#endif