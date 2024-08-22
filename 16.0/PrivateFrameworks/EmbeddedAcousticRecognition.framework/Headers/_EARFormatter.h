// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef _EARFORMATTER_H
#define _EARFORMATTER_H

@class NSMutableArray, NSMutableDictionary, NSString;

#import <Foundation/Foundation.h>

#import "_EAREmojiRecognition.h"

@interface _EARFormatter : NSObject {
    unique_ptr<SpeechITN, std::default_delete<SpeechITN>> _itn;
    _EAREmojiRecognition *_emojiFormatter;
    CGFloat _itnDurationSum;
    NSInteger _itnCount;
    NSMutableArray *_recognizedEmojis;
    NSMutableDictionary *_emojiMetrics;
}


@property (copy, nonatomic) NSString *language; // ivar: _language


+(?)convertStringsToQuasarTokens;
+(?)convertStringsToQuasarTokensoffset;
+(BOOL)supportedByQuasarConfig:(id)arg0 ;
+(BOOL)supportedByQuasarSystemConfig:(*void)arg0 ;
+(void)initialize;
-(?)formatWords:(?)arg0 unrepairedWordsOut:(?)arg1 task:(?)arg2 language:(?)arg3 preItnLeftContext:(?)arg4 separateAutoEndPunctuation:(?)arg5 partialResults:(?)arg6 timestampOffset:(?)arg7 zeroTimestamp:(?)arg8 continuousListeningConfig:(?)arg9 postItnLeftContext:(?)arg10 itnResult:(?)arg11 itnOverrides:(?)arg12 itnEnablingFlags:(?)arg13 recognizeEmoji:(?)arg14 leftContextProvidedByClient:(?)arg15 preItnRightContext:(?)arg16 emojiTokenIndices:(?)arg17 persistEmoji:(?)arg18 shouldHideTrailingPunctuation:(?)arg19 isTrailingPunctuationHidden:(?)arg20 isFinal:(?)arg21 choiceIdxitnCompletion;
-(?)formatWords:(?)arg0 unrepairedWordsOuttask;
-(?)formatWordsunrepairedWordsOut;
-(?)formattedTokensWithoutEmojiModifier:(?)arg0 emojiTokenIndicesrecognizeEmoji;
-(BOOL)isEnableAutoPunctuation:(*void)arg0 task:(*void)arg1 itnEnablingFlags:(unsigned short)arg2 ;
-(BOOL)refreshEmojiRecognizer;
-(id)_formattedStringWithStrings:(id)arg0 task:(id)arg1 leftContext:(id)arg2 ;
-(id)_formattedStringWithStrings:(id)arg0 task:(id)arg1 leftContext:(id)arg2 recognizeEmoji:(BOOL)arg3 ;
-(id)_formattedStringWithStrings:(id)arg0 task:(id)arg1 leftContext:(id)arg2 recognizeEmoji:(BOOL)arg3 rightContext:(id)arg4 ;
-(id)_formattedStringWithoutEmojiModifier:(id)arg0 ;
-(id)emojiAlternativesForFormattedTokens:(id)arg0 stringsWithoutEmojiModifier:(id)arg1 alternateNameForTokens:(id)arg2 ;
-(id)emojiPhraseRemoveKeyword:(id)arg0 ;
-(id)formatWords:(id)arg0 task:(id)arg1 autoPunctuate:(BOOL)arg2 ;
-(id)formatWords:(id)arg0 task:(id)arg1 autoPunctuate:(BOOL)arg2 recognizeEmoji:(BOOL)arg3 ;
-(id)formattedRecognitionWithNBestList:(id)arg0 ;
-(id)formattedStringWithStrings:(id)arg0 ;
-(id)formattedStringWithStrings:(id)arg0 preToPostItnArray:(id)arg1 ;
-(id)formattedStringWithStrings:(id)arg0 preToPostItnArray:(id)arg1 task:(id)arg2 ;
-(id)formattedStringWithStrings:(id)arg0 task:(id)arg1 ;
-(id)initWithGeneralVoc:(id)arg0 withLexiconEnh:(id)arg1 withItnEnh:(id)arg2 ;
-(id)initWithLanguage:(id)arg0 withSdapiConfig:(id)arg1 quasarConfig:(id)arg2 ;
-(id)initWithQuasarConfig:(id)arg0 ;
-(id)initWithQuasarConfig:(id)arg0 language:(id)arg1 ;
-(id)initWithQuasarConfig:(id)arg0 overrideConfigFiles:(id)arg1 ;
-(id)initWithQuasarConfig:(id)arg0 overrideConfigFiles:(id)arg1 supportEmojiRecognition:(BOOL)arg2 language:(id)arg3 ;
-(id)initWithQuasarConfig:(id)arg0 overrideConfigFiles:(id)arg1 supportEmojiRecognition:(BOOL)arg2 language:(id)arg3 skipPathsExistCheck:(BOOL)arg4 ;
-(struct basic_string<char, std::char_traits<char>, std::allocator<char>> )getOrthography:(*void)arg0 ;
-(void)appendNbestListWithEmojiAlternativesForFormattedTokens:(*void)arg0 formattedTokensWithoutEmojiModifier:(*void)arg1 formattedNBestList:(*void)arg2 formattedNBestListWithoutEmojiModifier:(*void)arg3 emojiTokenIndices:(*void)arg4 recognizeEmoji:(BOOL)arg5 ;
-(void)initializeItnMetrics;
-(void)recognizeEmojiForTokens:(*void)arg0 recognizeEmoji:(BOOL)arg1 emojiTokenIndices:(*void)arg2 persistEmoji:(BOOL)arg3 choiceIdx:(int)arg4 ;


@end


#endif