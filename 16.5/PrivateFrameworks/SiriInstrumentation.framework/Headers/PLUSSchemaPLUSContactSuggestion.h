// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PLUSSCHEMAPLUSCONTACTSUGGESTION_H
#define PLUSSCHEMAPLUSCONTACTSUGGESTION_H

@class NSArray, NSData;


#import "SISchemaInstrumentationMessage.h"
#import "SISchemaUUID.h"

@interface PLUSSchemaPLUSContactSuggestion : SISchemaInstrumentationMessage {
    ? _has;
}


@property (nonatomic) CGFloat confidence; // ivar: _confidence
@property (copy, nonatomic) NSArray *contributingGroundTruths; // ivar: _contributingGroundTruths
@property (nonatomic) BOOL hasConfidence;
@property (nonatomic) BOOL hasSource;
@property (nonatomic) BOOL hasSuggestionId; // ivar: _hasSuggestionId
@property (readonly, nonatomic) NSData *jsonData;
@property (nonatomic) int source; // ivar: _source
@property (retain, nonatomic) SISchemaUUID *suggestionId; // ivar: _suggestionId


-(BOOL)isEqual:(id)arg0 ;
-(BOOL)readFrom:(id)arg0 ;
-(NSUInteger)contributingGroundTruthCount;
-(NSUInteger)hash;
-(id)applySensitiveConditionsPolicy:(id)arg0 ;
-(id)contributingGroundTruthAtIndex:(NSUInteger)arg0 ;
-(id)dictionaryRepresentation;
-(id)initWithDictionary:(id)arg0 ;
-(id)initWithJSON:(id)arg0 ;
-(id)suppressMessageUnderConditions;
-(void)addContributingGroundTruth:(id)arg0 ;
-(void)clearContributingGroundTruth;
-(void)deleteConfidence;
-(void)deleteContributingGroundTruth;
-(void)deleteSource;
-(void)deleteSuggestionId;
-(void)writeTo:(id)arg0 ;


@end


#endif