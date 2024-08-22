// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PKPAYLATERACCOUNTDETAILS_H
#define PKPAYLATERACCOUNTDETAILS_H

@class NSString, NSURL, NSArray, NSDate, NSSet;
@protocol NSSecureCoding, NSCopying;

#import <Foundation/Foundation.h>

#import "PKCurrencyAmount.h"
#import "PKPayLaterAccountTermsDetails.h"
#import "PKPayLaterAccountUserInfo.h"

@interface PKPayLaterAccountDetails : NSObject <NSSecureCoding, NSCopying>



@property (copy, nonatomic) PKCurrencyAmount *amountPaid; // ivar: _amountPaid
@property (copy, nonatomic) NSString *associatedPassSerialNumber; // ivar: _associatedPassSerialNumber
@property (copy, nonatomic) NSString *associatedPassTypeIdentifier; // ivar: _associatedPassTypeIdentifier
@property (copy, nonatomic) NSURL *associatedPassURL; // ivar: _associatedPassURL
@property (copy, nonatomic) NSArray *availableLanguages; // ivar: _availableLanguages
@property (nonatomic) NSInteger cardNetwork; // ivar: _cardNetwork
@property (copy, nonatomic) NSString *countryCode; // ivar: _countryCode
@property (copy, nonatomic) NSDate *createdDate; // ivar: _createdDate
@property (copy, nonatomic) PKCurrencyAmount *currentBalance; // ivar: _currentBalance
@property (copy, nonatomic) NSDate *lastUpdatedDate; // ivar: _lastUpdatedDate
@property (copy, nonatomic) PKCurrencyAmount *nextDueAmount; // ivar: _nextDueAmount
@property (copy, nonatomic) NSDate *nextDueDate; // ivar: _nextDueDate
@property (copy, nonatomic) NSSet *products; // ivar: _products
@property (nonatomic) BOOL requiresGenericMessaging; // ivar: _requiresGenericMessaging
@property (retain, nonatomic) PKPayLaterAccountTermsDetails *termsDetails; // ivar: _termsDetails
@property (copy, nonatomic) PKCurrencyAmount *totalFinanced; // ivar: _totalFinanced
@property (retain, nonatomic) PKPayLaterAccountUserInfo *userInfo; // ivar: _userInfo


+(BOOL)supportsSecureCoding;
-(BOOL)hasEligibleSpend;
-(BOOL)hasProvisionedPass;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)isPayLaterSupportedInCurrentRegion;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)currencyCode;
-(id)description;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithDictionary:(id)arg0 ;
-(id)localizationBundleWithMainBundle:(id)arg0 ;
-(id)maximumEligibleSpendAmount;
-(id)maximumSinglePurchaseAmount;
-(id)minimumSinglePurchaseAmount;
-(id)odiAttributes;
-(id)perferredLanguageWithMainBundle:(id)arg0 ;
-(id)productForProductType:(NSUInteger)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif