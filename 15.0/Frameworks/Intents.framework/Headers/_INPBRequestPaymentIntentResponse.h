// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef _INPBREQUESTPAYMENTINTENTRESPONSE_H
#define _INPBREQUESTPAYMENTINTENTRESPONSE_H

@class PBCodable, NSString;
@protocol _INPBRequestPaymentIntentResponse, NSSecureCoding, NSCopying;


#import "_INPBPaymentRecord.h"

@interface _INPBRequestPaymentIntentResponse : PBCodable <_INPBRequestPaymentIntentResponse, NSSecureCoding, NSCopying>

 {
    ? _has;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) BOOL hasPaymentRecord;
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) _INPBPaymentRecord *paymentRecord; // ivar: _paymentRecord
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