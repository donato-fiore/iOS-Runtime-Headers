// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef CDMSERVICEGRAPHUTIL_H
#define CDMSERVICEGRAPHUTIL_H


#import <Foundation/Foundation.h>


@interface CDMServiceGraphUtil : NSObject



+(BOOL)debugInfoEnabled:(id)arg0 ;
+(BOOL)prepareCcqrTokens:(id)arg0 currentTurn:(id)arg1 previousTurns:(id)arg2 utterance:(id)arg3 locale:(id)arg4 outPreviousTurnTokenResponses:(*id)arg5 outPreviousSiriResponseTokenResponses:(*id)arg6 ;
+(BOOL)runUaaPNLService:(id)arg0 requestId:(id)arg1 utterance:(id)arg2 locale:(id)arg3 tokenResponse:(id)arg4 embeddingResponse:(id)arg5 plumResponse:(id)arg6 outUaaPNLResponse:(*id)arg7 contextUpdateResponse:(id)arg8 outError:(*id)arg9 ;
+(id)adjustProtoMatchingSpans:(id)arg0 tokenChain:(id)arg1 outError:(*id)arg2 ;
+(id)buildNLv4ProtoRequestWithTokenChain:(id)arg0 matchingSpans:(id)arg1 utterance:(id)arg2 embeddingTensor:(id)arg3 currentTurn:(id)arg4 requestId:(id)arg5 outError:(*id)arg6 ;
+(id)buildNormalizedUtterance:(id)arg0 ;
+(id)buildRepetitionResult:(id)arg0 ;
+(id)buildSNLCProtoRequestWithTokenChain:(id)arg0 matchingSpans:(id)arg1 utterance:(id)arg2 embeddingTensor:(id)arg3 rewrittenUtterances:(id)arg4 requestId:(id)arg5 currentTurn:(id)arg6 error:(*id)arg7 ;
+(id)extractReferenceResolutionUtterances:(id)arg0 ;
+(id)overrideInputsFromUtterance:(id)arg0 matchingSpans:(id)arg1 tokenChain:(id)arg2 contextUpdateReformedTurnInputBundle:(id)arg3 ;
+(id)prepareCcqrServiceRequest:(id)arg0 tokenResponse:(id)arg1 previousTurnTokenResponses:(id)arg2 previousSiriResponseTokenResponses:(id)arg3 nluRequestId:(id)arg4 resultCandidateId:(id)arg5 ;
+(void)addDebugInfo:(id)arg0 nluRequest:(id)arg1 responseObject:(id)arg2 ;


@end


#endif