// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef PKPALETTETOOLPREVIEW_H
#define PKPALETTETOOLPREVIEW_H

@class UIView, NSString, UILayoutGuide, NSLayoutConstraint, UIColor;
@protocol UIPopoverPresentationControllerDelegate, PKPaletteColorPickerControllerDelegate, PKPaletteEdgeLocating, PKPalettePopoverDismissing, PKPaletteViewSizeScaling, PKPaletteColorPickerController, PKPalettePopoverPresenting><PKPaletteToolPreviewDelegate;


#import "PKPaletteToolView.h"

@interface PKPaletteToolPreview : UIView <UIPopoverPresentationControllerDelegate, PKPaletteColorPickerControllerDelegate, PKPaletteEdgeLocating, PKPalettePopoverDismissing, PKPaletteViewSizeScaling>



@property (retain, nonatomic) NSObject<PKPaletteColorPickerController> *colorPickerController; // ivar: _colorPickerController
@property (nonatomic) NSInteger colorUserInterfaceStyle; // ivar: _colorUserInterfaceStyle
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<PKPalettePopoverPresenting><PKPaletteToolPreviewDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (nonatomic) NSUInteger edgeLocation; // ivar: _edgeLocation
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) UILayoutGuide *layoutGuide; // ivar: _layoutGuide
@property (retain, nonatomic) NSLayoutConstraint *layoutGuideCenterXConstraint; // ivar: _layoutGuideCenterXConstraint
@property (retain, nonatomic) NSLayoutConstraint *layoutGuideHeightConstraint; // ivar: _layoutGuideHeightConstraint
@property (retain, nonatomic) NSLayoutConstraint *layoutGuideTopConstraint; // ivar: _layoutGuideTopConstraint
@property (retain, nonatomic) NSLayoutConstraint *layoutGuideWidthConstraint; // ivar: _layoutGuideWidthConstraint
@property (copy, nonatomic) NSString *localeIdentifier; // ivar: _localeIdentifier
@property (nonatomic) CGFloat scalingFactor; // ivar: _scalingFactor
@property (readonly) Class superclass;
@property (readonly, nonatomic) UIColor *toolColor;
@property (retain, nonatomic) PKPaletteToolView *toolView; // ivar: _toolView
@property (retain, nonatomic) NSLayoutConstraint *toolViewHeightAnchor; // ivar: _toolViewHeightAnchor
@property (retain, nonatomic) NSLayoutConstraint *toolViewTopAnchor; // ivar: _toolViewTopAnchor
@property (nonatomic, getter=isToolViewVisible) BOOL toolViewVisible; // ivar: _toolViewVisible


-(NSInteger)adaptivePresentationStyleForPresentationController:(id)arg0 ;
-(NSInteger)adaptivePresentationStyleForPresentationController:(id)arg0 traitCollection:(id)arg1 ;
-(id)_popoverPresentingSourceview;
-(id)initWithFrame:(struct CGRect )arg0 ;
-(struct CGRect )_popoverPresentingSourceRect;
-(void)_animateToolViewToVisible:(BOOL)arg0 completion:(id)arg1 ;
-(void)_replaceCurrentToolWithToolWithIdentifier:(id)arg0 ;
-(void)_showColorSelectionPopover;
-(void)_updateLayoutGuideConstraints;
-(void)_updateToolViewInkingToolAttributesFromTool:(id)arg0 ;
-(void)_updateUI;
-(void)colorPickerControllerDidChangeSelectedColor:(id)arg0 ;
-(void)dismissPalettePopoverWithCompletion:(id)arg0 ;
-(void)flashAlternatePreviewView:(id)arg0 ;
-(void)showPreviewForTool:(id)arg0 animated:(BOOL)arg1 ;
-(void)toggleColorSelectionPopover;
-(void)updateConstraints;


@end


#endif