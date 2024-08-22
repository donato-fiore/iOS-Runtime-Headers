// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef GEOPDORIENTEDTILEPOSITION_H
#define GEOPDORIENTEDTILEPOSITION_H

@class PBCodable;
@protocol NSCopying;



@interface GEOPDOrientedTilePosition : PBCodable <NSCopying>

 {
    int _altitude;
    unsigned int _pitch;
    unsigned int _roll;
    unsigned int _x;
    unsigned int _yaw;
    unsigned int _y;
    ? _flags;
}


@property (nonatomic) int altitude;
@property (nonatomic) BOOL hasAltitude;
@property (nonatomic) BOOL hasPitch;
@property (nonatomic) BOOL hasRoll;
@property (nonatomic) BOOL hasX;
@property (nonatomic) BOOL hasY;
@property (nonatomic) BOOL hasYaw;
@property (nonatomic) unsigned int pitch;
@property (nonatomic) unsigned int roll;
@property (nonatomic) unsigned int x;
@property (nonatomic) unsigned int y;
@property (nonatomic) unsigned int yaw;


+(BOOL)isValid:(id)arg0 ;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)readFrom:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)initWithDictionary:(id)arg0 ;
-(id)initWithJSON:(id)arg0 ;
-(id)jsonRepresentation;
-(void)copyTo:(id)arg0 ;
-(void)mergeFrom:(id)arg0 ;
-(void)readAll:(BOOL)arg0 ;
-(void)writeTo:(id)arg0 ;


@end


#endif