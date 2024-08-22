// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef SISCHEMAUEIDICTATIONVOICECOMMANDEXECUTED_H
#define SISCHEMAUEIDICTATIONVOICECOMMANDEXECUTED_H

@class NSData;


#import "SISchemaInstrumentationMessage.h"
#import "SISchemaUUID.h"

@interface SISchemaUEIDictationVoiceCommandExecuted : SISchemaInstrumentationMessage {
    ? _has;
}


@property (nonatomic) NSUInteger commandPayloadCharacterCount; // ivar: _commandPayloadCharacterCount
@property (nonatomic) NSUInteger commandPayloadWordCount; // ivar: _commandPayloadWordCount
@property (nonatomic) int commandStatus; // ivar: _commandStatus
@property (nonatomic) NSUInteger commandTargetCharacterCount; // ivar: _commandTargetCharacterCount
@property (nonatomic) NSUInteger commandTargetWordCount; // ivar: _commandTargetWordCount
@property (nonatomic) int commandType; // ivar: _commandType
@property (nonatomic) BOOL hasCommandPayloadCharacterCount;
@property (nonatomic) BOOL hasCommandPayloadWordCount;
@property (nonatomic) BOOL hasCommandStatus;
@property (nonatomic) BOOL hasCommandTargetCharacterCount;
@property (nonatomic) BOOL hasCommandTargetWordCount;
@property (nonatomic) BOOL hasCommandType;
@property (nonatomic) BOOL hasVoiceCommandId; // ivar: _hasVoiceCommandId
@property (readonly, nonatomic) NSData *jsonData;
@property (retain, nonatomic) SISchemaUUID *voiceCommandId; // ivar: _voiceCommandId


-(BOOL)isEqual:(id)arg0 ;
-(BOOL)readFrom:(id)arg0 ;
-(NSUInteger)hash;
-(id)applySensitiveConditionsPolicy:(id)arg0 ;
-(id)dictionaryRepresentation;
-(id)initWithDictionary:(id)arg0 ;
-(id)initWithJSON:(id)arg0 ;
-(id)suppressMessageUnderConditions;
-(void)deleteCommandPayloadCharacterCount;
-(void)deleteCommandPayloadWordCount;
-(void)deleteCommandStatus;
-(void)deleteCommandTargetCharacterCount;
-(void)deleteCommandTargetWordCount;
-(void)deleteCommandType;
-(void)deleteVoiceCommandId;
-(void)writeTo:(id)arg0 ;


@end


#endif