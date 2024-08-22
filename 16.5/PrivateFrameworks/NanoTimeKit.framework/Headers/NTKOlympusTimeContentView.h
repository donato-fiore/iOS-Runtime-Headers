// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef NTKOLYMPUSTIMECONTENTVIEW_H
#define NTKOLYMPUSTIMECONTENTVIEW_H

@class UIView, UIButton, UIImage, UIColor, NSString, CLKDevice, CLKTimeFormatter;
@protocol CLKTimeFormatterObserver, NTKTimeView, NTKOlympusContentViewDelegate, NTKOlympusColorPalette;


#import "NTKVictoryLabel.h"
#import "NTKOlympusColorPalette.h"
#import "NTKVictoryTimeLabel.h"

@interface NTKOlympusTimeContentView : UIView <CLKTimeFormatterObserver, NTKTimeView>



@property (nonatomic) CGFloat analogStyleFraction; // ivar: _analogStyleFraction
@property (nonatomic) CGFloat analogStyleSwooshPositionFraction; // ivar: _analogStyleSwooshPositionFraction
@property (retain, nonatomic) UIView *circularDigitsContainerView; // ivar: _circularDigitsContainerView
@property (retain, nonatomic) UIButton *circularLogoButton; // ivar: _circularLogoButton
@property (retain, nonatomic) UIImage *circularLogoImage; // ivar: _circularLogoImage
@property (retain, nonatomic) NTKVictoryLabel *circularLowerTimeLabel; // ivar: _circularLowerTimeLabel
@property (retain, nonatomic) NTKVictoryLabel *circularUpperTimeLabel; // ivar: _circularUpperTimeLabel
@property (retain, nonatomic) NTKOlympusColorPalette *colorPalette; // ivar: _colorPalette
@property (retain, nonatomic) UIView *contentView; // ivar: _contentView
@property (retain, nonatomic) UIColor *currentBackgroundColor; // ivar: _currentBackgroundColor
@property (retain, nonatomic) UIColor *currentForegroundColor; // ivar: _currentForegroundColor
@property (retain, nonatomic) UIColor *currentLogoColor; // ivar: _currentLogoColor
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<NTKOlympusContentViewDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (retain, nonatomic) CLKDevice *device; // ivar: _device
@property (nonatomic) NSUInteger dial; // ivar: _dial
@property (nonatomic) CGFloat dialFraction; // ivar: _dialFraction
@property (nonatomic) CGFloat digitalStyleFraction; // ivar: _digitalStyleFraction
@property (nonatomic, getter=isFrozen) BOOL frozen; // ivar: frozen
@property (retain, nonatomic) NTKVictoryLabel *fullscreenDigitalLowerTimeLabel; // ivar: _fullscreenDigitalLowerTimeLabel
@property (retain, nonatomic) NTKVictoryLabel *fullscreenDigitalUpperTimeLabel; // ivar: _fullscreenDigitalUpperTimeLabel
@property (retain, nonatomic) UIView *fullscreenDigitsContainerView; // ivar: _fullscreenDigitsContainerView
@property (retain, nonatomic) NTKVictoryLabel *fullscreenHybridLowerTimeLabel; // ivar: _fullscreenHybridLowerTimeLabel
@property (retain, nonatomic) NTKVictoryTimeLabel *fullscreenHybridUpperTimeLabel; // ivar: _fullscreenHybridUpperTimeLabel
@property (retain, nonatomic) UIButton *fullscreenLogoButton; // ivar: _fullscreenLogoButton
@property (readonly) NSUInteger hash;
@property (nonatomic) BOOL invertedColors; // ivar: _invertedColors
@property (nonatomic) CGSize logoImageSizeForCircularDial; // ivar: _logoImageSizeForCircularDial
@property (nonatomic) CGFloat olympusAnalogStyleFraction; // ivar: _olympusAnalogStyleFraction
@property (nonatomic) CGFloat olympusDigitalLabelsPositionFraction; // ivar: _olympusDigitalLabelsPositionFraction
@property (nonatomic) CGFloat olympusDigitalStyleFraction; // ivar: _olympusDigitalStyleFraction
@property (retain, nonatomic) NSObject<NTKOlympusColorPalette> *palette; // ivar: _palette
@property (nonatomic) NSUInteger style; // ivar: _style
@property (readonly) Class superclass;
@property (retain, nonatomic) CLKTimeFormatter *timeFormatter; // ivar: _timeFormatter
@property (nonatomic) BOOL useSmallFont; // ivar: _useSmallFont


+(CGFloat)scaleForViewDuringColorChangeTransitionWithFraction:(CGFloat)arg0 ;
-(BOOL)containsSubview:(id)arg0 ;
-(BOOL)pointInside:(struct CGPoint )arg0 withEvent:(id)arg1 ;
-(id)createLogoButtonWithBackgroundImage:(id)arg0 ;
-(id)createTimeLabelWithFont:(id)arg0 option:(NSUInteger)arg1 ;
-(id)fontForCircularDial;
-(id)fontForDigitalFullscreen;
-(id)fontForHybridFullscreen;
-(id)initWithDevice:(id)arg0 dial:(NSUInteger)arg1 style:(NSUInteger)arg2 colorPalette:(id)arg3 ;
-(id)initWithDevice:(id)arg0 dial:(NSUInteger)arg1 style:(NSUInteger)arg2 colorPalette:(id)arg3 useSmallFont:(BOOL)arg4 circularLogoImage:(id)arg5 ;
-(id)monospacedFontForCircularDial;
-(id)styleWithFont:(id)arg0 ;
-(id)victoryFontWithSize:(CGFloat)arg0 ;
-(void)_applyAnimationPopTransitionWithFraction:(CGFloat)arg0 ;
-(void)_applyTransitionFraction:(CGFloat)arg0 fromColor:(id)arg1 toColor:(id)arg2 fromBackgroundColor:(id)arg3 toBackgroundColor:(id)arg4 fromLogoColor:(id)arg5 toLogoColor:(id)arg6 ;
-(void)_applyTransitionFraction:(CGFloat)arg0 fromTextColor:(id)arg1 toTextColor:(id)arg2 ;
-(void)applyTransitionFraction:(CGFloat)arg0 fromColorPalette:(id)arg1 toColorPalette:(id)arg2 animateElements:(BOOL)arg3 ;
-(void)applyTransitionFraction:(CGFloat)arg0 fromDial:(NSUInteger)arg1 toDial:(NSUInteger)arg2 ;
-(void)applyTransitionFraction:(CGFloat)arg0 fromStyle:(NSUInteger)arg1 toStyle:(NSUInteger)arg2 ;
-(void)cleanupAfterEditing;
-(void)configureViewsForEditing;
-(void)createAndRemoveViewsForCurrentStateIfNeeded;
-(void)createCircularViewsIfNeeded;
-(void)createFullscreenDigitalViewsIfNeeded;
-(void)createFullscreenHybridViewsIfNeeded;
-(void)createFullscreenLogoIfNeeded;
-(void)dealloc;
-(void)ensureVisibleIfNeeded:(id)arg0 ;
-(void)handleLogoButtonHighlighted:(id)arg0 ;
-(void)handleLogoButtonResetHighlight:(id)arg0 ;
-(void)handleLogoButtonTouchUpInside:(id)arg0 ;
-(void)layoutSubviews;
-(void)prepareForEditing;
-(void)removeCircularViews;
-(void)removeFullscreenViews;
-(void)setLabelOutlineAlpha:(CGFloat)arg0 ;
-(void)setLabelOutlineColor:(id)arg0 ;
-(void)setLogoButtonHighlighted:(BOOL)arg0 ;
-(void)setOverrideDate:(id)arg0 duration:(CGFloat)arg1 ;
-(void)setTimeOffset:(CGFloat)arg0 ;
-(void)setViewsVisibilityForDial:(NSUInteger)arg0 style:(NSUInteger)arg1 ;
-(void)setViewsVisibleForDialTransition;
-(void)setViewsVisibleForStyleTransition;
-(void)timeFormatterTextDidChange:(id)arg0 ;
-(void)updateColors;
-(void)updateLogosFrame;
-(void)updateStylesFraction:(CGFloat)arg0 fromStyle:(NSUInteger)arg1 toStyle:(NSUInteger)arg2 ;
-(void)updateTimeLabelsFrame;


@end


#endif