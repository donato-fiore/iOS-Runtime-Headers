// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef GEOLOGMSGEVENTTRIPDEPARTUREFEEDBACK_H
#define GEOLOGMSGEVENTTRIPDEPARTUREFEEDBACK_H

@class PBCodable;
@protocol NSCopying;



@interface GEOLogMsgEventTripDepartureFeedback : PBCodable <NSCopying>

 {
    CGFloat _distanceFromOrigin;
    CGFloat _timeFromOrigin;
    int _transportMode;
    ? _flags;
}


@property (nonatomic) CGFloat distanceFromOrigin;
@property (nonatomic) BOOL hasDistanceFromOrigin;
@property (nonatomic) BOOL hasTimeFromOrigin;
@property (nonatomic) BOOL hasTransportMode;
@property (nonatomic) CGFloat timeFromOrigin;
@property (nonatomic) int transportMode;


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
-(id)transportModeAsString:(int)arg0 ;
-(int)StringAsTransportMode:(id)arg0 ;
-(void)copyTo:(id)arg0 ;
-(void)mergeFrom:(id)arg0 ;
-(void)readAll:(BOOL)arg0 ;
-(void)writeTo:(id)arg0 ;


@end


#endif