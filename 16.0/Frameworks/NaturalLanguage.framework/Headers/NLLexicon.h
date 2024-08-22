// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef NLLEXICON_H
#define NLLEXICON_H

@class NSString;

#import <Foundation/Foundation.h>


@interface NLLexicon : NSObject {
    NSString *_localization;
    *void _lexicon;
}


@property (readonly, copy) NSString *localization;


+(id)lexiconWithOptions:(id)arg0 error:(*id)arg1 ;
-(BOOL)getProbabilityForString:(id)arg0 probability:(*CGFloat)arg1 ;
-(BOOL)getProbabilityForTokenID:(unsigned int)arg0 probability:(*CGFloat)arg1 ;
-(NSInteger)lexiconType;
-(id)description;
-(id)entryForString:(id)arg0 ;
-(id)entryForTokenID:(unsigned int)arg0 ;
-(id)initWithLocalization:(id)arg0 ;
-(id)initWithLocalization:(id)arg0 error:(*id)arg1 ;
-(id)language;
-(id)languages;
-(struct _LXLexicon *)lexicon;
-(void)_enumerateEntriesForString:(id)arg0 usingBlock:(id)arg1 ;
-(void)dealloc;
-(void)enumerateCompletionsForPrefix:(id)arg0 usingBlock:(id)arg1 ;


@end


#endif