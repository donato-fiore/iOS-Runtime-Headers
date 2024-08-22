// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef NLXSCHEMACDMREQUESTENDED_H
#define NLXSCHEMACDMREQUESTENDED_H

@class NSData, NSArray;


#import "SISchemaInstrumentationMessage.h"
#import "NLXSchemaCDMLanguageVariantResult.h"

@interface NLXSchemaCDMRequestEnded : SISchemaInstrumentationMessage

@property (nonatomic) BOOL hasLanguageVariantClassifierResult; // ivar: _hasLanguageVariantClassifierResult
@property (readonly, nonatomic) NSData *jsonData;
@property (retain, nonatomic) NLXSchemaCDMLanguageVariantResult *languageVariantClassifierResult; // ivar: _languageVariantClassifierResult
@property (copy, nonatomic) NSArray *parses; // ivar: _parses


-(BOOL)isEqual:(id)arg0 ;
-(BOOL)readFrom:(id)arg0 ;
-(NSUInteger)hash;
-(id)applySensitiveConditionsPolicy:(id)arg0 ;
-(id)dictionaryRepresentation;
-(id)initWithDictionary:(id)arg0 ;
-(id)initWithJSON:(id)arg0 ;
-(id)parsesAtIndex:(NSUInteger)arg0 ;
-(id)suppressMessageUnderConditions;
-(void)addParses:(id)arg0 ;
-(void)clearParses;
-(void)deleteLanguageVariantClassifierResult;
-(void)deleteParses;
-(void)writeTo:(id)arg0 ;


@end


#endif