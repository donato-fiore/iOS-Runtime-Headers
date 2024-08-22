// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef CKCDPCODESERVICEREQUEST_H
#define CKCDPCODESERVICEREQUEST_H

@class PBRequest, NSMutableArray, NSString, NSData;
@protocol NSCopying;


#import "CKCDPCodeServiceRequestAccountConfig.h"
#import "CKCDPCodeServiceRequestAssetAuthorizeGetRequestOptions.h"
#import "CKCDPCodeServiceRequestAttestationRequest.h"
#import "CKCDPCodeServiceRequestAuthInformation.h"
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
@property (retain, nonatomic) CKCDPCodeServiceRequestAuthInformation *authInformation; // ivar: _authInformation
@property (retain, nonatomic) NSMutableArray *clientConfigs; // ivar: _clientConfigs
@property (nonatomic) int dataProtection; // ivar: _dataProtection
@property (retain, nonatomic) NSString *functionName; // ivar: _functionName
@property (readonly, nonatomic) BOOL hasAccountConfig;
@property (readonly, nonatomic) BOOL hasAssetAuthorizeGetRequestOptions;
@property (readonly, nonatomic) BOOL hasAttestationRequest;
@property (readonly, nonatomic) BOOL hasAuthInformation;
@property (nonatomic) BOOL hasDataProtection;
@property (readonly, nonatomic) BOOL hasFunctionName;
@property (readonly, nonatomic) BOOL hasProtectedCloudComputeMetadata;
@property (readonly, nonatomic) BOOL hasRequestContext;
@property (nonatomic) BOOL hasSerializationFormat;
@property (readonly, nonatomic) BOOL hasSerializedParameters;
@property (readonly, nonatomic) BOOL hasServiceName;
@property (readonly, nonatomic) BOOL hasTrustedTargetCryptoMetadata;
@property (retain, nonatomic) CKCDPCodeServiceRequestProtectedCloudComputeMetadata *protectedCloudComputeMetadata; // ivar: _protectedCloudComputeMetadata
@property (retain, nonatomic) CKCDPCodeServiceRequestRequestContext *requestContext; // ivar: _requestContext
@property (nonatomic) int serializationFormat; // ivar: _serializationFormat
@property (retain, nonatomic) NSData *serializedParameters; // ivar: _serializedParameters
@property (retain, nonatomic) NSString *serviceName; // ivar: _serviceName
@property (retain, nonatomic) CKCDPTrustedTargetCryptoMetadata *trustedTargetCryptoMetadata; // ivar: _trustedTargetCryptoMetadata


+(Class)clientConfigType;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)readFrom:(id)arg0 ;
-(Class)responseClass;
-(NSUInteger)hash;
-(id)clientConfigAtIndex:(NSUInteger)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)dataProtectionAsString:(int)arg0 ;
-(id)description;
-(id)dictionaryRepresentation;
-(id)serializationFormatAsString:(int)arg0 ;
-(int)StringAsDataProtection:(id)arg0 ;
-(int)StringAsSerializationFormat:(id)arg0 ;
-(unsigned int)requestTypeCode;
-(void)addClientConfig:(id)arg0 ;
-(void)clearClientConfigs;
-(void)clearOneofValuesForDataProtection;
-(void)copyTo:(id)arg0 ;
-(void)mergeFrom:(id)arg0 ;
-(void)writeTo:(id)arg0 ;


@end


#endif