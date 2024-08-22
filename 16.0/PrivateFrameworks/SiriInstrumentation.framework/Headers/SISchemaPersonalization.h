// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef SISCHEMAPERSONALIZATION_H
#define SISCHEMAPERSONALIZATION_H

@class NSData;


#import "SISchemaInstrumentationMessage.h"
#import "SISchemaVoiceSettings.h"

@interface SISchemaPersonalization : SISchemaInstrumentationMessage {
    ? _has;
}


@property (nonatomic) BOOL appleMusicSubscriber; // ivar: _appleMusicSubscriber
@property (nonatomic) BOOL hasAppleMusicSubscriber;
@property (nonatomic) BOOL hasPersonalDomainsSetup;
@property (nonatomic) BOOL hasVoiceSettings; // ivar: _hasVoiceSettings
@property (readonly, nonatomic) NSData *jsonData;
@property (nonatomic) BOOL personalDomainsSetup; // ivar: _personalDomainsSetup
@property (retain, nonatomic) SISchemaVoiceSettings *voiceSettings; // ivar: _voiceSettings


-(BOOL)isEqual:(id)arg0 ;
-(BOOL)readFrom:(id)arg0 ;
-(NSUInteger)hash;
-(id)applySensitiveConditionsPolicy:(id)arg0 ;
-(id)dictionaryRepresentation;
-(id)initWithDictionary:(id)arg0 ;
-(id)initWithJSON:(id)arg0 ;
-(id)suppressMessageUnderConditions;
-(void)deleteAppleMusicSubscriber;
-(void)deletePersonalDomainsSetup;
-(void)deleteVoiceSettings;
-(void)writeTo:(id)arg0 ;


@end


#endif