// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PKPAYMENTSAFARICREDENTIAL_H
#define PKPAYMENTSAFARICREDENTIAL_H

@class NSString, NSDate;


#import "PKPaymentCredential.h"

@interface PKPaymentSafariCredential : PKPaymentCredential

@property (readonly, nonatomic) BOOL canCheckEligibility;
@property (readonly, copy, nonatomic) NSString *cardNumber; // ivar: _cardNumber
@property (readonly, copy, nonatomic) NSString *cardholderName; // ivar: _cardholderName
@property (readonly, copy, nonatomic) NSString *expiration;
@property (retain, nonatomic) NSDate *expirationDate; // ivar: _expirationDate
@property (readonly, copy, nonatomic) NSString *securityCode; // ivar: _securityCode


+(BOOL)supportsSecureCoding;
-(BOOL)_isEqualToCredential:(id)arg0 ;
-(NSUInteger)hash;
-(id)detailDescription;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithSafariDictionary:(id)arg0 ;
-(id)longDescription;
-(void)encodeWithCoder:(id)arg0 ;
-(void)setEligibilityResponse:(id)arg0 ;


@end


#endif