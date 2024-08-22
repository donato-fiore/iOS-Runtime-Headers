// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef CPLSUGGESTIONRECORDLIST_H
#define CPLSUGGESTIONRECORDLIST_H

@class PBCodable, NSMutableArray;
@protocol NSCopying;



@interface CPLSuggestionRecordList : PBCodable <NSCopying>

 {
    ? _has;
}


@property (retain, nonatomic) NSMutableArray *assets; // ivar: _assets
@property (nonatomic) BOOL hasVersion;
@property (retain, nonatomic) NSMutableArray *memorys; // ivar: _memorys
@property (retain, nonatomic) NSMutableArray *persons; // ivar: _persons
@property (nonatomic) unsigned int version; // ivar: _version


+(Class)assetType;
+(Class)memoryType;
+(Class)personType;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)readFrom:(id)arg0 ;
-(NSUInteger)hash;
-(id)assetAtIndex:(NSUInteger)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)dictionaryRepresentation;
-(id)memoryAtIndex:(NSUInteger)arg0 ;
-(id)personAtIndex:(NSUInteger)arg0 ;
-(void)addAsset:(id)arg0 ;
-(void)addMemory:(id)arg0 ;
-(void)addPerson:(id)arg0 ;
-(void)clearAssets;
-(void)clearMemorys;
-(void)clearPersons;
-(void)copyTo:(id)arg0 ;
-(void)mergeFrom:(id)arg0 ;
-(void)writeTo:(id)arg0 ;


@end


#endif