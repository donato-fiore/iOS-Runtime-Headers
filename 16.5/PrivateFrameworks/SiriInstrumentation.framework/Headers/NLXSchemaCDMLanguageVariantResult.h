// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef NLXSCHEMACDMLANGUAGEVARIANTRESULT_H
#define NLXSCHEMACDMLANGUAGEVARIANTRESULT_H

@class NSData, NSArray;


#import "SISchemaInstrumentationMessage.h"
#import "NLXSchemaCDMParser.h"

@interface NLXSchemaCDMLanguageVariantResult : SISchemaInstrumentationMessage

@property (retain, nonatomic) NLXSchemaCDMParser *cdmParser; // ivar: _cdmParser
@property (nonatomic) BOOL hasCdmParser; // ivar: _hasCdmParser
@property (readonly, nonatomic) NSData *jsonData;
@property (copy, nonatomic) NSArray *multilingualVariants; // ivar: _multilingualVariants


-(BOOL)isEqual:(id)arg0 ;
-(BOOL)readFrom:(id)arg0 ;
-(NSUInteger)hash;
-(id)applySensitiveConditionsPolicy:(id)arg0 ;
-(id)dictionaryRepresentation;
-(id)initWithDictionary:(id)arg0 ;
-(id)initWithJSON:(id)arg0 ;
-(id)multilingualVariantsAtIndex:(NSUInteger)arg0 ;
-(id)suppressMessageUnderConditions;
-(void)addMultilingualVariants:(id)arg0 ;
-(void)clearMultilingualVariants;
-(void)deleteCdmParser;
-(void)deleteMultilingualVariants;
-(void)writeTo:(id)arg0 ;


@end


#endif