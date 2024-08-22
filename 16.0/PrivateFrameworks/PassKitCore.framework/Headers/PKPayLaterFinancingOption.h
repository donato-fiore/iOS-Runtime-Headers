// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PKPAYLATERFINANCINGOPTION_H
#define PKPAYLATERFINANCINGOPTION_H

@class NSDecimalNumber, NSDictionary, NSString, NSArray, NSSet;
@protocol NSSecureCoding, NSCopying;

#import <Foundation/Foundation.h>

#import "PKCurrencyAmount.h"
#import "PKPayLaterFinancingAmount.h"
#import "PKPayLaterFinancingOptionTermsDetails.h"

@interface PKPayLaterFinancingOption : NSObject <NSSecureCoding, NSCopying>



@property (copy, nonatomic) NSDecimalNumber *apr; // ivar: _apr
@property (retain, nonatomic) PKCurrencyAmount *authAmount; // ivar: _authAmount
@property (nonatomic) NSUInteger autoPayment; // ivar: _autoPayment
@property (retain, nonatomic) PKPayLaterFinancingAmount *dueNow; // ivar: _dueNow
@property (copy, nonatomic) NSDictionary *financingOptionData; // ivar: _financingOptionData
@property (nonatomic) BOOL hasAPR; // ivar: _hasAPR
@property (copy, nonatomic) NSString *identifier; // ivar: _identifier
@property (retain, nonatomic) PKPayLaterFinancingAmount *installmentAmount; // ivar: _installmentAmount
@property (nonatomic) NSInteger installmentCount; // ivar: _installmentCount
@property (retain, nonatomic) PKPayLaterFinancingAmount *installmentFees; // ivar: _installmentFees
@property (retain, nonatomic) NSArray *installments; // ivar: _installments
@property (nonatomic) NSUInteger merchantCapabilities; // ivar: _merchantCapabilities
@property (nonatomic) NSUInteger productType; // ivar: _productType
@property (copy, nonatomic) NSString *selectionIdentifier; // ivar: _selectionIdentifier
@property (copy, nonatomic) NSSet *supportedRepaymentCountries; // ivar: _supportedRepaymentCountries
@property (copy, nonatomic) NSSet *supportedRepaymentFundingSourceIdentifiers; // ivar: _supportedRepaymentFundingSourceIdentifiers
@property (copy, nonatomic) NSArray *supportedRepaymentNetworks; // ivar: _supportedRepaymentNetworks
@property (nonatomic) NSUInteger supportedRepaymentTypes; // ivar: _supportedRepaymentTypes
@property (retain, nonatomic) PKPayLaterFinancingOptionTermsDetails *termsDetails; // ivar: _termsDetails
@property (retain, nonatomic) PKPayLaterFinancingAmount *totalAmount; // ivar: _totalAmount
@property (retain, nonatomic) PKPayLaterFinancingAmount *totalFees; // ivar: _totalFees
@property (retain, nonatomic) PKPayLaterFinancingAmount *totalInterest; // ivar: _totalInterest
@property (retain, nonatomic) PKPayLaterFinancingAmount *totalPrincipal; // ivar: _totalPrincipal


+(BOOL)supportsSecureCoding;
-(BOOL)isAmountDetailsEqualToFinancingOption:(id)arg0 ;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)isEqualToFinancingOption:(id)arg0 ;
-(NSUInteger)hash;
-(id)analyticsValueForAPR;
-(id)analyticsValueForInstallmentCount;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithDictionary:(id)arg0 ;
-(id)initWithDictionary:(id)arg0 productType:(NSUInteger)arg1 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif