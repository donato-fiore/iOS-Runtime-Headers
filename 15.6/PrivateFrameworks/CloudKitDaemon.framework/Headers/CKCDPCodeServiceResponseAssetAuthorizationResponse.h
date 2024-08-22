// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef CKCDPCODESERVICERESPONSEASSETAUTHORIZATIONRESPONSE_H
#define CKCDPCODESERVICERESPONSEASSETAUTHORIZATIONRESPONSE_H

@class PBCodable, NSData, NSMutableArray, NSString;
@protocol NSCopying;



@interface CKCDPCodeServiceResponseAssetAuthorizationResponse : PBCodable <NSCopying>



@property (retain, nonatomic) NSData *authGetResponseBody; // ivar: _authGetResponseBody
@property (readonly, nonatomic) BOOL hasAuthGetResponseBody;
@property (readonly, nonatomic) BOOL hasResponseUUID;
@property (retain, nonatomic) NSMutableArray *responseHeaders; // ivar: _responseHeaders
@property (retain, nonatomic) NSString *responseUUID; // ivar: _responseUUID


-(BOOL)isEqual:(id)arg0 ;
-(BOOL)readFrom:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)dictionaryRepresentation;
-(id)responseHeadersAtIndex:(NSUInteger)arg0 ;
-(void)addResponseHeaders:(id)arg0 ;
-(void)clearResponseHeaders;
-(void)copyTo:(id)arg0 ;
-(void)mergeFrom:(id)arg0 ;
-(void)writeTo:(id)arg0 ;


@end


#endif