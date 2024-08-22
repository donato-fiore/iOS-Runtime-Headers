// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef GEOPDCAMERAFRAME_H
#define GEOPDCAMERAFRAME_H

@class PBCodable;
@protocol NSCopying;



@interface GEOPDCameraFrame : PBCodable <NSCopying>

 {
    CGFloat _altitude;
    CGFloat _latitude;
    CGFloat _longitude;
    CGFloat _pitch;
    CGFloat _roll;
    CGFloat _yaw;
    ? _flags;
}


@property (nonatomic) CGFloat altitude;
@property (nonatomic) BOOL hasAltitude;
@property (nonatomic) BOOL hasLatitude;
@property (nonatomic) BOOL hasLongitude;
@property (nonatomic) BOOL hasPitch;
@property (nonatomic) BOOL hasRoll;
@property (nonatomic) BOOL hasYaw;
@property (nonatomic) CGFloat latitude;
@property (nonatomic) CGFloat longitude;
@property (nonatomic) CGFloat pitch;
@property (nonatomic) CGFloat roll;
@property (nonatomic) CGFloat yaw;


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
-(void)copyTo:(id)arg0 ;
-(void)mergeFrom:(id)arg0 ;
-(void)readAll:(BOOL)arg0 ;
-(void)writeTo:(id)arg0 ;


@end


#endif