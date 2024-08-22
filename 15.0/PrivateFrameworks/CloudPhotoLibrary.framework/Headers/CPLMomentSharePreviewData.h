// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef CPLMOMENTSHAREPREVIEWDATA_H
#define CPLMOMENTSHAREPREVIEWDATA_H

@class PBCodable, NSString, NSMutableArray;
@protocol NSCopying;



@interface CPLMomentSharePreviewData : PBCodable <NSCopying>



@property (retain, nonatomic) NSString *cropRectString; // ivar: _cropRectString
@property (retain, nonatomic) NSMutableArray *curatedAssetIdentifiers; // ivar: _curatedAssetIdentifiers
@property (readonly, nonatomic) BOOL hasCropRectString;
@property (readonly, nonatomic) BOOL hasKeyAssetIdentifier;
@property (retain, nonatomic) NSString *keyAssetIdentifier; // ivar: _keyAssetIdentifier
@property (retain, nonatomic) NSMutableArray *previewImageDatas; // ivar: _previewImageDatas


+(Class)previewImageDataType;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)readFrom:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)curatedAssetIdentifiersAtIndex:(NSUInteger)arg0 ;
-(id)description;
-(id)dictionaryRepresentation;
-(id)previewImageDataAtIndex:(NSUInteger)arg0 ;
-(void)addCuratedAssetIdentifiers:(id)arg0 ;
-(void)addPreviewImageData:(id)arg0 ;
-(void)clearCuratedAssetIdentifiers;
-(void)clearPreviewImageDatas;
-(void)copyTo:(id)arg0 ;
-(void)mergeFrom:(id)arg0 ;
-(void)writeTo:(id)arg0 ;


@end


#endif