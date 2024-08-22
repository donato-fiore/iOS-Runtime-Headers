// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef _INPBLISTRIDEOPTIONSINTENTRESPONSE_H
#define _INPBLISTRIDEOPTIONSINTENTRESPONSE_H

@class PBCodable, NSString, NSArray;
@protocol _INPBListRideOptionsIntentResponse, NSSecureCoding, NSCopying;


#import "_INPBTimestamp.h"

@interface _INPBListRideOptionsIntentResponse : PBCodable <_INPBListRideOptionsIntentResponse, NSSecureCoding, NSCopying>

 {
    ? _has;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (retain, nonatomic) _INPBTimestamp *expirationDate; // ivar: _expirationDate
@property (readonly, nonatomic) BOOL hasExpirationDate;
@property (nonatomic) BOOL hasSupportsApplePayForPayment;
@property (readonly) NSUInteger hash;
@property (copy, nonatomic) NSArray *paymentMethods; // ivar: _paymentMethods
@property (readonly, nonatomic) NSUInteger paymentMethodsCount;
@property (copy, nonatomic) NSArray *rideOptions; // ivar: _rideOptions
@property (readonly, nonatomic) NSUInteger rideOptionsCount;
@property (readonly) Class superclass;
@property (nonatomic) BOOL supportsApplePayForPayment; // ivar: _supportsApplePayForPayment


+(BOOL)supportsSecureCoding;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)readFrom:(id)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)dictionaryRepresentation;
-(id)initWithCoder:(id)arg0 ;
-(id)paymentMethodsAtIndex:(NSUInteger)arg0 ;
-(id)rideOptionsAtIndex:(NSUInteger)arg0 ;
-(void)addPaymentMethods:(id)arg0 ;
-(void)addRideOptions:(id)arg0 ;
-(void)clearPaymentMethods;
-(void)clearRideOptions;
-(void)encodeWithCoder:(id)arg0 ;
-(void)writeTo:(id)arg0 ;


@end


#endif