// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef CDMNLSERVICEUTILS_H
#define CDMNLSERVICEUTILS_H


#import <Foundation/Foundation.h>


@interface CDMNLServiceUtils : NSObject



+(id)buildLVCResponse:(id)arg0 lvcRequest:(id)arg1 ;
+(id)buildPSCResponse:(id)arg0 pscRequest:(id)arg1 ;
+(id)buildPSCUserParseForExternalParserId:(id)arg0 probability:(float)arg1 rewriteMsg:(id)arg2 ;
+(id)buildSNLCProtoResponse:(id)arg0 snlcRequest:(id)arg1 parserToSet:(id)arg2 ;
+(id)buildSetupITFMRequest:(id)arg0 ;
+(id)buildSetupNLv4ProtoRequest:(id)arg0 ;
+(id)buildSetupSNLCProtoRequest:(id)arg0 ;
+(id)getPscOverrideProbabilityForLabel:(int)arg0 ;
+(struct unique_ptr<sirinluinternalnlv4_parser::NLv4ParserRequest, std::default_delete<sirinluinternalnlv4_parser::NLv4ParserRequest>> )buildNLv4ProtoRequest:(id)arg0 ;
+(void)_setWarmupRequestId:(id)arg0 ;
+(void)_sortMultilingualVariantsByScoreDescending:(id)arg0 ;
+(void)populateParser:(id)arg0 parserToSet:(id)arg1 ;


@end


#endif