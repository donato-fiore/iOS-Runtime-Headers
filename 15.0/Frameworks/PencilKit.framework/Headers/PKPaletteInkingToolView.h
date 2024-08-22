// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef PKPALETTEINKINGTOOLVIEW_H
#define PKPALETTEINKINGTOOLVIEW_H

@class UIImage, UIImageView, NSString, UILabel, NSLayoutConstraint;
@protocol PKPaletteInkingTool, PKInkAttributesPickerDelegate, PKPaletteErasingTool, PKPaletteHandwritingTool;


#import "PKPaletteToolView.h"
#import "PKPaletteAttributeViewController.h"
#import "PKInk.h"

@interface PKPaletteInkingToolView : PKPaletteToolView <PKPaletteInkingTool, PKInkAttributesPickerDelegate>

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
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) NSObject<PKPaletteErasingTool> *erasingTool;
@property (readonly, nonatomic) NSObject<PKPaletteHandwritingTool> *handwritingTool;
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) PKInk *ink; // ivar: _ink
@property (readonly, nonatomic) NSObject<PKPaletteInkingTool> *inkingTool;
@property (retain, nonatomic) UILabel *opacityLabel; // ivar: _opacityLabel
@property (retain, nonatomic) NSLayoutConstraint *opacityLabelBottomConstraint; // ivar: _opacityLabelBottomConstraint
@property (retain, nonatomic) NSLayoutConstraint *opacityLabelCenterXConstraint; // ivar: _opacityLabelCenterXConstraint
@property (retain, nonatomic) NSLayoutConstraint *opacityLabelCenterYConstraint; // ivar: _opacityLabelCenterYConstraint
@property (retain, nonatomic) NSLayoutConstraint *opacityLabelLeadingConstraint; // ivar: _opacityLabelLeadingConstraint
@property (retain, nonatomic) NSLayoutConstraint *opacityLabelTrailingConstraint; // ivar: _opacityLabelTrailingConstraint
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


+(id)defaultColorForInkingToolWithIdentifier:(id)arg0 ;
-(CGFloat)_minimumAllowedInkOpacity;
-(NSInteger)_uiColorUserInterfaceStyle;
-(id)_toolColorIndicatorContourImageForCurrentEdgeLocation;
-(id)_toolColorIndicatorImageForCurrentEdgeLocation;
-(id)_toolTipContourImageForCurrentEdgeLocation;
-(id)_toolTipImageForCurrentEdgeLocation;
-(id)_uiColor;
-(id)attributeViewController;
-(id)initWithToolIdentifier:(id)arg0 ;
-(id)initWithToolIdentifier:(id)arg0 toolProperties:(id)arg1 ;
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