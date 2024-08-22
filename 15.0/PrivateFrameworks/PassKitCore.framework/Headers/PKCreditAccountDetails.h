// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef PKCREDITACCOUNTDETAILS_H
#define PKCREDITACCOUNTDETAILS_H

@class NSString, NSURL, NSDate, NSSet, NSTimeZone;
@protocol NSSecureCoding, NSCopying;

#import <Foundation/Foundation.h>

#import "PKCreditAccountSummary.h"
#import "PKCurrencyAmount.h"
#import "PKCreditAccountRates.h"

@interface PKCreditAccountDetails : NSObject <NSSecureCoding, NSCopying>



@property (retain, nonatomic) PKCreditAccountSummary *accountSummary; // ivar: _accountSummary
@property (copy, nonatomic) NSString *associatedPassSerialNumber; // ivar: _associatedPassSerialNumber
@property (copy, nonatomic) NSString *associatedPassTypeIdentifier; // ivar: _associatedPassTypeIdentifier
@property (copy, nonatomic) NSURL *associatedPassURL; // ivar: _associatedPassURL
@property (readonly, copy, nonatomic) PKCurrencyAmount *cardBalance;
@property (nonatomic) NSInteger cardType; // ivar: _cardType
@property (copy, nonatomic) NSString *countryCode; // ivar: _countryCode
@property (copy, nonatomic) NSDate *createdDate; // ivar: _createdDate
@property (copy, nonatomic) NSString *currencyCode; // ivar: _currencyCode
@property (readonly, nonatomic, getter=isInMonthOfMerge) BOOL inMonthOfMerge;
@property (copy, nonatomic) NSSet *installmentPlans; // ivar: _installmentPlans
@property (copy, nonatomic) NSDate *lastUpdatedDate; // ivar: _lastUpdatedDate
@property (copy, nonatomic) NSDate *mergeDate; // ivar: _mergeDate
@property (copy, nonatomic) NSSet *physicalCards; // ivar: _physicalCards
@property (retain, nonatomic) NSTimeZone *productTimeZone; // ivar: _productTimeZone
@property (retain, nonatomic) PKCreditAccountRates *rates; // ivar: _rates
@property (nonatomic) BOOL termsAcceptanceRequired; // ivar: _termsAcceptanceRequired
@property (copy, nonatomic) NSString *termsIdentifier; // ivar: _termsIdentifier
@property (copy, nonatomic) NSURL *termsURL; // ivar: _termsURL
@property (readonly, copy, nonatomic) PKCurrencyAmount *totalBalance;
@property (copy, nonatomic) NSSet *virtualCards; // ivar: _virtualCards


+(BOOL)supportsSecureCoding;
-(BOOL)isEqual:(id)arg0 ;
-(NSInteger)numberOfActiveInstallments;
-(NSInteger)numberOfActiveStatementedInstallments;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithDictionary:(id)arg0 ;
-(id)installmentPlanWithIdentifier:(id)arg0 ;
-(id)virtualCardWithIdentifier:(id)arg0 ;
-(void)addOrUpdatePhysicalCard:(id)arg0 ;
-(void)addOrUpdateVirtualCard:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;
-(void)ingestExtendedAccountDetails:(id)arg0 ;
-(void)removeVirtualCard:(id)arg0 ;


@end


#endif