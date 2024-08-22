// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef NLLEXICONCURSOR_H
#define NLLEXICONCURSOR_H

@class NSString;

#import <Foundation/Foundation.h>

#import "NLLexicon.h"

@interface NLLexiconCursor : NSObject {
    NLLexicon *_lexicon;
    *_LXCursor _cursor;
}


@property (readonly) BOOL hasChildren;
@property (readonly) BOOL hasEntries;
@property (readonly) CGFloat prefixProbability;
@property (readonly) CGFloat terminationProbability;
@property (readonly, copy) NSString *traversedString;


-(id)cursorByAdvancingWithString:(id)arg0 ;
-(id)initWithLexicon:(id)arg0 cursor:(struct _LXCursor *)arg1 ;
-(id)initWithLexicon:(id)arg0 string:(id)arg1 ;
-(void)_enumerateEntriesUsingBlock:(id)arg0 ;
-(void)dealloc;
-(void)enumerateChildrenUsingBlock:(id)arg0 ;
-(void)enumerateCompletionsUsingBlock:(id)arg0 ;
-(void)enumerateEntriesUsingBlock:(id)arg0 ;


@end


#endif