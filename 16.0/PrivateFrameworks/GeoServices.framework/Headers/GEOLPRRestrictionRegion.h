// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef GEOLPRRESTRICTIONREGION_H
#define GEOLPRRESTRICTIONREGION_H

@class PBCodable, PBDataReader, NSMutableArray, NSString;
@protocol NSCopying;


#import "GEOMapRegionE7.h"

@interface GEOLPRRestrictionRegion : PBCodable <NSCopying>

 {
    PBDataReader *_reader;
    NSMutableArray *_convertRules;
    NSMutableArray *_definedPlateTypes;
    NSString *_identifier;
    GEOMapRegionE7 *_mapRegion;
    NSString *_name;
    unsigned int _readerMarkPos;
    unsigned int _readerMarkLength;
    os_unfair_lock_s _readerLock;
    ? _flags;
}


@property (retain, nonatomic) NSMutableArray *convertRules;
@property (retain, nonatomic) NSMutableArray *definedPlateTypes;
@property (readonly, nonatomic) BOOL hasMapRegion;
@property (readonly, nonatomic) BOOL hasName;
@property (retain, nonatomic) NSString *identifier;
@property (retain, nonatomic) GEOMapRegionE7 *mapRegion;
@property (retain, nonatomic) NSString *name;


+(BOOL)isValid:(id)arg0 ;
+(Class)convertRuleType;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)readFrom:(id)arg0 ;
-(NSUInteger)hash;
-(id)convertRuleAtIndex:(NSUInteger)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)definedPlateTypesAtIndex:(NSUInteger)arg0 ;
-(id)description;
-(id)dictionaryRepresentation;
-(id)init;
-(id)initWithData:(id)arg0 ;
-(id)initWithDictionary:(id)arg0 ;
-(id)initWithJSON:(id)arg0 ;
-(id)jsonRepresentation;
-(void)addConvertRule:(id)arg0 ;
-(void)addDefinedPlateTypes:(id)arg0 ;
-(void)clearConvertRules;
-(void)clearDefinedPlateTypes;
-(void)copyTo:(id)arg0 ;
-(void)mergeFrom:(id)arg0 ;
-(void)readAll:(BOOL)arg0 ;
-(void)writeTo:(id)arg0 ;


@end


#endif