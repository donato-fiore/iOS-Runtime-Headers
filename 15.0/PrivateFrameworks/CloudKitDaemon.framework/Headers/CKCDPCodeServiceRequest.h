// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef CKCDPCODESERVICEREQUEST_H
#define CKCDPCODESERVICEREQUEST_H

@class PBRequest, NSMutableArray, NSString, NSData;
@protocol NSCopying;


#import "CKCDPCodeServiceRequestAccountConfig.h"
#import "CKCDPCodeServiceRequestAssetAuthorizeGetRequestOptions.h"
#import "CKCDPCodeServiceRequestAttestationRequest.h"
#import "CKCDPCodeServiceRequestProtectedCloudComputeMetadata.h"
#import "CKCDPCodeServiceRequestRequestContext.h"
#import "CKCDPTrustedTargetCryptoMetadata.h"

@interface CKCDPCodeServiceRequest : PBRequest <NSCopying>

 {
    ? _has;
}


@property (retain, nonatomic) CKCDPCodeServiceRequestAccountConfig *accountConfig; // ivar: _accountConfig
@property (retain, nonatomic) CKCDPCodeServiceRequestAssetAuthorizeGetRequestOptions *assetAuthorizeGetRequestOptions; // ivar: _assetAuthorizeGetRequestOptions
@property (retain, nonatomic) CKCDPCodeServiceRequestAttestationRequest *attestationRequest; // ivar: _attestationRequest
@property (retain, nonatomic) NSMutableArray *clientConfigs; // ivar: _clientConfigs
@property (retain, nonatomic) NSString *functionName; // ivar: _functionName
@property (readonly, nonatomic) BOOL hasAccountConfig;
@property (readonly, nonatomic) BOOL hasAssetAuthorizeGetRequestOptions;
@property (readonly, nonatomic) BOOL hasAttestationRequest;
@property (readonly, nonatomic) BOOL hasFunctionName;
@property (readonly, nonatomic) BOOL hasProtectedCloudComputeMetadata;
@property (readonly, nonatomic) BOOL hasRequestContext;
@property (readonly, nonatomic) BOOL hasRoutingToken;
@property (nonatomic) BOOL hasSerializationFormat;
@property (readonly, nonatomic) BOOL hasSerializedParameters;
@property (readonly, nonatomic) BOOL hasServiceName;
@property (readonly, nonatomic) BOOL hasTrustedTargetCryptoMetadata;
@property (retain, nonatomic) CKCDPCodeServiceRequestProtectedCloudComputeMetadata *protectedCloudComputeMetadata; // ivar: _protectedCloudComputeMetadata
@property (retain, nonatomic) CKCDPCodeServiceRequestRequestContext *requestContext; // ivar: _requestContext
@property (retain, nonatomic) NSData *routingToken; // ivar: _routingToken
@property (nonatomic) int serializationFormat; // ivar: _serializationFormat
@property (retain, nonatomic) NSData *serializedParameters; // ivar: _serializedParameters
@property (retain, nonatomic) NSString *serviceName; // ivar: _serviceName
@property (retain, nonatomic) CKCDPTrustedTargetCryptoMetadata *trustedTargetCryptoMetadata; // ivar: _trustedTargetCryptoMetadata


+(Class)clientConfigType;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)readFrom:(id)arg0 ;
-(NSUInteger)hash;
-(id)clientConfigAtIndex:(NSUInteger)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)dictionaryRepresentation;
-(id)serializationFormatAsString:(int)arg0 ;
-(int)StringAsSerializationFormat:(id)arg0 ;
-(void)addClientConfig:(id)arg0 ;
-(void)clearClientConfigs;
-(void)copyTo:(id)arg0 ;
-(void)mergeFrom:(id)arg0 ;
-(void)writeTo:(id)arg0 ;


@end


#endif