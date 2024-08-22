// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef MHSCHEMAMHASSISTANTDAEMONAUDIORECORDINGLASTBUFFERSTART_H
#define MHSCHEMAMHASSISTANTDAEMONAUDIORECORDINGLASTBUFFERSTART_H

@class NSData;


#import "SISchemaInstrumentationMessage.h"

@interface MHSchemaMHAssistantDaemonAudioRecordingLastBufferStart : SISchemaInstrumentationMessage {
    ? _has;
}


@property (nonatomic) BOOL hasLastAudioRecordBufferStartTimeOffsetInNs;
@property (readonly, nonatomic) NSData *jsonData;
@property (nonatomic) NSUInteger lastAudioRecordBufferStartTimeOffsetInNs; // ivar: _lastAudioRecordBufferStartTimeOffsetInNs


-(BOOL)isEqual:(id)arg0 ;
-(BOOL)readFrom:(id)arg0 ;
-(NSUInteger)hash;
-(id)dictionaryRepresentation;
-(id)initWithDictionary:(id)arg0 ;
-(id)initWithJSON:(id)arg0 ;
-(id)suppressMessageUnderConditions;
-(void)deleteLastAudioRecordBufferStartTimeOffsetInNs;
-(void)writeTo:(id)arg0 ;


@end


#endif