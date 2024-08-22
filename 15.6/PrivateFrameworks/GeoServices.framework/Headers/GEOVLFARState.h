// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef GEOVLFARSTATE_H
#define GEOVLFARSTATE_H

@class PBCodable;
@protocol NSCopying;



@interface GEOVLFARState : PBCodable <NSCopying>

 {
    int _geoTrackingStateReason;
    int _geoTrackingState;
    unsigned int _relativeTimestampMs;
    ? _flags;
}


@property (nonatomic) int geoTrackingState;
@property (nonatomic) int geoTrackingStateReason;
@property (nonatomic) BOOL hasGeoTrackingState;
@property (nonatomic) BOOL hasGeoTrackingStateReason;
@property (nonatomic) BOOL hasRelativeTimestampMs;
@property (nonatomic) unsigned int relativeTimestampMs;


+(BOOL)isValid:(id)arg0 ;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)readFrom:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)dictionaryRepresentation;
-(id)geoTrackingStateAsString:(int)arg0 ;
-(id)geoTrackingStateReasonAsString:(int)arg0 ;
-(id)initWithDictionary:(id)arg0 ;
-(id)initWithJSON:(id)arg0 ;
-(id)jsonRepresentation;
-(int)StringAsGeoTrackingState:(id)arg0 ;
-(int)StringAsGeoTrackingStateReason:(id)arg0 ;
-(void)copyTo:(id)arg0 ;
-(void)mergeFrom:(id)arg0 ;
-(void)readAll:(BOOL)arg0 ;
-(void)writeTo:(id)arg0 ;


@end


#endif