// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef SUICUTILITIES_H
#define SUICUTILITIES_H


#import <Foundation/Foundation.h>


@interface SUICUtilities : NSObject



+(BOOL)emojiIsValid:(struct __EmojiTokenWrapper *)arg0 ;
+(id)_emojisToNotInclude;
+(id)substringRangesContainingEmojiInString:(id)arg0 ;


@end


#endif