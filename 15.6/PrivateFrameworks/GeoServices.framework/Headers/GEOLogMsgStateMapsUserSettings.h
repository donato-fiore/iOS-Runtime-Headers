// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef GEOLOGMSGSTATEMAPSUSERSETTINGS_H
#define GEOLOGMSGSTATEMAPSUSERSETTINGS_H

@class PBCodable;
@protocol NSCopying;



@interface GEOLogMsgStateMapsUserSettings : PBCodable <NSCopying>

 {
    int _locationCadence;
    int _locationType;
    BOOL _airQualityShown;
    BOOL _learnFromAppEnabled;
    BOOL _notificationsEnabled;
    BOOL _siriSuggestionsEnabled;
    BOOL _weatherShown;
    ? _flags;
}


@property (nonatomic) BOOL airQualityShown;
@property (nonatomic) BOOL hasAirQualityShown;
@property (nonatomic) BOOL hasLearnFromAppEnabled;
@property (nonatomic) BOOL hasLocationCadence;
@property (nonatomic) BOOL hasLocationType;
@property (nonatomic) BOOL hasNotificationsEnabled;
@property (nonatomic) BOOL hasSiriSuggestionsEnabled;
@property (nonatomic) BOOL hasWeatherShown;
@property (nonatomic) BOOL learnFromAppEnabled;
@property (nonatomic) int locationCadence;
@property (nonatomic) int locationType;
@property (nonatomic) BOOL notificationsEnabled;
@property (nonatomic) BOOL siriSuggestionsEnabled;
@property (nonatomic) BOOL weatherShown;


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
-(id)locationCadenceAsString:(int)arg0 ;
-(id)locationTypeAsString:(int)arg0 ;
-(int)StringAsLocationCadence:(id)arg0 ;
-(int)StringAsLocationType:(id)arg0 ;
-(void)copyTo:(id)arg0 ;
-(void)mergeFrom:(id)arg0 ;
-(void)readAll:(BOOL)arg0 ;
-(void)writeTo:(id)arg0 ;


@end


#endif