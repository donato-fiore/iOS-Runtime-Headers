// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef _EARCUSTOMLMBUILDER_H
#define _EARCUSTOMLMBUILDER_H


#import <Foundation/Foundation.h>


@interface _EARCustomLMBuilder : NSObject {
    unique_ptr<quasar::CustomLMBuilder, std::default_delete<quasar::CustomLMBuilder>> _customLMBuilder;
    unique_ptr<quasar::TextTokenizer, std::default_delete<quasar::TextTokenizer>> _tokenizer;
}




+(void)initialize;
-(BOOL)getFstGrammar:(id)arg0 overrideFolder:(id)arg1 weight:(float)arg2 errorOut:(*id)arg3 ;
-(id)initWithConfiguration:(id)arg0 ;


@end


#endif