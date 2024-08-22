// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef UITEXTCHECKER_H
#define UITEXTCHECKER_H

@class NSString, NSArray;

#import <Foundation/Foundation.h>


@interface UITextChecker : NSObject {
    id *_reserved;
    NSInteger _usdt;
    NSString *_checkerWarmingLanguage;
}


@property (retain, nonatomic) NSArray *ignoredWords;


+(BOOL)_forgetWord:(id)arg0 inDictionary:(id)arg1 ;
+(BOOL)_isWord:(id)arg0 inDictionary:(id)arg1 ;
+(BOOL)_learnWord:(id)arg0 inDictionary:(id)arg1 ;
+(BOOL)hasLearnedWord:(id)arg0 ;
+(NSInteger)uniqueSpellDocumentTag;
+(id)_dictionaryEntryForName:(id)arg0 ;
+(id)_wordsInDictionary:(id)arg0 ;
+(id)availableLanguages;
+(id)bestLanguageForString:(id)arg0 fromAlternatives:(id)arg1 currentLanguage:(id)arg2 ;
+(id)bestLanguageForString:(id)arg0 fromAlternatives:(id)arg1 currentLanguage:(id)arg2 insertionPointIndex:(NSUInteger)arg3 scriptForBestLanguage:(*id)arg4 ;
+(id)dictionaryInfo:(id)arg0 ;
+(id)openUserDictionary:(id)arg0 ;
+(struct __CFSet *)createDictHashTable:(BOOL)arg0 ;
+(void)_setDictionaryEntry:(id)arg0 forName:(id)arg1 ;
+(void)_setWords:(id)arg0 inDictionary:(id)arg1 ;
+(void)learnWord:(id)arg0 ;
+(void)setString:(id)arg0 isExemptFromChecker:(BOOL)arg1 ;
+(void)unlearnWord:(id)arg0 ;
-(BOOL)_doneLoading;
-(BOOL)canChangeCaseOfFirstLetterInString:(id)arg0 toUpperCase:(BOOL)arg1 language:(id)arg2 ;
-(BOOL)isWordInUserDictionaries:(id)arg0 caseSensitive:(BOOL)arg1 ;
-(NSInteger)adjustOffsetToNextWordBoundaryInString:(id)arg0 startingAt:(NSInteger)arg1 ;
-(id)_checker;
-(id)_initWithAsynchronousLoading:(BOOL)arg0 ;
-(id)_nameOfDictionaryForDocumentTag:(NSInteger)arg0 ;
-(id)alternativesForPinyinInputString:(id)arg0 ;
-(id)completionsForPartialWordRange:(struct _NSRange )arg0 inString:(id)arg1 language:(id)arg2 ;
-(id)correctionForWordRange:(struct _NSRange )arg0 inString:(id)arg1 language:(id)arg2 ;
-(id)guessesForWordRange:(struct _NSRange )arg0 inString:(id)arg1 language:(id)arg2 ;
-(id)init;
-(id)stringForInputString:(id)arg0 language:(id)arg1 ;
-(id)suggestWordInLanguage:(id)arg0 ;
-(struct _NSRange )_chunkAndCheckGrammarInString:(id)arg0 language:(id)arg1 usingChecker:(id)arg2 details:(*id)arg3 ;
-(struct _NSRange )_chunkAndFindMisspelledWordInString:(id)arg0 languages:(id)arg1 learnedDictionaries:(id)arg2 wordCount:(*NSInteger)arg3 correction:(*id)arg4 usingChecker:(id)arg5 ;
-(struct _NSRange )checkGrammarOfString:(id)arg0 startingAt:(NSInteger)arg1 language:(id)arg2 wrap:(BOOL)arg3 details:(*id)arg4 ;
-(struct _NSRange )checkSpellingOfString:(id)arg0 startingAt:(NSInteger)arg1 language:(id)arg2 wrap:(BOOL)arg3 correction:(*id)arg4 ;
-(struct _NSRange )checkSpellingOfString:(id)arg0 startingAt:(NSInteger)arg1 languages:(id)arg2 wrap:(BOOL)arg3 correction:(*id)arg4 ;
-(struct _NSRange )rangeOfMisspelledWordInString:(id)arg0 range:(struct _NSRange )arg1 startingAt:(NSInteger)arg2 wrap:(BOOL)arg3 language:(id)arg4 ;
-(struct _NSRange )rangeOfMisspelledWordInString:(id)arg0 range:(struct _NSRange )arg1 startingAt:(NSInteger)arg2 wrap:(BOOL)arg3 languages:(id)arg4 ;
-(void)_setDocumentDictionaryName:(id)arg0 ;
-(void)_setLanguageDictionaryName:(id)arg0 ;
-(void)dealloc;
-(void)ignoreWord:(id)arg0 ;
-(void)initGlobals;
-(void)initUserDictionaries;
-(void)releaseAllLexicons;
-(void)resetAllLanguageModels;


@end


#endif