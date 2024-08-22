// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef GEOLOGMSGEVENTPREDEXTRAININGDATA_H
#define GEOLOGMSGEVENTPREDEXTRAININGDATA_H

@class PBCodable, PBDataReader, NSString;
@protocol NSCopying;


#import "GEOLatLng.h"

@interface GEOLogMsgEventPredExTrainingData : PBCodable <NSCopying>

 {
    PBDataReader *_reader;
    CGFloat _chanceOfPrecipitation;
    CGFloat _chanceOfRain;
    CGFloat _chanceOfSnow;
    CGFloat _dayOfWeek;
    CGFloat _durationUntilEventEnd;
    CGFloat _durationUntilEventStart;
    CGFloat _endTime;
    CGFloat _isTourist;
    CGFloat _startTime;
    CGFloat _temperature;
    CGFloat _timeOfDay;
    CGFloat _timeSinceBackgrounded;
    NSString *_userLocationGeohash4;
    GEOLatLng *_userLocation;
    unsigned int _readerMarkPos;
    unsigned int _readerMarkLength;
    os_unfair_lock_s _readerLock;
    int _actualTransportMode;
    int _distanceFromHereToHome;
    int _distanceFromHereToOrigin;
    int _distanceFromHereToParkedCar;
    int _distanceFromHereToWork;
    int _distanceFromHere;
    int _distanceFromOriginToDestination;
    int _entryType;
    int _mapType;
    int _predictedTransportMode;
    int _preferredTransportMode;
    int _weatherType;
    BOOL _isCarplayConnected;
    BOOL _isInBasemode;
    BOOL _isTransitPossible;
    BOOL _routePlanningScreenPresented;
    ? _flags;
}


@property (nonatomic) int actualTransportMode;
@property (nonatomic) CGFloat chanceOfPrecipitation;
@property (nonatomic) CGFloat chanceOfRain;
@property (nonatomic) CGFloat chanceOfSnow;
@property (nonatomic) CGFloat dayOfWeek;
@property (nonatomic) int distanceFromHere;
@property (nonatomic) int distanceFromHereToHome;
@property (nonatomic) int distanceFromHereToOrigin;
@property (nonatomic) int distanceFromHereToParkedCar;
@property (nonatomic) int distanceFromHereToWork;
@property (nonatomic) int distanceFromOriginToDestination;
@property (nonatomic) CGFloat durationUntilEventEnd;
@property (nonatomic) CGFloat durationUntilEventStart;
@property (nonatomic) CGFloat endTime;
@property (nonatomic) int entryType;
@property (nonatomic) BOOL hasActualTransportMode;
@property (nonatomic) BOOL hasChanceOfPrecipitation;
@property (nonatomic) BOOL hasChanceOfRain;
@property (nonatomic) BOOL hasChanceOfSnow;
@property (nonatomic) BOOL hasDayOfWeek;
@property (nonatomic) BOOL hasDistanceFromHere;
@property (nonatomic) BOOL hasDistanceFromHereToHome;
@property (nonatomic) BOOL hasDistanceFromHereToOrigin;
@property (nonatomic) BOOL hasDistanceFromHereToParkedCar;
@property (nonatomic) BOOL hasDistanceFromHereToWork;
@property (nonatomic) BOOL hasDistanceFromOriginToDestination;
@property (nonatomic) BOOL hasDurationUntilEventEnd;
@property (nonatomic) BOOL hasDurationUntilEventStart;
@property (nonatomic) BOOL hasEndTime;
@property (nonatomic) BOOL hasEntryType;
@property (nonatomic) BOOL hasIsCarplayConnected;
@property (nonatomic) BOOL hasIsInBasemode;
@property (nonatomic) BOOL hasIsTourist;
@property (nonatomic) BOOL hasIsTransitPossible;
@property (nonatomic) BOOL hasMapType;
@property (nonatomic) BOOL hasPredictedTransportMode;
@property (nonatomic) BOOL hasPreferredTransportMode;
@property (nonatomic) BOOL hasRoutePlanningScreenPresented;
@property (nonatomic) BOOL hasStartTime;
@property (nonatomic) BOOL hasTemperature;
@property (nonatomic) BOOL hasTimeOfDay;
@property (nonatomic) BOOL hasTimeSinceBackgrounded;
@property (readonly, nonatomic) BOOL hasUserLocation;
@property (readonly, nonatomic) BOOL hasUserLocationGeohash4;
@property (nonatomic) BOOL hasWeatherType;
@property (nonatomic) BOOL isCarplayConnected;
@property (nonatomic) BOOL isInBasemode;
@property (nonatomic) CGFloat isTourist;
@property (nonatomic) BOOL isTransitPossible;
@property (nonatomic) int mapType;
@property (nonatomic) int predictedTransportMode;
@property (nonatomic) int preferredTransportMode;
@property (nonatomic) BOOL routePlanningScreenPresented;
@property (nonatomic) CGFloat startTime;
@property (nonatomic) CGFloat temperature;
@property (nonatomic) CGFloat timeOfDay;
@property (nonatomic) CGFloat timeSinceBackgrounded;
@property (retain, nonatomic) GEOLatLng *userLocation;
@property (retain, nonatomic) NSString *userLocationGeohash4;
@property (nonatomic) int weatherType;


+(BOOL)isValid:(id)arg0 ;
-(BOOL)hasGreenTeaWithValue:(BOOL)arg0 ;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)readFrom:(id)arg0 ;
-(NSUInteger)hash;
-(id)actualTransportModeAsString:(int)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)dictionaryRepresentation;
-(id)distanceFromHereAsString:(int)arg0 ;
-(id)distanceFromHereToHomeAsString:(int)arg0 ;
-(id)distanceFromHereToOriginAsString:(int)arg0 ;
-(id)distanceFromHereToParkedCarAsString:(int)arg0 ;
-(id)distanceFromHereToWorkAsString:(int)arg0 ;
-(id)distanceFromOriginToDestinationAsString:(int)arg0 ;
-(id)entryTypeAsString:(int)arg0 ;
-(id)init;
-(id)initWithData:(id)arg0 ;
-(id)initWithDictionary:(id)arg0 ;
-(id)initWithJSON:(id)arg0 ;
-(id)jsonRepresentation;
-(id)mapTypeAsString:(int)arg0 ;
-(id)predictedTransportModeAsString:(int)arg0 ;
-(id)preferredTransportModeAsString:(int)arg0 ;
-(id)weatherTypeAsString:(int)arg0 ;
-(int)StringAsActualTransportMode:(id)arg0 ;
-(int)StringAsDistanceFromHere:(id)arg0 ;
-(int)StringAsDistanceFromHereToHome:(id)arg0 ;
-(int)StringAsDistanceFromHereToOrigin:(id)arg0 ;
-(int)StringAsDistanceFromHereToParkedCar:(id)arg0 ;
-(int)StringAsDistanceFromHereToWork:(id)arg0 ;
-(int)StringAsDistanceFromOriginToDestination:(id)arg0 ;
-(int)StringAsEntryType:(id)arg0 ;
-(int)StringAsMapType:(id)arg0 ;
-(int)StringAsPredictedTransportMode:(id)arg0 ;
-(int)StringAsPreferredTransportMode:(id)arg0 ;
-(int)StringAsWeatherType:(id)arg0 ;
-(void)copyTo:(id)arg0 ;
-(void)mergeFrom:(id)arg0 ;
-(void)readAll:(BOOL)arg0 ;
-(void)writeTo:(id)arg0 ;


@end


#endif