// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef _EARNLTOKENIZER_H
#define _EARNLTOKENIZER_H

@class EARTokenizer, NLTagger;



@interface _EARNLTokenizer : EARTokenizer {
    NLTagger *_nlTagger;
}




-(id)init;
-(id)tokenize:(id)arg0 ;
-(id)tokenize:(id)arg0 limit:(NSUInteger)arg1 ;


@end


#endif