// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef HMPBMETADATA_H
#define HMPBMETADATA_H

@class PBCodable, NSMutableArray;
@protocol NSCopying;



@interface HMPBMetadata : PBCodable <NSCopying>

 {
    ? _has;
}


@property (retain, nonatomic) NSMutableArray *hapCategories; // ivar: _hapCategories
@property (retain, nonatomic) NSMutableArray *hapCharacteristics; // ivar: _hapCharacteristics
@property (retain, nonatomic) NSMutableArray *hapServices; // ivar: _hapServices
@property (nonatomic) BOOL hasVersion;
@property (nonatomic) int version; // ivar: _version


-(BOOL)isEqual:(id)arg0 ;
-(BOOL)readFrom:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)dictionaryRepresentation;
-(id)hapCategoriesAtIndex:(NSUInteger)arg0 ;
-(id)hapCharacteristicsAtIndex:(NSUInteger)arg0 ;
-(id)hapServicesAtIndex:(NSUInteger)arg0 ;
-(void)addHapCategories:(id)arg0 ;
-(void)addHapCharacteristics:(id)arg0 ;
-(void)addHapServices:(id)arg0 ;
-(void)clearHapCategories;
-(void)clearHapCharacteristics;
-(void)clearHapServices;
-(void)copyTo:(id)arg0 ;
-(void)mergeFrom:(id)arg0 ;
-(void)writeTo:(id)arg0 ;


@end


#endif