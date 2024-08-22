// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef UIKEYBOARDEMOJIGRAPHICSTRAITS_H
#define UIKEYBOARDEMOJIGRAPHICSTRAITS_H


#import <Foundation/Foundation.h>


@interface UIKeyboardEmojiGraphicsTraits : NSObject

@property (readonly, nonatomic) CGFloat alertTextWidth; // ivar: _alertTextWidth
@property (readonly, nonatomic) CGFloat bottomPadding; // ivar: _bottomPadding
@property (readonly, nonatomic) CGFloat categoryHeaderFontSize; // ivar: _categoryHeaderFontSize
@property (readonly, nonatomic) CGFloat categoryHeaderHeight; // ivar: _categoryHeaderHeight
@property (readonly, nonatomic) CGFloat categoryHeaderLeftPadding; // ivar: _categoryHeaderLeftPadding
@property (readonly, nonatomic) CGFloat categorySelectedCirWidth; // ivar: _categorySelectedCirWidth
@property (readonly, nonatomic) CGFloat columnOffset; // ivar: _columnOffset
@property (readonly, nonatomic) CGFloat emojiKeyWidth; // ivar: _emojiKeyWidth
@property (readonly, nonatomic) CGSize fakeEmojiKeySize; // ivar: _fakeEmojiKeySize
@property (readonly, nonatomic) CGFloat inputViewLeftMostPadding; // ivar: _inputViewLeftMostPadding
@property (readonly, nonatomic) CGFloat inputViewRightMostPadding; // ivar: _inputViewRightMostPadding
@property (readonly, nonatomic) CGFloat minimumInteritemSpacing; // ivar: _minimumInteritemSpacing
@property (readonly, nonatomic) CGFloat minimumLineSpacing; // ivar: _minimumLineSpacing
@property (readonly, nonatomic) NSInteger prepolulatedRecentCount; // ivar: _prepolulatedRecentCount
@property (readonly, nonatomic) CGFloat rightBiasPercentage; // ivar: _rightBiasPercentage
@property (readonly, nonatomic) CGFloat scrollSnapOffset; // ivar: _scrollSnapOffset
@property (readonly, nonatomic) CGFloat scrubViewTopPadding; // ivar: _scrubViewTopPadding
@property (readonly, nonatomic) CGFloat sectionOffset; // ivar: _sectionOffset


+(id)emojiGraphicsTraitsForCurrentScreenTraits;
+(id)emojiGraphicsTraitsWithScreenTraits:(id)arg0 ;
-(id)initWithScreenTrait:(id)arg0 ;


@end


#endif