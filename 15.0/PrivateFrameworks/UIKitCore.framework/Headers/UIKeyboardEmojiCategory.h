// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef UIKEYBOARDEMOJICATEGORY_H
#define UIKEYBOARDEMOJICATEGORY_H

@class NSString, NSArray;

#import <Foundation/Foundation.h>


@interface UIKeyboardEmojiCategory : NSObject

@property NSInteger categoryType; // ivar: _categoryType
@property (readonly, getter=displaySymbol) NSString *displaySymbol; // ivar: _displaySymbol
@property (retain) NSArray *emoji; // ivar: _emoji
@property (nonatomic) NSInteger lastVisibleFirstEmojiIndex; // ivar: _lastVisibleFirstEmojiIndex
@property (readonly, nonatomic, getter=name) NSString *name;


+(BOOL)isRTLMode;
+(NSInteger)categoryTypeForCategoryIndex:(NSUInteger)arg0 ;
+(NSInteger)emojiCategoryTypeForCategoryString:(id)arg0 ;
+(NSInteger)numberOfCategories;
+(NSUInteger)categoryIndexForCategoryType:(NSInteger)arg0 ;
+(NSUInteger)hasVariantsForEmoji:(id)arg0 ;
+(id)categories;
+(id)categoryForType:(NSInteger)arg0 ;
+(id)displayName:(NSInteger)arg0 ;
+(id)emojiCategoryStringForCategoryType:(NSInteger)arg0 ;
+(id)enabledCategoryIndexes;
+(id)fallbackDisplayName:(NSInteger)arg0 ;
+(id)loadPrecomputedEmojiFlagCategory;
+(id)localizedStringForKey:(id)arg0 ;
+(id)professionSkinToneEmojiBaseKey:(id)arg0 ;
-(void)dealloc;
-(void)releaseCategories;


@end


#endif