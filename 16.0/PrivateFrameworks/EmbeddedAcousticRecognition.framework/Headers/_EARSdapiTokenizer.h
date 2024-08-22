// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef _EARSDAPITOKENIZER_H
#define _EARSDAPITOKENIZER_H

@class EARTokenizer;



@interface _EARSdapiTokenizer : EARTokenizer {
    BasicTextSanitizer _sanitizer;
    ? _tokenizer;
}




+(struct unique_ptr<quasar::TextTokenizer, std::default_delete<quasar::TextTokenizer>> )tokenizerWithNcsRoot:(id)arg0 ;
-(id)initWithNcsRoot:(id)arg0 ;
-(id)tokenize:(id)arg0 ;
-(id)tokenize:(id)arg0 limit:(NSUInteger)arg1 ;


@end


#endif