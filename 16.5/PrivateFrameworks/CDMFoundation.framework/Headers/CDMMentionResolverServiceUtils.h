// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef CDMMENTIONRESOLVERSERVICEUTILS_H
#define CDMMENTIONRESOLVERSERVICEUTILS_H


#import <Foundation/Foundation.h>


@interface CDMMentionResolverServiceUtils : NSObject



+(id)buildMRRequestWithCurTurn:(id)arg0 tokenChain:(id)arg1 matchingSpans:(id)arg2 mdResponse:(id)arg3 contextualSpanMatcherResponse:(id)arg4 embedding:(id)arg5 utterance:(id)arg6 turnIndex:(NSUInteger)arg7 nluRequestId:(id)arg8 resultCandidateId:(id)arg9 cdmRequestId:(id)arg10 ;
+(id)includeWhitespaceInIndices:(id)arg0 tokenchain:(id)arg1 ;
+(void)logMRRequestToFile:(id)arg0 ;
+(void)logMRResponseToFile:(id)arg0 ;


@end


#endif