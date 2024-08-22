// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PKPALETTEINKINGTOOLVIEW_H
#define PKPALETTEINKINGTOOLVIEW_H

@class UIImage, UIImageView, NSString, UILabel, NSLayoutConstraint;
@protocol PKInkAttributesPickerDelegate, PKPaletteInkingTool, PKPaletteErasingTool, PKPaletteHandwritingTool;


#import "PKPaletteToolView.h"
#import "PKPaletteAttributeViewController.h"
#import "PKToolConfiguration.h"
#import "PKInk.h"

@interface PKPaletteInkingToolView : PKPaletteToolView <PKInkAttributesPickerDelegate, PKPaletteInkingTool>

 {
    PKPaletteAttributeViewController *_attributeViewController;
}


@property (retain, nonatomic) UIImage *colorIndicatorContourImageLeft; // ivar: _colorIndicatorContourImageLeft
@property (retain, nonatomic) UIImage *colorIndicatorContourImageRight; // ivar: _colorIndicatorContourImageRight
@property (retain, nonatomic) UIImage *colorIndicatorContourImageUp; // ivar: _colorIndicatorContourImageUp
@property (retain, nonatomic) UIImageView *colorIndicatorContourImageView; // ivar: _colorIndicatorContourImageView
@property (retain, nonatomic) UIImage *colorIndicatorImageLeft; // ivar: _colorIndicatorImageLeft
@property (retain, nonatomic) UIImage *colorIndicatorImageRight; // ivar: _colorIndicatorImageRight
@property (retain, nonatomic) UIImage *colorIndicatorImageUp; // ivar: _colorIndicatorImageUp
@property (retain, nonatomic) UIImageView *colorIndicatorImageView; // ivar: _colorIndicatorImageView
@property (readonly, nonatomic) PKToolConfiguration *configuration;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) NSObject<PKPaletteErasingTool> *erasingTool;
@property (readonly, nonatomic) NSObject<PKPaletteHandwritingTool> *handwritingTool;
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) PKInk *ink; // ivar: _ink
@property (readonly, nonatomic) NSObject<PKPaletteInkingTool> *inkingTool;
@property (retain, nonatomic) UILabel *opacityLabel; // ivar: _opacityLabel
@property (retain, nonatomic) NSLayoutConstraint *opacityLabelCenterXConstraint; // ivar: _opacityLabelCenterXConstraint
@property (retain, nonatomic) NSLayoutConstraint *opacityLabelCenterYConstraint; // ivar: _opacityLabelCenterYConstraint
@property (retain, nonatomic) NSLayoutConstraint *opacityLabelLeftConstraint; // ivar: _opacityLabelLeftConstraint
@property (retain, nonatomic) NSLayoutConstraint *opacityLabelRightConstraint; // ivar: _opacityLabelRightConstraint
@property (retain, nonatomic) NSLayoutConstraint *opacityLabelTopConstraint; // ivar: _opacityLabelTopConstraint
@property (readonly) Class superclass;
@property (retain, nonatomic) UIImageView *tipIndicatorContourImageView; // ivar: _tipIndicatorContourImageView
@property (retain, nonatomic) UIImageView *tipIndicatorImageView; // ivar: _tipIndicatorImageView
@property (readonly, nonatomic) NSString *toolIdentifier;
@property (retain, nonatomic) UIImage *toolTipContourImageLeft; // ivar: _toolTipContourImageLeft
@property (retain, nonatomic) UIImage *toolTipContourImageRight; // ivar: _toolTipContourImageRight
@property (retain, nonatomic) UIImage *toolTipContourImageUp; // ivar: _toolTipContourImageUp
@property (retain, nonatomic) UIImage *toolTipImageLeft; // ivar: _toolTipImageLeft
@property (retain, nonatomic) UIImage *toolTipImageRight; // ivar: _toolTipImageRight
@property (retain, nonatomic) UIImage *toolTipImageUp; // ivar: _toolTipImageUp
@property (readonly, nonatomic) NSString *toolVariant;


-(BOOL)_shouldHaveAttributeViewController;
-(CGFloat)_minimumAllowedInkOpacity;
-(NSInteger)_uiColorUserInterfaceStyle;
-(NSUInteger)_displayModeForAttributeViewController;
-(id)_toolColorIndicatorContourImageForCurrentEdgeLocation;
-(id)_toolColorIndicatorImageForCurrentEdgeLocation;
-(id)_toolTipContourImageForCurrentEdgeLocation;
-(id)_toolTipImageForCurrentEdgeLocation;
-(id)_uiColor;
-(id)attributeViewController;
-(id)initWithToolIdentifier:(id)arg0 variant:(id)arg1 configuration:(id)arg2 ;
-(id)initWithToolIdentifier:(id)arg0 variant:(id)arg1 configuration:(id)arg2 toolProperties:(id)arg3 ;
-(id)toolProperties;
-(void)_reloadToolImage;
-(void)_setToolProperties:(id)arg0 toolIdentifier:(id)arg1 ;
-(void)_updateOpacityLabel;
-(void)_updateToolColorBandAndTipImageViews;
-(void)inkAttributesPickerDidChangeInkOpacity:(id)arg0 ;
-(void)inkAttributesPickerDidChangeInkThickness:(id)arg0 ;
-(void)layoutSubviews;
-(void)setEdgeLocation:(NSUInteger)arg0 ;
-(void)setScalingFactor:(CGFloat)arg0 ;
-(void)setToolProperties:(id)arg0 ;
-(void)updateConstraints;


@end


#endif