// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef GEOLOGMSGEVENTPARKEDCAR_H
#define GEOLOGMSGEVENTPARKEDCAR_H

@class PBCodable;
@protocol NSCopying;


#import "GEOLatLng.h"

@interface GEOLogMsgEventParkedCar : PBCodable <NSCopying>

 {
    CGFloat _locationUncertainty;
    GEOLatLng *_location;
    CGFloat _timestamp;
    ? _flags;
}


@property (readonly, nonatomic) BOOL hasLocation;
@property (nonatomic) BOOL hasLocationUncertainty;
@property (nonatomic) BOOL hasTimestamp;
@property (retain, nonatomic) GEOLatLng *location;
@property (nonatomic) CGFloat locationUncertainty;
@property (nonatomic) CGFloat timestamp;


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
-(void)copyTo:(id)arg0 ;
-(void)mergeFrom:(id)arg0 ;
-(void)readAll:(BOOL)arg0 ;
-(void)writeTo:(id)arg0 ;


@end


#endif