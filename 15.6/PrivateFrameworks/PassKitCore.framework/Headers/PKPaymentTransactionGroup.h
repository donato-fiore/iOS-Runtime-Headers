// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef PKPAYMENTTRANSACTIONGROUP_H
#define PKPAYMENTTRANSACTIONGROUP_H

@class NSDate, NSSet, NSArray, CNContact, NSString;
@protocol NSSecureCoding;

#import <Foundation/Foundation.h>

#import "PKAccountUser.h"
#import "PKFamilyMember.h"
#import "PKMerchant.h"
#import "PKSearchQuery.h"
#import "PKCurrencyAmount.h"

@interface PKPaymentTransactionGroup : NSObject <NSSecureCoding>



@property (retain, nonatomic) PKAccountUser *accountUser; // ivar: _accountUser
@property (retain, nonatomic) NSDate *endDate; // ivar: _endDate
@property (retain, nonatomic) PKFamilyMember *familyMember; // ivar: _familyMember
@property (retain, nonatomic) NSSet *handles; // ivar: _handles
@property (retain, nonatomic) PKMerchant *merchant; // ivar: _merchant
@property (nonatomic) NSInteger merchantCategory; // ivar: _merchantCategory
@property (retain, nonatomic) NSArray *regions; // ivar: _regions
@property (retain, nonatomic) PKSearchQuery *searchQuery; // ivar: _searchQuery
@property (nonatomic) NSUInteger secondaryGroupCount; // ivar: _secondaryGroupCount
@property (nonatomic) NSUInteger secondaryType; // ivar: _secondaryType
@property (retain, nonatomic) NSDate *startDate; // ivar: _startDate
@property (retain, nonatomic) PKCurrencyAmount *totalAmount; // ivar: _totalAmount
@property (nonatomic) NSUInteger transactionCount; // ivar: _transactionCount
@property (retain, nonatomic) NSArray *transactions; // ivar: _transactions
@property (nonatomic) NSUInteger type; // ivar: _type
@property (readonly, nonatomic) CNContact *userContact;
@property (readonly, nonatomic) NSString *userDisplayName;


+(BOOL)supportsSecureCoding;
-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(id)description;
-(id)initWithCoder:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif