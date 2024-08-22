// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef SIRINLUTYPESCONVERTERUTILS_H
#define SIRINLUTYPESCONVERTERUTILS_H


#import <Foundation/Foundation.h>


@interface SiriNLUTypesConverterUtils : NSObject



+(id)convertMatchingSpanFromCppToObjC:(*void)arg0 ;
+(id)convertNLv4ParserRequestFromCppToObjC:(*void)arg0 ;
+(id)convertNLv4ParserResponseFromCppToObjC:(*void)arg0 ;
+(struct Reader )getCppReaderFromObjCObject:(id)arg0 ;
+(struct unique_ptr<sirinluexternal::EntityCandidate, std::default_delete<sirinluexternal::EntityCandidate>> )convertEntityCandidateFromObjCToCpp:(id)arg0 ;
+(struct unique_ptr<sirinluexternal::UsoGraph, std::default_delete<sirinluexternal::UsoGraph>> )convertUsoGraphFromObjCToCpp:(id)arg0 ;
+(struct unique_ptr<sirinluinternal::MatchingSpan, std::default_delete<sirinluinternal::MatchingSpan>> )convertMatchingSpanFromObjCToCpp:(id)arg0 ;
+(struct unique_ptr<sirinluinternal::NLv4EmbeddingTensor, std::default_delete<sirinluinternal::NLv4EmbeddingTensor>> )convertNLv4EmbeddingTensorFromObjCToCpp:(id)arg0 ;
+(struct unique_ptr<sirinluinternal::TokenChain, std::default_delete<sirinluinternal::TokenChain>> )convertTokenChainFromObjCToCpp:(id)arg0 ;
+(struct unique_ptr<sirinluinternalnlv4_parser::NLv4ParserRequest, std::default_delete<sirinluinternalnlv4_parser::NLv4ParserRequest>> )convertNLv4ParserRequestToCpp:(id)arg0 ;


@end


#endif