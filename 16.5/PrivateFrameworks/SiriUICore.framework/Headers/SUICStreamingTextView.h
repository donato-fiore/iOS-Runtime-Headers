// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SUICSTREAMINGTEXTVIEW_H
#define SUICSTREAMINGTEXTVIEW_H

@class UIView, NSLayoutManager, NSTextStorage, NSTextContainer, NSMutableArray, NSMutableSet, UIImage, UIColor, UIFont, NSString, NSArray;
@protocol SUICStreamingTextViewEmptyProtocol, SUICStreamingTextViewDelegate;



@interface SUICStreamingTextView : UIView <SUICStreamingTextViewEmptyProtocol>

 {
    NSLayoutManager *_layoutManager;
    NSTextStorage *_textStorage;
    NSTextContainer *_textContainer;
    NSMutableArray *_words;
    NSMutableArray *_wordsToShow;
    NSMutableSet *_wordsToDelete;
    BOOL _animatedInternal;
    UIImage *_chevronImage;
}


@property (nonatomic) BOOL animated; // ivar: _animated
@property (nonatomic) CGFloat animationDuration; // ivar: _animationDuration
@property (retain, nonatomic) UIColor *endTextColor; // ivar: _endTextColor
@property (retain, nonatomic) UIFont *font; // ivar: _font
@property (nonatomic) CGFloat hyphenationFactor; // ivar: _hyphenationFactor
@property (nonatomic) BOOL renderEmojis; // ivar: _renderEmojis
@property (nonatomic) BOOL renderEmojisOnly; // ivar: _renderEmojisOnly
@property (nonatomic) BOOL showChevron; // ivar: _showChevron
@property (retain, nonatomic) UIColor *startTextColor; // ivar: _startTextColor
@property (weak, nonatomic) NSObject<SUICStreamingTextViewDelegate> *streamingTextViewDelegate; // ivar: _streamingTextViewDelegate
@property (readonly, nonatomic) NSString *text;
@property (retain, nonatomic) UIColor *textColor; // ivar: _textColor
@property (copy, nonatomic) NSArray *words;


-(id)_createChevronImage;
-(id)_createGlyphImage:(struct CGRect )arg0 glyphRange:(struct _NSRange )arg1 layoutManager:(id)arg2 ;
-(id)_glyphImageForWord:(id)arg0 frame:(struct CGRect )arg1 glyphRange:(struct _NSRange )arg2 textColor:(id)arg3 ;
-(id)_substringRangesContainingEmojiInString:(id)arg0 startingIndex:(NSInteger)arg1 ;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithFrame:(struct CGRect )arg0 ;
-(struct CGImage *)_imageRefForImage:(id)arg0 ;
-(struct CGSize )sizeThatFits:(struct CGSize )arg0 ;
-(void)_animateLayers;
-(void)_animateWordIn:(id)arg0 ;
-(void)_animateWordOut:(id)arg0 ;
-(void)_layoutFrames;
-(void)_resetState;
-(void)_sharedInit;
-(void)_updateAnimatedInternal;
-(void)_updateText:(id)arg0 ;
-(void)layoutSubviews;
-(void)setBounds:(struct CGRect )arg0 ;
-(void)setFrame:(struct CGRect )arg0 ;


@end


#endif