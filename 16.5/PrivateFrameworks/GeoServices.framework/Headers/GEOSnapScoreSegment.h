// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef GEOSNAPSCORESEGMENT_H
#define GEOSNAPSCORESEGMENT_H

@class PBCodable, PBDataReader, PBUnknownFields, NSMutableArray;
@protocol NSCopying;


#import "GEOLatLng.h"

@interface GEOSnapScoreSegment : PBCodable <NSCopying>

 {
    PBDataReader *_reader;
    PBUnknownFields *_unknownFields;
    NSMutableArray *_attributes;
    NSMutableArray *_categoryScores;
    NSUInteger _geoId;
    GEOLatLng *_pointOnLine;
    unsigned int _readerMarkPos;
    unsigned int _readerMarkLength;
    os_unfair_lock_s _readerLock;
    float _overallScore;
    ? _flags;
}


@property (retain, nonatomic) NSMutableArray *attributes;
@property (retain, nonatomic) NSMutableArray *categoryScores;
@property (nonatomic) NSUInteger geoId;
@property (nonatomic) BOOL hasGeoId;
@property (nonatomic) BOOL hasOverallScore;
@property (readonly, nonatomic) BOOL hasPointOnLine;
@property (nonatomic) float overallScore;
@property (retain, nonatomic) GEOLatLng *pointOnLine;
@property (readonly, nonatomic) PBUnknownFields *unknownFields;


+(BOOL)isValid:(id)arg0 ;
+(Class)attributeType;
+(Class)categoryScoreType;
-(BOOL)hasGreenTeaWithValue:(BOOL)arg0 ;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)readFrom:(id)arg0 ;
-(NSUInteger)hash;
-(id)attributeAtIndex:(NSUInteger)arg0 ;
-(id)categoryScoreAtIndex:(NSUInteger)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)dictionaryRepresentation;
-(id)init;
-(id)initWithData:(id)arg0 ;
-(id)initWithDictionary:(id)arg0 ;
-(id)initWithJSON:(id)arg0 ;
-(id)jsonRepresentation;
-(void)addAttribute:(id)arg0 ;
-(void)addCategoryScore:(id)arg0 ;
-(void)clearAttributes;
-(void)clearCategoryScores;
-(void)clearUnknownFields:(BOOL)arg0 ;
-(void)copyTo:(id)arg0 ;
-(void)mergeFrom:(id)arg0 ;
-(void)readAll:(BOOL)arg0 ;
-(void)writeTo:(id)arg0 ;


@end


#endif