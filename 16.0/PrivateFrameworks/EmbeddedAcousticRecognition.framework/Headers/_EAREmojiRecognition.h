// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef _EAREMOJIRECOGNITION_H
#define _EAREMOJIRECOGNITION_H

@class EMFEmojiPreferencesClient, EMFEmojiLocaleData, NSArray;

#import <Foundation/Foundation.h>


@interface _EAREmojiRecognition : NSObject {
    EMFEmojiPreferencesClient *_preferences;
    EMFEmojiLocaleData *_localeData;
    NSArray *_frequentEmojis;
    *__EmojiLocaleDataWrapper _cemlocaleRef;
}


@property (readonly, nonatomic) BOOL isEmojiDisambiguationUsed; // ivar: _isEmojiDisambiguationUsed
@property (readonly, nonatomic) BOOL isEmojiPersonalizationUsed; // ivar: _isEmojiPersonalizationUsed


+(void)initialize;
-(BOOL)isEmojiRecognitionCapable;
-(BOOL)isValidEmoji:(id)arg0 ;
-(id)_frequentEmojiBaseStrings;
-(id)baseStringForEmojiString:(id)arg0 ;
-(id)formatEmojiStrings:(id)arg0 ;
-(id)formatEmojiStrings:(id)arg0 isLogging:(BOOL)arg1 ;
-(id)initWithLanguage:(id)arg0 ;
-(id)searchEmojiAlternativesForSpokenEmoji:(id)arg0 count:(NSInteger)arg1 emojiCharacter:(id)arg2 ;
-(void)dealloc;
-(void)didUseEmoji:(id)arg0 ;
-(void)resetEmojiMetrics;
-(void)resetEmojiPreferences;


@end


#endif