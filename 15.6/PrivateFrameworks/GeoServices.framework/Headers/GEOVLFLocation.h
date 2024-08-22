// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef GEOVLFLOCATION_H
#define GEOVLFLOCATION_H

@class PBCodable;
@protocol NSCopying;


#import "GEOLatLng.h"

@interface GEOVLFLocation : PBCodable <NSCopying>

 {
    GEOECEFCoordinate _ecefLocation;
    CGFloat _heading;
    CGFloat _horizontalAccuracy;
    GEOLatLng *_location;
    CGFloat _verticalAccuracy;
    int _type;
    BOOL _isFused;
    ? _flags;
}


@property (nonatomic) GEOECEFCoordinate ecefLocation;
@property (nonatomic) BOOL hasEcefLocation;
@property (nonatomic) BOOL hasHeading;
@property (nonatomic) BOOL hasHorizontalAccuracy;
@property (nonatomic) BOOL hasIsFused;
@property (readonly, nonatomic) BOOL hasLocation;
@property (nonatomic) BOOL hasType;
@property (nonatomic) BOOL hasVerticalAccuracy;
@property (nonatomic) CGFloat heading;
@property (nonatomic) CGFloat horizontalAccuracy;
@property (nonatomic) BOOL isFused;
@property (retain, nonatomic) GEOLatLng *location;
@property (nonatomic) int type;
@property (nonatomic) CGFloat verticalAccuracy;


+(BOOL)isValid:(id)arg0 ;
-(BOOL)hasGreenTeaWithValue:(BOOL)arg0 ;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)readFrom:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)dictionaryRepresentation;
-(id)initWithDictionary:(id)arg0 ;
-(id)initWithJSON:(id)arg0 ;
-(id)jsonRepresentation;
-(id)typeAsString:(int)arg0 ;
-(int)StringAsType:(id)arg0 ;
-(void)copyTo:(id)arg0 ;
-(void)mergeFrom:(id)arg0 ;
-(void)readAll:(BOOL)arg0 ;
-(void)writeTo:(id)arg0 ;


@end


#endif