// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef CKDPASSETUPLOADTOKENRETRIEVEREQUESTRECORDASSETUPLOAD_H
#define CKDPASSETUPLOADTOKENRETRIEVEREQUESTRECORDASSETUPLOAD_H

@class PBCodable, NSMutableArray, CKDPRecordIdentifier;
@protocol NSCopying;


#import "CKDPRecordType.h"

@interface CKDPAssetUploadTokenRetrieveRequestRecordAssetUpload : PBCodable <NSCopying>



@property (retain, nonatomic) NSMutableArray *assetFields; // ivar: _assetFields
@property (readonly, nonatomic) BOOL hasRecordId;
@property (readonly, nonatomic) BOOL hasType;
@property (retain, nonatomic) CKDPRecordIdentifier *recordId; // ivar: _recordId
@property (retain, nonatomic) CKDPRecordType *type; // ivar: _type


-(BOOL)isEqual:(id)arg0 ;
-(BOOL)readFrom:(id)arg0 ;
-(NSUInteger)hash;
-(id)assetFieldsAtIndex:(NSUInteger)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)dictionaryRepresentation;
-(void)addAssetFields:(id)arg0 ;
-(void)clearAssetFields;
-(void)copyTo:(id)arg0 ;
-(void)mergeFrom:(id)arg0 ;
-(void)writeTo:(id)arg0 ;


@end


#endif