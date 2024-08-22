// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef _EARQUASARTOKENIZER_H
#define _EARQUASARTOKENIZER_H

@class EARTokenizer;



@interface _EARQuasarTokenizer : EARTokenizer {
    BasicTextSanitizer _sanitizer;
    ? _tokenizer;
}




+(id)extractModelRootFromNcsResourcePaths:(id)arg0 lexiconEnh:(id)arg1 tokenEnh:(id)arg2 itnEnh:(id)arg3 ;
+(id)extractModelRootFromNcsRoot:(id)arg0 ;
+(struct unique_ptr<quasar::TextTokenizer, std::default_delete<quasar::TextTokenizer>> )tokenizerWithModelRoot:(id)arg0 ;
+(struct unique_ptr<quasar::TextTokenizer, std::default_delete<quasar::TextTokenizer>> )tokenizerWithNcsRoot:(id)arg0 ;
+(struct unique_ptr<quasar::TextTokenizer, std::default_delete<quasar::TextTokenizer>> )tokenizerWithRecognizerConfigPath:(id)arg0 ;
+(struct unique_ptr<quasar::TextTokenizer, std::default_delete<quasar::TextTokenizer>> )tokenizerWithTokenizerModelRoot:(id)arg0 ;
-(id)initWithModelRoot:(id)arg0 ;
-(id)initWithNcsRoot:(id)arg0 ;
-(id)initWithTokenizerModelRoot:(id)arg0 ;
-(id)tokenize:(id)arg0 ;
-(id)tokenize:(id)arg0 limit:(NSUInteger)arg1 ;


@end


#endif