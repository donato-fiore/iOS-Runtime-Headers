// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef SIRINLUINTERNALCONTEXTRULE_H
#define SIRINLUINTERNALCONTEXTRULE_H

@class PBCodable, NSMutableArray;
@protocol NSCopying;


#import "SIRINLUEXTERNALTurnContext.h"

@interface SIRINLUINTERNALContextRule : PBCodable <NSCopying>

 {
    ? _has;
}


@property (nonatomic) BOOL applyToPromptScenarios; // ivar: _applyToPromptScenarios
@property (nonatomic) BOOL hasApplyToPromptScenarios;
@property (readonly, nonatomic) BOOL hasTurnContext;
@property (retain, nonatomic) NSMutableArray *matchingSpans; // ivar: _matchingSpans
@property (retain, nonatomic) SIRINLUEXTERNALTurnContext *turnContext; // ivar: _turnContext


-(BOOL)isEqual:(id)arg0 ;
-(BOOL)readFrom:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)dictionaryRepresentation;
-(id)matchingSpansAtIndex:(NSUInteger)arg0 ;
-(void)addMatchingSpans:(id)arg0 ;
-(void)clearMatchingSpans;
-(void)copyTo:(id)arg0 ;
-(void)mergeFrom:(id)arg0 ;
-(void)writeTo:(id)arg0 ;


@end


#endif