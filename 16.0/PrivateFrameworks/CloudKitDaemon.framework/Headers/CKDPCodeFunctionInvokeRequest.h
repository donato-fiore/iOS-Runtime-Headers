// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef CKDPCODEFUNCTIONINVOKEREQUEST_H
#define CKDPCODEFUNCTIONINVOKEREQUEST_H

@class PBRequest, NSString, NSData;
@protocol NSCopying;


#import "CKDPCodeFunctionInvokeRequestAttestationRequest.h"
#import "CKDPCodeFunctionInvokeRequestProtectedCloudComputeMetadata.h"
#import "CKCDPTrustedTargetCryptoMetadata.h"

@interface CKDPCodeFunctionInvokeRequest : PBRequest <NSCopying>



@property (retain, nonatomic) CKDPCodeFunctionInvokeRequestAttestationRequest *attestationRequest; // ivar: _attestationRequest
@property (retain, nonatomic) NSString *functionName; // ivar: _functionName
@property (readonly, nonatomic) BOOL hasAttestationRequest;
@property (readonly, nonatomic) BOOL hasFunctionName;
@property (readonly, nonatomic) BOOL hasProtectedCloudComputeMetadata;
@property (readonly, nonatomic) BOOL hasSerializedParameters;
@property (readonly, nonatomic) BOOL hasServiceName;
@property (readonly, nonatomic) BOOL hasTrustedTargetCryptoMetadata;
@property (retain, nonatomic) CKDPCodeFunctionInvokeRequestProtectedCloudComputeMetadata *protectedCloudComputeMetadata; // ivar: _protectedCloudComputeMetadata
@property (retain, nonatomic) NSData *serializedParameters; // ivar: _serializedParameters
@property (retain, nonatomic) NSString *serviceName; // ivar: _serviceName
@property (retain, nonatomic) CKCDPTrustedTargetCryptoMetadata *trustedTargetCryptoMetadata; // ivar: _trustedTargetCryptoMetadata


+(id)options;
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