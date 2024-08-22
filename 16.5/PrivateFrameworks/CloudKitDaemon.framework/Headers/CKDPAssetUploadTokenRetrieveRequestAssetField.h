// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef CKDPASSETUPLOADTOKENRETRIEVEREQUESTASSETFIELD_H
#define CKDPASSETUPLOADTOKENRETRIEVEREQUESTASSETFIELD_H

@class PBCodable, NSMutableArray;
@protocol NSCopying;


#import "CKDPRecordFieldIdentifier.h"

@interface CKDPAssetUploadTokenRetrieveRequestAssetField : PBCodable <NSCopying>



@property (retain, nonatomic) NSMutableArray *assets; // ivar: _assets
@property (retain, nonatomic) CKDPRecordFieldIdentifier *field; // ivar: _field
@property (readonly, nonatomic) BOOL hasField;


-(BOOL)isEqual:(id)arg0 ;
-(BOOL)readFrom:(id)arg0 ;
-(NSUInteger)hash;
-(id)assetsAtIndex:(NSUInteger)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)dictionaryRepresentation;
-(void)addAssets:(id)arg0 ;
-(void)clearAssets;
-(void)copyTo:(id)arg0 ;
-(void)mergeFrom:(id)arg0 ;
-(void)writeTo:(id)arg0 ;


@end


#endif