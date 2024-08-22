// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef CKDPCODEFUNCTIONINVOKEREQUESTPROTECTEDCLOUDCOMPUTEMETADATACRYPTOSESSION_H
#define CKDPCODEFUNCTIONINVOKEREQUESTPROTECTEDCLOUDCOMPUTEMETADATACRYPTOSESSION_H

@class PBCodable, NSData;
@protocol NSCopying;



@interface CKDPCodeFunctionInvokeRequestProtectedCloudComputeMetadataCryptoSession : PBCodable <NSCopying>



@property (readonly, nonatomic) BOOL hasRoutingToken;
@property (readonly, nonatomic) BOOL hasWrappedInvocationKey;
@property (retain, nonatomic) NSData *routingToken; // ivar: _routingToken
@property (retain, nonatomic) NSData *wrappedInvocationKey; // ivar: _wrappedInvocationKey


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