// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef GEOROUTINGSETTINGSDRIVINGPREFS_H
#define GEOROUTINGSETTINGSDRIVINGPREFS_H

@class PBCodable;
@protocol NSCopying;



@interface GEORoutingSettingsDrivingPrefs : PBCodable <NSCopying>

 {
    BOOL _avoidHighways;
    BOOL _avoidTolls;
    BOOL _speedLimitEnabled;
    BOOL _trafficEnabled;
    BOOL _voiceNavEnabled;
    ? _flags;
}


@property (nonatomic) BOOL avoidHighways;
@property (nonatomic) BOOL avoidTolls;
@property (nonatomic) BOOL hasAvoidHighways;
@property (nonatomic) BOOL hasAvoidTolls;
@property (nonatomic) BOOL hasSpeedLimitEnabled;
@property (nonatomic) BOOL hasTrafficEnabled;
@property (nonatomic) BOOL hasVoiceNavEnabled;
@property (nonatomic) BOOL speedLimitEnabled;
@property (nonatomic) BOOL trafficEnabled;
@property (nonatomic) BOOL voiceNavEnabled;


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