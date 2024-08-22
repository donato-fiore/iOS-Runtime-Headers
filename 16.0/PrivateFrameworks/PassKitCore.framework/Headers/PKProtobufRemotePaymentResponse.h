// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PKPROTOBUFREMOTEPAYMENTRESPONSE_H
#define PKPROTOBUFREMOTEPAYMENTRESPONSE_H

@class PBCodable, NSString;
@protocol NSCopying;


#import "PKProtobufPayment.h"

@interface PKProtobufRemotePaymentResponse : PBCodable <NSCopying>



@property (readonly, nonatomic) BOOL hasPayment;
@property (readonly, nonatomic) BOOL hasRemotePaymentRequestIdentifier;
@property (retain, nonatomic) PKProtobufPayment *payment; // ivar: _payment
@property (retain, nonatomic) NSString *remotePaymentRequestIdentifier; // ivar: _remotePaymentRequestIdentifier


-(BOOL)isEqual:(id)arg0 ;
-(BOOL)readFrom:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)dictionaryRepresentation;
-(void)copyTo:(id)arg0 ;
-(void)mergeFrom:(id)arg0 ;
-(void)writeTo:(id)arg0 ;


@end


#endif