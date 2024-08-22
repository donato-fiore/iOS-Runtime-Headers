// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef SIRINLUINTERNALMENTION_RESOLVERMENTIONRESOLVERREQUEST_H
#define SIRINLUINTERNALMENTION_RESOLVERMENTIONRESOLVERREQUEST_H

@class PBRequest, NSMutableArray, NSString;
@protocol NSCopying;


#import "SIRINLUINTERNALNLv4EmbeddingTensor.h"
#import "SIRINLUEXTERNALUUID.h"
#import "SIRINLUINTERNALTokenChain.h"

@interface SIRINLUINTERNALMENTION_RESOLVERMentionResolverRequest : PBRequest <NSCopying>

 {
    ? _has;
}


@property (retain, nonatomic) NSMutableArray *detectedMentions; // ivar: _detectedMentions
@property (retain, nonatomic) SIRINLUINTERNALNLv4EmbeddingTensor *embeddingTensor; // ivar: _embeddingTensor
@property (retain, nonatomic) NSMutableArray *entityCandidates; // ivar: _entityCandidates
@property (readonly, nonatomic) BOOL hasEmbeddingTensor;
@property (nonatomic) BOOL hasMaxCandidates;
@property (readonly, nonatomic) BOOL hasNluRequestId;
@property (readonly, nonatomic) BOOL hasRequestId;
@property (readonly, nonatomic) BOOL hasResultCandidateId;
@property (readonly, nonatomic) BOOL hasTokenChain;
@property (readonly, nonatomic) BOOL hasUtterance;
@property (nonatomic) NSUInteger maxCandidates; // ivar: _maxCandidates
@property (retain, nonatomic) SIRINLUEXTERNALUUID *nluRequestId; // ivar: _nluRequestId
@property (retain, nonatomic) SIRINLUEXTERNALUUID *requestId; // ivar: _requestId
@property (retain, nonatomic) NSString *resultCandidateId; // ivar: _resultCandidateId
@property (retain, nonatomic) SIRINLUINTERNALTokenChain *tokenChain; // ivar: _tokenChain
@property (retain, nonatomic) NSString *utterance; // ivar: _utterance


-(BOOL)isEqual:(id)arg0 ;
-(BOOL)readFrom:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)detectedMentionsAtIndex:(NSUInteger)arg0 ;
-(id)dictionaryRepresentation;
-(id)entityCandidatesAtIndex:(NSUInteger)arg0 ;
-(void)addDetectedMentions:(id)arg0 ;
-(void)addEntityCandidates:(id)arg0 ;
-(void)clearDetectedMentions;
-(void)clearEntityCandidates;
-(void)copyTo:(id)arg0 ;
-(void)mergeFrom:(id)arg0 ;
-(void)writeTo:(id)arg0 ;


@end


#endif