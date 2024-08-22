// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef CEKSLIDER_H
#define CEKSLIDER_H

@class UIControl, UIScrollView, UIView, UILabel, NSString, UIColor;
@protocol UIScrollViewDelegate, CEKSliderTickMarksDelegate, CEKAbstractSlider, CEKSliderDelegate, CEKTickMarksConfiguration;


#import "CEKSliderDotView.h"
#import "CEKEdgeGradientView.h"
#import "CEKSelectionFeedbackGenerator.h"
#import "CEKSliderTickMarksView.h"

@interface CEKSlider : UIControl <UIScrollViewDelegate, CEKSliderTickMarksDelegate, CEKAbstractSlider>

 {
    ? _delegateFlags;
}


@property (nonatomic, getter=_isActive, setter=_setActive:) BOOL _active; // ivar: __active
@property (nonatomic, getter=_isAnimating, setter=_setAnimating:) BOOL _animating; // ivar: __animating
@property (readonly, nonatomic) UIScrollView *_contentScrollView; // ivar: __contentScrollView
@property (nonatomic, getter=_isDimmed, setter=_setDimmed:) BOOL _dimmed; // ivar: __dimmed
@property (readonly, nonatomic) CEKSliderDotView *_dotView; // ivar: __dotView
@property (retain, nonatomic, setter=_setEdgeGradientView:) CEKEdgeGradientView *_edgeGradientView; // ivar: __edgeGradientView
@property (readonly, nonatomic) CEKSelectionFeedbackGenerator *_feedbackGenerator; // ivar: __feedbackGenerator
@property (retain, nonatomic) UIView *_levelIndicatorBackgroundView; // ivar: __levelIndicatorBackgroundView
@property (readonly, nonatomic) UIView *_levelIndicatorView; // ivar: __levelIndicatorView
@property (nonatomic, getter=_isOverscrolling, setter=_setOverscrolling:) BOOL _overscrolling; // ivar: __overscrolling
@property (nonatomic, getter=_isreAdjustingOffsets) BOOL _reAdjustingOffsets; // ivar: __reAdjustingOffsets
@property (nonatomic, setter=_setTickMarkIndex:) NSUInteger _tickMarkIndex; // ivar: __tickMarkIndex
@property (readonly, nonatomic) CEKSliderTickMarksView *_tickMarksView; // ivar: __tickMarksView
@property (retain, nonatomic) UILabel *_titleLabel; // ivar: __titleLabel
@property (retain, nonatomic) UILabel *_valueLabel; // ivar: __valueLabel
@property (nonatomic) CGFloat animationDuration; // ivar: _animationDuration
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) CGFloat defaultValue; // ivar: _defaultValue
@property (weak, nonatomic) NSObject<CEKSliderDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (nonatomic) NSUInteger fontStyle; // ivar: _fontStyle
@property (nonatomic) ? gradientInsets; // ivar: _gradientInsets
@property (readonly) NSUInteger hash;
@property (nonatomic) BOOL interactiveWhenHidden; // ivar: _interactiveWhenHidden
@property (nonatomic) CGFloat labelVerticalPadding; // ivar: _labelVerticalPadding
@property (nonatomic) CGFloat levelIndicatorHeight; // ivar: _levelIndicatorHeight
@property (nonatomic) NSInteger mainTickMarkInterval;
@property (nonatomic) CGFloat markedValue; // ivar: _markedValue
@property (nonatomic) CGFloat maximumValue; // ivar: _maximumValue
@property (nonatomic) CGFloat minimumValue; // ivar: _minimumValue
@property (retain, nonatomic) UIColor *prominentTickMarkColor; // ivar: _prominentTickMarkColor
@property (nonatomic) NSInteger sliderVerticalAlignment; // ivar: _sliderVerticalAlignment
@property (nonatomic) CGFloat sliderVerticalOffset; // ivar: _sliderVerticalOffset
@property (readonly) Class superclass;
@property (nonatomic) NSInteger textOrientation; // ivar: _textOrientation
@property (retain, nonatomic) UIColor *tickMarkColor; // ivar: _tickMarkColor
@property (nonatomic) NSInteger tickMarkCount; // ivar: _tickMarkCount
@property (nonatomic) CGSize tickMarkSize; // ivar: _tickMarkSize
@property (nonatomic) CGFloat tickMarkSpacing;
@property (readonly, nonatomic) NSObject<CEKTickMarksConfiguration> *tickMarksConfiguration;
@property (retain, nonatomic) NSString *title;
@property (nonatomic) NSInteger titleAlignment;
@property (nonatomic) BOOL useLegibilityShadows;
@property (nonatomic) BOOL useTickMarkLegibilityShadows;
@property (nonatomic) CGFloat value; // ivar: _value
@property (nonatomic) NSInteger valueLabelVisibility; // ivar: _valueLabelVisibility


+(id)_integerFormatter;
-(CGFloat)_xOffsetForMarkedValue;
-(CGFloat)xOffsetForValue:(CGFloat)arg0 ;
-(id)formattedIntegerStringFromNumber:(id)arg0 ;
-(id)hitTest:(struct CGPoint )arg0 withEvent:(id)arg1 ;
-(id)initWithFrame:(struct CGRect )arg0 ;
-(id)initWithTitle:(id)arg0 ;
-(struct CGRect )frameForLevelIndicator;
-(struct CGRect )frameForTicksView;
-(struct CGRect )frameForTitleLabel;
-(struct CGRect )frameForValueLabel;
-(void)_clampValuesAndUpdateScrollPosition:(BOOL)arg0 ;
-(void)_createGradientIfNeeded;
-(void)_setNormalizedValue:(CGFloat)arg0 ;
-(void)_setShowValueLabel:(BOOL)arg0 animated:(BOOL)arg1 ;
-(void)_sliderDidEndScrolling;
-(void)_updateColorsAnimated:(BOOL)arg0 ;
-(void)_updateEnableAppearanceStateAnimated:(BOOL)arg0 ;
-(void)_updateFonts;
-(void)_updateLegibilityBackground;
-(void)_updateMarkedViewAnimated:(BOOL)arg0 ;
-(void)_updateScrollViewPosition;
-(void)_updateValueLabel;
-(void)layoutSubviews;
-(void)removeGradients;
-(void)resetToDefault;
-(void)scrollViewDidEndDecelerating:(id)arg0 ;
-(void)scrollViewDidEndDragging:(id)arg0 willDecelerate:(BOOL)arg1 ;
-(void)scrollViewDidScroll:(id)arg0 ;
-(void)scrollViewWillBeginDragging:(id)arg0 ;
-(void)scrollViewWillEndDragging:(id)arg0 withVelocity:(struct CGPoint )arg1 targetContentOffset:(struct CGPoint *)arg2 ;
-(void)setEnabled:(BOOL)arg0 animated:(BOOL)arg1 ;
-(void)setEnabled:(BOOL)arg0 dimmed:(BOOL)arg1 animated:(BOOL)arg2 ;
-(void)setOpaqueGradientsWithColor:(id)arg0 ;
-(void)setTransparentGradients;
-(void)tickMarksViewDidChangeWidthForTickMarkCount:(id)arg0 ;


@end


#endif