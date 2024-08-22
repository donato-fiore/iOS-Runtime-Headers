// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef ASRSCHEMAASRCONFUSIONPAIRTOKEN_H
#define ASRSCHEMAASRCONFUSIONPAIRTOKEN_H

@class NSArray, NSData;


#import "SISchemaInstrumentationMessage.h"

@interface ASRSchemaASRConfusionPairToken : SISchemaInstrumentationMessage {
    ? _has;
}


@property (copy, nonatomic) NSArray *correctedTokens; // ivar: _correctedTokens
@property (nonatomic) BOOL hasRecognizedTokensStartIndex;
@property (readonly, nonatomic) NSData *jsonData;
@property (copy, nonatomic) NSArray *recognizedTokens; // ivar: _recognizedTokens
@property (nonatomic) int recognizedTokensStartIndex; // ivar: _recognizedTokensStartIndex


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
-(void)deleteRecognizedTokens;
-(void)deleteRecognizedTokensStartIndex;
-(void)writeTo:(id)arg0 ;


@end


#endif