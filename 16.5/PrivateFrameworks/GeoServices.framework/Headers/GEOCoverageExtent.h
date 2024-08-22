// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef GEOCOVERAGEEXTENT_H
#define GEOCOVERAGEEXTENT_H

@class PBCodable, PBUnknownFields;
@protocol NSCopying;



@interface GEOCoverageExtent : PBCodable <NSCopying>

 {
    PBUnknownFields *_unknownFields;
    *GEOCoverageException _coverageExceptions;
    NSUInteger _coverageExceptionsCount;
    NSUInteger _coverageExceptionsSpace;
    unsigned int _maxX;
    unsigned int _maxY;
    unsigned int _minX;
    unsigned int _minY;
    unsigned int _zoom;
    ? _flags;
}


@property (readonly, nonatomic) *GEOCoverageException coverageExceptions;
@property (readonly, nonatomic) NSUInteger coverageExceptionsCount;
@property (nonatomic) BOOL hasMaxX;
@property (nonatomic) BOOL hasMaxY;
@property (nonatomic) BOOL hasMinX;
@property (nonatomic) BOOL hasMinY;
@property (nonatomic) BOOL hasZoom;
@property (nonatomic) unsigned int maxX;
@property (nonatomic) unsigned int maxY;
@property (nonatomic) unsigned int minX;
@property (nonatomic) unsigned int minY;
@property (readonly, nonatomic) PBUnknownFields *unknownFields;
@property (nonatomic) unsigned int zoom;


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
-(struct GEOCoverageException )coverageExceptionAtIndex:(NSUInteger)arg0 ;
-(void)addCoverageException:(struct GEOCoverageException )arg0 ;
-(void)clearCoverageExceptions;
-(void)clearUnknownFields:(BOOL)arg0 ;
-(void)copyTo:(id)arg0 ;
-(void)dealloc;
-(void)mergeFrom:(id)arg0 ;
-(void)readAll:(BOOL)arg0 ;
-(void)writeTo:(id)arg0 ;


@end


#endif