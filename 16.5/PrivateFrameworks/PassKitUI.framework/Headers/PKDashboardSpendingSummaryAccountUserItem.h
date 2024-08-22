// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PKDASHBOARDSPENDINGSUMMARYACCOUNTUSERITEM_H
#define PKDASHBOARDSPENDINGSUMMARYACCOUNTUSERITEM_H

@class PKAccountUser, NSString, PKFamilyMember, PKSpendingSummary;
@protocol PKDashboardItem;

#import <Foundation/Foundation.h>


@interface PKDashboardSpendingSummaryAccountUserItem : NSObject <PKDashboardItem>



@property (retain, nonatomic) PKAccountUser *accountUser; // ivar: _accountUser
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (retain, nonatomic) PKFamilyMember *familyMember; // ivar: _familyMember
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) PKSpendingSummary *spendingSummary; // ivar: _spendingSummary
@property (readonly) Class superclass;


+(id)identifier;


@end


#endif