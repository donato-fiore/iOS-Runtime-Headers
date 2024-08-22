// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef GEOPBTRANSITTRIGGERREGION_H
#define GEOPBTRANSITTRIGGERREGION_H

@class PBCodable, PBUnknownFields;
@protocol NSCopying;


#import "GEOLatLng.h"

@interface GEOPBTransitTriggerRegion : PBCodable <NSCopying>

 {
    PBUnknownFields *_unknownFields;
    GEOLatLng *_location;
    unsigned int _delaySeconds;
    int _signalStrength;
    int _transition;
    ? _flags;
}


@property (nonatomic) unsigned int delaySeconds;
@property (nonatomic) BOOL hasDelaySeconds;
@property (readonly, nonatomic) BOOL hasLocation;
@property (nonatomic) BOOL hasSignalStrength;
@property (nonatomic) BOOL hasTransition;
@property (retain, nonatomic) GEOLatLng *location;
@property (nonatomic) int signalStrength;
@property (nonatomic) int transition;
@property (readonly, nonatomic) PBUnknownFields *unknownFields;


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
-(id)signalStrengthAsString:(int)arg0 ;
-(id)transitionAsString:(int)arg0 ;
-(int)StringAsSignalStrength:(id)arg0 ;
-(int)StringAsTransition:(id)arg0 ;
-(void)clearUnknownFields:(BOOL)arg0 ;
-(void)copyTo:(id)arg0 ;
-(void)mergeFrom:(id)arg0 ;
-(void)readAll:(BOOL)arg0 ;
-(void)writeTo:(id)arg0 ;


@end


#endif