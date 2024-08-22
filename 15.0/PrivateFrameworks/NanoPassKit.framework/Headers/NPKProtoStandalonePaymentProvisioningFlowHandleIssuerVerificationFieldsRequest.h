// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef NPKPROTOSTANDALONEPAYMENTPROVISIONINGFLOWHANDLEISSUERVERIFICATIONFIELDSREQUEST_H
#define NPKPROTOSTANDALONEPAYMENTPROVISIONINGFLOWHANDLEISSUERVERIFICATIONFIELDSREQUEST_H

@class PBRequest, NSMutableArray;
@protocol NSCopying;


#import "NPKProtoStandaloneRequestHeader.h"

@interface NPKProtoStandalonePaymentProvisioningFlowHandleIssuerVerificationFieldsRequest : PBRequest <NSCopying>



@property (retain, nonatomic) NPKProtoStandaloneRequestHeader *requestHeader; // ivar: _requestHeader
@property (retain, nonatomic) NSMutableArray *verificationFields; // ivar: _verificationFields


-(BOOL)isEqual:(id)arg0 ;
-(BOOL)readFrom:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)dictionaryRepresentation;
-(id)verificationFieldsAtIndex:(NSUInteger)arg0 ;
-(void)addVerificationFields:(id)arg0 ;
-(void)clearVerificationFields;
-(void)copyTo:(id)arg0 ;
-(void)mergeFrom:(id)arg0 ;
-(void)writeTo:(id)arg0 ;


@end


#endif