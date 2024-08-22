// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef CDMEMBEDDINGRESPONSECOMMAND_H
#define CDMEMBEDDINGRESPONSECOMMAND_H



#import "CDMBaseCommand.h"
#import "NLv4EmbeddingTensor.h"
#import "CDMTokenChain.h"

@interface CDMEmbeddingResponseCommand : CDMBaseCommand

@property (readonly, nonatomic) NSUInteger embeddingDim; // ivar: _embeddingDim
@property (readonly, nonatomic) NLv4EmbeddingTensor *embeddingTensor; // ivar: _embeddingTensor
@property (readonly, nonatomic) NSUInteger numLayers; // ivar: _numLayers
@property (readonly, nonatomic) NSUInteger numTokens; // ivar: _numTokens
@property (readonly, nonatomic) CDMTokenChain *tokenChain; // ivar: _tokenChain


-(id)commandName;
-(id)dictionaryRepresentation;
-(id)initWithTokenChain:(id)arg0 embeddingTensor:(id)arg1 numTokens:(NSUInteger)arg2 numLayers:(NSUInteger)arg3 embeddingDim:(NSUInteger)arg4 ;


@end


#endif