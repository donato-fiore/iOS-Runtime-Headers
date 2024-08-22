// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef DODMLASRSCHEMADODMLASRCONFUSIONPAIRTIER1_H
#define DODMLASRSCHEMADODMLASRCONFUSIONPAIRTIER1_H

@class NSArray, NSData, NSString;


#import "SISchemaInstrumentationMessage.h"

@interface DODMLASRSchemaDODMLASRConfusionPairTier1 : SISchemaInstrumentationMessage

@property (copy, nonatomic) NSArray *correctedTokens; // ivar: _correctedTokens
@property (nonatomic) BOOL hasLeftContextToken; // ivar: _hasLeftContextToken
@property (nonatomic) BOOL hasRightContextToken; // ivar: _hasRightContextToken
@property (readonly, nonatomic) NSData *jsonData;
@property (copy, nonatomic) NSString *leftContextToken; // ivar: _leftContextToken
@property (copy, nonatomic) NSArray *recognizedTokens; // ivar: _recognizedTokens
@property (copy, nonatomic) NSString *rightContextToken; // ivar: _rightContextToken


-(BOOL)isEqual:(id)arg0 ;
-(BOOL)readFrom:(id)arg0 ;
-(NSUInteger)hash;
-(id)applySensitiveConditionsPolicy:(id)arg0 ;
-(id)correctedTokensAtIndex:(NSUInteger)arg0 ;
-(id)dictionaryRepresentation;
-(id)initWithDictionary:(id)arg0 ;
-(id)initWithJSON:(id)arg0 ;
-(id)recognizedTokensAtIndex:(NSUInteger)arg0 ;
-(id)suppressMessageUnderConditions;
-(void)addCorrectedTokens:(id)arg0 ;
-(void)addRecognizedTokens:(id)arg0 ;
-(void)clearCorrectedTokens;
-(void)clearRecognizedTokens;
-(void)deleteCorrectedTokens;
-(void)deleteLeftContextToken;
-(void)deleteRecognizedTokens;
-(void)deleteRightContextToken;
-(void)writeTo:(id)arg0 ;


@end


#endif