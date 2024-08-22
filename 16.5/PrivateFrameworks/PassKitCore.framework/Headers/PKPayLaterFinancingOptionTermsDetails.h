// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PKPAYLATERFINANCINGOPTIONTERMSDETAILS_H
#define PKPAYLATERFINANCINGOPTIONTERMSDETAILS_H

@class NSString, NSURL;
@protocol NSSecureCoding, NSCopying;

#import <Foundation/Foundation.h>


@interface PKPayLaterFinancingOptionTermsDetails : NSObject <NSSecureCoding, NSCopying>



@property (copy, nonatomic) NSString *installmentAgreementIdentifier; // ivar: _installmentAgreementIdentifier
@property (copy, nonatomic) NSString *riskPricingAgreementIdentifier; // ivar: _riskPricingAgreementIdentifier
@property (copy, nonatomic) NSString *termsIdentifier; // ivar: _termsIdentifier
@property (copy, nonatomic) NSURL *termsURL; // ivar: _termsURL


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