// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef MHSCHEMAMHASSISTANTDAEMONAUDIORECORDINFIRSTBUFFERRECEIPT_H
#define MHSCHEMAMHASSISTANTDAEMONAUDIORECORDINFIRSTBUFFERRECEIPT_H

@class NSData;


#import "SISchemaInstrumentationMessage.h"

@interface MHSchemaMHAssistantDaemonAudioRecordinFirstBufferReceipt : SISchemaInstrumentationMessage {
    ? _has;
}


@property (nonatomic) NSUInteger firstBufferReceiptTimeOffsetInNs; // ivar: _firstBufferReceiptTimeOffsetInNs
@property (nonatomic) BOOL hasFirstBufferReceiptTimeOffsetInNs;
@property (readonly, nonatomic) NSData *jsonData;


-(BOOL)isEqual:(id)arg0 ;
-(BOOL)readFrom:(id)arg0 ;
-(NSUInteger)hash;
-(id)dictionaryRepresentation;
-(id)initWithDictionary:(id)arg0 ;
-(id)initWithJSON:(id)arg0 ;
-(id)suppressMessageUnderConditions;
-(void)deleteFirstBufferReceiptTimeOffsetInNs;
-(void)writeTo:(id)arg0 ;


@end


#endif