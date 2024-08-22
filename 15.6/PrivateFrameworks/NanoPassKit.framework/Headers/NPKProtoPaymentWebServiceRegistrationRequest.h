// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef NPKPROTOPAYMENTWEBSERVICEREGISTRATIONREQUEST_H
#define NPKPROTOPAYMENTWEBSERVICEREGISTRATIONREQUEST_H

@class PBRequest, NSString;
@protocol NSCopying;



@interface NPKProtoPaymentWebServiceRegistrationRequest : PBRequest <NSCopying>



@property (retain, nonatomic) NSString *brokerURLString; // ivar: _brokerURLString
@property (readonly, nonatomic) BOOL hasBrokerURLString;
@property (readonly, nonatomic) BOOL hasReason;
@property (retain, nonatomic) NSString *reason; // ivar: _reason


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