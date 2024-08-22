// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PKPAYLATERFUNDINGSOURCEPAYMENTPASSDETAILS_H
#define PKPAYLATERFUNDINGSOURCEPAYMENTPASSDETAILS_H

@class NSString;
@protocol PKPayLaterFundingSourceDetails;

#import <Foundation/Foundation.h>


@interface PKPayLaterFundingSourcePaymentPassDetails : NSObject <PKPayLaterFundingSourceDetails>



@property (copy, nonatomic) NSString *cardName; // ivar: _cardName
@property (nonatomic) NSInteger cardNetwork; // ivar: _cardNetwork
@property (copy, nonatomic) NSString *cardSuffix; // ivar: _cardSuffix
@property (nonatomic) NSUInteger cardType; // ivar: _cardType
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (copy, nonatomic) NSString *dpanIdentifier; // ivar: _dpanIdentifier
@property (copy, nonatomic) NSString *fpanIdentifier; // ivar: _fpanIdentifier
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;
@property (nonatomic) NSUInteger type; // ivar: _type


+(BOOL)supportsSecureCoding;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)isEqualToDetails:(id)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)dictionaryRepresentation;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithDictionary:(id)arg0 type:(NSUInteger)arg1 ;
-(id)initWithPaymentPass:(id)arg0 paymentApplication:(id)arg1 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif