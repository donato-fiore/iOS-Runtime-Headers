// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PLUSSCHEMAPLUSCONTACTSUGGESTIONGENERATED_H
#define PLUSSCHEMAPLUSCONTACTSUGGESTIONGENERATED_H

@class NSData;


#import "SISchemaInstrumentationMessage.h"
#import "PLUSSchemaPLUSContactSuggestion.h"

@interface PLUSSchemaPLUSContactSuggestionGenerated : SISchemaInstrumentationMessage {
    ? _has;
}


@property (retain, nonatomic) PLUSSchemaPLUSContactSuggestion *generatedSuggestion; // ivar: _generatedSuggestion
@property (nonatomic) BOOL hasGeneratedSuggestion; // ivar: _hasGeneratedSuggestion
@property (nonatomic) BOOL hasIsSuggestionUpdated;
@property (nonatomic) BOOL isSuggestionUpdated; // ivar: _isSuggestionUpdated
@property (readonly, nonatomic) NSData *jsonData;


-(BOOL)isEqual:(id)arg0 ;
-(BOOL)readFrom:(id)arg0 ;
-(NSUInteger)hash;
-(id)applySensitiveConditionsPolicy:(id)arg0 ;
-(id)dictionaryRepresentation;
-(id)initWithDictionary:(id)arg0 ;
-(id)initWithJSON:(id)arg0 ;
-(id)suppressMessageUnderConditions;
-(void)deleteGeneratedSuggestion;
-(void)deleteIsSuggestionUpdated;
-(void)writeTo:(id)arg0 ;


@end


#endif