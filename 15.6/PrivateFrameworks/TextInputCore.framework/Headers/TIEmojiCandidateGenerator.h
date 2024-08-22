// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef TIEMOJICANDIDATEGENERATOR_H
#define TIEMOJICANDIDATEGENERATOR_H

@class NSArray;

#import <Foundation/Foundation.h>

#import "TIInputMode.h"

@interface TIEmojiCandidateGenerator : NSObject {
    *void m_emojiGeneratorPrimaryLanguage;
    *void m_emojiGeneratorSecondaryLanguage;
    BOOL m_didAttemptPrimaryEmojiGeneratorLoad;
    BOOL m_didAttemptSecondaryEmojiGeneratorLoad;
    BOOL m_shouldShowEmojis;
    *__EmojiLocaleDataWrapper m_emojiDataForPrimaryLocale;
    *__EmojiLocaleDataWrapper m_emojiDataForSecondaryLocale;
    BOOL m_didAttemptPrimaryLocaleForEmojiLoad;
    BOOL m_didAttemptSecondaryLocaleForEmojiLoad;
    BOOL m_isEmojiInputModeEnabled;
}


@property (retain, nonatomic) NSArray *activeInputModes; // ivar: _activeInputModes
@property (readonly, nonatomic) TIInputMode *primaryInputMode;


-(id)createAndAddEmojiTokensFrom:(struct __CFArray *)arg0 inArray:(id)arg1 forInputString:(id)arg2 ;
-(id)emojiAdornmentCandidates:(id)arg0 ;
-(id)emojiAdornmentCandidatesForKeyboardState:(id)arg0 ;
-(id)emojiAppendCandidates:(id)arg0 ;
-(id)emojiReplacementCandidates:(id)arg0 ;
-(id)emojiReplacementCandidatesForKeyboardState:(id)arg0 ;
-(id)emojiReplacementCandidatesForText:(id)arg0 ;
-(id)enumerateForEmojiCandidatesIn:(id)arg0 forEmojiLocaleData:(struct __EmojiLocaleDataWrapper *)arg1 asReplacementCandidate:(BOOL)arg2 ;
-(id)extractTokensForEmojiComputation:(id)arg0 ;
-(id)generateEmojiAdornmentCandidates:(id)arg0 ;
-(id)getSkinToneSensitiveEmojis:(id)arg0 ;
-(id)initWithActiveInputModes:(id)arg0 ;
-(id)randomShuffle:(id)arg0 ;
-(id)skinToneModifiedAdornmentEmojis:(id)arg0 forLocale:(struct __EmojiLocaleDataWrapper *)arg1 forInput:(id)arg2 ;
-(void)dealloc;
-(void)logEmojiUsageFromCandidateBar:(id)arg0 ;
-(void)updateEmojiAdornmentGenerators;
-(void)updateEmojiLocale;
-(void)updateEmojiStatusForKeyboardState:(id)arg0 ;
-(void)updateForActiveInputModes:(id)arg0 ;


@end


#endif