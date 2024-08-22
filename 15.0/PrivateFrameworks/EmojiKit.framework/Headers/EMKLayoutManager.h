// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef EMKLAYOUTMANAGER_H
#define EMKLAYOUTMANAGER_H

@class NSLayoutManager, NSMutableAttributedString, UIColor, NSArray, NSMutableData;


#import "EMKGlyphRippler.h"
#import "EMKTextEnumerator.h"

@interface EMKLayoutManager : NSLayoutManager {
    NSMutableAttributedString *_attributes;
    EMKGlyphRippler *_rippler;
    UIColor *_currentColor;
    CGFloat _currentScale;
    CGSize _currentOffset;
    UIColor *_currentShadowColor;
    NSArray *_emojiConversionLanguages;
    EMKTextEnumerator *_enumerator;
    NSMutableData *_glyphIndexTable;
    BOOL _emojiConversionEnabled;
    BOOL _emojiConversionActive;
    BOOL _darkModeEnabled;
}


@property (getter=isEmojiConversionEnabled) BOOL emojiConversionEnabled;


-(BOOL)convertGlyphIndex:(NSUInteger)arg0 toAttributeRelativeGlyphIndex:(*NSUInteger)arg1 numberOfAttributedGlyphs:(*NSUInteger)arg2 ;
-(BOOL)isDarkModeEnabled;
-(BOOL)isEmojiAnimationActive;
-(BOOL)isEmojiConversionActive;
-(id)attributes;
-(id)emojiConversionLanguages;
-(id)init;
-(void)drawAttributedGlyphsForGlyphRange:(struct _NSRange )arg0 atPoint:(struct CGPoint )arg1 ;
-(void)drawGlyphsForGlyphRange:(struct _NSRange )arg0 atPoint:(struct CGPoint )arg1 ;
-(void)flushGlyphIndexTable;
-(void)processEditingForTextStorage:(id)arg0 edited:(NSUInteger)arg1 range:(struct _NSRange )arg2 changeInLength:(NSInteger)arg3 invalidatedRange:(struct _NSRange )arg4 ;
-(void)setDarkModeEnabled:(BOOL)arg0 ;
-(void)setDelayFrames:(NSUInteger)arg0 ;
-(void)setEmojiConversionActive:(BOOL)arg0 ;
-(void)setEmojiConversionLanguages:(id)arg0 ;
-(void)setPostFrames:(NSUInteger)arg0 ;
-(void)setPreFrames:(NSUInteger)arg0 ;
-(void)showCGGlyphs:(*unsigned short)arg0 positions:(struct CGPoint *)arg1 count:(NSUInteger)arg2 font:(id)arg3 matrix:(struct CGAffineTransform )arg4 attributes:(id)arg5 inContext:(struct CGContext *)arg6 ;
-(void)startOrStopTimer;


@end


#endif