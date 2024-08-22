// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PKDRAWINGPALETTEVIEW_H
#define PKDRAWINGPALETTEVIEW_H

@class NSUndoManager, UIView, NSLayoutConstraint, NSString, NSArray, UIViewController, UIPencilInteraction, UIMenu, UIWindowScene;
@protocol PKDrawingPaletteViewStateSubject, PKPaletteUndoRedoViewDelegate, PKPaletteToolPickerViewDelegate, PKPaletteColorPickerViewDelegate, PKPaletteAdditionalOptionsViewDelegate, PKPaletteToolPreviewDelegate, PKPalettePopoverUpdating, PKTextInputWindowFirstResponderControllerDelegate, PKPaletteFloatingKeyboardControllerDelegate, PKPaletteContentViewInputAssistantDelegate, PKPaletteToolPickerViewDataSource, UIPopoverPresentationControllerDelegate, UIPencilInteractionDelegate, PKPaletteViewStateSubject, PKPaletteViewAnnotationDelegate, PKDrawingPaletteViewDelegate;


#import "PKPaletteView.h"
#import "PKPaletteContentView.h"
#import "PKTextInputWindowFirstResponderController.h"
#import "PKPaletteFloatingKeyboardController.h"
#import "PKPaletteInputAssistantButtonProvider.h"
#import "PKTool.h"
#import "PKPaletteToolView.h"
#import "PKPaletteTapToRadarCommand.h"
#import "PKTextInputWindowFirstResponder.h"

@interface PKDrawingPaletteView : PKPaletteView <PKDrawingPaletteViewStateSubject, PKPaletteUndoRedoViewDelegate, PKPaletteToolPickerViewDelegate, PKPaletteColorPickerViewDelegate, PKPaletteAdditionalOptionsViewDelegate, PKPaletteToolPreviewDelegate, PKPalettePopoverUpdating, PKTextInputWindowFirstResponderControllerDelegate, PKPaletteFloatingKeyboardControllerDelegate, PKPaletteContentViewInputAssistantDelegate, PKPaletteToolPickerViewDataSource, UIPopoverPresentationControllerDelegate, UIPencilInteractionDelegate, PKPaletteViewStateSubject>

 {
    NSUndoManager *_undoManager;
}


@property (readonly, nonatomic) CGFloat _toolsContainerWidth;
@property (weak, nonatomic) NSObject<PKPaletteViewAnnotationDelegate> *annotationDelegate; // ivar: _annotationDelegate
@property (readonly, nonatomic, getter=isAnnotationSupportEnabled) BOOL annotationSupportEnabled;
@property (readonly, nonatomic, getter=isAutoHideEnabled) BOOL autoHideEnabled;
@property (retain, nonatomic) UIView *bottomLineDividerView; // ivar: _bottomLineDividerView
@property (nonatomic) BOOL colorSwatchesVisible; // ivar: _colorSwatchesVisible
@property (nonatomic) NSInteger colorUserInterfaceStyle; // ivar: _colorUserInterfaceStyle
@property (retain, nonatomic) NSLayoutConstraint *compactContentViewHeightConstraint; // ivar: _compactContentViewHeightConstraint
@property (retain, nonatomic) PKPaletteContentView *contentView; // ivar: _contentView
@property (retain, nonatomic) NSLayoutConstraint *contentViewBottomConstraint; // ivar: _contentViewBottomConstraint
@property (nonatomic) NSInteger contextEditingMode; // ivar: _contextEditingMode
@property (readonly, nonatomic) UIView *contextualEditingView;
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<PKDrawingPaletteViewDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (nonatomic, getter=isEditingExternalElementsSelection) BOOL editingExternalElementsSelection; // ivar: _editingExternalElementsSelection
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
@property (readonly, nonatomic) NSArray *inputAssistantItems;
@property (nonatomic) CGFloat interItemToolsSpacingInCompactSize; // ivar: _interItemToolsSpacingInCompactSize
@property (nonatomic) CGFloat interItemUndoRedoButtonsSpacing; // ivar: _interItemUndoRedoButtonsSpacing
@property (nonatomic) CGFloat interItemUndoRedoButtonsSpacingInCompactSize; // ivar: _interItemUndoRedoButtonsSpacingInCompactSize
@property (nonatomic) BOOL isEditingOpacity; // ivar: _isEditingOpacity
@property (nonatomic) BOOL isQuickNoteUI; // ivar: _isQuickNoteUI
@property (readonly, nonatomic) UIView *lassoToolEditingView;
@property (copy, nonatomic) NSString *lassoToolEditingViewIdentifier; // ivar: _lassoToolEditingViewIdentifier
@property (nonatomic) NSInteger numberOfToolsAfterRuler; // ivar: _numberOfToolsAfterRuler
@property (readonly, nonatomic) UIView *opacityEditingView; // ivar: _opacityEditingView
@property (retain, nonatomic) UIViewController *palettePopoverPresentingController;
@property (readonly, nonatomic) CGFloat paletteScaleFactor;
@property (readonly, nonatomic) UIPencilInteraction *pencilInteraction; // ivar: _pencilInteraction
@property (nonatomic, getter=isPencilInteractionEnabledWhenNotVisible) BOOL pencilInteractionEnabledWhenNotVisible; // ivar: _pencilInteractionEnabledWhenNotVisible
@property (retain, nonatomic) UIMenu *plusButtonMenu; // ivar: _plusButtonMenu
@property (retain, nonatomic) UIViewController *plusButtonViewController; // ivar: _plusButtonViewController
@property (nonatomic) BOOL prefersLargeContextualEditingUI; // ivar: _prefersLargeContextualEditingUI
@property (retain, nonatomic) UIViewController *presentedPopoverViewController; // ivar: _presentedPopoverViewController
@property (nonatomic) NSInteger selectedAnnotationType; // ivar: _selectedAnnotationType
@property (readonly, nonatomic) PKTool *selectedTool;
@property (readonly, nonatomic) PKPaletteToolView *selectedToolView;
@property (retain, nonatomic) UIViewController *shapeButtonViewController; // ivar: _shapeButtonViewController
@property (readonly, nonatomic) BOOL shouldHideHoverPreviewToggle;
@property (nonatomic) BOOL showsLassoToolEditingView; // ivar: _showsLassoToolEditingView
@property (nonatomic) BOOL showsPlusButton; // ivar: _showsPlusButton
@property (nonatomic) BOOL showsRuler; // ivar: _showsRuler
@property (nonatomic) BOOL showsShapeButton; // ivar: _showsShapeButton
@property (nonatomic) BOOL showsTextButton; // ivar: _showsTextButton
@property (readonly) Class superclass;
@property (retain, nonatomic) PKPaletteTapToRadarCommand *tapToRadarCommand; // ivar: _tapToRadarCommand
@property (retain, nonatomic) UIViewController *textButtonViewController; // ivar: _textButtonViewController
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
-(BOOL)_isPaletteContentViewHidden;
-(BOOL)_shouldShowFingerDrawsOption;
-(BOOL)colorPickerShouldDisplayColorSelection:(id)arg0 ;
-(BOOL)isHandwritingToolSelected;
-(BOOL)isPalettePresentingPopover;
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
-(NSInteger)adaptivePresentationStyleForPresentationController:(id)arg0 ;
-(NSInteger)adaptivePresentationStyleForPresentationController:(id)arg0 traitCollection:(id)arg1 ;
-(NSInteger)numberOfToolsInToolPickerView:(id)arg0 ;
-(NSUInteger)paletteViewType;
-(id)_clippingViewBackgroundColor:(BOOL)arg0 ;
-(id)_currentFirstResponder;
-(id)_paletteToolViewForTool:(id)arg0 ;
-(id)borderColorForTraitCollection:(id)arg0 ;
-(id)contentScrollView;
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
-(void)_dictationAvailabilityDidChange:(id)arg0 ;
-(void)_didTapPlusButton:(id)arg0 ;
-(void)_didTapShapeButton:(id)arg0 ;
-(void)_didTapTextButton:(id)arg0 ;
-(void)_installPaletteContentViewInView:(id)arg0 ;
-(void)_performPencilPreferredActionShowColorPalette;
-(void)_performPencilPreferredActionShowInkAttributes;
-(void)_performPencilPreferredActionSwitchEraser;
-(void)_performPencilPreferredActionSwitchPrevious;
-(void)_presentOrDismissFloatingKeyboard;
-(void)_presentViewController:(id)arg0 asPopoverFromView:(id)arg1 ;
-(void)_releaseUndoManager;
-(void)_replaceToolAtIndex:(NSUInteger)arg0 withTool:(id)arg1 ;
-(void)_selectToolAtIndex:(NSUInteger)arg0 updateUI:(BOOL)arg1 notifyDelegate:(BOOL)arg2 ;
-(void)_toolViewStateDidChange:(id)arg0 ;
-(void)_updateHandwritingAssistantItemsFromResponder:(id)arg0 ;
-(void)_updateKeyboardSceneDelegateInputAssistantSupressionState;
-(void)_updateToolPreviewContentsAnimated:(BOOL)arg0 ;
-(void)_updateToolPreviewPositionForEdge:(NSUInteger)arg0 ;
-(void)_updateToolsContainerScrollingEnabled;
-(void)_updateUI;
-(void)_updateUIReloadTools:(BOOL)arg0 ;
-(void)_willDockPaletteToCorner:(NSUInteger)arg0 ;
-(void)_willDockPaletteToEdge:(NSUInteger)arg0 prepareForExpansion:(BOOL)arg1 isPaletteChangingOrientation:(BOOL)arg2 ;
-(void)additionalOptionsView:(id)arg0 didToggleAutoHideOption:(BOOL)arg1 ;
-(void)additionalOptionsViewDidPressKeyboardButton:(id)arg0 ;
-(void)additionalOptionsViewDidPressReturnKeyButton:(id)arg0 ;
-(void)additionalOptionsViewDidPressTapToRadarButton:(id)arg0 ;
-(void)colorPickerDidChangeSelectedColor:(id)arg0 isFromExtendedColorPicker:(BOOL)arg1 ;
-(void)configureForDockedAtCorner;
-(void)configureForDockedAtEdge:(NSUInteger)arg0 ;
-(void)contentViewDidDismissInputAssistantView:(id)arg0 ;
-(void)contentViewDidSelectInputAssistantKeyboardItem:(id)arg0 ;
-(void)contentViewDidSelectInputAssistantReturnKeyItem:(id)arg0 ;
-(void)dealloc;
-(void)didChangePaletteScaleFactor;
-(void)didEndAppearanceAnimation;
-(void)didMoveToWindow;
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
-(void)setUndoManager:(id)arg0 ;
-(void)startOpacityEditing;
-(void)toolPicker:(id)arg0 didSelectTool:(id)arg1 atIndex:(NSUInteger)arg2 ;
-(void)toolPickerDidToggleRulerTool:(id)arg0 ;
-(void)toolPickerViewDidChangeTraitCollectionSizeClass:(id)arg0 ;
-(void)toolPreviewDidChangeToolColor:(id)arg0 ;
-(void)traitCollectionDidChange:(id)arg0 ;
-(void)undoRedoViewDidTapRedo:(id)arg0 ;
-(void)undoRedoViewDidTapUndo:(id)arg0 ;
-(void)updateColorPickerSelectedColor;
-(void)updateHandwritingAssistantItems;
-(void)updatePopoverUI;
-(void)updateUndoRedo;
-(void)willStartAppearanceAnimation:(BOOL)arg0 ;
-(void)windowFirstResponderController:(id)arg0 didChangeFirstResponder:(id)arg1 ;


@end


#endif