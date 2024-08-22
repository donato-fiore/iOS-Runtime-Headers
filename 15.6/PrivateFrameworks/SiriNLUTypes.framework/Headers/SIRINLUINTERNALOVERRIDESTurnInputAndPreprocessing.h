// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef SIRINLUINTERNALOVERRIDESTURNINPUTANDPREPROCESSING_H
#define SIRINLUINTERNALOVERRIDESTURNINPUTANDPREPROCESSING_H

@class PBCodable, NSMutableArray, NSString;
@protocol NSCopying;


#import "SIRINLUINTERNALTokenChain.h"
#import "SIRINLUEXTERNALTurnInput.h"

@interface SIRINLUINTERNALOVERRIDESTurnInputAndPreprocessing : PBCodable <NSCopying>



@property (readonly, nonatomic) BOOL hasTokenChain;
@property (readonly, nonatomic) BOOL hasTurnInput;
@property (readonly, nonatomic) BOOL hasUtterance;
@property (retain, nonatomic) NSMutableArray *matchingSpans; // ivar: _matchingSpans
@property (retain, nonatomic) SIRINLUINTERNALTokenChain *tokenChain; // ivar: _tokenChain
@property (retain, nonatomic) SIRINLUEXTERNALTurnInput *turnInput; // ivar: _turnInput
@property (retain, nonatomic) NSString *utterance; // ivar: _utterance


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