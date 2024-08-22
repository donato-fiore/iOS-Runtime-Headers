// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef SIRINLUEXTERNALASRHYPOTHESIS_H
#define SIRINLUEXTERNALASRHYPOTHESIS_H

@class PBCodable, NSMutableArray, NSString;
@protocol NSCopying;


#import "SIRINLUEXTERNALUUID.h"

@interface SIRINLUEXTERNALAsrHypothesis : PBCodable <NSCopying>

 {
    ? _has;
}


@property (retain, nonatomic) NSMutableArray *asrTokens; // ivar: _asrTokens
@property (readonly, nonatomic) BOOL hasIdA;
@property (nonatomic) BOOL hasProbability;
@property (readonly, nonatomic) BOOL hasUtterance;
@property (retain, nonatomic) SIRINLUEXTERNALUUID *idA; // ivar: _idA
@property (nonatomic) CGFloat probability; // ivar: _probability
@property (retain, nonatomic) NSMutableArray *rewrittenUtterances; // ivar: _rewrittenUtterances
@property (retain, nonatomic) NSString *utterance; // ivar: _utterance


-(BOOL)isEqual:(id)arg0 ;
-(BOOL)readFrom:(id)arg0 ;
-(NSUInteger)hash;
-(id)asrTokensAtIndex:(NSUInteger)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)dictionaryRepresentation;
-(id)rewrittenUtterancesAtIndex:(NSUInteger)arg0 ;
-(void)addAsrTokens:(id)arg0 ;
-(void)addRewrittenUtterances:(id)arg0 ;
-(void)clearAsrTokens;
-(void)clearRewrittenUtterances;
-(void)copyTo:(id)arg0 ;
-(void)mergeFrom:(id)arg0 ;
-(void)writeTo:(id)arg0 ;


@end


#endif