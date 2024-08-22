// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef CNVSCHEMACOLLATEDACTIONCANDIDATE_H
#define CNVSCHEMACOLLATEDACTIONCANDIDATE_H

@class NSArray, NSData;


#import "SISchemaInstrumentationMessage.h"
#import "SISchemaUUID.h"

@interface CNVSchemaCollatedActionCandidate : SISchemaInstrumentationMessage

@property (copy, nonatomic) NSArray *alternativeActionCandidateIds; // ivar: _alternativeActionCandidateIds
@property (nonatomic) BOOL hasPrimaryActionCandidateId; // ivar: _hasPrimaryActionCandidateId
@property (readonly, nonatomic) NSData *jsonData;
@property (retain, nonatomic) SISchemaUUID *primaryActionCandidateId; // ivar: _primaryActionCandidateId


-(BOOL)isEqual:(id)arg0 ;
-(BOOL)readFrom:(id)arg0 ;
-(NSUInteger)hash;
-(id)alternativeActionCandidateIdsAtIndex:(NSUInteger)arg0 ;
-(id)applySensitiveConditionsPolicy:(id)arg0 ;
-(id)dictionaryRepresentation;
-(id)initWithDictionary:(id)arg0 ;
-(id)initWithJSON:(id)arg0 ;
-(id)suppressMessageUnderConditions;
-(void)addAlternativeActionCandidateIds:(id)arg0 ;
-(void)clearAlternativeActionCandidateIds;
-(void)deleteAlternativeActionCandidateIds;
-(void)deletePrimaryActionCandidateId;
-(void)writeTo:(id)arg0 ;


@end


#endif