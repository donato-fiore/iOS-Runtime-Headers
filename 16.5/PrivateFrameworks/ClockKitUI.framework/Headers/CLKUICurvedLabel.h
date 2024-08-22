// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef CLKUICURVEDLABEL_H
#define CLKUICURVEDLABEL_H

@class UILabel, NSTextStorage, NSLayoutManager, NSTextContainer, NSNumber, UIColor, NSAttributedString, UIFont, NSString, UIView;
@protocol CLKUILabel;



@interface CLKUICurvedLabel : UILabel <CLKUILabel>

 {
    NSTextStorage *_textStorage;
    NSLayoutManager *_layoutManager;
    NSTextContainer *_textContainer;
    BOOL _storageIsNonAttributedText;
    CGFloat _maxTextWidth;
    NSNumber *_isTextTruncated;
    CGRect _cachedBounds;
    CGRect _cachedGlyphsBoundingRect;
    CGSize _cachedSize;
    BOOL _cachedSizeIsValid;
    UIColor *_textColor;
    NSAttributedString *_attributedStringWithoutColorModification;
    NSAttributedString *_attributedStringUnmodified;
    CGFloat _viewAlpha;
    UIFont *_font;
    BOOL _hasMonospacedNumbers;
}


@property (readonly, nonatomic) CGFloat _lastLineBaseline;
@property (nonatomic) CGFloat animationAlpha; // ivar: _animationAlpha
@property (copy, nonatomic) NSAttributedString *attributedText;
@property (nonatomic) BOOL attributedTextProvidesColor; // ivar: _attributedTextProvidesColor
@property (nonatomic) CGFloat centerAngle; // ivar: _centerAngle
@property (nonatomic) CGFloat circleRadius; // ivar: _circleRadius
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (retain, nonatomic) UIFont *font;
@property (readonly) NSUInteger hash;
@property (nonatomic) CGFloat imagePadding; // ivar: _imagePadding
@property (nonatomic) NSUInteger imagePlacement; // ivar: _imagePlacement
@property (weak, nonatomic) UIView *imageView; // ivar: _imageView
@property (nonatomic) CGSize imageViewOverrideSize; // ivar: _imageViewOverrideSize
@property (nonatomic) BOOL interior; // ivar: _interior
@property (readonly, nonatomic) BOOL isTextTruncated;
@property (nonatomic) CGFloat maxAngularWidth; // ivar: _maxAngularWidth
@property (readonly, nonatomic) CGFloat maxLinearTextWidth;
@property (readonly, nonatomic) CGFloat maxLinearWidth;
@property (readonly, nonatomic) UIEdgeInsets opticalInsets;
@property (readonly) Class superclass;
@property (copy, nonatomic) NSString *text;
@property (nonatomic) NSInteger textAlignment;
@property (readonly, nonatomic) CGRect textBoundingRect;
@property (retain, nonatomic) UIColor *textColor;
@property (nonatomic) CGFloat tracking; // ivar: _tracking


-(BOOL)_hasImage;
-(CGFloat)_distance;
-(CGFloat)_extraWidthForImage;
-(CGFloat)alpha;
-(id)initWithFrame:(struct CGRect )arg0 ;
-(struct CGAffineTransform )transformForImage;
-(struct CGPoint )_offsetOfBoundingRect:(struct CGRect )arg0 inRect:(struct CGRect )arg1 ;
-(struct CGPoint )centerForImage;
-(struct CGRect )_glyphsBoundingRect;
-(struct CGRect )_imageBounds;
-(struct CGSize )sizeThatFits:(struct CGSize )arg0 ;
-(struct _NSRange )_drawableCharacterRange:(struct _NSRange *)arg0 ;
-(struct __CTLine *)_newLineFromDrawableTextStorage;
-(void)_enumerateTransforms:(BOOL)arg0 callback:(id)arg1 ;
-(void)_enumerateTransformsForDrawableCharacters:(id)arg0 ;
-(void)_transformForImage:(id)arg0 ;
-(void)_updateMaxSize;
-(void)_updateTextColor;
-(void)_updateTracking;
-(void)dealloc;
-(void)drawTextInRect:(struct CGRect )arg0 ;
-(void)getTextCenter:(struct CGPoint *)arg0 startAngle:(*CGFloat)arg1 endAngle:(*CGFloat)arg2 ;
-(void)invalidateCachedSize;
-(void)layoutSubviews;
-(void)observeValueForKeyPath:(id)arg0 ofObject:(id)arg1 change:(id)arg2 context:(*void)arg3 ;
-(void)setAlpha:(CGFloat)arg0 ;
-(void)setNumberOfLines:(NSInteger)arg0 ;
-(void)traitCollectionDidChange:(id)arg0 ;


@end


#endif