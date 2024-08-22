// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef NTKUTILITYCOMPLICATIONVIEW_H
#define NTKUTILITYCOMPLICATIONVIEW_H

@class UIView, UIColor, UIImageView, CLKComplicationTemplate, NSString, CLKDevice, CLKFont, NSDate;
@protocol NTKTemplateComplicationDisplay, NTKComplicationDisplay, NTKComplicationDisplayObserver;


#import "NTKFaceColorScheme.h"

@interface NTKUtilityComplicationView : UIView <NTKTemplateComplicationDisplay, NTKComplicationDisplay>

 {
    BOOL _highlighted;
    UIColor *_computedForegroundColor;
    UIColor *_computedPlatterColor;
    CGFloat _computedForegroundAlpha;
    CGFloat _computedForegroundImageAlpha;
}


@property (retain, nonatomic) UIColor *accentColor; // ivar: _accentColor
@property (nonatomic) BOOL alwaysEnforcePlatterInset; // ivar: _alwaysEnforcePlatterInset
@property (retain, nonatomic) UIImageView *backgroundPlatter; // ivar: _backgroundPlatter
@property (nonatomic) BOOL canUseCurvedText; // ivar: _canUseCurvedText
@property (retain, nonatomic) NTKFaceColorScheme *colorScheme; // ivar: _colorScheme
@property (readonly, nonatomic) CLKComplicationTemplate *complicationTemplate; // ivar: _complicationTemplate
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (retain, nonatomic) CLKDevice *device; // ivar: _device
@property (weak, nonatomic) NSObject<NTKComplicationDisplayObserver> *displayObserver; // ivar: displayObserver
@property (readonly, nonatomic) BOOL editing; // ivar: _editing
@property (nonatomic) CGFloat editingRotationAngle; // ivar: _editingRotationAngle
@property (retain, nonatomic) CLKFont *font; // ivar: _font
@property (nonatomic) CGFloat fontWeight; // ivar: _fontWeight
@property (nonatomic) CGFloat foregroundAlpha; // ivar: _foregroundAlpha
@property (retain, nonatomic) UIColor *foregroundColor; // ivar: _foregroundColor
@property (nonatomic) CGFloat foregroundImageAlpha; // ivar: _foregroundImageAlpha
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) UIView *highlightView; // ivar: _highlightView
@property (nonatomic, getter=isHighlighted) BOOL highlighted;
@property (readonly, nonatomic) CGSize maxSize; // ivar: _maxSize
@property (nonatomic) CGFloat minimumWidth; // ivar: _minimumWidth
@property (retain, nonatomic) UIColor *overrideColor; // ivar: _overrideColor
@property (nonatomic) NSUInteger placement; // ivar: _placement
@property (retain, nonatomic) UIColor *platterColor; // ivar: _platterColor
@property (retain, nonatomic) UIColor *shadowColor; // ivar: _shadowColor
@property (nonatomic) BOOL shouldScaleAndFadeWhenHighlighting; // ivar: _shouldScaleAndFadeWhenHighlighting
@property (nonatomic) BOOL shouldUseBackgroundPlatter; // ivar: _shouldUseBackgroundPlatter
@property (nonatomic) BOOL shouldUseTemplateColors;
@property (readonly) Class superclass;
@property (nonatomic) BOOL suppressesInternalColorOverrides; // ivar: _suppressesInternalColorOverrides
@property (readonly) NSDate *timeTravelDate; // ivar: _timeTravelDate
@property (nonatomic) UIEdgeInsets touchEdgeInsets; // ivar: _touchEdgeInsets
@property (nonatomic) BOOL useBlockyHighlightCorners; // ivar: _useBlockyHighlightCorners
@property (nonatomic) BOOL useRoundedFontDesign; // ivar: _useRoundedFontDesign
@property (nonatomic) BOOL usesLegibility; // ivar: _usesLegibility


+(BOOL)handlesComplicationTemplate:(id)arg0 ;
+(id)_alarmImageProviderActive:(BOOL)arg0 ;
+(id)_preferredAdditionalFontSettings;
+(id)_stopwatchImageProvider;
+(id)_timerImageProvider;
+(id)largeComplicationViewForType:(NSUInteger)arg0 narrow:(BOOL)arg1 ;
+(id)smallComplicationViewForType:(NSUInteger)arg0 ;
-(BOOL)isPlacementForTopBezelComplication;
-(BOOL)pointInside:(struct CGPoint )arg0 withEvent:(id)arg1 ;
-(BOOL)shouldUsePlatterInset;
-(CGFloat)_widthThatFits;
-(id)_computedForegroundColor;
-(id)_computedPlatterColor;
-(id)_newCurvedHighlightView;
-(id)_newDigitalTimeLabelSubviewWithOptions:(NSUInteger)arg0 ;
-(id)_newHighlightView;
-(id)_newHighlightViewVariant:(BOOL)arg0 ;
-(id)_newImageViewSubview;
-(id)_newImageViewSubviewWithAlpha:(CGFloat)arg0 ;
-(id)_newLabelSubviewWithFont:(id)arg0 variant:(BOOL)arg1 ;
-(id)_newStandardCurvedLabelSubview;
-(id)_newStandardLabelSubview;
-(id)_newStandardLabelSubviewVariant:(BOOL)arg0 ;
-(id)_smallCapsFont;
-(id)_standardFont;
-(id)initWithFrame:(struct CGRect )arg0 ;
-(struct CGSize )sizeThatFits:(struct CGSize )arg0 ;
-(struct UIEdgeInsets )_touchEdgeInsetsForPlacement:(NSUInteger)arg0 ;
-(void)_applyColorScheme:(id)arg0 ;
-(void)_applyForegroundAlpha;
-(void)_computeForegroundAlpha;
-(void)_computeForegroundColor;
-(void)_computeForegroundImageAlpha;
-(void)_computePlatterColor;
-(void)_enumerateColoringStackedImagesViewsWithBlock:(id)arg0 ;
-(void)_enumerateColoringViewsWithBlock:(id)arg0 ;
-(void)_updateContentForEditingChange;
-(void)_updateContentForMaxSizeChange;
-(void)_updateForTemplateChange;
-(void)_updateForegroundAlpha;
-(void)_updateForegroundColor;
-(void)_updateForegroundImageAlpha;
-(void)_updateImageViewAlpha:(id)arg0 ;
-(void)_updateImageViewColor:(id)arg0 ;
-(void)_updateLabelsForFontChange;
-(void)_updatePlatterColor;
-(void)applyFaceColor:(NSUInteger)arg0 units:(NSUInteger)arg1 ;
-(void)applyFaceColorPalette:(id)arg0 units:(NSUInteger)arg1 ;
-(void)applyTransitionFraction:(CGFloat)arg0 fromFaceColor:(NSUInteger)arg1 toFaceColor:(NSUInteger)arg2 units:(NSUInteger)arg3 brightenedUnits:(NSUInteger)arg4 ;
-(void)applyTransitionFraction:(CGFloat)arg0 fromFaceColorPalette:(id)arg1 toFaceColorPalette:(id)arg2 units:(NSUInteger)arg3 brightenedUnits:(NSUInteger)arg4 ;
-(void)layoutLabelVertically:(id)arg0 ;
-(void)layoutSubviews;


@end


#endif