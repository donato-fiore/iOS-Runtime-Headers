// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef CACEMOJIMANAGER_H
#define CACEMOJIMANAGER_H

@class EMFEmojiLocaleData, EMFEmojiPreferences, NSString;

#import <Foundation/Foundation.h>


@interface CACEmojiManager : NSObject

@property (retain, nonatomic) EMFEmojiLocaleData *emojiLocaleData; // ivar: _emojiLocaleData
@property (retain, nonatomic) EMFEmojiPreferences *emojiPreferences; // ivar: _emojiPreferences
@property (readonly, copy, nonatomic) NSString *localeIdentifier; // ivar: _localeIdentifier


+(id)sharedManager;
+(void)resetSharedManager;
-(BOOL)isEmoji:(id)arg0 ;
-(NSInteger)countOfEmojisInString:(id)arg0 ;
-(id)emojiStringsFromEmojiTokens:(id)arg0 skinToneFilter:(int)arg1 ;
-(id)emojiTokenUsingPrefixApproachForText:(id)arg0 skinToneFilter:(int)arg1 ;
-(id)emojisForText:(id)arg0 skinToneFilter:(int)arg1 ;
-(id)initWithLocaleIdentifier:(id)arg0 ;
-(id)relatedEmojisForEmoji:(id)arg0 skinToneFilter:(int)arg1 ;
-(id)stringByReplacingEmojisWithDescriptions:(id)arg0 ;
-(void)enumerateEmojisInText:(id)arg0 skinToneFilter:(int)arg1 usingBlock:(id)arg2 ;
-(void)willInsertStringPotentiallyContainingEmojis:(id)arg0 ;


@end


#endif