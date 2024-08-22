// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef _EARTOKENIZER_H
#define _EARTOKENIZER_H


#import <Foundation/Foundation.h>


@interface _EARTokenizer : NSObject {
    BasicTextSanitizer _sanitizer;
    ? _tokenizer;
}




+(struct unique_ptr<quasar::TextTokenizer, std::default_delete<quasar::TextTokenizer>> )tokenizerWithNcsRoot:(id)arg0 ;
-(id)initWithNcsRoot:(id)arg0 ;
-(id)tokenize:(id)arg0 ;


@end


#endif