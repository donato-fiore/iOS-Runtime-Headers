// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef GEORPNAVIGATIONSETTINGS_H
#define GEORPNAVIGATIONSETTINGS_H

@class PBCodable, NSString;
@protocol NSCopying;



@interface GEORPNavigationSettings : PBCodable <NSCopying>

 {
    NSUInteger _distanceUnits;
    NSUInteger _maxAlternateRouteCount;
    NSString *_voiceLanguage;
    NSUInteger _voiceVolume;
    int _userPreferredTransportType;
    BOOL _beepBeforeInstruction;
    BOOL _muteSpeechOverride;
    BOOL _pauseSpokenAudio;
    BOOL _shouldUseGuidanceEventManager;
    BOOL _speechEnabled;
    ? _flags;
}


@property (nonatomic) BOOL beepBeforeInstruction;
@property (nonatomic) NSUInteger distanceUnits;
@property (nonatomic) BOOL hasBeepBeforeInstruction;
@property (nonatomic) BOOL hasDistanceUnits;
@property (nonatomic) BOOL hasMaxAlternateRouteCount;
@property (nonatomic) BOOL hasMuteSpeechOverride;
@property (nonatomic) BOOL hasPauseSpokenAudio;
@property (nonatomic) BOOL hasShouldUseGuidanceEventManager;
@property (nonatomic) BOOL hasSpeechEnabled;
@property (nonatomic) BOOL hasUserPreferredTransportType;
@property (readonly, nonatomic) BOOL hasVoiceLanguage;
@property (nonatomic) BOOL hasVoiceVolume;
@property (nonatomic) NSUInteger maxAlternateRouteCount;
@property (nonatomic) BOOL muteSpeechOverride;
@property (nonatomic) BOOL pauseSpokenAudio;
@property (nonatomic) BOOL shouldUseGuidanceEventManager;
@property (nonatomic) BOOL speechEnabled;
@property (nonatomic) int userPreferredTransportType;
@property (retain, nonatomic) NSString *voiceLanguage;
@property (nonatomic) NSUInteger voiceVolume;


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
-(id)userPreferredTransportTypeAsString:(int)arg0 ;
-(int)StringAsUserPreferredTransportType:(id)arg0 ;
-(void)copyTo:(id)arg0 ;
-(void)mergeFrom:(id)arg0 ;
-(void)readAll:(BOOL)arg0 ;
-(void)writeTo:(id)arg0 ;


@end


#endif