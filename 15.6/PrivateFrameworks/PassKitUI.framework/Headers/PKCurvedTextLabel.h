// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef PKCURVEDTEXTLABEL_H
#define PKCURVEDTEXTLABEL_H

@class UILabel, NSTextStorage, NSLayoutManager, NSTextContainer, UIColor, UIFont, NSDictionary;



@interface PKCurvedTextLabel : UILabel {
    NSTextStorage *_textStorage;
    NSLayoutManager *_layoutManager;
    NSTextContainer *_textContainer;
    CGFloat _textWidth;
    CGRect _cachedBounds;
    CGRect _cachedGlyphsBoundingRect;
    CGSize _cachedSize;
    BOOL _cachedSizeIsValid;
    UIColor *_textColor;
    UIFont *_font;
    BOOL _hasMonospacedNumbers;
}


@property (nonatomic) CGFloat centerAngle; // ivar: _centerAngle
@property (nonatomic) CGFloat circleRadius; // ivar: _circleRadius
@property (nonatomic) BOOL interior; // ivar: _interior
@property (readonly, nonatomic) CGFloat linearWidth;
@property (nonatomic) CGFloat maxAngularWidth; // ivar: _maxAngularWidth
@property (readonly, copy, nonatomic) NSDictionary *textAttributes;
@property (readonly, nonatomic) CGRect textBoundingRect;


-(CGFloat)_distance;
-(id)attributedText;
-(id)font;
-(id)init;
-(id)initWithFrame:(struct CGRect )arg0 ;
-(id)text;
-(id)textColor;
-(struct CGPoint )_offsetOfBoundingRect:(struct CGRect )arg0 inRect:(struct CGRect )arg1 ;
-(struct CGRect )_glyphsBoundingRect;
-(struct CGSize )sizeThatFits:(struct CGSize )arg0 ;
-(struct _NSRange )_drawableCharacterRange:(struct _NSRange *)arg0 ;
-(struct __CTLine *)_newLineFromDrawableTextStorage;
-(void)_enumerateTransformsForDrawableCharacters:(id)arg0 ;
-(void)_updateMaxSize;
-(void)_updateTextColor;
-(void)drawTextInRect:(struct CGRect )arg0 ;
-(void)invalidateCachedSize;
-(void)setAttributedText:(id)arg0 ;
-(void)setFont:(id)arg0 ;
-(void)setNumberOfLines:(NSInteger)arg0 ;
-(void)setText:(id)arg0 ;
-(void)setTextColor:(id)arg0 ;


@end


#endif