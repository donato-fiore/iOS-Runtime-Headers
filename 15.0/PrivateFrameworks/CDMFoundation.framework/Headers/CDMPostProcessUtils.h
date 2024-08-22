// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef CDMPOSTPROCESSUTILS_H
#define CDMPOSTPROCESSUTILS_H


#import <Foundation/Foundation.h>


@interface CDMPostProcessUtils : NSObject



+(id)entityKeyFrom:(id)arg0 at:(NSUInteger)arg1 ;
+(id)getCalibratedParsesCATI:(id)arg0 ;
+(id)getCalibratedParsesNLv4:(id)arg0 parsesSNLC:(id)arg1 ;
+(id)getCalibratedParsesSNLC:(id)arg0 ;
+(id)getCalibratedParsesThreshold:(id)arg0 threshold:(float)arg1 ;
+(id)getCalibratedParsesUaaP:(id)arg0 ;
+(id)getCroppedUserParses:(id)arg0 ;
+(id)getFederatedParses:(id)arg0 parsesNLv4:(id)arg1 parsesCATI:(id)arg2 parsesUaaP:(id)arg3 addDebugInfo:(id)arg4 ;
+(id)getOutputUserParses:(id)arg0 ;
+(id)getPostProcessUserParses:(id)arg0 ;
+(id)getPostProcessUserParses:(id)arg0 parsesNLv4:(id)arg1 parsesCATI:(id)arg2 addDebugInfo:(id)arg3 ;
+(id)getPostProcessUserParses:(id)arg0 parsesNLv4:(id)arg1 parsesCATI:(id)arg2 parsesUaaP:(id)arg3 addDebugInfo:(id)arg4 ;
+(id)normalizedPayloadsFrom:(NSInteger)arg0 to:(NSInteger)arg1 within:(id)arg2 ;
+(id)sortPseudoParses:(id)arg0 ;
+(id)spanIndexDict:(id)arg0 ;
+(id)usoGraphs:(id)arg0 ;
+(void)addNormalizedValuesTo:(id)arg0 alignedWith:(id)arg1 from:(id)arg2 ;
+(void)annotateNLUResponse:(id)arg0 nluRequest:(id)arg1 matchingSpans:(id)arg2 tokenChain:(id)arg3 ;
+(void)annotateParses:(id)arg0 tokenChain:(id)arg1 matchingSpans:(id)arg2 asrHypothesis:(id)arg3 ;
+(void)convertAgentToPerson:(id)arg0 ;
+(void)copyASRTimingInfoToUtteranceSpan:(id)arg0 startIndexTokenDict:(id)arg1 endIndexTokenDict:(id)arg2 ;
+(void)copyAlignedSpanIdentifierForSameType:(id)arg0 spanIndexDict:(id)arg1 utteranceAlignment:(id)arg2 entityKey:(id)arg3 ;
+(void)logPseudoParsesRanking:(id)arg0 addDebugInfo:(id)arg1 ;
+(void)splitCalibratedParses:(id)arg0 deviceParses:(id)arg1 zeroParses:(id)arg2 ;


@end


#endif