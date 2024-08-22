// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef DODMLASRSCHEMADODMLASRCONFUSIONPAIRTIER1_H
#define DODMLASRSCHEMADODMLASRCONFUSIONPAIRTIER1_H

@class NSArray, NSData;


#import "SISchemaInstrumentationMessage.h"

@interface DODMLASRSchemaDODMLASRConfusionPairTier1 : SISchemaInstrumentationMessage

@property (copy, nonatomic) NSArray *correctedTokens; // ivar: _correctedTokens
@property (readonly, nonatomic) NSData *jsonData;
@property (copy, nonatomic) NSArray *recognizedTokens; // ivar: _recognizedTokens


-(BOOL)isEqual:(id)arg0 ;
-(BOOL)readFrom:(id)arg0 ;
-(NSUInteger)hash;
-(id)correctedTokensAtIndex:(NSUInteger)arg0 ;
-(id)dictionaryRepresentation;
-(id)initWithDictionary:(id)arg0 ;
-(id)initWithJSON:(id)arg0 ;
-(id)recognizedTokensAtIndex:(NSUInteger)arg0 ;
-(void)addCorrectedTokens:(id)arg0 ;
-(void)addRecognizedTokens:(id)arg0 ;
-(void)clearCorrectedTokens;
-(void)clearRecognizedTokens;
-(void)writeTo:(id)arg0 ;


@end


#endif