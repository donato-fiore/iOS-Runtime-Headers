// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef CKDPASSETUPLOADTOKENRETRIEVERESPONSE_H
#define CKDPASSETUPLOADTOKENRETRIEVERESPONSE_H

@class PBCodable, NSData, NSMutableArray;
@protocol NSCopying;



@interface CKDPAssetUploadTokenRetrieveResponse : PBCodable <NSCopying>



@property (retain, nonatomic) NSData *authPutResponse; // ivar: _authPutResponse
@property (retain, nonatomic) NSMutableArray *contentResponseHeaders; // ivar: _contentResponseHeaders
@property (readonly, nonatomic) BOOL hasAuthPutResponse;
@property (retain, nonatomic) NSMutableArray *uploadTokens; // ivar: _uploadTokens


-(BOOL)isEqual:(id)arg0 ;
-(BOOL)readFrom:(id)arg0 ;
-(NSUInteger)hash;
-(id)contentResponseHeadersAtIndex:(NSUInteger)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)dictionaryRepresentation;
-(id)uploadTokensAtIndex:(NSUInteger)arg0 ;
-(void)addContentResponseHeaders:(id)arg0 ;
-(void)addUploadTokens:(id)arg0 ;
-(void)clearContentResponseHeaders;
-(void)clearUploadTokens;
-(void)copyTo:(id)arg0 ;
-(void)mergeFrom:(id)arg0 ;
-(void)writeTo:(id)arg0 ;


@end


#endif