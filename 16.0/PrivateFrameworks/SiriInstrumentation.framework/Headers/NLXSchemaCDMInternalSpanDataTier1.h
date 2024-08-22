// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef NLXSCHEMACDMINTERNALSPANDATATIER1_H
#define NLXSCHEMACDMINTERNALSPANDATATIER1_H

@class NSData;


#import "SISchemaInstrumentationMessage.h"
#import "NLXSchemaCDMSiriVocabularySpanDataTier1.h"

@interface NLXSchemaCDMInternalSpanDataTier1 : SISchemaInstrumentationMessage

@property (nonatomic) BOOL hasSiriVocabularySpanData; // ivar: _hasSiriVocabularySpanData
@property (readonly, nonatomic) NSData *jsonData;
@property (retain, nonatomic) NLXSchemaCDMSiriVocabularySpanDataTier1 *siriVocabularySpanData; // ivar: _siriVocabularySpanData


-(BOOL)isEqual:(id)arg0 ;
-(BOOL)readFrom:(id)arg0 ;
-(NSUInteger)hash;
-(id)applySensitiveConditionsPolicy:(id)arg0 ;
-(id)dictionaryRepresentation;
-(id)initWithDictionary:(id)arg0 ;
-(id)initWithJSON:(id)arg0 ;
-(id)suppressMessageUnderConditions;
-(void)deleteSiriVocabularySpanData;
-(void)writeTo:(id)arg0 ;


@end


#endif