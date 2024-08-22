// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PKDASHBOARDCREDITACCOUNTITEM_H
#define PKDASHBOARDCREDITACCOUNTITEM_H

@class PKAccount, PKAccountUserCollection, NSString, PKFamilyMemberCollection, NSArray, NSSet, PKSpendingSummary, PKSpendingSummaryFetcher, PKTransactionSourceCollection;
@protocol PKDashboardItem;

#import <Foundation/Foundation.h>

#import "PKContactAvatarManager.h"

@interface PKDashboardCreditAccountItem : NSObject <PKDashboardItem>



@property (readonly, nonatomic) PKAccount *account; // ivar: _account
@property (readonly, nonatomic) PKAccountUserCollection *accountUserCollection; // ivar: _accountUserCollection
@property (retain, nonatomic) PKContactAvatarManager *avatarManager; // ivar: _avatarManager
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (retain, nonatomic) PKFamilyMemberCollection *familyCollection; // ivar: _familyCollection
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) NSArray *months; // ivar: _months
@property (retain, nonatomic) NSArray *mostRecentTransactions; // ivar: _mostRecentTransactions
@property (readonly, nonatomic) NSSet *physicalCards; // ivar: _physicalCards
@property (retain, nonatomic) PKSpendingSummary *summary; // ivar: _summary
@property (retain, nonatomic) PKSpendingSummaryFetcher *summaryFetcher; // ivar: _summaryFetcher
@property (readonly) Class superclass;
@property (retain, nonatomic) PKTransactionSourceCollection *transactionSourceCollection; // ivar: _transactionSourceCollection
@property (readonly, nonatomic) NSUInteger type; // ivar: _type
@property (retain, nonatomic) NSArray *upcomingScheduledPayments; // ivar: _upcomingScheduledPayments
@property (retain, nonatomic) NSArray *weeks; // ivar: _weeks
@property (retain, nonatomic) NSArray *years; // ivar: _years


+(id)identifier;
-(id)initWithAccount:(id)arg0 accountUserCollection:(id)arg1 physicalCards:(id)arg2 transactionSourceCollection:(id)arg3 familyCollection:(id)arg4 avatarManager:(id)arg5 type:(NSUInteger)arg6 ;


@end


#endif