// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef NLXSCHEMACDMSIRIVOCABULARYSPANDATATIER1_H
#define NLXSCHEMACDMSIRIVOCABULARYSPANDATATIER1_H

@class NSData;


#import "SISchemaInstrumentationMessage.h"

@interface NLXSchemaCDMSiriVocabularySpanDataTier1 : SISchemaInstrumentationMessage {
    ? _has;
}


@property (nonatomic) BOOL hasPriorOrdinality;
@property (nonatomic) BOOL hasPriorScore;
@property (readonly, nonatomic) NSData *jsonData;
@property (nonatomic) unsigned int priorOrdinality; // ivar: _priorOrdinality
@property (nonatomic) CGFloat priorScore; // ivar: _priorScore


-(BOOL)isEqual:(id)arg0 ;
-(BOOL)readFrom:(id)arg0 ;
-(NSUInteger)hash;
-(id)applySensitiveConditionsPolicy:(id)arg0 ;
-(id)dictionaryRepresentation;
-(id)initWithDictionary:(id)arg0 ;
-(id)initWithJSON:(id)arg0 ;
-(id)suppressMessageUnderConditions;
-(void)deletePriorOrdinality;
-(void)deletePriorScore;
-(void)writeTo:(id)arg0 ;


@end


#endif