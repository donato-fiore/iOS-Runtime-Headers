// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef CNVSCHEMACNVACTIONCANDIDATESGENERATEDTIER1_H
#define CNVSCHEMACNVACTIONCANDIDATESGENERATEDTIER1_H

@class NSData, NSArray;


#import "SISchemaInstrumentationMessage.h"

@interface CNVSchemaCNVActionCandidatesGeneratedTier1 : SISchemaInstrumentationMessage

@property (readonly, nonatomic) NSData *jsonData;
@property (copy, nonatomic) NSArray *metadataTier1s; // ivar: _metadataTier1s


-(BOOL)isEqual:(id)arg0 ;
-(BOOL)readFrom:(id)arg0 ;
-(NSUInteger)hash;
-(NSUInteger)metadataTier1Count;
-(id)applySensitiveConditionsPolicy:(id)arg0 ;
-(id)dictionaryRepresentation;
-(id)initWithDictionary:(id)arg0 ;
-(id)initWithJSON:(id)arg0 ;
-(id)metadataTier1AtIndex:(NSUInteger)arg0 ;
-(id)suppressMessageUnderConditions;
-(void)addMetadataTier1:(id)arg0 ;
-(void)clearMetadataTier1;
-(void)deleteMetadataTier1;
-(void)writeTo:(id)arg0 ;


@end


#endif