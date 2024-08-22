// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef DUSCHEMADUSPEECHAUDIORECORD_H
#define DUSCHEMADUSPEECHAUDIORECORD_H

@class NSString, NSData;


#import "SISchemaInstrumentationMessage.h"
#import "SISchemaUUID.h"

@interface DUSchemaDUSpeechAudioRecord : SISchemaInstrumentationMessage {
    ? _has;
}


@property (nonatomic) NSUInteger audioCreatedTimestampMs; // ivar: _audioCreatedTimestampMs
@property (copy, nonatomic) NSString *codec; // ivar: _codec
@property (nonatomic) BOOL hasAudioCreatedTimestampMs;
@property (nonatomic) BOOL hasCodec; // ivar: _hasCodec
@property (nonatomic) BOOL hasInteractionId; // ivar: _hasInteractionId
@property (nonatomic) BOOL hasLanguage; // ivar: _hasLanguage
@property (nonatomic) BOOL hasSpeechId; // ivar: _hasSpeechId
@property (nonatomic) BOOL hasSpeechIdString; // ivar: _hasSpeechIdString
@property (retain, nonatomic) SISchemaUUID *interactionId; // ivar: _interactionId
@property (readonly, nonatomic) NSData *jsonData;
@property (copy, nonatomic) NSString *language; // ivar: _language
@property (retain, nonatomic) SISchemaUUID *speechId; // ivar: _speechId
@property (copy, nonatomic) NSString *speechIdString; // ivar: _speechIdString


-(BOOL)isEqual:(id)arg0 ;
-(BOOL)readFrom:(id)arg0 ;
-(NSUInteger)hash;
-(id)applySensitiveConditionsPolicy:(id)arg0 ;
-(id)dictionaryRepresentation;
-(id)initWithDictionary:(id)arg0 ;
-(id)initWithJSON:(id)arg0 ;
-(id)suppressMessageUnderConditions;
-(void)deleteAudioCreatedTimestampMs;
-(void)deleteCodec;
-(void)deleteInteractionId;
-(void)deleteLanguage;
-(void)deleteSpeechId;
-(void)deleteSpeechIdString;
-(void)writeTo:(id)arg0 ;


@end


#endif