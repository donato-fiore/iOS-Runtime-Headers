// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef SBRINGERPILLVIEW_H
#define SBRINGERPILLVIEW_H

@class UIView, NSArray, UIColor, BSUICAPackageView, MTMaterialShadowView, UILabel, MTVisualStylingProvider;


#import "SBRingerVolumeSliderView.h"

@interface SBRingerPillView : UIView

@property (copy, nonatomic) NSArray *glyphTintBackgroundLayers; // ivar: _glyphTintBackgroundLayers
@property (retain, nonatomic) UIColor *glyphTintColor; // ivar: _glyphTintColor
@property (copy, nonatomic) NSArray *glyphTintShapeLayers; // ivar: _glyphTintShapeLayers
@property (retain, nonatomic) BSUICAPackageView *glyphView; // ivar: _glyphView
@property (retain, nonatomic) MTMaterialShadowView *materialView; // ivar: _materialView
@property (retain, nonatomic) UILabel *offLabel; // ivar: _offLabel
@property (retain, nonatomic) UILabel *onLabel; // ivar: _onLabel
@property (retain, nonatomic) UILabel *ringerLabel; // ivar: _ringerLabel
@property (retain, nonatomic) UILabel *silentModeLabel; // ivar: _silentModeLabel
@property (retain, nonatomic) SBRingerVolumeSliderView *slider; // ivar: _slider
@property (nonatomic) float sliderValue; // ivar: _sliderValue
@property (nonatomic) NSUInteger state; // ivar: _state
@property (retain, nonatomic) MTVisualStylingProvider *stylingProvider; // ivar: _stylingProvider


-(id)_visibleViewsForState:(NSUInteger)arg0 ;
-(id)init;
-(struct CGSize )sizeThatFits:(struct CGSize )arg0 ;
-(void)_updateGlyphWithStaticColor:(id)arg0 animationSettings:(id)arg1 ;
-(void)layoutSubviews;
-(void)traitCollectionDidChange:(id)arg0 ;


@end


#endif