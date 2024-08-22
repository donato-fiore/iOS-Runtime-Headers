// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef NPKPROTOSTANDALONEPAYMENTPROVISIONINGFLOWSESSIONCHECKINREQUEST_H
#define NPKPROTOSTANDALONEPAYMENTPROVISIONINGFLOWSESSIONCHECKINREQUEST_H

@class PBRequest;
@protocol NSCopying;


#import "NPKProtoStandaloneResponseHeader.h"

@interface NPKProtoStandalonePaymentProvisioningFlowSessionCheckInRequest : PBRequest <NSCopying>



@property (retain, nonatomic) NPKProtoStandaloneResponseHeader *requestHeader; // ivar: _requestHeader


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