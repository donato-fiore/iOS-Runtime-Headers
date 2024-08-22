// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef EMKTEXTENUMERATOR_H
#define EMKTEXTENUMERATOR_H

@class NSMutableDictionary;

#import <Foundation/Foundation.h>


@interface EMKTextEnumerator : NSObject {
    NSMutableDictionary *_emojiDatasByLanguage;
}




-(id)emojiDataForLanguage:(id)arg0 ;
-(id)init;
-(void)enumerateEmojiSignifiersInString:(id)arg0 touchingRange:(struct _NSRange )arg1 language:(id)arg2 usingBlock:(id)arg3 ;


@end


#endif