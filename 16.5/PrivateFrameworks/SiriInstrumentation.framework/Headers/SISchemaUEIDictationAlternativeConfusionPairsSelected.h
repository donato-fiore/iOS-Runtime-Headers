// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SISCHEMAUEIDICTATIONALTERNATIVECONFUSIONPAIRSSELECTED_H
#define SISCHEMAUEIDICTATIONALTERNATIVECONFUSIONPAIRSSELECTED_H

@class NSArray, NSData;


#import "SISchemaInstrumentationMessage.h"

@interface SISchemaUEIDictationAlternativeConfusionPairsSelected : SISchemaInstrumentationMessage {
    ? _has;
}


@property (copy, nonatomic) NSArray *alternativeSelections; // ivar: _alternativeSelections
@property (nonatomic) BOOL hasNumDeletions;
@property (nonatomic) BOOL hasNumInsertions;
@property (nonatomic) BOOL hasNumSubstitutions;
@property (readonly, nonatomic) NSData *jsonData;
@property (nonatomic) int numDeletions; // ivar: _numDeletions
@property (nonatomic) int numInsertions; // ivar: _numInsertions
@property (nonatomic) int numSubstitutions; // ivar: _numSubstitutions


-(BOOL)isEqual:(id)arg0 ;
-(BOOL)readFrom:(id)arg0 ;
-(NSUInteger)hash;
-(id)alternativeSelectionsAtIndex:(NSUInteger)arg0 ;
-(id)applySensitiveConditionsPolicy:(id)arg0 ;
-(id)dictionaryRepresentation;
-(id)initWithDictionary:(id)arg0 ;
-(id)initWithJSON:(id)arg0 ;
-(id)suppressMessageUnderConditions;
-(void)addAlternativeSelections:(id)arg0 ;
-(void)clearAlternativeSelections;
-(void)deleteAlternativeSelections;
-(void)deleteNumDeletions;
-(void)deleteNumInsertions;
-(void)deleteNumSubstitutions;
-(void)writeTo:(id)arg0 ;


@end


#endif