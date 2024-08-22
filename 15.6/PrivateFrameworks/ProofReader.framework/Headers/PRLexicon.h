// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef PRLEXICON_H
#define PRLEXICON_H

@class NSString;

#import <Foundation/Foundation.h>


@interface PRLexicon : NSObject {
    NSString *_localization;
    NSString *_unigramsPath;
    *void _lexicon;
}




+(id)lexiconWithLexicon:(*void)arg0 ;
+(id)lexiconWithLocalization:(id)arg0 unigramsPath:(id)arg1 ;
-(BOOL)getProbabilityForString:(id)arg0 probability:(*CGFloat)arg1 ;
-(BOOL)getProbabilityForTokenID:(unsigned int)arg0 probability:(*CGFloat)arg1 ;
-(id)createCursor;
-(id)description;
-(id)initWithLexicon:(*void)arg0 ;
-(id)initWithLocalization:(id)arg0 unigramsPath:(id)arg1 ;
-(id)stringForTokenID:(unsigned int)arg0 ;
-(struct _LXLexicon *)lexicon;
-(unsigned int)tokenIDForString:(id)arg0 ;
-(void)dealloc;
-(void)enumerateCompletionEntriesForPrefix:(id)arg0 maxCompletions:(NSUInteger)arg1 withBlock:(id)arg2 ;
-(void)enumerateCompletionsForPrefix:(id)arg0 maxCompletions:(NSUInteger)arg1 withBlock:(id)arg2 ;
-(void)enumerateCorrectionEntriesForWord:(id)arg0 maxCorrections:(NSUInteger)arg1 withBlock:(id)arg2 ;
-(void)enumerateEntriesForString:(id)arg0 usingBlock:(id)arg1 ;


@end


#endif