// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef CDMTOKENIZERPROTOSERVICE_H
#define CDMTOKENIZERPROTOSERVICE_H



#import "CDMDAGBaseService.h"
#import "CDMTokenizer.h"

@interface CDMTokenizerProtoService : CDMDAGBaseService {
    CDMTokenizer *_tokenizer;
}




+(id)createProtoTokenRequestWithAsrOutputs:(id)arg0 locale:(id)arg1 ;
+(id)createProtoTokenRequestWithText:(id)arg0 locale:(id)arg1 ;
+(id)tokenChainFromProto:(id)arg0 ;
-(id)handle:(id)arg0 ;
-(id)handleRequestCommandTypeNames;
-(id)setup:(id)arg0 ;


@end


#endif