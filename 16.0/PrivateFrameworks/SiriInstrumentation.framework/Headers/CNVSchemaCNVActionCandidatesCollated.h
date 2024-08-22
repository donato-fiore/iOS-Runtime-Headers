// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef CNVSCHEMACNVACTIONCANDIDATESCOLLATED_H
#define CNVSCHEMACNVACTIONCANDIDATESCOLLATED_H

@class NSArray, NSData;


#import "SISchemaInstrumentationMessage.h"

@interface CNVSchemaCNVActionCandidatesCollated : SISchemaInstrumentationMessage

@property (copy, nonatomic) NSArray *collatedActionCandidates; // ivar: _collatedActionCandidates
@property (readonly, nonatomic) NSData *jsonData;


-(BOOL)isEqual:(id)arg0 ;
-(BOOL)readFrom:(id)arg0 ;
-(NSUInteger)hash;
-(id)applySensitiveConditionsPolicy:(id)arg0 ;
-(id)collatedActionCandidatesAtIndex:(NSUInteger)arg0 ;
-(id)dictionaryRepresentation;
-(id)initWithDictionary:(id)arg0 ;
-(id)initWithJSON:(id)arg0 ;
-(id)suppressMessageUnderConditions;
-(void)addCollatedActionCandidates:(id)arg0 ;
-(void)clearCollatedActionCandidates;
-(void)deleteCollatedActionCandidates;
-(void)writeTo:(id)arg0 ;


@end


#endif