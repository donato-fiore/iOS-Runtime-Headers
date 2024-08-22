// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SISCHEMAUEIDICTATIONALTERNATIVETEXTPAIRSSELECTED_H
#define SISCHEMAUEIDICTATIONALTERNATIVETEXTPAIRSSELECTED_H

@class NSArray, NSData;


#import "SISchemaInstrumentationMessage.h"

@interface SISchemaUEIDictationAlternativeTextPairsSelected : SISchemaInstrumentationMessage

@property (copy, nonatomic) NSArray *alternativeSelections; // ivar: _alternativeSelections
@property (readonly, nonatomic) NSData *jsonData;


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
-(void)writeTo:(id)arg0 ;


@end


#endif