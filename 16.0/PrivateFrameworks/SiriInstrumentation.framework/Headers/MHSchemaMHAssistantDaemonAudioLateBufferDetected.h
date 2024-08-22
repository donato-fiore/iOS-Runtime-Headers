// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef MHSCHEMAMHASSISTANTDAEMONAUDIOLATEBUFFERDETECTED_H
#define MHSCHEMAMHASSISTANTDAEMONAUDIOLATEBUFFERDETECTED_H

@class NSData;


#import "SISchemaInstrumentationMessage.h"

@interface MHSchemaMHAssistantDaemonAudioLateBufferDetected : SISchemaInstrumentationMessage {
    ? _has;
}


@property (nonatomic) NSUInteger bufferReceiptTimeOffsetInNs; // ivar: _bufferReceiptTimeOffsetInNs
@property (nonatomic) BOOL hasBufferReceiptTimeOffsetInNs;
@property (readonly, nonatomic) NSData *jsonData;


-(BOOL)isEqual:(id)arg0 ;
-(BOOL)readFrom:(id)arg0 ;
-(NSUInteger)hash;
-(id)dictionaryRepresentation;
-(id)initWithDictionary:(id)arg0 ;
-(id)initWithJSON:(id)arg0 ;
-(id)suppressMessageUnderConditions;
-(void)deleteBufferReceiptTimeOffsetInNs;
-(void)writeTo:(id)arg0 ;


@end


#endif