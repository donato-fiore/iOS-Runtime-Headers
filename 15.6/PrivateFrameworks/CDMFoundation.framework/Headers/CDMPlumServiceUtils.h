// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef CDMPLUMSERVICEUTILS_H
#define CDMPLUMSERVICEUTILS_H


#import <Foundation/Foundation.h>


@interface CDMPlumServiceUtils : NSObject



+(id)CDMTokenChainToUPPLTokenization:(id)arg0 ;
+(id)CDMTokenToUPPLToken:(id)arg0 ;
+(id)NLv4EmbeddingTensorToUPPLEmbeddingTensor:(id)arg0 withNumTokens:(NSUInteger)arg1 withNumLayers:(NSUInteger)arg2 withEmbeddingDim:(NSUInteger)arg3 ;
+(id)buildPLUMRequestWithTokens:(id)arg0 embedding:(id)arg1 spans:(id)arg2 numTokensOfEmbedding:(NSUInteger)arg3 numLayersOfEmbedding:(NSUInteger)arg4 embeddingDimOfEmbedding:(NSUInteger)arg5 ;
+(id)buildSetupPLUMRequest:(id)arg0 ;
+(id)nluMatchingSpanToUPPLMatchedSpan:(id)arg0 ;


@end


#endif