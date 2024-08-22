// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SUGSCHEMASUGSUGGESTIONSGENERATED_H
#define SUGSCHEMASUGSUGGESTIONSGENERATED_H

@class NSString, NSData, NSArray;


#import "SISchemaInstrumentationMessage.h"
#import "SISchemaUUID.h"

@interface SUGSchemaSUGSuggestionsGenerated : SISchemaInstrumentationMessage {
    ? _has;
}


@property (retain, nonatomic) SISchemaUUID *generationId; // ivar: _generationId
@property (copy, nonatomic) NSString *generationTag; // ivar: _generationTag
@property (nonatomic) BOOL hasGenerationId; // ivar: _hasGenerationId
@property (nonatomic) BOOL hasGenerationTag; // ivar: _hasGenerationTag
@property (nonatomic) BOOL hasInvocationType;
@property (nonatomic) int invocationType; // ivar: _invocationType
@property (readonly, nonatomic) NSData *jsonData;
@property (copy, nonatomic) NSArray *suggestions; // ivar: _suggestions


-(BOOL)isEqual:(id)arg0 ;
-(BOOL)readFrom:(id)arg0 ;
-(NSUInteger)hash;
-(id)applySensitiveConditionsPolicy:(id)arg0 ;
-(id)dictionaryRepresentation;
-(id)initWithDictionary:(id)arg0 ;
-(id)initWithJSON:(id)arg0 ;
-(id)suggestionsAtIndex:(NSUInteger)arg0 ;
-(id)suppressMessageUnderConditions;
-(void)addSuggestions:(id)arg0 ;
-(void)clearSuggestions;
-(void)deleteGenerationId;
-(void)deleteGenerationTag;
-(void)deleteInvocationType;
-(void)deleteSuggestions;
-(void)writeTo:(id)arg0 ;


@end


#endif