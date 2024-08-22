// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef DODMLASRSCHEMADODMLASRDECODINGRESULT_H
#define DODMLASRSCHEMADODMLASRDECODINGRESULT_H

@class NSString, NSData, NSArray;


#import "SISchemaInstrumentationMessage.h"
#import "DODMLASRSchemaDODMLASRDecodingMetrics.h"

@interface DODMLASRSchemaDODMLASRDecodingResult : SISchemaInstrumentationMessage

@property (copy, nonatomic) NSString *configName; // ivar: _configName
@property (retain, nonatomic) DODMLASRSchemaDODMLASRDecodingMetrics *decodingMetrics; // ivar: _decodingMetrics
@property (nonatomic) BOOL hasConfigName; // ivar: _hasConfigName
@property (nonatomic) BOOL hasDecodingMetrics; // ivar: _hasDecodingMetrics
@property (readonly, nonatomic) NSData *jsonData;
@property (copy, nonatomic) NSArray *tokens; // ivar: _tokens
@property (copy, nonatomic) NSArray *utterances; // ivar: _utterances


-(BOOL)isEqual:(id)arg0 ;
-(BOOL)readFrom:(id)arg0 ;
-(NSUInteger)hash;
-(id)dictionaryRepresentation;
-(id)initWithDictionary:(id)arg0 ;
-(id)initWithJSON:(id)arg0 ;
-(id)tokensAtIndex:(NSUInteger)arg0 ;
-(id)utterancesAtIndex:(NSUInteger)arg0 ;
-(void)addTokens:(id)arg0 ;
-(void)addUtterances:(id)arg0 ;
-(void)clearTokens;
-(void)clearUtterances;
-(void)writeTo:(id)arg0 ;


@end


#endif