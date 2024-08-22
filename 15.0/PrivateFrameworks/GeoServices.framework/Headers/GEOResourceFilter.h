// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef GEORESOURCEFILTER_H
#define GEORESOURCEFILTER_H

@class PBCodable, PBDataReader, PBUnknownFields;
@protocol NSCopying;



@interface GEOResourceFilter : PBCodable <NSCopying>

 {
    PBDataReader *_reader;
    PBUnknownFields *_unknownFields;
    ? _scales;
    ? _scenarios;
    unsigned int _readerMarkPos;
    unsigned int _readerMarkLength;
    os_unfair_lock_s _readerLock;
    ? _flags;
}


@property (readonly, nonatomic) *int scales;
@property (readonly, nonatomic) NSUInteger scalesCount;
@property (readonly, nonatomic) *int scenarios;
@property (readonly, nonatomic) NSUInteger scenariosCount;
@property (readonly, nonatomic) PBUnknownFields *unknownFields;


+(BOOL)isValid:(id)arg0 ;
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
-(id)scalesAsString:(int)arg0 ;
-(id)scenariosAsString:(int)arg0 ;
-(int)StringAsScales:(id)arg0 ;
-(int)StringAsScenarios:(id)arg0 ;
-(int)scaleAtIndex:(NSUInteger)arg0 ;
-(int)scenarioAtIndex:(NSUInteger)arg0 ;
-(void)addScale:(int)arg0 ;
-(void)addScenario:(int)arg0 ;
-(void)clearScales;
-(void)clearScenarios;
-(void)clearUnknownFields:(BOOL)arg0 ;
-(void)copyTo:(id)arg0 ;
-(void)dealloc;
-(void)mergeFrom:(id)arg0 ;
-(void)readAll:(BOOL)arg0 ;
-(void)writeTo:(id)arg0 ;


@end


#endif