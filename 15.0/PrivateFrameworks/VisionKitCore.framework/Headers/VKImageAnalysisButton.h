// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef VKIMAGEANALYSISBUTTON_H
#define VKIMAGEANALYSISBUTTON_H

@class UIButton, UIView, CABasicAnimation;



@interface VKImageAnalysisButton : UIButton

@property (readonly, nonatomic) UIView *_backgroundView; // ivar: __backgroundView
@property (retain, nonatomic) CABasicAnimation *_highlightedGlyphAnimation; // ivar: __highlightedGlyphAnimation
@property (nonatomic) CGFloat _highlightedGlyphScaleFactor; // ivar: __highlightedGlyphScaleFactor
@property (readonly, nonatomic) UIView *_selectedBackgroundView; // ivar: __selectedBackgroundView
@property (nonatomic) CGFloat backgroundDiameter; // ivar: _backgroundDiameter
@property (nonatomic) BOOL didManuallySetBackgroundDiameter; // ivar: _didManuallySetBackgroundDiameter
@property (nonatomic) NSUInteger function; // ivar: _function
@property (nonatomic) NSUInteger glyphConfiguration; // ivar: _glyphConfiguration
@property (nonatomic) CGFloat glyphRotation; // ivar: _glyphRotation
@property (nonatomic) NSUInteger mode; // ivar: _mode
@property (nonatomic) BOOL prefersDarkGlyphWhenSelected; // ivar: _prefersDarkGlyphWhenSelected


-(CGFloat)_selectedIndicatorAlpha;
-(id)_selectedIndicatorViewWithImage:(id)arg0 ;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithFrame:(struct CGRect )arg0 ;
-(id)pointerInteraction:(id)arg0 styleForRegion:(id)arg1 ;
-(struct CGAffineTransform )_glyphTransformForRotation:(CGFloat)arg0 highlighted:(BOOL)arg1 ;
-(struct CGRect )_selectedIndicatorBounds;
-(struct CGSize )intrinsicContentSize;
-(void)_commonVKImageAnalysisButtonInitialization;
-(void)_updateGlyph;
-(void)_updateSelectionColor;
-(void)layoutSubviews;
-(void)setHighlighted:(BOOL)arg0 ;
-(void)setHighlightedGlyphScaleFactor:(CGFloat)arg0 animation:(id)arg1 ;
-(void)setSelected:(BOOL)arg0 ;
-(void)setupForFunction:(NSUInteger)arg0 ;
-(void)tintColorDidChange;
-(void)traitCollectionDidChange:(id)arg0 ;


@end


#endif