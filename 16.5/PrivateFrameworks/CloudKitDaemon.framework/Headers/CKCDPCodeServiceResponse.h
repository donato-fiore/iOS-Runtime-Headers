// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef CKCDPCODESERVICERESPONSE_H
#define CKCDPCODESERVICERESPONSE_H

@class PBCodable, NSMutableArray, NSData;
@protocol NSCopying;


#import "CKCDPCodeServiceResponseAttestationResponse.h"
#import "CKCDPError.h"

@interface CKCDPCodeServiceResponse : PBCodable <NSCopying>



@property (retain, nonatomic) NSMutableArray *assetAuthorizationResponses; // ivar: _assetAuthorizationResponses
@property (retain, nonatomic) CKCDPCodeServiceResponseAttestationResponse *attestationResponse; // ivar: _attestationResponse
@property (retain, nonatomic) CKCDPError *error; // ivar: _error
@property (readonly, nonatomic) BOOL hasAttestationResponse;
@property (readonly, nonatomic) BOOL hasError;
@property (readonly, nonatomic) BOOL hasSerializedResult;
@property (retain, nonatomic) NSData *serializedResult; // ivar: _serializedResult


-(BOOL)isEqual:(id)arg0 ;
-(BOOL)readFrom:(id)arg0 ;
-(NSUInteger)hash;
-(id)assetAuthorizationResponsesAtIndex:(NSUInteger)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)dictionaryRepresentation;
-(void)addAssetAuthorizationResponses:(id)arg0 ;
-(void)clearAssetAuthorizationResponses;
-(void)copyTo:(id)arg0 ;
-(void)mergeFrom:(id)arg0 ;
-(void)writeTo:(id)arg0 ;


@end


#endif