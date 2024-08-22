// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef SISCHEMADEVICEFIXEDCONTEXT_H
#define SISCHEMADEVICEFIXEDCONTEXT_H

@class NSString, NSData;


#import "SISchemaInstrumentationMessage.h"
#import "SISchemaSiriUISettings.h"
#import "SISchemaVoiceSettings.h"

@interface SISchemaDeviceFixedContext : SISchemaInstrumentationMessage {
    ? _has;
}


@property (copy, nonatomic) NSString *deviceType; // ivar: _deviceType
@property (nonatomic) BOOL hasDeviceType; // ivar: _hasDeviceType
@property (nonatomic) BOOL hasIsSatellitePaired;
@property (nonatomic) BOOL hasSiriDeviceID; // ivar: _hasSiriDeviceID
@property (nonatomic) BOOL hasSiriInputLanguage; // ivar: _hasSiriInputLanguage
@property (nonatomic) BOOL hasSiriUISettings; // ivar: _hasSiriUISettings
@property (nonatomic) BOOL hasSiriVoiceLanguage; // ivar: _hasSiriVoiceLanguage
@property (nonatomic) BOOL hasSpeechID; // ivar: _hasSpeechID
@property (nonatomic) BOOL hasSystemBuild; // ivar: _hasSystemBuild
@property (nonatomic) BOOL hasSystemLocale; // ivar: _hasSystemLocale
@property (nonatomic) BOOL hasVoiceSettings; // ivar: _hasVoiceSettings
@property (nonatomic) BOOL isSatellitePaired; // ivar: _isSatellitePaired
@property (readonly, nonatomic) NSData *jsonData;
@property (copy, nonatomic) NSString *siriDeviceID; // ivar: _siriDeviceID
@property (copy, nonatomic) NSString *siriInputLanguage; // ivar: _siriInputLanguage
@property (retain, nonatomic) SISchemaSiriUISettings *siriUISettings; // ivar: _siriUISettings
@property (copy, nonatomic) NSString *siriVoiceLanguage; // ivar: _siriVoiceLanguage
@property (copy, nonatomic) NSString *speechID; // ivar: _speechID
@property (copy, nonatomic) NSString *systemBuild; // ivar: _systemBuild
@property (copy, nonatomic) NSString *systemLocale; // ivar: _systemLocale
@property (retain, nonatomic) SISchemaVoiceSettings *voiceSettings; // ivar: _voiceSettings


-(BOOL)isEqual:(id)arg0 ;
-(BOOL)readFrom:(id)arg0 ;
-(NSUInteger)hash;
-(id)applySensitiveConditionsPolicy:(id)arg0 ;
-(id)dictionaryRepresentation;
-(id)initWithDictionary:(id)arg0 ;
-(id)initWithJSON:(id)arg0 ;
-(id)suppressMessageUnderConditions;
-(void)deleteDeviceType;
-(void)deleteIsSatellitePaired;
-(void)deleteSiriDeviceID;
-(void)deleteSiriInputLanguage;
-(void)deleteSiriUISettings;
-(void)deleteSiriVoiceLanguage;
-(void)deleteSpeechID;
-(void)deleteSystemBuild;
-(void)deleteSystemLocale;
-(void)deleteVoiceSettings;
-(void)writeTo:(id)arg0 ;


@end


#endif