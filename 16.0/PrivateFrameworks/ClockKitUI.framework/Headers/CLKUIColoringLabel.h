// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef CLKUICOLORINGLABEL_H
#define CLKUICOLORINGLABEL_H

@class CLKDevice, CLKFont, NSNumber, NSAttributedString, UIView, UIColor, NSString, NSParagraphStyle, CLKTextProvider;
@protocol CLKUIColoringView, CLKUILabel, CLKUITimeTravelState, CLKMonochromeFilterProvider;


#import "CLKUILegibilityLabel.h"
#import "_CLKUIColorManager.h"

@interface CLKUIColoringLabel : CLKUILegibilityLabel <CLKUIColoringView, CLKUILabel, CLKUITimeTravelState>

 {
    CLKDevice *_device;
    _CLKUIColorManager *_colorManager;
    CLKFont *_font;
    NSNumber *_updateToken;
    BOOL _updatedAfterTimeTravelStateChange;
    CLKFont *_preTimeTravelFont;
    BOOL _monochromeSnapshot;
    CGFloat _previousFraction;
    NSAttributedString *_originalString;
    UIView *_snapshot;
}


@property (readonly, nonatomic) CGFloat _lastLineBaseline;
@property (copy, nonatomic) NSAttributedString *attributedText;
@property (readonly, nonatomic) UIEdgeInsets cachedOpticalEdgeInsets; // ivar: _cachedOpticalEdgeInsets
@property (nonatomic) BOOL cachedOpticalEdgeInsetsIsValid; // ivar: _cachedOpticalEdgeInsetsIsValid
@property (nonatomic) CGSize cachedSingleLineSize; // ivar: _cachedSingleLineSize
@property (nonatomic) BOOL cachedSizeIsValid; // ivar: _cachedSizeIsValid
@property (retain, nonatomic) UIColor *color;
@property (readonly, nonatomic) UIColor *contentColor;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (weak, nonatomic) NSObject<CLKMonochromeFilterProvider> *filterProvider; // ivar: _filterProvider
@property (retain, nonatomic) CLKFont *font;
@property (readonly) NSUInteger hash;
@property (nonatomic) BOOL inTimeTravel; // ivar: _inTimeTravel
@property (readonly, nonatomic) BOOL isTextTruncated; // ivar: _isTextTruncated
@property (nonatomic) CGFloat maxWidth; // ivar: _maxWidth
@property (retain, nonatomic) CLKFont *monospacedDigitsFont; // ivar: _monospacedDigitsFont
@property (copy, nonatomic) id *needsResizeHandler; // ivar: _needsResizeHandler
@property (copy, nonatomic) id *nowProvider; // ivar: _nowProvider
@property (readonly, nonatomic) UIEdgeInsets opticalInsets;
@property (readonly, nonatomic) NSUInteger options; // ivar: _options
@property (retain, nonatomic) UIColor *overrideColor; // ivar: _overrideColor
@property (copy, nonatomic) NSParagraphStyle *paragraphStyle; // ivar: _paragraphStyle
@property (retain, nonatomic) CLKFont *smallCapsBaseFont; // ivar: _smallCapsBaseFont
@property (readonly) Class superclass;
@property (copy, nonatomic) NSString *text;
@property (nonatomic) NSInteger textAlignment;
@property (retain, nonatomic) UIColor *textColor;
@property (retain, nonatomic) CLKTextProvider *textProvider; // ivar: _textProvider
@property (retain, nonatomic) CLKFont *textProviderFont;
@property (retain, nonatomic) CLKFont *textProviderSmallCapsBaseFont;
@property (nonatomic) CGFloat tracking; // ivar: _tracking
@property (nonatomic) NSInteger twoToneStyleInMonochrome; // ivar: _twoToneStyleInMonochrome
@property (nonatomic) BOOL uppercase; // ivar: _uppercase
@property (nonatomic) BOOL usesLegibility;
@property (nonatomic) BOOL usesTextProviderSize; // ivar: _usesTextProviderSize
@property (nonatomic) BOOL usesTextProviderTintColoring; // ivar: _usesTextProviderTintColoring


+(id)labelWithOptions:(NSUInteger)arg0 ;
-(BOOL)_shouldAnimatePropertyWithKey:(id)arg0 ;
-(BOOL)usesLegibility:(BOOL)arg0 ;
-(CGFloat)_firstLineBaseline;
-(CGFloat)minimumWidth;
-(CGFloat)minimumWithFont:(id)arg0 ;
-(CGFloat)minimumWithFont:(id)arg0 smallCapsBaseFont:(id)arg1 ;
-(CGFloat)widthForMaxWidth:(CGFloat)arg0 ;
-(CGFloat)widthForMaxWidth:(CGFloat)arg0 withFont:(id)arg1 ;
-(CGFloat)widthForMaxWidth:(CGFloat)arg0 withFont:(id)arg1 smallCapsBaseFont:(id)arg2 ;
-(id)_fontWithMonospaceNumbers:(id)arg0 ;
-(id)forwardingTargetForSelector:(SEL)arg0 ;
-(id)initWithFrame:(struct CGRect )arg0 ;
-(id)initWithFrame:(struct CGRect )arg0 options:(NSUInteger)arg1 ;
-(struct CGSize )sizeThatFits:(struct CGSize )arg0 ;
-(void)_requeryTextProviderAndNotify:(BOOL)arg0 ;
-(void)_setAnimationAlpha:(CGFloat)arg0 ;
-(void)_setUpSnapshot;
-(void)_transitionTwoToneLabelToMonochromeWithFraction:(CGFloat)arg0 ;
-(void)_updateDynamicTracking;
-(void)_updateTwoToneLabelMonochromeColor;
-(void)editingDidEnd;
-(void)invalidateCachedSize;
-(void)setBackgroundColor:(id)arg0 ;
-(void)setBounds:(struct CGRect )arg0 ;
-(void)setNumberOfLines:(NSInteger)arg0 ;
-(void)setShadowOffset:(struct CGSize )arg0 ;
-(void)sizeToFit;
-(void)traitCollectionDidChange:(id)arg0 ;
-(void)transitionToMonochromeWithFraction:(CGFloat)arg0 style:(NSInteger)arg1 ;
-(void)updateMonochromeColorWithStyle:(NSInteger)arg0 ;


@end


#endif