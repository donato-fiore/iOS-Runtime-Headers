// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SIRINLUINTERNALUAAP_PARSERUAAPPARSERREQUEST_H
#define SIRINLUINTERNALUAAP_PARSERUAAPPARSERREQUEST_H

@class PBRequest, NSMutableArray;
@protocol NSCopying;


#import "SIRINLUINTERNALNLv4EmbeddingTensor.h"
#import "SIRINLUEXTERNALUUID.h"
#import "SIRINLUINTERNALTokenChain.h"
#import "SIRINLUEXTERNALTurnInput.h"

@interface SIRINLUINTERNALUAAP_PARSERUaaPParserRequest : PBRequest <NSCopying>

 {
    ? _has;
}


@property (retain, nonatomic) SIRINLUINTERNALNLv4EmbeddingTensor *embeddings; // ivar: _embeddings
@property (readonly, nonatomic) BOOL hasEmbeddings;
@property (nonatomic) BOOL hasMaxNumParses;
@property (readonly, nonatomic) BOOL hasRequestId;
@property (readonly, nonatomic) BOOL hasTokenChain;
@property (readonly, nonatomic) BOOL hasTurnInput;
@property (retain, nonatomic) NSMutableArray *matchingSpans; // ivar: _matchingSpans
@property (nonatomic) NSUInteger maxNumParses; // ivar: _maxNumParses
@property (retain, nonatomic) SIRINLUEXTERNALUUID *requestId; // ivar: _requestId
@property (retain, nonatomic) SIRINLUINTERNALTokenChain *tokenChain; // ivar: _tokenChain
@property (retain, nonatomic) SIRINLUEXTERNALTurnInput *turnInput; // ivar: _turnInput


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