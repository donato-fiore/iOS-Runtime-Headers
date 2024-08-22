// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef UIKEYBOARDEMOJIKEYDISPLAYCONTROLLER_H
#define UIKEYBOARDEMOJIKEYDISPLAYCONTROLLER_H

@class NSString;
@protocol UIKeyboardEmojiCategoryUpdateDelegate;

#import <Foundation/Foundation.h>

#import "UIKeyboardEmojiCategory.h"
#import "UIKeyboardEmojiKeyView.h"

@interface UIKeyboardEmojiKeyDisplayController : NSObject <UIKeyboardEmojiCategoryUpdateDelegate>

 {
    UIKeyboardEmojiCategory *_lastViewedCategory;
}


@property (retain, nonatomic) UIKeyboardEmojiKeyView *categoryView; // ivar: _categoryView
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) UIKeyboardEmojiKeyView *inputView; // ivar: _inputView
@property UIKeyboardEmojiCategory *lastViewedCategory;
@property (readonly) Class superclass;


+(Class)classForCategoryControl:(NSInteger)arg0 ;
+(Class)classForInputView:(NSInteger)arg0 ;
+(void)writeEmojiDefaultsAndReleaseActiveInputView;
-(BOOL)hasLastUsedVariantForEmojiString:(id)arg0 ;
-(BOOL)userHasSelectedSkinToneEmoji;
-(NSInteger)lastVisibleFirstEmojiIndexforCategory:(id)arg0 ;
-(NSInteger)reloadCategoryForOffsetPercentage:(CGFloat)arg0 withSender:(id)arg1 ;
-(id)emojiWithoutDuplicateRecents:(id)arg0 ;
-(id)init;
-(id)lastUsedVariantEmojiForEmojiString:(id)arg0 ;
-(id)recentEmojiAtIndex:(NSInteger)arg0 size:(*NSUInteger)arg1 ;
-(id)recents;
-(id)skinToneBaseKeyPreferences;
-(void)dealloc;
-(void)emojiUsed:(id)arg0 ;
-(void)emojiUsed:(id)arg0 language:(id)arg1 ;
-(void)reloadForCategory:(NSInteger)arg0 withSender:(id)arg1 ;
-(void)updateEmojiKeyManagerWithKey:(id)arg0 withKeyView:(id)arg1 ;
-(void)updateSkinToneBaseKey:(id)arg0 variantUsed:(id)arg1 ;


@end


#endif