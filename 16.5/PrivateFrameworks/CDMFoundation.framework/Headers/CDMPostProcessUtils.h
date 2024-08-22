// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef CDMPOSTPROCESSUTILS_H
#define CDMPOSTPROCESSUTILS_H


#import <Foundation/Foundation.h>


@interface CDMPostProcessUtils : NSObject



+(BOOL)hasEntityEdgeTo:(int)arg0 inGraph:(id)arg1 ;
+(BOOL)hasTagNamespace:(id)arg0 ;
+(BOOL)skipAddingSpanIdentifier:(id)arg0 span:(id)arg1 locale:(id)arg2 ;
+(id)entityKeyFrom:(id)arg0 at:(NSUInteger)arg1 ;
+(id)filterAndConvertInternalMatchingSpan:(id)arg0 ;
+(id)filterAndConvertInternalMatchingSpans:(id)arg0 ;
+(id)getAlignedIdentifierSpans:(id)arg0 ;
+(id)getCroppedUserParses:(id)arg0 ;
+(id)getFederatedParses:(id)arg0 parsesNLv4:(id)arg1 parsesCATI:(id)arg2 parsesUaaP:(id)arg3 parsesPSC:(id)arg4 parsesAutoShortcuts:(id)arg5 parsesAppendOverrides:(id)arg6 parsesSSU:(id)arg7 addDebugInfo:(id)arg8 ;
+(id)getGroupIndexDict:(id)arg0 ;
+(id)getPostProcessUserParses:(id)arg0 ;
+(id)getPostProcessUserParses:(id)arg0 parsesNLv4:(id)arg1 parsesCATI:(id)arg2 addDebugInfo:(id)arg3 ;
+(id)getPostProcessUserParses:(id)arg0 parsesNLv4:(id)arg1 parsesCATI:(id)arg2 parsesUaaP:(id)arg3 addDebugInfo:(id)arg4 ;
+(id)getPostProcessUserParses:(id)arg0 parsesNLv4:(id)arg1 parsesCATI:(id)arg2 parsesUaaP:(id)arg3 parsesPSC:(id)arg4 parsesAutoShortcuts:(id)arg5 parsesAppendOverrides:(id)arg6 parsesSSU:(id)arg7 addDebugInfo:(id)arg8 ;
+(id)normalizedPayloadsFrom:(NSInteger)arg0 to:(NSInteger)arg1 within:(id)arg2 ;
+(id)runPostProcess:(id)arg0 snlcRequest:(id)arg1 snlcResponse:(id)arg2 nLv4Request:(id)arg3 nLv4Response:(id)arg4 uaapNLProtoResponse:(id)arg5 catiProtoResponse:(id)arg6 pscRequest:(id)arg7 pscResponse:(id)arg8 lvcResponse:(id)arg9 overridesProtoResponse:(id)arg10 mdRequest:(id)arg11 mdResponse:(id)arg12 mrRequest:(id)arg13 mrResponse:(id)arg14 spanProtoResponse:(id)arg15 rdResponse:(id)arg16 tokenProtoResponse:(id)arg17 ssuResponse:(id)arg18 correctionOutcome:(id)arg19 nluRequest:(id)arg20 graphInput:(id)arg21 debugText:(id)arg22 ;
+(id)selectParsesFromUserParsesUaaP:(id)arg0 userParsesShortcut:(id)arg1 userParsesReplaceOverrides:(id)arg2 userParsesAppendOverrides:(id)arg3 userParsesSNLC:(id)arg4 userParsesNLv4:(id)arg5 userParsesCATI:(id)arg6 userParsesPSC:(id)arg7 userParsesAutoShortcuts:(id)arg8 userParsesSSU:(id)arg9 addDebugInfo:(id)arg10 ;
+(id)sortParses:(id)arg0 ;
+(id)spanIndexDict:(id)arg0 ;
+(id)usoGraphs:(id)arg0 ;
+(unsigned char)isExternalMatchingSpan:(id)arg0 fromMatcher:(int)arg1 ;
+(unsigned char)isInternalMatchingSpan:(id)arg0 fromMatcher:(int)arg1 ;
+(void)addNormalizedValuesTo:(id)arg0 alignedWith:(id)arg1 from:(id)arg2 ;
+(void)annotateDUDAWithMRRRewrittenUtterance:(id)arg0 matchingSpans:(id)arg1 userDialogAct:(id)arg2 ;
+(void)annotateDelegatedUDAParses:(id)arg0 matchingSpans:(id)arg1 mrRewrittenUtterance:(id)arg2 ;
+(void)annotateNLUResponse:(id)arg0 nluRequest:(id)arg1 matchingSpans:(id)arg2 tokenChain:(id)arg3 ;
+(void)annotateParses:(id)arg0 tokenChain:(id)arg1 matchingSpans:(id)arg2 asrHypothesis:(id)arg3 ;
+(void)annotateUserParses:(id)arg0 ccqrCorrectionOutcome:(id)arg1 nlv4Parses:(id)arg2 overrideParses:(id)arg3 ;
+(void)copyASRTimingInfoToUtteranceSpan:(id)arg0 startIndexTokenDict:(id)arg1 endIndexTokenDict:(id)arg2 ;
+(void)copyAlignedSpanIdentifierForSameType:(id)arg0 spanIndexDict:(id)arg1 utteranceAlignment:(id)arg2 entityKey:(id)arg3 groupIndexDict:(id)arg4 locale:(id)arg5 ;
+(void)copyMentionResolverSpanIdentifiers:(id)arg0 fromMatchingSpans:(id)arg1 toParseGraph:(id)arg2 ;
+(void)createIdentifierGroups:(id)arg0 spans:(id)arg1 parseEntityKey:(id)arg2 parseAlignment:(id)arg3 interpretationGroupCurrentMax:(id)arg4 ;
+(void)logParsesRanking:(id)arg0 addDebugInfo:(id)arg1 ;
+(void)populateComparableProbabilityForParsesNLv4:(id)arg0 parsesSNLC:(id)arg1 ;
+(void)populateComparableProbabilityFromProbabilityParses:(id)arg0 ;
+(void)populateComparableProbabilityParses:(id)arg0 threshold:(float)arg1 ;
+(void)populateComparableProbabilityParsesAutoShortcuts:(id)arg0 ;
+(void)populateComparableProbabilityParsesCATI:(id)arg0 ;
+(void)populateComparableProbabilityParsesPSC:(id)arg0 ;
+(void)populateComparableProbabilityParsesSNLC:(id)arg0 deviceParses:(id)arg1 ;
+(void)populateComparableProbabilityParsesSSU:(id)arg0 ;
+(void)populateComparableProbabilityParsesUaaP:(id)arg0 ;
+(void)runFeatureStore:(id)arg0 nluResponse:(id)arg1 snlcRequest:(id)arg2 snlcResponse:(id)arg3 pscRequest:(id)arg4 pscResponse:(id)arg5 spanProtoResponse:(id)arg6 tokenProtoResponse:(id)arg7 mdRequest:(id)arg8 mdResponse:(id)arg9 mrRequest:(id)arg10 mrResponse:(id)arg11 nLv4Request:(id)arg12 nLv4Response:(id)arg13 ;
+(void)splitParses:(id)arg0 deviceParses:(id)arg1 zeroParses:(id)arg2 ;
+(void)stripBugFixNamespaceSuffix:(id)arg0 ;


@end


#endif