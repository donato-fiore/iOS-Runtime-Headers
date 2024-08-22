// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef CNVSCHEMACNVDISAMBIGUATIONDIALOGGENERATED_H
#define CNVSCHEMACNVDISAMBIGUATIONDIALOGGENERATED_H

@class NSArray, NSData;


#import "SISchemaInstrumentationMessage.h"

@interface CNVSchemaCNVDisambiguationDialogGenerated : SISchemaInstrumentationMessage

@property (copy, nonatomic) NSArray *actionCandidateIds; // ivar: _actionCandidateIds
@property (readonly, nonatomic) NSData *jsonData;


-(BOOL)isEqual:(id)arg0 ;
-(BOOL)readFrom:(id)arg0 ;
-(NSUInteger)hash;
-(id)actionCandidateIdsAtIndex:(NSUInteger)arg0 ;
-(id)applySensitiveConditionsPolicy:(id)arg0 ;
-(id)dictionaryRepresentation;
-(id)initWithDictionary:(id)arg0 ;
-(id)initWithJSON:(id)arg0 ;
-(id)suppressMessageUnderConditions;
-(void)addActionCandidateIds:(id)arg0 ;
-(void)clearActionCandidateIds;
-(void)deleteActionCandidateIds;
-(void)writeTo:(id)arg0 ;


@end


#endif