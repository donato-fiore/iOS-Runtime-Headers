// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef CPLMEMORYASSETLIST_H
#define CPLMEMORYASSETLIST_H

@class PBCodable, NSMutableArray;
@protocol NSCopying;



@interface CPLMemoryAssetList : PBCodable <NSCopying>

 {
    ? _has;
}


@property (retain, nonatomic) NSMutableArray *assets; // ivar: _assets
@property (nonatomic) BOOL hasVersion;
@property (nonatomic) unsigned int version; // ivar: _version


+(Class)assetType;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)readFrom:(id)arg0 ;
-(NSUInteger)hash;
-(id)assetAtIndex:(NSUInteger)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)dictionaryRepresentation;
-(void)addAsset:(id)arg0 ;
-(void)clearAssets;
-(void)copyTo:(id)arg0 ;
-(void)mergeFrom:(id)arg0 ;
-(void)writeTo:(id)arg0 ;


@end


#endif