// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef SUGSCHEMASUGINTERACTION_H
#define SUGSCHEMASUGINTERACTION_H

@class NSData, NSString;


#import "SISchemaInstrumentationMessage.h"

@interface SUGSchemaSUGInteraction : SISchemaInstrumentationMessage {
    ? _has;
}


@property (nonatomic) BOOL hasHasOccurredWithinHour;
@property (nonatomic) BOOL hasOccurredWithinHour; // ivar: _hasOccurredWithinHour
@property (nonatomic) BOOL hasRelatedSuggestionEventSequenceNum;
@property (nonatomic) BOOL hasRelatedSuggestionId; // ivar: _hasRelatedSuggestionId
@property (nonatomic) BOOL hasRelatedSuggestionsShownCount;
@property (nonatomic) BOOL hasTriggerType;
@property (readonly, nonatomic) NSData *jsonData;
@property (nonatomic) unsigned int relatedSuggestionEventSequenceNum; // ivar: _relatedSuggestionEventSequenceNum
@property (copy, nonatomic) NSString *relatedSuggestionId; // ivar: _relatedSuggestionId
@property (nonatomic) unsigned int relatedSuggestionsShownCount; // ivar: _relatedSuggestionsShownCount
@property (nonatomic) int triggerType; // ivar: _triggerType


-(BOOL)isEqual:(id)arg0 ;
-(BOOL)readFrom:(id)arg0 ;
-(NSUInteger)hash;
-(id)dictionaryRepresentation;
-(id)initWithDictionary:(id)arg0 ;
-(id)initWithJSON:(id)arg0 ;
-(id)suppressMessageUnderConditions;
-(void)deleteHasOccurredWithinHour;
-(void)deleteRelatedSuggestionEventSequenceNum;
-(void)deleteRelatedSuggestionId;
-(void)deleteRelatedSuggestionsShownCount;
-(void)deleteTriggerType;
-(void)writeTo:(id)arg0 ;


@end


#endif