// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PLUSSCHEMAPLUSMEDIASUGGESTIONEVALUATION_H
#define PLUSSCHEMAPLUSMEDIASUGGESTIONEVALUATION_H

@class NSArray, NSString, NSData;


#import "SISchemaInstrumentationMessage.h"

@interface PLUSSchemaPLUSMediaSuggestionEvaluation : SISchemaInstrumentationMessage

@property (copy, nonatomic) NSArray *entitySummaries; // ivar: _entitySummaries
@property (nonatomic) BOOL hasInferredMediaEntityAdamId; // ivar: _hasInferredMediaEntityAdamId
@property (nonatomic) BOOL hasPommesSelectedMediaEntityAdamId; // ivar: _hasPommesSelectedMediaEntityAdamId
@property (copy, nonatomic) NSString *inferredMediaEntityAdamId; // ivar: _inferredMediaEntityAdamId
@property (readonly, nonatomic) NSData *jsonData;
@property (copy, nonatomic) NSArray *pommesAlternativeEntityIds; // ivar: _pommesAlternativeEntityIds
@property (copy, nonatomic) NSString *pommesSelectedMediaEntityAdamId; // ivar: _pommesSelectedMediaEntityAdamId


-(BOOL)isEqual:(id)arg0 ;
-(BOOL)readFrom:(id)arg0 ;
-(NSUInteger)hash;
-(id)applySensitiveConditionsPolicy:(id)arg0 ;
-(id)dictionaryRepresentation;
-(id)entitySummariesAtIndex:(NSUInteger)arg0 ;
-(id)initWithDictionary:(id)arg0 ;
-(id)initWithJSON:(id)arg0 ;
-(id)pommesAlternativeEntityIdsAtIndex:(NSUInteger)arg0 ;
-(id)suppressMessageUnderConditions;
-(void)addEntitySummaries:(id)arg0 ;
-(void)addPommesAlternativeEntityIds:(id)arg0 ;
-(void)clearEntitySummaries;
-(void)clearPommesAlternativeEntityIds;
-(void)deleteEntitySummaries;
-(void)deleteInferredMediaEntityAdamId;
-(void)deletePommesAlternativeEntityIds;
-(void)deletePommesSelectedMediaEntityAdamId;
-(void)writeTo:(id)arg0 ;


@end


#endif