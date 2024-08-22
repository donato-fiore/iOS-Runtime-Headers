// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef CDMPLUMREQUESTCOMMAND_H
#define CDMPLUMREQUESTCOMMAND_H

@class NSArray, NSString;


#import "CDMBaseCommand.h"
#import "NLv4EmbeddingTensor.h"
#import "CDMTokenChain.h"

@interface CDMPlumRequestCommand : CDMBaseCommand

@property (readonly, nonatomic) NSUInteger embeddingDimOfEmbedding; // ivar: _embeddingDimOfEmbedding
@property (readonly, nonatomic) NLv4EmbeddingTensor *embeddingTensor; // ivar: _embeddingTensor
@property (readonly, nonatomic) NSArray *matchingSpans; // ivar: _matchingSpans
@property (readonly, nonatomic) NSString *normalizedUtterance;
@property (readonly, nonatomic) NSUInteger numLayersOfEmbedding; // ivar: _numLayersOfEmbedding
@property (readonly, nonatomic) NSUInteger numTokensOfEmbedding; // ivar: _numTokensOfEmbedding
@property (readonly, nonatomic) CDMTokenChain *tokenChain; // ivar: _tokenChain
@property (readonly, nonatomic) NSString *utterance;


-(id)commandName;
-(id)initWithTokenChain:(id)arg0 matchingSpans:(id)arg1 embeddingTensor:(id)arg2 numTokensOfEmbedding:(NSUInteger)arg3 numLayersOfEmbedding:(NSUInteger)arg4 embeddingDimOfEmbedding:(NSUInteger)arg5 ;


@end


#endif