// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef GEOLPRVALUEMAPPING_H
#define GEOLPRVALUEMAPPING_H

@class PBCodable, PBDataReader, NSMutableArray;
@protocol NSCopying;



@interface GEOLPRValueMapping : PBCodable <NSCopying>

 {
    PBDataReader *_reader;
    NSMutableArray *_mappedValues;
    NSMutableArray *_timeConditions;
    NSMutableArray *_values;
    unsigned int _readerMarkPos;
    unsigned int _readerMarkLength;
    os_unfair_lock_s _readerLock;
    ? _flags;
}


@property (retain, nonatomic) NSMutableArray *mappedValues;
@property (retain, nonatomic) NSMutableArray *timeConditions;
@property (retain, nonatomic) NSMutableArray *values;


+(BOOL)isValid:(id)arg0 ;
+(Class)mappedValueType;
+(Class)valueType;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)readFrom:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)dictionaryRepresentation;
-(id)init;
-(id)initWithData:(id)arg0 ;
-(id)initWithDictionary:(id)arg0 ;
-(id)initWithJSON:(id)arg0 ;
-(id)jsonRepresentation;
-(id)mappedValueAtIndex:(NSUInteger)arg0 ;
-(id)timeConditionsAtIndex:(NSUInteger)arg0 ;
-(id)valueAtIndex:(NSUInteger)arg0 ;
-(void)addMappedValue:(id)arg0 ;
-(void)addTimeConditions:(id)arg0 ;
-(void)addValue:(id)arg0 ;
-(void)clearMappedValues;
-(void)clearTimeConditions;
-(void)clearValues;
-(void)copyTo:(id)arg0 ;
-(void)mergeFrom:(id)arg0 ;
-(void)readAll:(BOOL)arg0 ;
-(void)writeTo:(id)arg0 ;


@end


#endif