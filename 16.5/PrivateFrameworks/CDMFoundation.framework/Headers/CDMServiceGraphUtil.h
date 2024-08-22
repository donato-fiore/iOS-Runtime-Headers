// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef CDMSERVICEGRAPHUTIL_H
#define CDMSERVICEGRAPHUTIL_H


#import <Foundation/Foundation.h>


@interface CDMServiceGraphUtil : NSObject



+(BOOL)debugInfoEnabled:(id)arg0 ;
+(BOOL)runUaaPNLProtoService:(id)arg0 requestId:(id)arg1 utterance:(id)arg2 locale:(id)arg3 tokenChain:(id)arg4 matchingSpans:(id)arg5 embeddingTensor:(id)arg6 currentTurn:(id)arg7 outUaapProtoRequest:(*id)arg8 outUaapProtoResponse:(*id)arg9 outError:(*id)arg10 ;
+(BOOL)spanHasMatcherName:(int)arg0 matchingSpan:(id)arg1 ;
+(id)adjustProtoMatchingSpans:(id)arg0 tokenChain:(id)arg1 outError:(*id)arg2 ;
+(id)appendMarrsSpans:(id)arg0 marrsMRSpans:(id)arg1 ;
+(id)buildLVCRequestWithTokenChain:(id)arg0 matchingSpans:(id)arg1 utterance:(id)arg2 embeddingTensor:(id)arg3 rewriteMsg:(id)arg4 nluRequestId:(id)arg5 reformedTurnInput:(id)arg6 error:(*id)arg7 ;
+(id)buildNLv4ProtoRequestWithTokenChain:(id)arg0 matchingSpans:(id)arg1 utterance:(id)arg2 embeddingTensor:(id)arg3 currentTurn:(id)arg4 requestId:(id)arg5 outError:(*id)arg6 ;
+(id)buildNormalizedUtterance:(id)arg0 ;
+(id)buildPSCRequestWithTokenChain:(id)arg0 matchingSpans:(id)arg1 utterance:(id)arg2 embeddingTensor:(id)arg3 rewriteMsg:(id)arg4 nluRequestId:(id)arg5 currentTurn:(id)arg6 error:(*id)arg7 ;
+(id)buildRepetitionResult:(id)arg0 ;
+(id)buildSNLCProtoRequestWithTokenChain:(id)arg0 matchingSpans:(id)arg1 utterance:(id)arg2 embeddingTensor:(id)arg3 rewriteMsg:(id)arg4 requestId:(id)arg5 currentTurn:(id)arg6 error:(*id)arg7 ;
+(id)embeddingsOutput:(id)arg0 embeddingConfig:(id)arg1 forFactor:(id)arg2 ;
+(id)extractPrevTurnsAsrConfidence:(id)arg0 ;
+(id)extractReferenceResolutionUtterances:(id)arg0 ;
+(id)extractStableEmbeddings:(id)arg0 ;
+(id)filterMatchingSpans:(id)arg0 withMatcherName:(int)arg1 ;
+(id)getNonWhitespaceTokenChain:(id)arg0 ;
+(id)overrideInputsFromUtterance:(id)arg0 matchingSpans:(id)arg1 tokenChain:(id)arg2 contextUpdateReformedTurnInputBundle:(id)arg3 ;
+(id)prepareCcqrServiceRequest:(id)arg0 currentTurnAsrConf:(CGFloat)arg1 tokenResponse:(id)arg2 previousTurnsAsrConf:(id)arg3 previousTurnTokenizationResponseCommand:(id)arg4 nluRequestId:(id)arg5 resultCandidateId:(id)arg6 cdmRequestId:(id)arg7 ;
+(id)prepareCcqrTokens:(id)arg0 currentTurn:(id)arg1 previousTurns:(id)arg2 utterance:(id)arg3 locale:(id)arg4 ;
+(id)runCcqrService:(id)arg0 nluRequest:(id)arg1 tokenResponse:(id)arg2 previousTurnTokenizationResponseCommand:(id)arg3 requestLink:(id)arg4 locale:(id)arg5 ;
+(void)addDebugInfo:(id)arg0 nluRequest:(id)arg1 responseObject:(id)arg2 ;


@end


#endif