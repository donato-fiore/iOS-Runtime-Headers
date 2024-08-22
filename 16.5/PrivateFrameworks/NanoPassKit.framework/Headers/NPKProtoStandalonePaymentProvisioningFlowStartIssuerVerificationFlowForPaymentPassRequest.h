// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef NPKPROTOSTANDALONEPAYMENTPROVISIONINGFLOWSTARTISSUERVERIFICATIONFLOWFORPAYMENTPASSREQUEST_H
#define NPKPROTOSTANDALONEPAYMENTPROVISIONINGFLOWSTARTISSUERVERIFICATIONFLOWFORPAYMENTPASSREQUEST_H

@class PBRequest, NSString;
@protocol NSCopying;


#import "NPKProtoStandaloneRequestHeader.h"

@interface NPKProtoStandalonePaymentProvisioningFlowStartIssuerVerificationFlowForPaymentPassRequest : PBRequest <NSCopying>



@property (readonly, nonatomic) BOOL hasPassTypeIdentifier;
@property (readonly, nonatomic) BOOL hasSerialNumber;
@property (retain, nonatomic) NSString *passTypeIdentifier; // ivar: _passTypeIdentifier
@property (retain, nonatomic) NPKProtoStandaloneRequestHeader *requestHeader; // ivar: _requestHeader
@property (retain, nonatomic) NSString *serialNumber; // ivar: _serialNumber


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