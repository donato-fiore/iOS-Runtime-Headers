// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PKPALETTETOOLVIEW_H
#define PKPALETTETOOLVIEW_H

@class UIControl, NSString, UIImageView, NSLayoutConstraint, UIPointerInteraction, NSDictionary;
@protocol PKPaletteTool, PKPaletteEdgeLocating, PKPaletteViewSizeScaling, UIPointerInteractionDelegate, PKPaletteErasingTool, PKPaletteHandwritingTool, PKPaletteInkingTool;


#import "PKPaletteAttributeViewController.h"
#import "PKToolConfiguration.h"
#import "PKPaletteToolShadowPathView.h"

@interface PKPaletteToolView : UIControl <PKPaletteTool, PKPaletteEdgeLocating, PKPaletteViewSizeScaling, UIPointerInteractionDelegate>



@property (readonly, nonatomic) PKPaletteAttributeViewController *attributeViewController; // ivar: _attributeViewController
@property (nonatomic) NSInteger colorUserInterfaceStyle; // ivar: _colorUserInterfaceStyle
@property (copy, nonatomic) PKToolConfiguration *configuration; // ivar: _configuration
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic) NSUInteger edgeLocation; // ivar: _edgeLocation
@property (readonly, nonatomic) NSObject<PKPaletteErasingTool> *erasingTool;
@property (readonly, nonatomic) NSObject<PKPaletteHandwritingTool> *handwritingTool;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) UIImageView *imageView; // ivar: _imageView
@property (retain, nonatomic) NSLayoutConstraint *imageViewBottomAnchorConstraint; // ivar: _imageViewBottomAnchorConstraint
@property (retain, nonatomic) NSLayoutConstraint *imageViewHeightAnchorConstraint; // ivar: _imageViewHeightAnchorConstraint
@property (retain, nonatomic) NSLayoutConstraint *imageViewLeftAnchorConstraint; // ivar: _imageViewLeftAnchorConstraint
@property (retain, nonatomic) NSLayoutConstraint *imageViewRightAnchorConstraint; // ivar: _imageViewRightAnchorConstraint
@property (retain, nonatomic) NSLayoutConstraint *imageViewTopAnchorConstraint; // ivar: _imageViewTopAnchorConstraint
@property (retain, nonatomic) NSLayoutConstraint *imageViewWidthAnchorConstraint; // ivar: _imageViewWidthAnchorConstraint
@property (readonly, nonatomic) NSObject<PKPaletteInkingTool> *inkingTool;
@property (retain, nonatomic) UIPointerInteraction *pointerInteraction; // ivar: _pointerInteraction
@property (nonatomic) CGFloat scalingFactor; // ivar: _scalingFactor
@property (readonly) Class superclass;
@property (nonatomic) BOOL supportsDisplayingSelectedColor; // ivar: _supportsDisplayingSelectedColor
@property (readonly, nonatomic) NSObject<PKPaletteTool> *tool;
@property (readonly, nonatomic) NSString *toolIdentifier; // ivar: _toolIdentifier
@property (readonly, nonatomic) NSString *toolName;
@property (copy, nonatomic) NSDictionary *toolProperties; // ivar: _toolProperties
@property (retain, nonatomic) PKPaletteToolShadowPathView *toolShadowView; // ivar: _toolShadowView
@property (retain, nonatomic) NSLayoutConstraint *toolShadowViewBottomAnchorConstraint; // ivar: _toolShadowViewBottomAnchorConstraint
@property (retain, nonatomic) NSLayoutConstraint *toolShadowViewLeftAnchorConstraint; // ivar: _toolShadowViewLeftAnchorConstraint
@property (retain, nonatomic) NSLayoutConstraint *toolShadowViewRightAnchorConstraint; // ivar: _toolShadowViewRightAnchorConstraint
@property (retain, nonatomic) NSLayoutConstraint *toolShadowViewTopAnchorConstraint; // ivar: _toolShadowViewTopAnchorConstraint
@property (readonly, nonatomic) NSString *toolVariant; // ivar: _toolVariant


+(id)toolViewWithIdentifier:(id)arg0 variant:(id)arg1 configuration:(id)arg2 ;
-(BOOL)isCustomTool;
-(BOOL)isErasingTool;
-(BOOL)isHandwritingTool;
-(BOOL)isInkingTool;
-(BOOL)isLassoTool;
-(BOOL)isRulerTool;
-(id)initWithToolIdentifier:(id)arg0 configuration:(id)arg1 toolProperties:(id)arg2 ;
-(id)initWithToolIdentifier:(id)arg0 variant:(id)arg1 configuration:(id)arg2 ;
-(id)pointerInteraction:(id)arg0 regionForRequest:(id)arg1 defaultRegion:(id)arg2 ;
-(id)pointerInteraction:(id)arg0 styleForRegion:(id)arg1 ;
-(struct CGSize )intrinsicContentSize;
-(void)_reloadToolImage;
-(void)_reloadToolImageSizeConstraints;
-(void)_updateToolShadowView;
-(void)pointerInteraction:(id)arg0 willEnterRegion:(id)arg1 animator:(id)arg2 ;
-(void)pointerInteraction:(id)arg0 willExitRegion:(id)arg1 animator:(id)arg2 ;
-(void)setHighlighted:(BOOL)arg0 ;
-(void)setSelected:(BOOL)arg0 ;
-(void)traitCollectionDidChange:(id)arg0 ;
-(void)updateConstraints;


@end


#endif