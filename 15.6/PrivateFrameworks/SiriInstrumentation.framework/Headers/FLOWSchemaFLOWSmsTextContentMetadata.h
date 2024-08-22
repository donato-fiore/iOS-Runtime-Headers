// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef FLOWSCHEMAFLOWSMSTEXTCONTENTMETADATA_H
#define FLOWSCHEMAFLOWSMSTEXTCONTENTMETADATA_H

@class NSData;


#import "SISchemaInstrumentationMessage.h"
#import "FLOWSchemaFLOWKeyboardUsageMetadata.h"

@interface FLOWSchemaFLOWSmsTextContentMetadata : SISchemaInstrumentationMessage {
    ? _has;
}


@property (retain, nonatomic) FLOWSchemaFLOWKeyboardUsageMetadata *flowKeyboardUsageMetadata; // ivar: _flowKeyboardUsageMetadata
@property (nonatomic) BOOL hasFlowKeyboardUsageMetadata; // ivar: _hasFlowKeyboardUsageMetadata
@property (nonatomic) BOOL hasIsPayloadMultilingual;
@property (nonatomic) BOOL hasIsPunctuationUsed;
@property (nonatomic) BOOL hasMessageCharLength;
@property (nonatomic) BOOL hasMessageWordLength;
@property (nonatomic) BOOL isPayloadMultilingual; // ivar: _isPayloadMultilingual
@property (nonatomic) BOOL isPunctuationUsed; // ivar: _isPunctuationUsed
@property (readonly, nonatomic) NSData *jsonData;
@property (nonatomic) unsigned int messageCharLength; // ivar: _messageCharLength
@property (nonatomic) unsigned int messageWordLength; // ivar: _messageWordLength


-(BOOL)isEqual:(id)arg0 ;
-(BOOL)readFrom:(id)arg0 ;
-(NSUInteger)hash;
-(id)applySensitiveConditionsPolicy:(id)arg0 ;
-(id)dictionaryRepresentation;
-(id)initWithDictionary:(id)arg0 ;
-(id)initWithJSON:(id)arg0 ;
-(id)suppressMessageUnderConditions;
-(void)deleteFlowKeyboardUsageMetadata;
-(void)deleteIsPayloadMultilingual;
-(void)deleteIsPunctuationUsed;
-(void)deleteMessageCharLength;
-(void)deleteMessageWordLength;
-(void)writeTo:(id)arg0 ;


@end


#endif