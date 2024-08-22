// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef CKDPASSETUPLOADTOKENRETRIEVERESPONSEUPLOADTOKEN_H
#define CKDPASSETUPLOADTOKENRETRIEVERESPONSEUPLOADTOKEN_H

@class PBCodable, NSString;
@protocol NSCopying;


#import "CKDPAsset.h"

@interface CKDPAssetUploadTokenRetrieveResponseUploadToken : PBCodable <NSCopying>

 {
    ? _has;
}


@property (retain, nonatomic) CKDPAsset *asset; // ivar: _asset
@property (readonly, nonatomic) BOOL hasAsset;
@property (readonly, nonatomic) BOOL hasToken;
@property (nonatomic) BOOL hasTokenExpiration;
@property (retain, nonatomic) NSString *token; // ivar: _token
@property (nonatomic) NSInteger tokenExpiration; // ivar: _tokenExpiration


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