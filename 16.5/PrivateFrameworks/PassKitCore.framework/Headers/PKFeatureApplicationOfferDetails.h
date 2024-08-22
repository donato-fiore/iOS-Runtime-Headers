// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PKFEATUREAPPLICATIONOFFERDETAILS_H
#define PKFEATUREAPPLICATIONOFFERDETAILS_H

@class NSDecimalNumber, NSString, NSDate;
@protocol NSSecureCoding, NSCopying;

#import <Foundation/Foundation.h>

#import "PKFeatureApplicationOfferDetailsInfo.h"

@interface PKFeatureApplicationOfferDetails : NSObject <NSSecureCoding, NSCopying>



@property (copy, nonatomic) NSDecimalNumber *annualFee; // ivar: _annualFee
@property (copy, nonatomic) NSDecimalNumber *aprForPurchase; // ivar: _aprForPurchase
@property (copy, nonatomic) NSDecimalNumber *balance; // ivar: _balance
@property (copy, nonatomic) NSDecimalNumber *creditLimit; // ivar: _creditLimit
@property (copy, nonatomic) NSString *currencyCode; // ivar: _currencyCode
@property (copy, nonatomic) PKFeatureApplicationOfferDetailsInfo *detailsInfo; // ivar: _detailsInfo
@property (copy, nonatomic) NSDate *expiryDate; // ivar: _expiryDate
@property (copy, nonatomic) NSString *offerTermsIdentifier; // ivar: _offerTermsIdentifier


+(BOOL)supportsSecureCoding;
-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithDictionary:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif