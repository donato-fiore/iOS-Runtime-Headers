// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef PRLEXICONCURSOR_H
#define PRLEXICONCURSOR_H


#import <Foundation/Foundation.h>

#import "PRLexicon.h"

@interface PRLexiconCursor : NSObject {
    PRLexicon *_lexicon;
    *_LXCursor _cursor;
}




-(BOOL)hasChildren;
-(BOOL)hasEntries;
-(BOOL)isValid;
-(CGFloat)prefixProbability;
-(CGFloat)terminationProbability;
-(id)initWithLexicon:(id)arg0 ;
-(void)_advance:(id)arg0 ;
-(void)_enumerateCompletions:(NSUInteger)arg0 usingBlock:(id)arg1 ;
-(void)advanceWithCombinedCharacterSequence:(id)arg0 ;
-(void)advanceWithString:(id)arg0 ;
-(void)dealloc;
-(void)enumerateCompletionEntries:(NSUInteger)arg0 usingBlock:(id)arg1 ;
-(void)enumerateCompletions:(NSUInteger)arg0 usingBlock:(id)arg1 ;
-(void)enumerateEntriesUsingBlock:(id)arg0 ;


@end


#endif