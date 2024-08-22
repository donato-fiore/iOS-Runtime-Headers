// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef FLOWSCHEMAFLOWLANGUAGECONFIDENCEARRAY_H
#define FLOWSCHEMAFLOWLANGUAGECONFIDENCEARRAY_H

@class NSData, NSArray;


#import "SISchemaInstrumentationMessage.h"

@interface FLOWSchemaFLOWLanguageConfidenceArray : SISchemaInstrumentationMessage

@property (readonly, nonatomic) NSData *jsonData;
@property (copy, nonatomic) NSArray *languageConfidences; // ivar: _languageConfidences


-(BOOL)isEqual:(id)arg0 ;
-(BOOL)readFrom:(id)arg0 ;
-(NSUInteger)hash;
-(id)applySensitiveConditionsPolicy:(id)arg0 ;
-(id)dictionaryRepresentation;
-(id)initWithDictionary:(id)arg0 ;
-(id)initWithJSON:(id)arg0 ;
-(id)languageConfidencesAtIndex:(NSUInteger)arg0 ;
-(id)suppressMessageUnderConditions;
-(void)addLanguageConfidences:(id)arg0 ;
-(void)clearLanguageConfidences;
-(void)deleteLanguageConfidences;
-(void)writeTo:(id)arg0 ;


@end


#endif