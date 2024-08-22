// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef PKPALETTETOOLVIEW_H
#define PKPALETTETOOLVIEW_H

@class UIControl, NSString, UIImageView, NSLayoutConstraint, NSDictionary, UIView;
@protocol PKPaletteTool, PKPaletteEdgeLocating, PKPaletteViewSizeScaling, PKPaletteErasingTool, PKPaletteHandwritingTool, PKPaletteInkingTool;


#import "PKPaletteAttributeViewController.h"

@interface PKPaletteToolView : UIControl <PKPaletteTool, PKPaletteEdgeLocating, PKPaletteViewSizeScaling>



@property (readonly, nonatomic) PKPaletteAttributeViewController *attributeViewController; // ivar: _attributeViewController
@property (nonatomic) NSInteger colorUserInterfaceStyle; // ivar: _colorUserInterfaceStyle
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic) NSUInteger edgeLocation; // ivar: _edgeLocation
@property (readonly, nonatomic) NSObject<PKPaletteErasingTool> *erasingTool;
@property (readonly, nonatomic) NSObject<PKPaletteHandwritingTool> *handwritingTool;
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) UIImageView *imageView; // ivar: _imageView
@property (retain, nonatomic) NSLayoutConstraint *imageViewBottomAnchorConstraint; // ivar: _imageViewBottomAnchorConstraint
@property (retain, nonatomic) NSLayoutConstraint *imageViewHeigthAnchorConstraint; // ivar: _imageViewHeigthAnchorConstraint
@property (retain, nonatomic) NSLayoutConstraint *imageViewLeftAnchorConstraint; // ivar: _imageViewLeftAnchorConstraint
@property (retain, nonatomic) NSLayoutConstraint *imageViewRightAnchorConstraint; // ivar: _imageViewRightAnchorConstraint
@property (retain, nonatomic) NSLayoutConstraint *imageViewTopAnchorConstraint; // ivar: _imageViewTopAnchorConstraint
@property (retain, nonatomic) NSLayoutConstraint *imageViewWidthAnchorConstraint; // ivar: _imageViewWidthAnchorConstraint
@property (readonly, nonatomic) NSObject<PKPaletteInkingTool> *inkingTool;
@property (nonatomic) CGFloat scalingFactor; // ivar: _scalingFactor
@property (readonly) Class superclass;
@property (nonatomic) BOOL supportsDisplayingSelectedColor; // ivar: _supportsDisplayingSelectedColor
@property (readonly, nonatomic) NSObject<PKPaletteTool> *tool;
@property (readonly, nonatomic) NSString *toolIdentifier; // ivar: _toolIdentifier
@property (readonly, nonatomic) NSString *toolName;
@property (copy, nonatomic) NSDictionary *toolProperties; // ivar: _toolProperties
@property (retain, nonatomic) UIView *toolShadowView; // ivar: _toolShadowView


+(id)toolViewWithIdentifier:(id)arg0 ;
-(BOOL)isErasingTool;
-(BOOL)isHandwritingTool;
-(BOOL)isInkingTool;
-(BOOL)isLassoTool;
-(BOOL)isRulerTool;
-(id)initWithToolIdentifier:(id)arg0 ;
-(id)initWithToolIdentifier:(id)arg0 toolProperties:(id)arg1 ;
-(struct CGSize )intrinsicContentSize;
-(void)_reloadToolImage;
-(void)_reloadToolImageSizeConstraints;
-(void)_updateToolShadowView;
-(void)setSelected:(BOOL)arg0 ;
-(void)traitCollectionDidChange:(id)arg0 ;
-(void)updateConstraints;


@end


#endif