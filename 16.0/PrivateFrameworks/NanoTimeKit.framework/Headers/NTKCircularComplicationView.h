// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef NTKCIRCULARCOMPLICATIONVIEW_H
#define NTKCIRCULARCOMPLICATIONVIEW_H

@class UIView, UIColor, CLKComplicationTemplate, NSString, CLKDevice, NSDate;
@protocol CDTemplateComplicationDisplay, CDComplicationDisplay, CDComplicationDisplayObserver;



@interface NTKCircularComplicationView : UIView <CDTemplateComplicationDisplay, CDComplicationDisplay>

 {
    UIView *_platter;
    UIView *_highlightView;
    UIColor *_computedForegroundColor;
    UIColor *_computedPlatterColor;
}


@property (nonatomic) BOOL canUseCurvedText; // ivar: canUseCurvedText
@property (readonly, nonatomic) CLKComplicationTemplate *complicationTemplate; // ivar: _complicationTemplate
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) CLKDevice *device; // ivar: _device
@property (weak, nonatomic) NSObject<CDComplicationDisplayObserver> *displayObserver; // ivar: displayObserver
@property (retain, nonatomic) UIColor *foregroundColor; // ivar: _foregroundColor
@property (readonly) NSUInteger hash;
@property (nonatomic, getter=isHighlighted) BOOL highlighted;
@property (retain, nonatomic) UIColor *platterColor; // ivar: _platterColor
@property (nonatomic) BOOL shouldUseTemplateColors;
@property (readonly) Class superclass;
@property (readonly) NSDate *timeTravelDate; // ivar: _timeTravelDate
@property (nonatomic) BOOL useRoundedFontDesign; // ivar: _useRoundedFontDesign
@property (nonatomic) BOOL usesMediumLayout; // ivar: _usesMediumLayout
@property (nonatomic) BOOL usesMultiColor; // ivar: _usesMultiColor
@property (nonatomic) BOOL wantsPlatter; // ivar: _wantsPlatter


+(BOOL)handlesComplicationTemplate:(id)arg0 ;
+(NSInteger)layoutOverride;
+(id)_alarmImageProviderMedium:(BOOL)arg0 ;
+(id)_imageProviderForImageSymbolName:(id)arg0 imageAssetNamePrefix:(id)arg1 ;
+(id)_stopwatchImageProviderMedium:(BOOL)arg0 ;
+(id)_timerImageProviderMedium:(BOOL)arg0 ;
+(id)mediumViewForComplicationType:(NSUInteger)arg0 ;
+(id)viewForComplicationType:(NSUInteger)arg0 ;
-(BOOL)pointInside:(struct CGPoint )arg0 withEvent:(id)arg1 ;
-(NSInteger)_variableFontSizeForText:(id)arg0 ;
-(id)_computedForegroundColor;
-(id)_computedPlatterColor;
-(id)_fontForDynamicFontSize:(NSInteger)arg0 ;
-(id)_mediumStackFontForText:(id)arg0 ;
-(id)_newLabelSubviewWithFont:(id)arg0 ;
-(id)initWithFrame:(struct CGRect )arg0 ;
-(struct ? )_layoutConstants;
-(void)_computeForegroundColor;
-(void)_computePlatterColor;
-(void)_enumerateForegroundColoringViewsWithBlock:(id)arg0 ;
-(void)_updateColorChange;
-(void)_updateForTemplateChange;
-(void)_updateForegroundColor;
-(void)_updateImageViewColor:(id)arg0 ;
-(void)_updateLabelViewColor:(id)arg0 ;
-(void)_updateLabelsForFontChange;
-(void)_updatePlatterColor;
-(void)layoutSubviews;
-(void)traitCollectionDidChange:(id)arg0 ;


@end


#endif