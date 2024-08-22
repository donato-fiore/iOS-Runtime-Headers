// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef SIRINLUINTERNALNLV4_PARSERNLV4PARSERREQUEST_H
#define SIRINLUINTERNALNLV4_PARSERNLV4PARSERREQUEST_H

@class PBRequest, NSMutableArray;
@protocol NSCopying;


#import "SIRINLUINTERNALNLv4EmbeddingTensor.h"
#import "SIRINLUEXTERNALRequestID.h"
#import "SIRINLUEXTERNALUUID.h"
#import "SIRINLUINTERNALNLV4_PARSERTokenisation.h"
#import "SIRINLUEXTERNALTurnInput.h"

@interface SIRINLUINTERNALNLV4_PARSERNLv4ParserRequest : PBRequest <NSCopying>

 {
    ? _has;
}


@property (retain, nonatomic) SIRINLUINTERNALNLv4EmbeddingTensor *embeddings; // ivar: _embeddings
@property (readonly, nonatomic) BOOL hasEmbeddings;
@property (nonatomic) BOOL hasMaxNumParses;
@property (readonly, nonatomic) BOOL hasNluRequestId;
@property (readonly, nonatomic) BOOL hasRequestId;
@property (readonly, nonatomic) BOOL hasTokenisedUtterance;
@property (readonly, nonatomic) BOOL hasTurnInput;
@property (retain, nonatomic) NSMutableArray *matchingSpans; // ivar: _matchingSpans
@property (nonatomic) NSUInteger maxNumParses; // ivar: _maxNumParses
@property (retain, nonatomic) SIRINLUEXTERNALRequestID *nluRequestId; // ivar: _nluRequestId
@property (retain, nonatomic) SIRINLUEXTERNALUUID *requestId; // ivar: _requestId
@property (retain, nonatomic) SIRINLUINTERNALNLV4_PARSERTokenisation *tokenisedUtterance; // ivar: _tokenisedUtterance
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