// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef FLOWSCHEMAFLOWSMSTEXTCONTEXT_H
#define FLOWSCHEMAFLOWSMSTEXTCONTEXT_H

@class NSData;


#import "SISchemaInstrumentationMessage.h"
#import "FLOWSchemaFLOWSmsAttachmentMetadata.h"
#import "FLOWSchemaFLOWSmsTextContentMetadata.h"

@interface FLOWSchemaFLOWSmsTextContext : SISchemaInstrumentationMessage

@property (nonatomic) BOOL hasSmsAttachmentMetadata; // ivar: _hasSmsAttachmentMetadata
@property (nonatomic) BOOL hasSmsTextContentMetadata; // ivar: _hasSmsTextContentMetadata
@property (readonly, nonatomic) NSData *jsonData;
@property (retain, nonatomic) FLOWSchemaFLOWSmsAttachmentMetadata *smsAttachmentMetadata; // ivar: _smsAttachmentMetadata
@property (retain, nonatomic) FLOWSchemaFLOWSmsTextContentMetadata *smsTextContentMetadata; // ivar: _smsTextContentMetadata


-(BOOL)isEqual:(id)arg0 ;
-(BOOL)readFrom:(id)arg0 ;
-(NSUInteger)hash;
-(id)applySensitiveConditionsPolicy:(id)arg0 ;
-(id)dictionaryRepresentation;
-(id)initWithDictionary:(id)arg0 ;
-(id)initWithJSON:(id)arg0 ;
-(id)suppressMessageUnderConditions;
-(void)deleteSmsAttachmentMetadata;
-(void)deleteSmsTextContentMetadata;
-(void)writeTo:(id)arg0 ;


@end


#endif