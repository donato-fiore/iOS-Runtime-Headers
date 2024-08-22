// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef PKPROTOBUFREMOTEPAYMENTREQUEST_H
#define PKPROTOBUFREMOTEPAYMENTREQUEST_H

@class PBRequest, NSString;
@protocol NSCopying;


#import "PKProtobufPaymentRequest.h"

@interface PKProtobufRemotePaymentRequest : PBRequest <NSCopying>



@property (readonly, nonatomic) BOOL hasIdentifier;
@property (readonly, nonatomic) BOOL hasPaymentApplicationIdentifier;
@property (readonly, nonatomic) BOOL hasPaymentRequest;
@property (retain, nonatomic) NSString *identifier; // ivar: _identifier
@property (retain, nonatomic) NSString *paymentApplicationIdentifier; // ivar: _paymentApplicationIdentifier
@property (retain, nonatomic) PKProtobufPaymentRequest *paymentRequest; // ivar: _paymentRequest


-(BOOL)isEqual:(id)arg0 ;
-(BOOL)readFrom:(id)arg0 ;
-(Class)responseClass;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)dictionaryRepresentation;
-(unsigned int)requestTypeCode;
-(void)copyTo:(id)arg0 ;
-(void)mergeFrom:(id)arg0 ;
-(void)writeTo:(id)arg0 ;


@end


#endif