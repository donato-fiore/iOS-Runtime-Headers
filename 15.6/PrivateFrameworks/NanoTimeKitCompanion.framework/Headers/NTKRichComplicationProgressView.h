// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef NTKRICHCOMPLICATIONPROGRESSVIEW_H
#define NTKRICHCOMPLICATIONPROGRESSVIEW_H

@class UIView, CLKDevice, NSNumber, NSString, CLKGaugeProvider, NSArray;
@protocol CLKMonochromeFilterProvider, CLKMonochromeComplicationView;


#import "NTKRichComplicationShapeView.h"

@interface NTKRichComplicationProgressView : UIView <CLKMonochromeFilterProvider, CLKMonochromeComplicationView>

 {
    NSInteger _family;
    CLKDevice *_device;
    NSNumber *_updateToken;
    float _currentBackgroundViewAlphaPercentage;
}


@property (readonly, nonatomic) NTKRichComplicationShapeView *backgroundView; // ivar: _backgroundView
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic) BOOL enabled; // ivar: _enabled
@property (weak, nonatomic) NSObject<CLKMonochromeFilterProvider> *filterProvider; // ivar: _filterProvider
@property (readonly, nonatomic) NTKRichComplicationShapeView *foregroundView; // ivar: _foregroundView
@property (retain, nonatomic) CLKGaugeProvider *gaugeProvider; // ivar: _gaugeProvider
@property (retain, nonatomic) NSArray *gradientColors; // ivar: _gradientColors
@property (readonly) NSUInteger hash;
@property (nonatomic) CGFloat progress; // ivar: _progress
@property (readonly, nonatomic) UIView *ringView; // ivar: _ringView
@property (nonatomic) NSInteger style; // ivar: _style
@property (readonly) Class superclass;


-(id)colorForView:(id)arg0 accented:(BOOL)arg1 ;
-(id)filterForView:(id)arg0 style:(NSInteger)arg1 ;
-(id)filterForView:(id)arg0 style:(NSInteger)arg1 fraction:(CGFloat)arg2 ;
-(id)initForFamily:(NSInteger)arg0 device:(id)arg1 backgroundShapeView:(id)arg2 foregroundShapeView:(id)arg3 ;
-(id)overrideBackgroundGradientColorsForGradientColors:(id)arg0 ;
-(id)overrideBackgroundGradientColorsForGradientColors:(id)arg0 locations:(id)arg1 ;
-(void)_adjustBackgroundViewAlphaWithPercentage:(float)arg0 ;
-(void)_applyStyle;
-(void)_createRingView;
-(void)_updateUIFromGaugeProvider;
-(void)animateToProgress:(float)arg0 duration:(CGFloat)arg1 ;
-(void)dealloc;
-(void)layoutSubviews;
-(void)transitionToMonochromeWithFraction:(CGFloat)arg0 ;
-(void)updateMonochromeColor;


@end


#endif