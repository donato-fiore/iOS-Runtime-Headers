// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef ASRSCHEMAASRDICTATIONVOICECOMMANDMETRICSREPORTED_H
#define ASRSCHEMAASRDICTATIONVOICECOMMANDMETRICSREPORTED_H

@class NSData;


#import "SISchemaInstrumentationMessage.h"
#import "SISchemaUUID.h"

@interface ASRSchemaASRDictationVoiceCommandMetricsReported : SISchemaInstrumentationMessage {
    ? _has;
}


@property (nonatomic) NSUInteger commandEndTimeInNs; // ivar: _commandEndTimeInNs
@property (nonatomic) BOOL hasCommandEndTimeInNs;
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
-(void)deleteCommandEndTimeInNs;
-(void)deleteVoiceCommandId;
-(void)writeTo:(id)arg0 ;


@end


#endif