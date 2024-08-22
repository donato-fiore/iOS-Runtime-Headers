// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef MHSCHEMAMHASSISTANTDAEMONAUDIORECORDINGLASTBUFFERRECEIPT_H
#define MHSCHEMAMHASSISTANTDAEMONAUDIORECORDINGLASTBUFFERRECEIPT_H

@class NSData;


#import "SISchemaInstrumentationMessage.h"

@interface MHSchemaMHAssistantDaemonAudioRecordingLastBufferReceipt : SISchemaInstrumentationMessage {
    ? _has;
}


@property (nonatomic) BOOL hasLastAudioRecordBufferReceiptTimeOffsetInNs;
@property (readonly, nonatomic) NSData *jsonData;
@property (nonatomic) NSUInteger lastAudioRecordBufferReceiptTimeOffsetInNs; // ivar: _lastAudioRecordBufferReceiptTimeOffsetInNs


-(BOOL)isEqual:(id)arg0 ;
-(BOOL)readFrom:(id)arg0 ;
-(NSUInteger)hash;
-(id)dictionaryRepresentation;
-(id)initWithDictionary:(id)arg0 ;
-(id)initWithJSON:(id)arg0 ;
-(id)suppressMessageUnderConditions;
-(void)deleteLastAudioRecordBufferReceiptTimeOffsetInNs;
-(void)writeTo:(id)arg0 ;


@end


#endif