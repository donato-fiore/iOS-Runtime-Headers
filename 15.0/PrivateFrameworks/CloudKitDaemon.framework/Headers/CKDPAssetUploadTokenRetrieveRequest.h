// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef CKDPASSETUPLOADTOKENRETRIEVEREQUEST_H
#define CKDPASSETUPLOADTOKENRETRIEVEREQUEST_H

@class PBRequest, NSMutableArray, NSData;
@protocol NSCopying;


#import "CKDPRecordFieldIdentifier.h"
#import "CKDPRecordType.h"

@interface CKDPAssetUploadTokenRetrieveRequest : PBRequest <NSCopying>

 {
    ? _has;
}


@property (retain, nonatomic) NSMutableArray *assets; // ivar: _assets
@property (retain, nonatomic) NSData *authPutRequest; // ivar: _authPutRequest
@property (nonatomic) int authPutType; // ivar: _authPutType
@property (retain, nonatomic) NSMutableArray *contentRequestHeaders; // ivar: _contentRequestHeaders
@property (retain, nonatomic) CKDPRecordFieldIdentifier *field; // ivar: _field
@property (readonly, nonatomic) BOOL hasAuthPutRequest;
@property (nonatomic) BOOL hasAuthPutType;
@property (readonly, nonatomic) BOOL hasField;
@property (readonly, nonatomic) BOOL hasType;
@property (retain, nonatomic) CKDPRecordType *type; // ivar: _type
@property (retain, nonatomic) NSMutableArray *uploads; // ivar: _uploads


+(id)options;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)readFrom:(id)arg0 ;
-(Class)responseClass;
-(NSUInteger)hash;
-(id)assetsAtIndex:(NSUInteger)arg0 ;
-(id)authPutTypeAsString:(int)arg0 ;
-(id)contentRequestHeadersAtIndex:(NSUInteger)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)dictionaryRepresentation;
-(id)uploadsAtIndex:(NSUInteger)arg0 ;
-(int)StringAsAuthPutType:(id)arg0 ;
-(unsigned int)requestTypeCode;
-(void)addAssets:(id)arg0 ;
-(void)addContentRequestHeaders:(id)arg0 ;
-(void)addUploads:(id)arg0 ;
-(void)clearAssets;
-(void)clearContentRequestHeaders;
-(void)clearUploads;
-(void)copyTo:(id)arg0 ;
-(void)mergeFrom:(id)arg0 ;
-(void)writeTo:(id)arg0 ;


@end


#endif