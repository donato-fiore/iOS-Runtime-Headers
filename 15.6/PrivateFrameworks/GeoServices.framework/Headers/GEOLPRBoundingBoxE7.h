// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef GEOLPRBOUNDINGBOXE7_H
#define GEOLPRBOUNDINGBOXE7_H

@class PBCodable;
@protocol NSCopying;


#import "GEOMapRegion.h"

@interface GEOLPRBoundingBoxE7 : PBCodable <NSCopying>

 {
    int _eastLngE7;
    int _northLatE7;
    int _southLatE7;
    int _westLngE7;
    ? _flags;
}


@property (readonly, nonatomic) ? center;
@property (readonly, nonatomic) int centerLatE7;
@property (readonly, nonatomic) int centerLngE7;
@property (nonatomic) int eastLngE7;
@property (nonatomic) BOOL hasEastLngE7;
@property (nonatomic) BOOL hasNorthLatE7;
@property (nonatomic) BOOL hasSouthLatE7;
@property (nonatomic) BOOL hasWestLngE7;
@property (readonly, nonatomic) GEOMapRegion *mapRegion;
@property (nonatomic) int northLatE7;
@property (nonatomic) int southLatE7;
@property (nonatomic) int westLngE7;


+(BOOL)isValid:(id)arg0 ;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)isValid;
-(BOOL)readFrom:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)dictionaryRepresentation;
-(id)initWithDictionary:(id)arg0 ;
-(id)initWithJSON:(id)arg0 ;
-(id)jsonRepresentation;
-(void)copyTo:(id)arg0 ;
-(void)mergeFrom:(id)arg0 ;
-(void)readAll:(BOOL)arg0 ;
-(void)writeTo:(id)arg0 ;


@end


#endif