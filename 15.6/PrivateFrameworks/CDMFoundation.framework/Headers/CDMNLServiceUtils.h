// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef CDMNLSERVICEUTILS_H
#define CDMNLSERVICEUTILS_H


#import <Foundation/Foundation.h>


@interface CDMNLServiceUtils : NSObject



+(id)buildPSCResponse:(id)arg0 pscRequest:(id)arg1 ;
+(id)buildSNLCProtoResponse:(id)arg0 snlcRequest:(id)arg1 parserToSet:(id)arg2 ;
+(id)buildSetupNLv4ProtoRequest:(id)arg0 ;
+(id)buildSetupPSCRequest:(id)arg0 ;
+(id)buildSetupSNLCProtoRequest:(id)arg0 ;
+(struct unique_ptr<sirinluinternalnlv4_parser::NLv4ParserRequest, std::default_delete<sirinluinternalnlv4_parser::NLv4ParserRequest>> )buildNLv4ProtoRequest:(id)arg0 ;
+(void)populateParser:(id)arg0 parserToSet:(id)arg1 ;


@end


#endif