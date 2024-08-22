// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef SISCHEMAVOICESETTINGS_H
#define SISCHEMAVOICESETTINGS_H

@class NSData, NSString;


#import "SISchemaInstrumentationMessage.h"
#import "SISchemaISOLocale.h"

@interface SISchemaVoiceSettings : SISchemaInstrumentationMessage {
    ? _has;
}


@property (nonatomic) BOOL hasVoiceAccent;
@property (nonatomic) BOOL hasVoiceAccentV2; // ivar: _hasVoiceAccentV2
@property (nonatomic) BOOL hasVoiceGender;
@property (nonatomic) BOOL hasVoiceName; // ivar: _hasVoiceName
@property (readonly, nonatomic) NSData *jsonData;
@property (nonatomic) int voiceAccent; // ivar: _voiceAccent
@property (retain, nonatomic) SISchemaISOLocale *voiceAccentV2; // ivar: _voiceAccentV2
@property (nonatomic) int voiceGender; // ivar: _voiceGender
@property (copy, nonatomic) NSString *voiceName; // ivar: _voiceName


-(BOOL)isEqual:(id)arg0 ;
-(BOOL)readFrom:(id)arg0 ;
-(NSUInteger)hash;
-(id)applySensitiveConditionsPolicy:(id)arg0 ;
-(id)dictionaryRepresentation;
-(id)initWithDictionary:(id)arg0 ;
-(id)initWithJSON:(id)arg0 ;
-(id)suppressMessageUnderConditions;
-(void)deleteVoiceAccent;
-(void)deleteVoiceAccentV2;
-(void)deleteVoiceGender;
-(void)deleteVoiceName;
-(void)writeTo:(id)arg0 ;


@end


#endif