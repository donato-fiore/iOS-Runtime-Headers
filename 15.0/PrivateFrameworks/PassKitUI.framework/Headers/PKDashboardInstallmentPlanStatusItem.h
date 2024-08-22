// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef PKDASHBOARDINSTALLMENTPLANSTATUSITEM_H
#define PKDASHBOARDINSTALLMENTPLANSTATUSITEM_H

@class PKAccount, PKAccountUserCollection, NSString, PKFamilyMemberCollection, PKCreditInstallmentPlan, PKTransactionSourceCollection;
@protocol PKDashboardItem;

#import <Foundation/Foundation.h>


@interface PKDashboardInstallmentPlanStatusItem : NSObject <PKDashboardItem>



@property (retain, nonatomic) PKAccount *account; // ivar: _account
@property (retain, nonatomic) PKAccountUserCollection *accountUserCollection; // ivar: _accountUserCollection
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (retain, nonatomic) PKFamilyMemberCollection *familyMemberCollection; // ivar: _familyMemberCollection
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) PKCreditInstallmentPlan *installmentPlan; // ivar: _installmentPlan
@property (readonly) Class superclass;
@property (retain, nonatomic) PKTransactionSourceCollection *transactionSourceCollection; // ivar: _transactionSourceCollection


+(id)identifier;


@end


#endif