// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef UIKEYBOARDEMOJI_H
#define UIKEYBOARDEMOJI_H

@class NSString;

#import <Foundation/Foundation.h>


@interface UIKeyboardEmoji : NSObject

@property (retain, nonatomic) NSString *emojiString; // ivar: _emojiString
@property NSUInteger variantMask; // ivar: _variantMask


+(BOOL)shouldHighlightEmoji:(id)arg0 ;
+(id)emojiWithString:(id)arg0 withVariantMask:(NSUInteger)arg1 ;
-(BOOL)isEqual:(id)arg0 ;
-(id)initWithString:(id)arg0 withVariantMask:(NSUInteger)arg1 ;
-(id)key;


@end


#endif