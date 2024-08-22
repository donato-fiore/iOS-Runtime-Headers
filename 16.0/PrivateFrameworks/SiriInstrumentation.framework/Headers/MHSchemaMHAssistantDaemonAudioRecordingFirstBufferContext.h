// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef MHSCHEMAMHASSISTANTDAEMONAUDIORECORDINGFIRSTBUFFERCONTEXT_H
#define MHSCHEMAMHASSISTANTDAEMONAUDIORECORDINGFIRSTBUFFERCONTEXT_H

@class NSData;


#import "SISchemaInstrumentationMessage.h"
#import "MHSchemaMHAssistantDaemonAudioRecordinFirstBufferReceipt.h"
#import "MHSchemaMHAssistantDaemonAudioRecordingFirstBufferStart.h"

@interface MHSchemaMHAssistantDaemonAudioRecordingFirstBufferContext : SISchemaInstrumentationMessage

@property (retain, nonatomic) MHSchemaMHAssistantDaemonAudioRecordinFirstBufferReceipt *ended; // ivar: _ended
@property (nonatomic) BOOL hasEnded; // ivar: _hasEnded
@property (nonatomic) BOOL hasStartedOrChanged; // ivar: _hasStartedOrChanged
@property (readonly, nonatomic) NSData *jsonData;
@property (retain, nonatomic) MHSchemaMHAssistantDaemonAudioRecordingFirstBufferStart *startedOrChanged; // ivar: _startedOrChanged
@property (readonly, nonatomic) NSUInteger whichContextevent; // ivar: _whichContextevent


-(BOOL)isEqual:(id)arg0 ;
-(BOOL)readFrom:(id)arg0 ;
-(NSUInteger)hash;
-(id)applySensitiveConditionsPolicy:(id)arg0 ;
-(id)dictionaryRepresentation;
-(id)initWithDictionary:(id)arg0 ;
-(id)initWithJSON:(id)arg0 ;
-(id)suppressMessageUnderConditions;
-(void)deleteEnded;
-(void)deleteStartedOrChanged;
-(void)writeTo:(id)arg0 ;


@end


#endif