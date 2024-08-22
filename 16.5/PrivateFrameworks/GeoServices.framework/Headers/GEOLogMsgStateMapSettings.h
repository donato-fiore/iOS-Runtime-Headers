// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef GEOLOGMSGSTATEMAPSETTINGS_H
#define GEOLOGMSGSTATEMAPSETTINGS_H

@class PBCodable, NSMutableArray;
@protocol NSCopying;



@interface GEOLogMsgStateMapSettings : PBCodable <NSCopying>

 {
    NSMutableArray *_navVoiceSettings;
    int _cyclingVoiceSettings;
    int _drivingVoiceSettings;
    int _locationType;
    int _navVoiceVolume;
    int _preferredTransportMode;
    int _walkingVoiceSettings;
    BOOL _hFPEnabled;
    BOOL _avoidBusyRoads;
    BOOL _avoidHighways;
    BOOL _avoidHills;
    BOOL _avoidStairs;
    BOOL _avoidTolls;
    BOOL _bikingAvoidBusyRoads;
    BOOL _bikingAvoidHills;
    BOOL _bikingAvoidStairs;
    BOOL _directionsWakeDevice;
    BOOL _eBike;
    BOOL _findMyCarEnabled;
    BOOL _headingEnabled;
    BOOL _labelEnabled;
    BOOL _pauseSpokenAudioEnabled;
    BOOL _speedLimitEnabled;
    BOOL _trafficEnabled;
    BOOL _walkingAvoidBusyRoads;
    BOOL _walkingAvoidHills;
    BOOL _walkingAvoidStairs;
    ? _flags;
}


@property (nonatomic) BOOL avoidBusyRoads;
@property (nonatomic) BOOL avoidHighways;
@property (nonatomic) BOOL avoidHills;
@property (nonatomic) BOOL avoidStairs;
@property (nonatomic) BOOL avoidTolls;
@property (nonatomic) BOOL bikingAvoidBusyRoads;
@property (nonatomic) BOOL bikingAvoidHills;
@property (nonatomic) BOOL bikingAvoidStairs;
@property (nonatomic) int cyclingVoiceSettings;
@property (nonatomic) BOOL directionsWakeDevice;
@property (nonatomic) int drivingVoiceSettings;
@property (nonatomic) BOOL eBike;
@property (nonatomic) BOOL findMyCarEnabled;
@property (nonatomic) BOOL hFPEnabled;
@property (nonatomic) BOOL hasAvoidBusyRoads;
@property (nonatomic) BOOL hasAvoidHighways;
@property (nonatomic) BOOL hasAvoidHills;
@property (nonatomic) BOOL hasAvoidStairs;
@property (nonatomic) BOOL hasAvoidTolls;
@property (nonatomic) BOOL hasBikingAvoidBusyRoads;
@property (nonatomic) BOOL hasBikingAvoidHills;
@property (nonatomic) BOOL hasBikingAvoidStairs;
@property (nonatomic) BOOL hasCyclingVoiceSettings;
@property (nonatomic) BOOL hasDirectionsWakeDevice;
@property (nonatomic) BOOL hasDrivingVoiceSettings;
@property (nonatomic) BOOL hasEBike;
@property (nonatomic) BOOL hasFindMyCarEnabled;
@property (nonatomic) BOOL hasHFPEnabled;
@property (nonatomic) BOOL hasHeadingEnabled;
@property (nonatomic) BOOL hasLabelEnabled;
@property (nonatomic) BOOL hasLocationType;
@property (nonatomic) BOOL hasNavVoiceVolume;
@property (nonatomic) BOOL hasPauseSpokenAudioEnabled;
@property (nonatomic) BOOL hasPreferredTransportMode;
@property (nonatomic) BOOL hasSpeedLimitEnabled;
@property (nonatomic) BOOL hasTrafficEnabled;
@property (nonatomic) BOOL hasWalkingAvoidBusyRoads;
@property (nonatomic) BOOL hasWalkingAvoidHills;
@property (nonatomic) BOOL hasWalkingAvoidStairs;
@property (nonatomic) BOOL hasWalkingVoiceSettings;
@property (nonatomic) BOOL headingEnabled;
@property (nonatomic) BOOL labelEnabled;
@property (nonatomic) int locationType;
@property (retain, nonatomic) NSMutableArray *navVoiceSettings;
@property (nonatomic) int navVoiceVolume;
@property (nonatomic) BOOL pauseSpokenAudioEnabled;
@property (nonatomic) int preferredTransportMode;
@property (nonatomic) BOOL speedLimitEnabled;
@property (nonatomic) BOOL trafficEnabled;
@property (nonatomic) BOOL walkingAvoidBusyRoads;
@property (nonatomic) BOOL walkingAvoidHills;
@property (nonatomic) BOOL walkingAvoidStairs;
@property (nonatomic) int walkingVoiceSettings;


+(BOOL)isValid:(id)arg0 ;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)readFrom:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)cyclingVoiceSettingsAsString:(int)arg0 ;
-(id)description;
-(id)dictionaryRepresentation;
-(id)drivingVoiceSettingsAsString:(int)arg0 ;
-(id)initWithDictionary:(id)arg0 ;
-(id)initWithJSON:(id)arg0 ;
-(id)jsonRepresentation;
-(id)locationTypeAsString:(int)arg0 ;
-(id)navVoiceSettingsAtIndex:(NSUInteger)arg0 ;
-(id)navVoiceVolumeAsString:(int)arg0 ;
-(id)preferredTransportModeAsString:(int)arg0 ;
-(id)walkingVoiceSettingsAsString:(int)arg0 ;
-(int)StringAsCyclingVoiceSettings:(id)arg0 ;
-(int)StringAsDrivingVoiceSettings:(id)arg0 ;
-(int)StringAsLocationType:(id)arg0 ;
-(int)StringAsNavVoiceVolume:(id)arg0 ;
-(int)StringAsPreferredTransportMode:(id)arg0 ;
-(int)StringAsWalkingVoiceSettings:(id)arg0 ;
-(void)addNavVoiceSettings:(id)arg0 ;
-(void)clearNavVoiceSettings;
-(void)copyTo:(id)arg0 ;
-(void)mergeFrom:(id)arg0 ;
-(void)readAll:(BOOL)arg0 ;
-(void)writeTo:(id)arg0 ;


@end


#endif