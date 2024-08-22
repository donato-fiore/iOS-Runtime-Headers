// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef NTKUTILITYFLATCOMPLICATIONVIEW_H
#define NTKUTILITYFLATCOMPLICATIONVIEW_H

@class CLKUICurvedColoringLabel, UIImageView, CLKUIColoringLabel, UIColor, NSString, CLKDevice, UIView<CDComplicationImageView>, NSDate;
@protocol CLKMonochromeFilterProvider, NTKUtilityFlatComplicationView, CLKMonochromeComplicationView, NTKUtilityFlatComplicationViewDelegate, CDComplicationDisplayObserver;


#import "NTKUtilityComplicationView.h"

@interface NTKUtilityFlatComplicationView : NTKUtilityComplicationView <CLKMonochromeFilterProvider, NTKUtilityFlatComplicationView, CLKMonochromeComplicationView>

 {
    CLKUICurvedColoringLabel *_curvedLabel;
    UIImageView *_curvedHighlightView;
    CLKUIColoringLabel *_activeLabel;
}


@property (retain, nonatomic) UIColor *accentColor;
@property (nonatomic) BOOL alwaysEnforcePlatterInset;
@property (nonatomic) BOOL canUseCurvedText;
@property (nonatomic) CGFloat circleRadius;
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<NTKUtilityFlatComplicationViewDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (retain, nonatomic) CLKDevice *device;
@property (weak, nonatomic) NSObject<CDComplicationDisplayObserver> *displayObserver;
@property (nonatomic) CGFloat editingRotationAngle;
@property (weak, nonatomic) NSObject<CLKMonochromeFilterProvider> *filterProvider; // ivar: _filterProvider
@property (nonatomic) CGFloat fontSize;
@property (nonatomic) CGFloat fontWeight;
@property (nonatomic) CGFloat foregroundAlpha;
@property (retain, nonatomic) UIColor *foregroundColor;
@property (nonatomic) CGFloat foregroundImageAlpha;
@property (readonly) NSUInteger hash;
@property (nonatomic, getter=isHighlighted) BOOL highlighted;
@property (retain, nonatomic) UIView<CDComplicationImageView> *imageView; // ivar: _imageView
@property (retain, nonatomic) CLKUIColoringLabel *label; // ivar: _label
@property (nonatomic) CGFloat maxAngularWidth;
@property (nonatomic) NSUInteger placement;
@property (retain, nonatomic) UIColor *platterColor;
@property (retain, nonatomic) UIColor *shadowColor;
@property (nonatomic) BOOL shouldScaleAndFadeWhenHighlighting;
@property (nonatomic) BOOL shouldUseBackgroundPlatter;
@property (nonatomic) BOOL shouldUseTemplateColors;
@property (readonly) Class superclass;
@property (nonatomic) BOOL suppressesInternalColorOverrides;
@property (readonly, nonatomic) CGFloat textWidthInRadians; // ivar: _textWidthInRadians
@property (readonly) NSDate *timeTravelDate;
@property (nonatomic) BOOL useAlternativePunctuation;
@property (nonatomic) BOOL useBlockyHighlightCorners;
@property (nonatomic) BOOL useRoundedFontDesign;
@property (nonatomic) BOOL usesLegibility;


+(BOOL)handlesComplicationTemplate:(id)arg0 ;
+(void)circleRadius:(*CGFloat)arg0 centerAngle:(*CGFloat)arg1 maxAngularWidth:(*CGFloat)arg2 interior:(*BOOL)arg3 forPlacement:(NSUInteger)arg4 forDevice:(id)arg5 ;
-(BOOL)_shouldLayoutWithImageView;
-(BOOL)pointInside:(struct CGPoint )arg0 withEvent:(id)arg1 ;
-(CGFloat)_widthThatFits;
-(NSUInteger)imagePlacement;
-(id)_backgroundPlatterImage;
-(id)colorForView:(id)arg0 accented:(BOOL)arg1 ;
-(id)filterForView:(id)arg0 style:(NSInteger)arg1 ;
-(id)filterForView:(id)arg0 style:(NSInteger)arg1 fraction:(CGFloat)arg2 ;
-(id)filtersForView:(id)arg0 style:(NSInteger)arg1 ;
-(id)filtersForView:(id)arg0 style:(NSInteger)arg1 fraction:(CGFloat)arg2 ;
-(id)initWithFrame:(struct CGRect )arg0 ;
-(struct CGSize )boundingSizeOfCurrentComplicationTemplate;
-(struct CGSize )sizeThatFits:(struct CGSize )arg0 ;
-(void)_enumerateColoringStackedImagesViewsWithBlock:(id)arg0 ;
-(void)_enumerateColoringViewsWithBlock:(id)arg0 ;
-(void)_updateContentForMaxSizeChange;
-(void)_updateForTemplateChange;
-(void)_updateHighlightViewCornerRadius;
-(void)_updateLabelMaxWidth;
-(void)layoutSubviews;
-(void)transitionToMonochromeWithFraction:(CGFloat)arg0 ;
-(void)updateMonochromeColor;
-(void)updateTextWidthIfNeeded;


@end


#endif