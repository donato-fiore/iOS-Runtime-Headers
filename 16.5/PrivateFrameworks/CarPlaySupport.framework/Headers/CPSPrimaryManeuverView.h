// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef CPSPRIMARYMANEUVERVIEW_H
#define CPSPRIMARYMANEUVERVIEW_H

@class UIView, NSArray, UILayoutGuide, CPTravelEstimates, CPManeuver, UIImageView;


#import "CPSPrimaryManeuverLayoutConfiguration.h"
#import "CPSAspectFitImageView.h"
#import "CPSAbridgableLabel.h"

@interface CPSPrimaryManeuverView : UIView

@property (retain, nonatomic) CPSPrimaryManeuverLayoutConfiguration *activeLayoutConfiguration; // ivar: _activeLayoutConfiguration
@property (retain, nonatomic) NSArray *activeLayoutConstraints; // ivar: _activeLayoutConstraints
@property (nonatomic) BOOL calculationViewIsSizing; // ivar: _calculationViewIsSizing
@property (retain, nonatomic) UILayoutGuide *centeringLayoutGuide; // ivar: _centeringLayoutGuide
@property (retain, nonatomic) CPTravelEstimates *currentTravelEstimates; // ivar: _currentTravelEstimates
@property (nonatomic) CGFloat generatedWidth; // ivar: _generatedWidth
@property (retain, nonatomic) UIView *junctionImageBackgroundView; // ivar: _junctionImageBackgroundView
@property (retain, nonatomic) CPSAspectFitImageView *junctionImageView; // ivar: _junctionImageView
@property (retain, nonatomic) UILayoutGuide *labelCenteringLayoutGuide; // ivar: _labelCenteringLayoutGuide
@property (retain, nonatomic) CPSPrimaryManeuverLayoutConfiguration *layoutConfigurationForIntrinsicSizing; // ivar: _layoutConfigurationForIntrinsicSizing
@property (retain, nonatomic) NSArray *layoutConfigurations; // ivar: _layoutConfigurations
@property (readonly, nonatomic) CPManeuver *maneuver; // ivar: _maneuver
@property (retain, nonatomic) CPSAbridgableLabel *subtitleLabel; // ivar: _subtitleLabel
@property (retain, nonatomic) UIImageView *symbolImageView; // ivar: _symbolImageView
@property (retain, nonatomic) CPSAbridgableLabel *titleLabel; // ivar: _titleLabel
@property (nonatomic) BOOL usesCustomBackgroundColor; // ivar: _usesCustomBackgroundColor
@property (retain, nonatomic) UILayoutGuide *yCenteringGuide; // ivar: _yCenteringGuide


+(id)instructionsForManeuver:(id)arg0 ;
+(id)junctionImageForManeuver:(id)arg0 ;
+(id)symbolImageForManeuver:(id)arg0 ;
-(BOOL)centersManeuverInView;
-(BOOL)fitJunctionViewToHeight;
-(BOOL)hasJunctionImageBackground;
-(CGFloat)symbolImageHeight;
-(NSInteger)_compareInstruction:(id)arg0 toInstruction:(id)arg1 ;
-(id)_formattedDistance;
-(id)_fullLayoutConstraints;
-(id)_fullLayoutNoJunctionViewConstraints;
-(id)_fullLayoutNoJunctionViewWideImageConstraints;
-(id)_fullLayoutWideImageConstraints;
-(id)_fullSubtitleNextToImageConstraints;
-(id)_init;
-(id)_junctionViewNoInstructionWideImageConstraints;
-(id)_junctionViewNoSubtitleConstraints;
-(id)_minimalLayoutConstraints;
-(id)_minimalLayoutWideImageConstraints;
-(id)_subtitleFont;
-(id)_titleFont;
-(id)initWithManeuver:(id)arg0 ;
-(id)junctionBackgroundColor;
-(id)layoutConfigurationForSize:(struct CGSize )arg0 ;
-(id)shortestInstructionlayoutConfigurationForSize:(struct CGSize )arg0 ;
-(id)shortestJunctionViewlayoutConfigurationForSize:(struct CGSize )arg0 ;
-(struct CGSize )intrinsicContentSize;
-(struct CGSize )sizeThatFits:(struct CGSize )arg0 ;
-(void)_activateFullLayoutConstraints;
-(void)_activateFullLayoutWideImageConstraints;
-(void)_activateFullNoJunctionViewLayoutConstraints;
-(void)_activateFullNoJunctionViewWideImageLayoutConstraints;
-(void)_activateFullSubtitleNextToImageConstraints;
-(void)_activateJunctionViewNoInstructionConstraints;
-(void)_activateJunctionViewNoInstructionWideImageConstraints;
-(void)_activateMinimalLayoutConstraints;
-(void)_activateMinimalWideImageLayoutConstraints;
-(void)_generateLayoutConfigurationsForSizeIfNecessary:(struct CGSize )arg0 force:(BOOL)arg1 ;
-(void)_switchToLayoutConfiguration:(id)arg0 ;
-(void)_updateJunctionBackgroundColor;
-(void)_updateSubtitleTextColor;
-(void)layoutSubviews;
-(void)traitCollectionDidChange:(id)arg0 ;


@end


#endif