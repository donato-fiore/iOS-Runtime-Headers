// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef DODMLASRSCHEMADODMLASRLANGUAGEMODELMETRICS_H
#define DODMLASRSCHEMADODMLASRLANGUAGEMODELMETRICS_H

@class NSData, NSArray;


#import "SISchemaInstrumentationMessage.h"

@interface DODMLASRSchemaDODMLASRLanguageModelMetrics : SISchemaInstrumentationMessage {
    ? _has;
}


@property (nonatomic) BOOL hasLinearInterpolationWeight;
@property (nonatomic) BOOL hasNumInvalidTokens;
@property (nonatomic) BOOL hasNumInvalidUtterances;
@property (nonatomic) BOOL hasNumOutOfVocabularyWords;
@property (nonatomic) BOOL hasNumUtterances;
@property (nonatomic) BOOL hasNumWords;
@property (nonatomic) BOOL hasPerplexity;
@property (nonatomic) BOOL hasPerplexityOne;
@property (nonatomic) BOOL hasTotalDurationInMs;
@property (readonly, nonatomic) NSData *jsonData;
@property (nonatomic) float linearInterpolationWeight; // ivar: _linearInterpolationWeight
@property (copy, nonatomic) NSArray *ngramHits; // ivar: _ngramHits
@property (nonatomic) unsigned int numInvalidTokens; // ivar: _numInvalidTokens
@property (nonatomic) unsigned int numInvalidUtterances; // ivar: _numInvalidUtterances
@property (nonatomic) unsigned int numOutOfVocabularyWords; // ivar: _numOutOfVocabularyWords
@property (nonatomic) unsigned int numUtterances; // ivar: _numUtterances
@property (nonatomic) unsigned int numWords; // ivar: _numWords
@property (nonatomic) float perplexity; // ivar: _perplexity
@property (nonatomic) float perplexityOne; // ivar: _perplexityOne
@property (nonatomic) NSUInteger totalDurationInMs; // ivar: _totalDurationInMs


-(BOOL)isEqual:(id)arg0 ;
-(BOOL)readFrom:(id)arg0 ;
-(NSUInteger)hash;
-(id)applySensitiveConditionsPolicy:(id)arg0 ;
-(id)dictionaryRepresentation;
-(id)initWithDictionary:(id)arg0 ;
-(id)initWithJSON:(id)arg0 ;
-(id)ngramHitsAtIndex:(NSUInteger)arg0 ;
-(id)suppressMessageUnderConditions;
-(void)addNgramHits:(id)arg0 ;
-(void)clearNgramHits;
-(void)deleteLinearInterpolationWeight;
-(void)deleteNgramHits;
-(void)deleteNumInvalidTokens;
-(void)deleteNumInvalidUtterances;
-(void)deleteNumOutOfVocabularyWords;
-(void)deleteNumUtterances;
-(void)deleteNumWords;
-(void)deletePerplexity;
-(void)deletePerplexityOne;
-(void)deleteTotalDurationInMs;
-(void)writeTo:(id)arg0 ;


@end


#endif