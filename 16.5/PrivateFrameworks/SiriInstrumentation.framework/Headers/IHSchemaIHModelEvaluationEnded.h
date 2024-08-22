// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef IHSCHEMAIHMODELEVALUATIONENDED_H
#define IHSCHEMAIHMODELEVALUATIONENDED_H

@class NSData;


#import "SISchemaInstrumentationMessage.h"
#import "IHSchemaIHScore.h"

@interface IHSchemaIHModelEvaluationEnded : SISchemaInstrumentationMessage

@property (nonatomic) BOOL hasScore; // ivar: _hasScore
@property (readonly, nonatomic) NSData *jsonData;
@property (retain, nonatomic) IHSchemaIHScore *score; // ivar: _score


-(BOOL)isEqual:(id)arg0 ;
-(BOOL)readFrom:(id)arg0 ;
-(NSUInteger)hash;
-(id)applySensitiveConditionsPolicy:(id)arg0 ;
-(id)dictionaryRepresentation;
-(id)initWithDictionary:(id)arg0 ;
-(id)initWithJSON:(id)arg0 ;
-(id)suppressMessageUnderConditions;
-(void)deleteScore;
-(void)writeTo:(id)arg0 ;


@end


#endif