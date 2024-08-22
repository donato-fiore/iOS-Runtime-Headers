// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef GEOTRAVERSALTIMES_H
#define GEOTRAVERSALTIMES_H

@class PBCodable, PBUnknownFields;
@protocol NSCopying;



@interface GEOTraversalTimes : PBCodable <NSCopying>

 {
    PBUnknownFields *_unknownFields;
    unsigned int _aggressiveEstimatedSeconds;
    unsigned int _conservativeEstimatedSeconds;
    unsigned int _estimatedSeconds;
    unsigned int _freeflowEstimatedSeconds;
    unsigned int _historicalEstimatedSeconds;
    ? _flags;
}


@property (nonatomic) unsigned int aggressiveEstimatedSeconds;
@property (nonatomic) unsigned int conservativeEstimatedSeconds;
@property (nonatomic) unsigned int estimatedSeconds;
@property (nonatomic) unsigned int freeflowEstimatedSeconds;
@property (nonatomic) BOOL hasAggressiveEstimatedSeconds;
@property (nonatomic) BOOL hasConservativeEstimatedSeconds;
@property (nonatomic) BOOL hasEstimatedSeconds;
@property (nonatomic) BOOL hasFreeflowEstimatedSeconds;
@property (nonatomic) BOOL hasHistoricalEstimatedSeconds;
@property (nonatomic) unsigned int historicalEstimatedSeconds;
@property (readonly, nonatomic) PBUnknownFields *unknownFields;


+(BOOL)isValid:(id)arg0 ;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)readFrom:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)dictionaryRepresentation;
-(id)initWithDictionary:(id)arg0 ;
-(id)initWithJSON:(id)arg0 ;
-(id)jsonRepresentation;
-(void)clearUnknownFields:(BOOL)arg0 ;
-(void)copyTo:(id)arg0 ;
-(void)mergeFrom:(id)arg0 ;
-(void)readAll:(BOOL)arg0 ;
-(void)writeTo:(id)arg0 ;


@end


#endif