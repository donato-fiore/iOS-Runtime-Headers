// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef CEKDISCRETESLIDER_H
#define CEKDISCRETESLIDER_H

@class UIControl, UIScrollView, UIView, UIImageView, UILabel, NSString, UIColor;
@protocol UIScrollViewDelegate, CEKSliderTickMarksDelegate, CEKAbstractSlider, CEKTickMarksConfiguration;


#import "CEKAnimationGenerator.h"
#import "CEKSliderDotView.h"
#import "CEKEdgeGradientView.h"
#import "CEKSelectionFeedbackGenerator.h"
#import "CEKSliderTickMarksView.h"

@interface CEKDiscreteSlider : UIControl <UIScrollViewDelegate, CEKSliderTickMarksDelegate, CEKAbstractSlider>



@property (retain, nonatomic, setter=_setAnimationGenerator:) CEKAnimationGenerator *_animationGenerator; // ivar: __animationGenerator
@property (readonly, nonatomic) UIScrollView *_contentScrollView; // ivar: __contentScrollView
@property (retain, nonatomic) CEKSliderDotView *_dotView; // ivar: __dotView
@property (retain, nonatomic) CEKEdgeGradientView *_edgeGradientView; // ivar: __edgeGradientView
@property (readonly, nonatomic) CEKSelectionFeedbackGenerator *_feedbackGenerator; // ivar: __feedbackGenerator
@property (retain, nonatomic) UIView *_indicatorBackground; // ivar: __indicatorBackground
@property (readonly, nonatomic) UIView *_levelIndicatorView; // ivar: __levelIndicatorView
@property (nonatomic, setter=_setNeedsUpdateContentOffset:) BOOL _needsUpdateContentOffset; // ivar: __needsUpdateContentOffset
@property (nonatomic, getter=_isOverscrolling, setter=_setOverscrolling:) BOOL _overscrolling; // ivar: __overscrolling
@property (readonly, nonatomic, getter=_isScrollActive) BOOL _scrollActive;
@property (readonly, nonatomic) BOOL _shouldUseHighlightColor;
@property (readonly, nonatomic) CEKSliderTickMarksView *_tickMarksView; // ivar: __tickMarksView
@property (retain, nonatomic) UIImageView *_titleBackground; // ivar: __titleBackground
@property (retain, nonatomic) UILabel *_titleLabel; // ivar: __titleLabel
@property (retain, nonatomic) UIImageView *_valueBackground; // ivar: __valueBackground
@property (retain, nonatomic) UILabel *_valueLabel; // ivar: __valueLabel
@property (nonatomic) NSUInteger colorHighlight; // ivar: _colorHighlight
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic) NSUInteger fontStyle; // ivar: _fontStyle
@property (retain, nonatomic) UIColor *gradientColor;
@property (nonatomic) ? gradientInsets; // ivar: _gradientInsets
@property (readonly) NSUInteger hash;
@property (nonatomic) NSUInteger indexCount; // ivar: _indexCount
@property (nonatomic) BOOL interactiveWhenHidden; // ivar: _interactiveWhenHidden
@property (nonatomic) CGFloat labelVerticalPadding; // ivar: _labelVerticalPadding
@property (nonatomic) CGFloat levelIndicatorHeight; // ivar: _levelIndicatorHeight
@property (nonatomic) NSUInteger markedIndex; // ivar: _markedIndex
@property (nonatomic) NSUInteger selectedIndex; // ivar: _selectedIndex
@property (nonatomic) NSInteger sliderVerticalAlignment; // ivar: _sliderVerticalAlignment
@property (nonatomic) CGFloat sliderVerticalOffset; // ivar: _sliderVerticalOffset
@property (readonly) Class superclass;
@property (nonatomic) NSInteger textOrientation; // ivar: _textOrientation
@property (nonatomic) NSUInteger tickMarkCountBetweenIndexes; // ivar: _tickMarkCountBetweenIndexes
@property (readonly, nonatomic) NSObject<CEKTickMarksConfiguration> *tickMarksConfiguration;
@property (nonatomic) CGFloat tickMarksHeight; // ivar: _tickMarksHeight
@property (nonatomic) NSInteger titleAlignment; // ivar: _titleAlignment
@property (copy, nonatomic) NSString *titleText; // ivar: _titleText
@property (nonatomic) BOOL useLegibilityBackgrounds;
@property (nonatomic) BOOL useLegibilityShadows;
@property (nonatomic) BOOL useTextLegibilityBackgrounds; // ivar: _useTextLegibilityBackgrounds
@property (nonatomic) BOOL useTextLegibilityShadows; // ivar: _useTextLegibilityShadows
@property (nonatomic) BOOL useTickMarkLegibilityShadows;


-(CGFloat)_interpolatedIndexForContentOffset:(struct CGPoint )arg0 ;
-(CGFloat)horizontalValueLabelOffset;
-(NSUInteger)_biasedIndexForContentOffset:(struct CGPoint )arg0 ;
-(NSUInteger)_nearestIndexForContentOffset:(struct CGPoint )arg0 ;
-(NSUInteger)_tickMarkIndexForIndex:(NSUInteger)arg0 ;
-(id)_createLegibilityImage;
-(id)initWithFrame:(struct CGRect )arg0 ;
-(id)valueText;
-(struct CGPoint )_contentOffsetForIndex:(NSUInteger)arg0 ;
-(struct CGSize )intrinsicContentSize;
-(void)_createGradientIfNeeded;
-(void)_layoutSliderContentAtY:(CGFloat)arg0 withHorizontalPadding:(CGFloat)arg1 ;
-(void)_layoutSubviewsWithLabelRotation:(CGFloat)arg0 ;
-(void)_layoutSubviewsWithNoRotation;
-(void)_updateAppearanceForActiveScrolling;
-(void)_updateColorsAnimated:(BOOL)arg0 ;
-(void)_updateFonts;
-(void)_updateMarkedIndexViewAnimated:(BOOL)arg0 ;
-(void)_updateScrollViewContentOffset;
-(void)_updateTextLegibilityBackground;
-(void)layoutSubviews;
-(void)removeGradients;
-(void)removeMarkedIndex;
-(void)scrollViewDidEndDecelerating:(id)arg0 ;
-(void)scrollViewDidEndDragging:(id)arg0 willDecelerate:(BOOL)arg1 ;
-(void)scrollViewDidScroll:(id)arg0 ;
-(void)scrollViewWillBeginDragging:(id)arg0 ;
-(void)scrollViewWillEndDragging:(id)arg0 withVelocity:(struct CGPoint )arg1 targetContentOffset:(struct CGPoint *)arg2 ;
-(void)setBounds:(struct CGRect )arg0 ;
-(void)setEnabled:(BOOL)arg0 ;
-(void)setFrame:(struct CGRect )arg0 ;
-(void)setOpaqueGradientsWithColor:(id)arg0 ;
-(void)setTransparentGradients;
-(void)tickMarksViewDidChangeWidthForTickMarkCount:(id)arg0 ;
-(void)updateValueLabel;


@end


#endif