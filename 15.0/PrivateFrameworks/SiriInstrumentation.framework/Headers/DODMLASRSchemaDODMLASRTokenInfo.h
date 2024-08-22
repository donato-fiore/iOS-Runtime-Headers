// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef DODMLASRSCHEMADODMLASRTOKENINFO_H
#define DODMLASRSCHEMADODMLASRTOKENINFO_H

@class NSData, NSArray;


#import "SISchemaInstrumentationMessage.h"
#import "ASRSchemaASRToken.h"

@interface DODMLASRSchemaDODMLASRTokenInfo : SISchemaInstrumentationMessage {
    ? _has;
}


@property (nonatomic) float acousticCost; // ivar: _acousticCost
@property (nonatomic) BOOL hasAcousticCost;
@property (nonatomic) BOOL hasSilenceAcousticCost;
@property (nonatomic) BOOL hasToken; // ivar: _hasToken
@property (readonly, nonatomic) NSData *jsonData;
@property (copy, nonatomic) NSArray *languageModelCosts; // ivar: _languageModelCosts
@property (copy, nonatomic) NSArray *numBackoffs; // ivar: _numBackoffs
@property (nonatomic) float silenceAcousticCost; // ivar: _silenceAcousticCost
@property (retain, nonatomic) ASRSchemaASRToken *token; // ivar: _token


-(BOOL)isEqual:(id)arg0 ;
-(BOOL)readFrom:(id)arg0 ;
-(NSUInteger)hash;
-(float)languageModelCostsAtIndex:(NSUInteger)arg0 ;
-(id)dictionaryRepresentation;
-(id)initWithDictionary:(id)arg0 ;
-(id)initWithJSON:(id)arg0 ;
-(unsigned int)numBackoffsAtIndex:(NSUInteger)arg0 ;
-(void)addLanguageModelCosts:(float)arg0 ;
-(void)addNumBackoffs:(unsigned int)arg0 ;
-(void)clearLanguageModelCosts;
-(void)clearNumBackoffs;
-(void)writeTo:(id)arg0 ;


@end


#endif