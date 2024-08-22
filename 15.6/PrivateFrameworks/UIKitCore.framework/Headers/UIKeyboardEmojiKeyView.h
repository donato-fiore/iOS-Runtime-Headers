// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef UIKEYBOARDEMOJIKEYVIEW_H
#define UIKEYBOARDEMOJIKEYVIEW_H

@class NSString, UIKeyboardEmojiKeyDisplayController<UIKeyboardEmojiCategoryUpdateDelegate>;
@protocol UIKeyboardEmojiCategoryUpdate;


#import "UIKBKeyView.h"

@interface UIKeyboardEmojiKeyView : UIKBKeyView <UIKeyboardEmojiCategoryUpdate>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic) UIKeyboardEmojiKeyDisplayController<UIKeyboardEmojiCategoryUpdateDelegate> *emojiKeyManager; // ivar: emojiKeyManager
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(NSInteger)updateToCategoryWithOffsetPercentage:(CGFloat)arg0 ;
-(void)updateToCategory:(NSInteger)arg0 ;


@end


#endif