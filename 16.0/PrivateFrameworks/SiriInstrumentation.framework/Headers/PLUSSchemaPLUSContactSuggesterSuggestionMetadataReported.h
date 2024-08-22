// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PLUSSCHEMAPLUSCONTACTSUGGESTERSUGGESTIONMETADATAREPORTED_H
#define PLUSSCHEMAPLUSCONTACTSUGGESTERSUGGESTIONMETADATAREPORTED_H

@class NSData;


#import "SISchemaInstrumentationMessage.h"
#import "SISchemaUUID.h"

@interface PLUSSchemaPLUSContactSuggesterSuggestionMetadataReported : SISchemaInstrumentationMessage {
    ? _has;
}


@property (nonatomic) BOOL hasIsDuplicateSuggestion;
@property (nonatomic) BOOL hasIsSuggestionPresentInModelOutput;
@property (nonatomic) BOOL hasSuggestionId; // ivar: _hasSuggestionId
@property (nonatomic) BOOL isDuplicateSuggestion; // ivar: _isDuplicateSuggestion
@property (nonatomic) BOOL isSuggestionPresentInModelOutput; // ivar: _isSuggestionPresentInModelOutput
@property (readonly, nonatomic) NSData *jsonData;
@property (retain, nonatomic) SISchemaUUID *suggestionId; // ivar: _suggestionId


-(BOOL)isEqual:(id)arg0 ;
-(BOOL)readFrom:(id)arg0 ;
-(NSUInteger)hash;
-(id)applySensitiveConditionsPolicy:(id)arg0 ;
-(id)dictionaryRepresentation;
-(id)initWithDictionary:(id)arg0 ;
-(id)initWithJSON:(id)arg0 ;
-(id)suppressMessageUnderConditions;
-(void)deleteIsDuplicateSuggestion;
-(void)deleteIsSuggestionPresentInModelOutput;
-(void)deleteSuggestionId;
-(void)writeTo:(id)arg0 ;


@end


#endif