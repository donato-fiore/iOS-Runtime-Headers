// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef UIKEYBOARDEMOJIKEYVIEW_H
#define UIKEYBOARDEMOJIKEYVIEW_H

@class NSString, UIKeyboardEmojiKeyDisplayController<UIKeyboardEmojiCategoryUpdateDelegate>;
@protocol UIKeyboardEmojiCategoryUpdate;


#import "UIKBKeyView.h"

@interface UIKeyboardEmojiKeyView : UIKBKeyView <UIKeyboardEmojiCategoryUpdate>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (weak, nonatomic) UIKeyboardEmojiKeyDisplayController<UIKeyboardEmojiCategoryUpdateDelegate> *emojiKeyManager; // ivar: emojiKeyManager
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(NSInteger)updateToCategoryWithOffsetPercentage:(CGFloat)arg0 ;
-(void)updateToCategory:(NSInteger)arg0 ;


@end


#endif