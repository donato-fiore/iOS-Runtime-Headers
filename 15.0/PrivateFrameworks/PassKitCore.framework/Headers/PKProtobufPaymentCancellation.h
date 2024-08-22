// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef PKPROTOBUFPAYMENTCANCELLATION_H
#define PKPROTOBUFPAYMENTCANCELLATION_H

@class PBCodable, NSString;
@protocol NSCopying;



@interface PKProtobufPaymentCancellation : PBCodable <NSCopying>



@property (readonly, nonatomic) BOOL hasRemotePaymentRequestIdentifier;
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