// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef CDMPROTOSPANMATCHSERVICE_H
#define CDMPROTOSPANMATCHSERVICE_H

@protocol OS_dispatch_queue;


#import "CDMDAGBaseService.h"
#import "CDMVocTrieProtoSpanMatcher.h"
#import "CDMDateTimeProtoSpanMatcher.h"
#import "CDMSiriVocabularyProtoSpanMatcher.h"
#import "CDMContextProtoSpanMatcher.h"
#import "CDMRegexSpanMatcher.h"

@interface CDMProtoSpanMatchService : CDMDAGBaseService {
    CDMVocTrieProtoSpanMatcher *_vocTrieSpanMatcher;
    CDMDateTimeProtoSpanMatcher *_dateTimeMatcher;
    CDMSiriVocabularyProtoSpanMatcher *_siriVocabSpanMatcher;
    CDMContextProtoSpanMatcher *_contextSpanMatcher;
    CDMRegexSpanMatcher *_regexSpanMatcher;
    NSObject<OS_dispatch_queue> *_cdmProtoSpanMatchServiceQueueAsr;
    NSObject<OS_dispatch_queue> *_cdmProtoSpanMatchServiceQueueSpanMatchers;
}




+(BOOL)shouldBeUsedForAsrAlternatives:(id)arg0 ;
+(id)convertToSpanMatchRequests:(id)arg0 nlContext:(id)arg1 ;
+(id)getSpanMatchers;
+(void)processAsrAlternative:(id)arg0 topAsrTokenChain:(id)arg1 cdmTokenChainAltAsr:(id)arg2 asrMapTopAsr:(id)arg3 asrMapAltAsr:(id)arg4 spansTopAsr:(id)arg5 asrHypothesis:(id)arg6 ;
-(BOOL)isSetupRerunNeededForRequest:(id)arg0 ;
-(NSInteger)getServiceState;
-(id)_handle:(id)arg0 ;
-(id)createErrorSetupResponseCommand:(id)arg0 ;
-(id)getContextSpanMatcher;
-(id)getDateTimeMatcher;
-(id)getRegexSpanMatcher;
-(id)getSiriVocabSpanMatcher;
-(id)getVocTrieSpanMatcher;
-(id)handle:(id)arg0 ;
-(id)handleRequestCommandTypeNames;
-(id)initWithConfig:(id)arg0 ;
-(id)prepareSpanMatchers;
-(id)setup:(id)arg0 ;
-(int)matcherNameStringToSELFEnum:(id)arg0 ;
-(void)_updateData:(id)arg0 ;
-(void)limitNumberOfSpans:(id)arg0 ;
-(void)postProcessSpans:(id)arg0 asrSpansMap:(id)arg1 asrHypothesis:(id)arg2 asrMaps:(id)arg3 topAsrTokenChain:(id)arg4 asrMapTopAsr:(id)arg5 topAsrSpansFiltered:(id)arg6 ;
-(void)spanizeAsr:(id)arg0 tokenChain:(id)arg1 spans:(id)arg2 isTopAsr:(BOOL)arg3 topAsrSpansFiltered:(id)arg4 selfMetadata:(id)arg5 ;
-(void)spanizeAsrs:(id)arg0 spanMatchers:(id)arg1 asrSpansMap:(id)arg2 topAsrSpans:(id)arg3 topAsrSpansFiltered:(id)arg4 selfMetadata:(id)arg5 ;


@end


#endif