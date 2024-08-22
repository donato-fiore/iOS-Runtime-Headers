// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef PKDRAWINGPALETTEVIEW_H
#define PKDRAWINGPALETTEVIEW_H

@class NSUndoManager, MTMaterialView, UIView, NSLayoutConstraint, NSString, NSArray, UIViewController, UIPencilInteraction, UIWindowScene;
@protocol PKDrawingPaletteViewStateSubject, PKPaletteUndoRedoViewDelegate, PKPaletteToolPickerViewDelegate, PKPaletteColorPickerViewDelegate, PKPaletteAdditionalOptionsViewDelegate, PKPaletteToolPreviewDelegate, PKPalettePopoverUpdating, PKTextInputWindowFirstResponderControllerDelegate, PKPaletteFloatingKeyboardControllerDelegate, PKPaletteContentViewInputAssistantDelegate, PKPaletteToolPickerViewDataSource, UIPencilInteractionDelegate, PKPaletteViewStateSubject, PKPaletteViewAnnotationDelegate, PKDrawingPaletteViewDelegate;


#import "PKPaletteView.h"
#import "PKPaletteContentView.h"
#import "PKTextInputWindowFirstResponderController.h"
#import "PKPaletteFloatingKeyboardController.h"
#import "PKPaletteInputAssistantButtonProvider.h"
#import "PKTool.h"
#import "PKPaletteToolView.h"
#import "PKPaletteTapToRadarCommand.h"
#import "PKTextInputWindowFirstResponder.h"

@interface PKDrawingPaletteView : PKPaletteView <PKDrawingPaletteViewStateSubject, PKPaletteUndoRedoViewDelegate, PKPaletteToolPickerViewDelegate, PKPaletteColorPickerViewDelegate, PKPaletteAdditionalOptionsViewDelegate, PKPaletteToolPreviewDelegate, PKPalettePopoverUpdating, PKTextInputWindowFirstResponderControllerDelegate, PKPaletteFloatingKeyboardControllerDelegate, PKPaletteContentViewInputAssistantDelegate, PKPaletteToolPickerViewDataSource, UIPencilInteractionDelegate, PKPaletteViewStateSubject>

 {
    NSUndoManager *_undoManager;
}


@property (weak, nonatomic) NSObject<PKPaletteViewAnnotationDelegate> *annotationDelegate; // ivar: _annotationDelegate
@property (readonly, nonatomic, getter=isAnnotationSupportEnabled) BOOL annotationSupportEnabled;
@property (readonly, nonatomic, getter=isAutoHideEnabled) BOOL autoHideEnabled;
@property (retain, nonatomic) MTMaterialView *backgroundView; // ivar: _backgroundView
@property (retain, nonatomic) UIView *bottomLineDividerView; // ivar: _bottomLineDividerView
@property (nonatomic) NSInteger colorUserInterfaceStyle; // ivar: _colorUserInterfaceStyle
@property (retain, nonatomic) NSLayoutConstraint *compactContentViewHeightConstraint; // ivar: _compactContentViewHeightConstraint
@property (retain, nonatomic) PKPaletteContentView *contentView; // ivar: _contentView
@property (retain, nonatomic) NSLayoutConstraint *contentViewBottomConstraint; // ivar: _contentViewBottomConstraint
@property (nonatomic) NSInteger contextEditingMode; // ivar: _contextEditingMode
@property (readonly, nonatomic) UIView *contextualEditingView;
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<PKDrawingPaletteViewDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (nonatomic, getter=isEditingStrokeSelection) BOOL editingStrokeSelection; // ivar: _editingStrokeSelection
@property (nonatomic, getter=isEditingTextSelection) BOOL editingTextSelection; // ivar: _editingTextSelection
@property (readonly, nonatomic, getter=isEllipsisButtonVisible) BOOL ellipsisButtonVisible;
@property (readonly, nonatomic) BOOL enableKeyboardButtons;
@property (nonatomic, getter=isFingerDrawsOptionEnabled) BOOL fingerDrawsOptionEnabled; // ivar: _fingerDrawsOptionEnabled
@property (retain, nonatomic) PKTextInputWindowFirstResponderController *firstResponderController; // ivar: _firstResponderController
@property (retain, nonatomic) PKPaletteFloatingKeyboardController *floatingKeyboardController; // ivar: _floatingKeyboardController
@property (readonly, nonatomic) NSInteger floatingKeyboardType;
@property (readonly, nonatomic) BOOL hasHandwritingTool;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) NSUInteger indexOfSelectedTool; // ivar: _indexOfSelectedTool
@property (retain, nonatomic) PKPaletteInputAssistantButtonProvider *inputAssistantButtonProvider; // ivar: _inputAssistantButtonProvider
@property (readonly, copy, nonatomic) NSArray *inputAssistantItems;
@property (nonatomic) CGFloat interItemToolsSpacingInCompactSize; // ivar: _interItemToolsSpacingInCompactSize
@property (nonatomic) CGFloat interItemUndoRedoButtonsSpacing; // ivar: _interItemUndoRedoButtonsSpacing
@property (nonatomic) CGFloat interItemUndoRedoButtonsSpacingInCompactSize; // ivar: _interItemUndoRedoButtonsSpacingInCompactSize
@property (nonatomic) BOOL isEditingOpacity; // ivar: _isEditingOpacity
@property (readonly, nonatomic) UIView *opacityEditingView; // ivar: _opacityEditingView
@property (retain, nonatomic) UIViewController *palettePopoverPresentingController;
@property (readonly, nonatomic) CGFloat paletteScaleFactor;
@property (readonly, nonatomic) UIPencilInteraction *pencilInteraction; // ivar: _pencilInteraction
@property (nonatomic, getter=isPencilInteractionEnabledWhenNotVisible) BOOL pencilInteractionEnabledWhenNotVisible; // ivar: _pencilInteractionEnabledWhenNotVisible
@property (readonly, nonatomic) PKTool *selectedTool;
@property (readonly, nonatomic) PKPaletteToolView *selectedToolView;
@property (nonatomic) BOOL showsPlusButton; // ivar: _showsPlusButton
@property (nonatomic) BOOL showsRuler; // ivar: _showsRuler
@property (readonly) Class superclass;
@property (retain, nonatomic) PKPaletteTapToRadarCommand *tapToRadarCommand; // ivar: _tapToRadarCommand
@property (copy, nonatomic) NSArray *tools; // ivar: _tools
@property (nonatomic) BOOL useEqualSpacingLayoutInCompactSize; // ivar: _useEqualSpacingLayoutInCompactSize
@property (readonly, nonatomic, getter=isVisible) BOOL visible;
@property (nonatomic) BOOL wantsBottomLineDividerVisibleInCompactSize; // ivar: _wantsBottomLineDividerVisibleInCompactSize
@property (nonatomic) BOOL wantsClearBackgroundColorInCompactSize; // ivar: _wantsClearBackgroundColorInCompactSize
@property (nonatomic) BOOL wantsEllipsisButtonVisibleInCompactSize; // ivar: _wantsEllipsisButtonVisibleInCompactSize
@property (nonatomic) BOOL wantsMulticolorSwatchShadowInCompactSize; // ivar: _wantsMulticolorSwatchShadowInCompactSize
@property (nonatomic) BOOL wantsUndoRedoButtonsShadowInCompactSize; // ivar: _wantsUndoRedoButtonsShadowInCompactSize
@property (nonatomic) BOOL wantsUndoRedoButtonsVisibleInCompactSize; // ivar: _wantsUndoRedoButtonsVisibleInCompactSize
@property (readonly, nonatomic) PKTextInputWindowFirstResponder *windowFirstResponder;
@property (readonly, nonatomic) UIWindowScene *windowScene;


-(BOOL)_canHandlePencilInteraction;
-(BOOL)_canReplaceToolAtIndex:(NSUInteger)arg0 withTool:(id)arg1 ;
-(BOOL)_canSelectToolAtIndex:(NSUInteger)arg0 ;
-(BOOL)_canShowFingerDrawsOption;
-(BOOL)_hasToolWithIdentifier:(id)arg0 ;
-(BOOL)_isPaletteConsideredMinimized;
-(BOOL)_isPaletteContentViewHidden;
-(BOOL)_shouldShowFingerDrawsOption;
-(BOOL)colorPickerShouldDisplayColorSelection:(id)arg0 ;
-(BOOL)isHandwritingToolSelected;
-(BOOL)shouldAdjustShadowRadiusForMinimized;
-(CGFloat)_paletteHeightForVerticalOrientation;
-(CGFloat)_paletteWidthForHorizontalOrientation;
-(CGFloat)borderWidthForTraitCollection:(id)arg0 ;
-(CGFloat)compactPaletteHeight;
-(CGFloat)dampingRatioForThrowingFromPosition:(NSInteger)arg0 toPosition:(NSInteger)arg1 withVelocity:(struct CGPoint )arg2 ;
-(CGFloat)responseForThrowingFromPosition:(NSInteger)arg0 toPosition:(NSInteger)arg1 withVelocity:(struct CGPoint )arg2 ;
-(CGFloat)shadowOpacity;
-(CGFloat)shadowRadius;
-(CGFloat)toolPickerView:(id)arg0 widthForToolAtIndex:(NSInteger)arg1 isCompactSize:(BOOL)arg2 ;
-(NSInteger)numberOfToolsInToolPickerView:(id)arg0 ;
-(NSUInteger)paletteViewType;
-(id)_clippingViewBackgroundColor;
-(id)_currentFirstResponder;
-(id)_paletteToolViewFromTool:(id)arg0 ;
-(id)_selectedColor;
-(id)borderColorForTraitCollection:(id)arg0 ;
-(id)init;
-(id)initWithTools:(id)arg0 ;
-(id)initWithTools:(id)arg0 wantsEllipsisButtonVisibleInCompactSize:(BOOL)arg1 ;
-(id)keyboardSelectionMenuForAdditionalOptionsView:(id)arg0 ;
-(id)keyboardSelectionMenuForContentView:(id)arg0 ;
-(id)responderForFloatingKeyboardController:(id)arg0 ;
-(id)toolPickerView:(id)arg0 viewForToolAtIndex:(NSInteger)arg1 ;
-(id)undoManager;
-(struct CGRect )plusButtonFrame;
-(struct CGSize )paletteSizeForEdge:(NSUInteger)arg0 ;
-(void)_centerPaletteContainerSubviewToCurrentlySelectedToolForEdge:(NSUInteger)arg0 needsContainerViewLayout:(BOOL)arg1 ;
-(void)_changeWasDone:(id)arg0 ;
-(void)_changeWasRedone:(id)arg0 ;
-(void)_changeWasUndone:(id)arg0 ;
-(void)_installPaletteContentViewInView:(id)arg0 ;
-(void)_performPencilPreferredActionShowColorPalette;
-(void)_performPencilPreferredActionSwitchEraser;
-(void)_performPencilPreferredActionSwitchPrevious;
-(void)_presentOrDismissFloatingKeyboard;
-(void)_releaseUndoManager;
-(void)_replaceToolAtIndex:(NSUInteger)arg0 withTool:(id)arg1 ;
-(void)_selectToolAtIndex:(NSUInteger)arg0 updateUI:(BOOL)arg1 notifyDelegate:(BOOL)arg2 ;
-(void)_toolViewStateDidChange:(id)arg0 ;
-(void)_updateColorPickerSelectedColor;
-(void)_updateHandwritingAssistantItems;
-(void)_updateHandwritingAssistantItemsFromResponder:(id)arg0 ;
-(void)_updateKeyboardSceneDelegateInputAssistantSupressionState;
-(void)_updateToolPreview;
-(void)_updateToolPreviewForEdge:(NSUInteger)arg0 ;
-(void)_updateUI;
-(void)_willDockPaletteToCorner:(NSUInteger)arg0 ;
-(void)_willDockPaletteToEdge:(NSUInteger)arg0 prepareForExpansion:(BOOL)arg1 isPaletteChangingOrientation:(BOOL)arg2 ;
-(void)additionalOptionsView:(id)arg0 didToggleAutoHideOption:(BOOL)arg1 ;
-(void)additionalOptionsViewDidPressKeyboardButton:(id)arg0 ;
-(void)additionalOptionsViewDidPressReturnKeyButton:(id)arg0 ;
-(void)additionalOptionsViewDidPressTapToRadarButton:(id)arg0 ;
-(void)additionalOptionsViewDidSelectPlusButton:(id)arg0 ;
-(void)colorPickerDidChangeSelectedColor:(id)arg0 isFromExtendedColorPicker:(BOOL)arg1 ;
-(void)configureForDockedAtCorner;
-(void)configureForDockedAtEdge:(NSUInteger)arg0 ;
-(void)contentViewDidDismissInputAssistantView:(id)arg0 ;
-(void)contentViewDidSelectInputAssistantKeyboardItem:(id)arg0 ;
-(void)contentViewDidSelectInputAssistantReturnKeyItem:(id)arg0 ;
-(void)dealloc;
-(void)didChangePaletteScaleFactor;
-(void)didEndAppearanceAnimation;
-(void)dismissPalettePopoverWithCompletion:(id)arg0 ;
-(void)endOpacityEditing;
-(void)floatingKeyboardController:(id)arg0 didChangeKeyboardType:(NSInteger)arg1 ;
-(void)floatingKeyboardControllerWillHide:(id)arg0 ;
-(void)floatingKeyboardControllerWillShow:(id)arg0 ;
-(void)hostView:(id)arg0 didDockPaletteToPosition:(NSInteger)arg1 ;
-(void)hostView:(id)arg0 willDockPaletteToPosition:(NSInteger)arg1 prepareForExpansion:(BOOL)arg2 ;
-(void)layoutSubviews;
-(void)pencilInteractionDidTap:(id)arg0 ;
-(void)safeAreaInsetsDidChange;
-(void)selectToolAtIndex:(NSUInteger)arg0 ;
-(void)setSelectedAnnotationType:(NSInteger)arg0 ;
-(void)setUndoManager:(id)arg0 ;
-(void)startOpacityEditing;
-(void)toolPicker:(id)arg0 didSelectTool:(id)arg1 atIndex:(NSUInteger)arg2 ;
-(void)toolPickerDidToggleRulerTool:(id)arg0 ;
-(void)toolPickerViewDidChangeTraitCollectionSizeClass:(id)arg0 ;
-(void)toolPreviewDidChangeToolColor:(id)arg0 ;
-(void)traitCollectionDidChange:(id)arg0 ;
-(void)undoRedoViewDidTapRedo:(id)arg0 ;
-(void)undoRedoViewDidTapUndo:(id)arg0 ;
-(void)updatePopoverUI;
-(void)updateUndoRedo;
-(void)willStartAppearanceAnimation:(BOOL)arg0 ;
-(void)windowFirstResponderController:(id)arg0 didChangeFirstResponder:(id)arg1 ;


@end


#endif