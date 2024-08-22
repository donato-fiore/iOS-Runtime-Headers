// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef GEOPDORIENTEDPOSITION_H
#define GEOPDORIENTEDPOSITION_H

@class PBCodable;
@protocol NSCopying;



@interface GEOPDOrientedPosition : PBCodable <NSCopying>

 {
    CGFloat _pitch;
    CGFloat _roll;
    CGFloat _x;
    CGFloat _yaw;
    CGFloat _y;
    CGFloat _z;
    ? _flags;
}


@property (nonatomic) BOOL hasPitch;
@property (nonatomic) BOOL hasRoll;
@property (nonatomic) BOOL hasX;
@property (nonatomic) BOOL hasY;
@property (nonatomic) BOOL hasYaw;
@property (nonatomic) BOOL hasZ;
@property (nonatomic) CGFloat pitch;
@property (nonatomic) CGFloat roll;
@property (nonatomic) CGFloat x;
@property (nonatomic) CGFloat y;
@property (nonatomic) CGFloat yaw;
@property (nonatomic) CGFloat z;


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