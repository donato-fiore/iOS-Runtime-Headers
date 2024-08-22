// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef PKPALETTETOOLPICKERANDCOLORPICKERVIEW_H
#define PKPALETTETOOLPICKERANDCOLORPICKERVIEW_H

@class UIView, NSLayoutConstraint, NSString, UIStackView;
@protocol PKPaletteEdgeLocating, PKPalettePopoverDismissing, PKPaletteViewSizeScaling;


#import "PKPaletteColorPickerContainerView.h"
#import "PKPaletteColorPickerView.h"
#import "PKDrawingPaletteInputAssistantView.h"
#import "PKPaletteToolPickerContainerView.h"
#import "PKPaletteToolPickerView.h"

@interface PKPaletteToolPickerAndColorPickerView : UIView <PKPaletteEdgeLocating, PKPalettePopoverDismissing, PKPaletteViewSizeScaling>



@property (retain, nonatomic) PKPaletteColorPickerContainerView *colorPickerContainerView; // ivar: _colorPickerContainerView
@property (readonly, nonatomic) PKPaletteColorPickerView *colorPickerView;
@property (nonatomic, getter=isColorPickerViewVisible) BOOL colorPickerViewVisible; // ivar: _colorPickerViewVisible
@property (retain, nonatomic) NSLayoutConstraint *compactToolPickerContainerViewWidthConstraint; // ivar: _compactToolPickerContainerViewWidthConstraint
@property (nonatomic) NSInteger contextEditingMode; // ivar: _contextEditingMode
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic) NSUInteger edgeLocation; // ivar: _edgeLocation
@property (readonly) NSUInteger hash;
@property (nonatomic, getter=isInputAssistantViewVisible) BOOL inputAssistantViewVisible; // ivar: _inputAssistantViewVisible
@property (nonatomic) BOOL isSmallestSupportedCompactWidth; // ivar: _isSmallestSupportedCompactWidth
@property (readonly, nonatomic) PKDrawingPaletteInputAssistantView *paletteInputAssistantView; // ivar: _paletteInputAssistantView
@property (nonatomic) CGFloat scalingFactor; // ivar: _scalingFactor
@property (retain, nonatomic) UIStackView *stackView; // ivar: _stackView
@property (readonly) Class superclass;
@property (retain, nonatomic) PKPaletteToolPickerContainerView *toolPickerContainerView; // ivar: _toolPickerContainerView
@property (retain, nonatomic) NSLayoutConstraint *toolPickerContainerViewHeightConstraint; // ivar: _toolPickerContainerViewHeightConstraint
@property (retain, nonatomic) NSLayoutConstraint *toolPickerContainerViewWidthConstraint; // ivar: _toolPickerContainerViewWidthConstraint
@property (readonly, nonatomic) PKPaletteToolPickerView *toolPickerView;
@property (nonatomic) BOOL wantsColorPickerContainerViewInHierarchy; // ivar: _wantsColorPickerContainerViewInHierarchy


-(BOOL)_hasColorPickerContainerView;
-(BOOL)_useCompactSize;
-(id)hitTest:(struct CGPoint )arg0 withEvent:(id)arg1 ;
-(id)init;
-(void)_updateUI;
-(void)dismissPalettePopoverWithCompletion:(id)arg0 ;
-(void)traitCollectionDidChange:(id)arg0 ;


@end


#endif