// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef CKDPCODEFUNCTIONINVOKERESPONSE_H
#define CKDPCODEFUNCTIONINVOKERESPONSE_H

@class PBCodable, NSData;
@protocol NSCopying;


#import "CKDPCodeFunctionInvokeResponseAttestationResponse.h"

@interface CKDPCodeFunctionInvokeResponse : PBCodable <NSCopying>



@property (retain, nonatomic) CKDPCodeFunctionInvokeResponseAttestationResponse *attestationResponse; // ivar: _attestationResponse
@property (readonly, nonatomic) BOOL hasAttestationResponse;
@property (readonly, nonatomic) BOOL hasSerializedResult;
@property (retain, nonatomic) NSData *serializedResult; // ivar: _serializedResult


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