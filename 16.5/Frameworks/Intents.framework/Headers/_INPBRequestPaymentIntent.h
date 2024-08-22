// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef _INPBREQUESTPAYMENTINTENT_H
#define _INPBREQUESTPAYMENTINTENT_H

@class PBCodable, NSString;
@protocol _INPBRequestPaymentIntent, NSSecureCoding, NSCopying;


#import "_INPBCurrencyAmount.h"
#import "_INPBIntentMetadata.h"
#import "_INPBString.h"
#import "_INPBContact.h"

@interface _INPBRequestPaymentIntent : PBCodable <_INPBRequestPaymentIntent, NSSecureCoding, NSCopying>

 {
    ? _has;
}


@property (retain, nonatomic) _INPBCurrencyAmount *currencyAmount; // ivar: _currencyAmount
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) BOOL hasCurrencyAmount;
@property (readonly, nonatomic) BOOL hasIntentMetadata;
@property (readonly, nonatomic) BOOL hasNote;
@property (readonly, nonatomic) BOOL hasPayer;
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) _INPBIntentMetadata *intentMetadata; // ivar: _intentMetadata
@property (retain, nonatomic) _INPBString *note; // ivar: _note
@property (retain, nonatomic) _INPBContact *payer; // ivar: _payer
@property (readonly) Class superclass;


+(BOOL)supportsSecureCoding;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)readFrom:(id)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)dictionaryRepresentation;
-(id)initWithCoder:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;
-(void)writeTo:(id)arg0 ;


@end


#endif