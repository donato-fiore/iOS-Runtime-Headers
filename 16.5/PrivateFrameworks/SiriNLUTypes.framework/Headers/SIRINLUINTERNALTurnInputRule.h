// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SIRINLUINTERNALTURNINPUTRULE_H
#define SIRINLUINTERNALTURNINPUTRULE_H

@class PBCodable, NSMutableArray;
@protocol NSCopying;


#import "SIRINLUINTERNALUtteranceRule.h"

@interface SIRINLUINTERNALTurnInputRule : PBCodable <NSCopying>



@property (readonly, nonatomic) BOOL hasUtteranceRule;
@property (retain, nonatomic) NSMutableArray *negativeContextRules; // ivar: _negativeContextRules
@property (retain, nonatomic) NSMutableArray *positiveContextRules; // ivar: _positiveContextRules
@property (retain, nonatomic) SIRINLUINTERNALUtteranceRule *utteranceRule; // ivar: _utteranceRule


-(BOOL)isEqual:(id)arg0 ;
-(BOOL)readFrom:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)dictionaryRepresentation;
-(id)negativeContextRulesAtIndex:(NSUInteger)arg0 ;
-(id)positiveContextRulesAtIndex:(NSUInteger)arg0 ;
-(void)addNegativeContextRules:(id)arg0 ;
-(void)addPositiveContextRules:(id)arg0 ;
-(void)clearNegativeContextRules;
-(void)clearPositiveContextRules;
-(void)copyTo:(id)arg0 ;
-(void)mergeFrom:(id)arg0 ;
-(void)writeTo:(id)arg0 ;


@end


#endif