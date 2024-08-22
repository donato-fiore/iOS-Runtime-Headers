// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PKDASHBOARDTRANSACTIONINSTALLMENTITEM_H
#define PKDASHBOARDTRANSACTIONINSTALLMENTITEM_H

@class PKAccount, NSString, PKCreditInstallmentPlan, PKTransactionSourceCollection;
@protocol PKDashboardItem;

#import <Foundation/Foundation.h>


@interface PKDashboardTransactionInstallmentItem : NSObject <PKDashboardItem>



@property (retain, nonatomic) PKAccount *account; // ivar: _account
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) PKCreditInstallmentPlan *installmentPlan; // ivar: _installmentPlan
@property (readonly) Class superclass;
@property (retain, nonatomic) PKTransactionSourceCollection *transactionSourceCollection; // ivar: _transactionSourceCollection


+(id)identifier;


@end


#endif