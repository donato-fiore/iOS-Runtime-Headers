// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef EMFEMOJILOCALEDATA_H
#define EMFEMOJILOCALEDATA_H

@class NSArray, NSString;

#import <Foundation/Foundation.h>

#import "EMFAnchoredSearchManager.h"
#import "EMFEmojiSearchEngine.h"

@interface EMFEmojiLocaleData : NSObject {
    BOOL _didTryLoadingSearchEngine;
}


@property (readonly, retain, nonatomic) EMFAnchoredSearchManager *anchoredSearchManager; // ivar: _anchoredSearchManager
@property (readonly, nonatomic) *__EmojiLocaleDataWrapper emojiLocaleDataRef; // ivar: _localeDataRef
@property (readonly, copy, nonatomic) NSArray *emojiTokens;
@property (readonly, copy, nonatomic) NSString *localeIdentifier; // ivar: _localeIdentifier
@property (readonly, retain, nonatomic) EMFEmojiSearchEngine *searchEngine; // ivar: _searchEngine


+(id)emojiLocaleDataWithCEMEmojiLocaleData:(struct __EmojiLocaleDataWrapper *)arg0 ;
+(id)emojiLocaleDataWithLocaleIdentifier:(id)arg0 ;
-(NSUInteger)cfCompareFlagsFromNSOptions:(NSUInteger)arg0 ;
-(id)_rawSearchEngineReference;
-(id)description;
-(id)emojiTokensForOptions:(NSUInteger)arg0 presentationStyle:(int)arg1 ;
-(id)emojiTokensForText:(id)arg0 phoneticReading:(id)arg1 options:(NSUInteger)arg2 searchType:(int)arg3 includePrefixMatches:(BOOL)arg4 ;
-(id)initWithCEMEmojiLocaleData:(struct __EmojiLocaleDataWrapper *)arg0 ;
-(id)initWithLocaleIdentifier:(id)arg0 ;
-(void)dealloc;
-(void)enumerateAnchoredReplacementCandidatesForContext:(id)arg0 withOptions:(unsigned int)arg1 usingBlock:(id)arg2 ;
-(void)enumerateSearchResultsInText:(id)arg0 range:(struct _NSRange )arg1 options:(NSUInteger)arg2 searchType:(int)arg3 usingBlock:(id)arg4 ;
-(void)preheatSearchEngine;


@end


#endif