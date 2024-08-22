// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SIRINLUINTERNALMENTION_DETECTORMENTIONDETECTORREQUEST_H
#define SIRINLUINTERNALMENTION_DETECTORMENTIONDETECTORREQUEST_H

@class PBRequest, NSString;
@protocol NSCopying;


#import "SIRINLUEXTERNALRequestID.h"
#import "SIRINLUINTERNALNLv4EmbeddingTensor.h"
#import "SIRINLUEXTERNALUUID.h"
#import "SIRINLUINTERNALTokenChain.h"

@interface SIRINLUINTERNALMENTION_DETECTORMentionDetectorRequest : PBRequest <NSCopying>

 {
    ? _has;
}


@property (retain, nonatomic) SIRINLUEXTERNALRequestID *cdmRequestId; // ivar: _cdmRequestId
@property (retain, nonatomic) SIRINLUINTERNALNLv4EmbeddingTensor *embeddingTensor; // ivar: _embeddingTensor
@property (readonly, nonatomic) BOOL hasCdmRequestId;
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
-(id)dictionaryRepresentation;
-(void)copyTo:(id)arg0 ;
-(void)mergeFrom:(id)arg0 ;
-(void)writeTo:(id)arg0 ;


@end


#endif