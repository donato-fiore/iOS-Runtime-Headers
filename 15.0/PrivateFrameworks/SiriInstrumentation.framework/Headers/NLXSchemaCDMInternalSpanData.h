// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef NLXSCHEMACDMINTERNALSPANDATA_H
#define NLXSCHEMACDMINTERNALSPANDATA_H

@class NSData;


#import "SISchemaInstrumentationMessage.h"
#import "NLXSchemaPLUMSpanData.h"
#import "NLXSchemaCDMSiriVocabularySpanData.h"

@interface NLXSchemaCDMInternalSpanData : SISchemaInstrumentationMessage

@property (nonatomic) BOOL hasPlumSpanData; // ivar: _hasPlumSpanData
@property (nonatomic) BOOL hasSiriVocabularySpanData; // ivar: _hasSiriVocabularySpanData
@property (readonly, nonatomic) NSData *jsonData;
@property (retain, nonatomic) NLXSchemaPLUMSpanData *plumSpanData; // ivar: _plumSpanData
@property (retain, nonatomic) NLXSchemaCDMSiriVocabularySpanData *siriVocabularySpanData; // ivar: _siriVocabularySpanData


-(BOOL)isEqual:(id)arg0 ;
-(BOOL)readFrom:(id)arg0 ;
-(NSUInteger)hash;
-(id)dictionaryRepresentation;
-(id)initWithDictionary:(id)arg0 ;
-(id)initWithJSON:(id)arg0 ;
-(void)writeTo:(id)arg0 ;


@end


#endif