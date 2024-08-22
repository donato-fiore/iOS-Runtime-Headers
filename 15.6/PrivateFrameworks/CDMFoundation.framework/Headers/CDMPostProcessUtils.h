// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef CDMPOSTPROCESSUTILS_H
#define CDMPOSTPROCESSUTILS_H


#import <Foundation/Foundation.h>


@interface CDMPostProcessUtils : NSObject



+(BOOL)hasEntityEdgeTo:(int)arg0 inGraph:(id)arg1 ;
+(id)entityKeyFrom:(id)arg0 at:(NSUInteger)arg1 ;
+(id)filterAndConvertInternalMatchingSpan:(id)arg0 ;
+(id)filterAndConvertInternalMatchingSpans:(id)arg0 ;
+(id)getCroppedUserParses:(id)arg0 ;
+(id)getFederatedParses:(id)arg0 parsesNLv4:(id)arg1 parsesCATI:(id)arg2 parsesUaaP:(id)arg3 parsesPSC:(id)arg4 addDebugInfo:(id)arg5 ;
+(id)getGroupIndexDict:(id)arg0 ;
+(id)getPostProcessUserParses:(id)arg0 ;
+(id)getPostProcessUserParses:(id)arg0 parsesNLv4:(id)arg1 parsesCATI:(id)arg2 addDebugInfo:(id)arg3 ;
+(id)getPostProcessUserParses:(id)arg0 parsesNLv4:(id)arg1 parsesCATI:(id)arg2 parsesUaaP:(id)arg3 addDebugInfo:(id)arg4 ;
+(id)getPostProcessUserParses:(id)arg0 parsesNLv4:(id)arg1 parsesCATI:(id)arg2 parsesUaaP:(id)arg3 parsesPSC:(id)arg4 addDebugInfo:(id)arg5 ;
+(id)normalizedPayloadsFrom:(NSInteger)arg0 to:(NSInteger)arg1 within:(id)arg2 ;
+(id)runPostProcess:(id)arg0 snlcRequest:(id)arg1 snlcResponse:(id)arg2 nLv4Request:(id)arg3 nLv4Response:(id)arg4 uaapNLProtoResponse:(id)arg5 catiProtoResponse:(id)arg6 pscRequest:(id)arg7 pscResponse:(id)arg8 overridesProtoResponse:(id)arg9 mdRequest:(id)arg10 mdResponse:(id)arg11 mrRequest:(id)arg12 mrResponse:(id)arg13 spanProtoResponse:(id)arg14 rdResponse:(id)arg15 tokenProtoResponse:(id)arg16 nluRequest:(id)arg17 graphInput:(id)arg18 debugText:(id)arg19 ;
+(id)sortParses:(id)arg0 ;
+(id)spanIndexDict:(id)arg0 ;
+(id)usoGraphs:(id)arg0 ;
+(void)addNormalizedValuesTo:(id)arg0 alignedWith:(id)arg1 from:(id)arg2 ;
+(void)annotateDelegatedUDAParses:(id)arg0 matchingSpans:(id)arg1 ;
+(void)annotateNLUResponse:(id)arg0 nluRequest:(id)arg1 matchingSpans:(id)arg2 tokenChain:(id)arg3 ;
+(void)annotateParses:(id)arg0 tokenChain:(id)arg1 matchingSpans:(id)arg2 asrHypothesis:(id)arg3 ;
+(void)convertAgentToPerson:(id)arg0 ;
+(void)copyASRTimingInfoToUtteranceSpan:(id)arg0 startIndexTokenDict:(id)arg1 endIndexTokenDict:(id)arg2 ;
+(void)copyAlignedSpanIdentifierForSameType:(id)arg0 spanIndexDict:(id)arg1 utteranceAlignment:(id)arg2 entityKey:(id)arg3 groupIndexDict:(id)arg4 ;
+(void)copyMentionResolverSpanIdentifiers:(id)arg0 fromMatchingSpans:(id)arg1 toParseGraph:(id)arg2 ;
+(void)logParsesRanking:(id)arg0 addDebugInfo:(id)arg1 ;
+(void)populateComparableProbabilityForParsesNLv4:(id)arg0 parsesSNLC:(id)arg1 ;
+(void)populateComparableProbabilityFromProbabilityParses:(id)arg0 ;
+(void)populateComparableProbabilityParses:(id)arg0 threshold:(float)arg1 ;
+(void)populateComparableProbabilityParsesCATI:(id)arg0 ;
+(void)populateComparableProbabilityParsesPSC:(id)arg0 ;
+(void)populateComparableProbabilityParsesUaaP:(id)arg0 ;
+(void)runFeatureStore:(id)arg0 nluResponse:(id)arg1 snlcRequest:(id)arg2 snlcResponse:(id)arg3 pscRequest:(id)arg4 pscResponse:(id)arg5 spanProtoResponse:(id)arg6 tokenProtoResponse:(id)arg7 mdRequest:(id)arg8 mdResponse:(id)arg9 mrRequest:(id)arg10 mrResponse:(id)arg11 nLv4Request:(id)arg12 nLv4Response:(id)arg13 ;
+(void)splitParses:(id)arg0 deviceParses:(id)arg1 zeroParses:(id)arg2 ;


@end


#endif