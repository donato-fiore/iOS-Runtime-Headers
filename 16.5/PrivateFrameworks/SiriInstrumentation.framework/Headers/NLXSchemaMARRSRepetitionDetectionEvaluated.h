// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef NLXSCHEMAMARRSREPETITIONDETECTIONEVALUATED_H
#define NLXSCHEMAMARRSREPETITIONDETECTIONEVALUATED_H

@class NSData;


#import "SISchemaInstrumentationMessage.h"

@interface NLXSchemaMARRSRepetitionDetectionEvaluated : SISchemaInstrumentationMessage {
    ? _has;
}


@property (nonatomic) float fullRepetitionConfidence; // ivar: _fullRepetitionConfidence
@property (nonatomic) BOOL hasFullRepetitionConfidence;
@property (nonatomic) BOOL hasNoRepetitionConfidence;
@property (nonatomic) BOOL hasPartialRepetitionConfidence;
@property (nonatomic) BOOL hasRepetitionType;
@property (nonatomic) BOOL hasRuleType;
@property (readonly, nonatomic) NSData *jsonData;
@property (nonatomic) float noRepetitionConfidence; // ivar: _noRepetitionConfidence
@property (nonatomic) float partialRepetitionConfidence; // ivar: _partialRepetitionConfidence
@property (nonatomic) int repetitionType; // ivar: _repetitionType
@property (nonatomic) int ruleType; // ivar: _ruleType


-(BOOL)isEqual:(id)arg0 ;
-(BOOL)readFrom:(id)arg0 ;
-(NSUInteger)hash;
-(id)dictionaryRepresentation;
-(id)initWithDictionary:(id)arg0 ;
-(id)initWithJSON:(id)arg0 ;
-(id)suppressMessageUnderConditions;
-(void)deleteFullRepetitionConfidence;
-(void)deleteNoRepetitionConfidence;
-(void)deletePartialRepetitionConfidence;
-(void)deleteRepetitionType;
-(void)deleteRuleType;
-(void)writeTo:(id)arg0 ;


@end


#endif