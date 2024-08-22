// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef NLCFROLANGUAGERECOGNIZER_H
#define NLCFROLANGUAGERECOGNIZER_H

@class NSMutableString;


#import "NLLanguageRecognizer.h"

@interface NLCFROLanguageRecognizer : NLLanguageRecognizer {
    *void _tagger;
    NSMutableString *_string;
}




+(id)dominantLanguageForString:(id)arg0 ;
-(id)dominantLanguage;
-(id)init;
-(id)languageHypothesesWithMaximum:(NSUInteger)arg0 ;
-(void)dealloc;
-(void)processString:(id)arg0 ;
-(void)reset;


@end


#endif