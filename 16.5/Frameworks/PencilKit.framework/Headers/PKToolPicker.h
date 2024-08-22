// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PKTOOLPICKER_H
#define PKTOOLPICKER_H

@class NSMutableArray, NSString, UIView, NSHashTable, UIMenu, UIViewController, NSArray;
@protocol PKPaletteViewInteractionDelegate, PKToolPickerPopoverPresentationConfiguring, PKToolPickerSelectionContext, PKDrawingPaletteViewDelegate, PKToolPickerVisibility, PKPaletteViewAnnotationDelegate, PKToolPickerPrivateDelegate;

#import <Foundation/Foundation.h>

#import "PKPaletteViewInteraction.h"
#import "PKPaletteHostView.h"
#import "PKDrawingPaletteView.h"
#import "PKTool.h"

@interface PKToolPicker : NSObject <PKPaletteViewInteractionDelegate, PKToolPickerPopoverPresentationConfiguring, PKToolPickerSelectionContext, PKDrawingPaletteViewDelegate>

 {
    NSMutableArray *_mutableTools;
    BOOL _isRemovingNewInks;
    NSString *_lassoToolEditingViewIdentifier;
    id<PKToolPickerVisibility> *_toolPickerVisibility;
}


@property (readonly, nonatomic, getter=_isAnimatingToVisible) BOOL _animatingToVisible; // ivar: __animatingToVisible
@property (weak, nonatomic, setter=_setAnnotationDelegate:) NSObject<PKPaletteViewAnnotationDelegate> *_annotationDelegate; // ivar: __annotationDelegate
@property (readonly, nonatomic) BOOL _canShowEllipsisButtonInCompactSize; // ivar: __canShowEllipsisButtonInCompactSize
@property (readonly, nonatomic) UIView *_contextualEditingView;
@property (weak, nonatomic) NSObject<PKToolPickerPrivateDelegate> *_delegate; // ivar: __delegate
@property (nonatomic) BOOL _didCalculateVisibleBeforeResponderChanges; // ivar: _didCalculateVisibleBeforeResponderChanges
@property (nonatomic, setter=_setEdgeInsetsInCompactSize:) NSDirectionalEdgeInsets _edgeInsetsInCompactSize; // ivar: __edgeInsetsInCompactSize
@property (retain, nonatomic) NSHashTable *_firstRespondersForVisibleUI; // ivar: __firstRespondersForVisibleUI
@property (readonly, nonatomic, getter=_isHandwritingToolSelected) BOOL _handwritingToolSelected;
@property (nonatomic, setter=_setIgnoresSafeAreaInsetsInCompactSize:) BOOL _ignoresSafeAreaInsetsInCompactSize; // ivar: __ignoresSafeAreaInsetsInCompactSize
@property (nonatomic, getter=_isInputViewVisible, setter=_setInputViewVisible:) BOOL _inputViewVisible; // ivar: __inputViewVisible
@property (nonatomic, setter=_setInterItemToolsSpacingInCompactSize:) CGFloat _interItemToolsSpacingInCompactSize; // ivar: __interItemToolsSpacingInCompactSize
@property (nonatomic, setter=_setInterItemUndoRedoButtonsSpacingInCompactSize:) CGFloat _interItemUndoRedoButtonsSpacingInCompactSize; // ivar: __interItemUndoRedoButtonsSpacingInCompactSize
@property (retain, nonatomic, setter=_setInteraction:) PKPaletteViewInteraction *_interaction; // ivar: __interaction
@property (readonly, nonatomic) BOOL _interactionIsValid;
@property (readonly, nonatomic) UIView *_lassoToolEditingView;
@property (nonatomic, getter=_isLassoToolEditingViewVisible, setter=_setLassoToolEditingViewVisible:) BOOL _lassoToolEditingViewVisible; // ivar: _lassoToolEditingViewVisible
@property (nonatomic, setter=_setNumberOfToolsAfterRuler:) NSInteger _numberOfToolsAfterRuler; // ivar: __numberOfToolsAfterRuler
@property (retain, nonatomic) NSHashTable *_observers; // ivar: __observers
@property (readonly, nonatomic) PKPaletteHostView *_paletteHostView;
@property (readonly, nonatomic) NSInteger _palettePosition;
@property (readonly, nonatomic) PKDrawingPaletteView *_paletteView;
@property (readonly, nonatomic) NSString *_paletteViewStateRestorationDefaultsKey;
@property (nonatomic) BOOL _paletteWasCompact; // ivar: __paletteWasCompact
@property (nonatomic, getter=_isPencilInteractionEnabledWhenNotVisible) BOOL _pencilInteractionEnabledWhenNotVisible; // ivar: __pencilInteractionEnabledWhenNotVisible
@property (retain, nonatomic, setter=_setPlusButtonMenu:) UIMenu *_plusButtonMenu; // ivar: __plusButtonMenu
@property (retain, nonatomic, setter=_setPlusButtonViewController:) UIViewController *_plusButtonViewController; // ivar: __plusButtonViewController
@property (readonly, weak, nonatomic) NSObject<PKToolPickerPopoverPresentationConfiguring> *_popoverPresentationConfiguration;
@property (weak, nonatomic, setter=_setPresentationController:) UIViewController *_presentationController; // ivar: __presentationController
@property (readonly, nonatomic) CGFloat _scalingFactor;
@property (readonly, nonatomic) NSObject<PKToolPickerSelectionContext> *_selectionContext;
@property (retain, nonatomic, setter=_setShapeButtonViewController:) UIViewController *_shapeButtonViewController; // ivar: __shapeButtonViewController
@property (nonatomic, setter=_setShowsHandwritingTool:) BOOL _showsHandwritingTool; // ivar: __showsHandwritingTool
@property (nonatomic, setter=_setShowsPlusButton:) BOOL _showsPlusButton; // ivar: __showsPlusButton
@property (nonatomic, setter=_setShowsRuler:) BOOL _showsRuler; // ivar: __showsRuler
@property (nonatomic, setter=_setShowsShapeButton:) BOOL _showsShapeButton; // ivar: __showsShapeButton
@property (nonatomic, setter=_setShowsTextButton:) BOOL _showsTextButton; // ivar: __showsTextButton
@property (weak, nonatomic) NSObject<PKToolPickerPrivateDelegate> *_temporarySelectionDelegate; // ivar: __temporarySelectionDelegate
@property (retain, nonatomic, setter=_setTextButtonViewController:) UIViewController *_textButtonViewController; // ivar: __textButtonViewController
@property (nonatomic) BOOL _toolPickerVisible; // ivar: __toolPickerVisible
@property (nonatomic, getter=_isToolStatePersistenceEnabled, setter=_setToolStatePersistenceEnabled:) BOOL _toolStatePersistenceEnabled; // ivar: _toolStatePersistenceEnabled
@property (readonly, nonatomic) NSArray *_tools;
@property (nonatomic, setter=_setUseEqualSpacingLayoutInCompactSize:) BOOL _useEqualSpacingLayoutInCompactSize; // ivar: __useEqualSpacingLayoutInCompactSize
@property (nonatomic, setter=_setWantsBottomLineDividerVisibleInCompactSize:) BOOL _wantsBottomLineDividerVisibleInCompactSize; // ivar: __wantsBottomLineDividerVisibleInCompactSize
@property (nonatomic, setter=_setWantsClearBackgroundColorInCompactSize:) BOOL _wantsClearBackgroundColorInCompactSize; // ivar: __wantsClearBackgroundColorInCompactSize
@property (nonatomic, setter=_setWantsEllipsisButtonVisibleInCompactSize:) BOOL _wantsEllipsisButtonVisibleInCompactSize; // ivar: __wantsEllipsisButtonVisibleInCompactSize
@property (nonatomic, setter=_setWantsUndoRedoButtonsVisibleInCompactSize:) BOOL _wantsUndoRedoButtonsVisibleInCompactSize; // ivar: __wantsUndoRedoButtonsVisibleInCompactSize
@property (nonatomic) BOOL _wasVisibleBeforeResponderChanges; // ivar: _wasVisibleBeforeResponderChanges
@property (nonatomic) BOOL colorSwatchesVisible; // ivar: _colorSwatchesVisible
@property (nonatomic) NSInteger colorUserInterfaceStyle; // ivar: _colorUserInterfaceStyle
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) BOOL isVisible;
@property (readonly, nonatomic) UIEdgeInsets layoutSceneMargins;
@property (nonatomic) NSInteger overrideUserInterfaceStyle; // ivar: _overrideUserInterfaceStyle
@property (readonly, nonatomic) NSArray *passthroughViews;
@property (readonly, nonatomic) NSUInteger permittedArrowDirections;
@property (nonatomic) BOOL prefersLargeContextualEditingUI; // ivar: _prefersLargeContextualEditingUI
@property (nonatomic, getter=isRulerActive) BOOL rulerActive; // ivar: _rulerActive
@property (retain, nonatomic) PKTool *selectedTool; // ivar: _selectedTool
@property (nonatomic) NSUInteger selectionMask; // ivar: _selectionMask
@property (nonatomic) BOOL showsDrawingPolicyControls; // ivar: _showsDrawingPolicyControls
@property (copy, nonatomic) NSString *stateAutosaveName; // ivar: _stateAutosaveName
@property (readonly) Class superclass;


+(BOOL)_canShowHandwritingTool;
+(BOOL)_defaultValueForToolStatePersistenceEnabled;
+(BOOL)_internalClassWantsToolPicker:(id)arg0 visibleForResponder:(id)arg1 ;
+(BOOL)_prefersPencilHoverPreviewEnabled;
+(BOOL)_textInputWantsToolPickerVisible:(id)arg0 forFirstResponder:(id)arg1 ;
+(BOOL)isActiveToolPickerVisibleForWindow:(id)arg0 ;
+(id)_groupByTypeEncodedTools:(id)arg0 ;
+(id)_groupingIdentifierForCustomToolWithCustomIdentifier:(id)arg0 ;
+(id)_groupingIdentifierForTool:(id)arg0 ;
+(id)_groupingIdentifierForToolDictionary:(id)arg0 ;
+(id)_toolPickerForWindow:(id)arg0 ;
+(id)_windowForToolPicker:(id)arg0 ;
+(id)_windowSceneForToolPicker:(id)arg0 ;
+(id)activeToolPickerForWindow:(id)arg0 ;
+(id)existingPaletteViewForWindow:(id)arg0 ;
+(id)sharedToolPickerForWindow:(id)arg0 ;
+(void)_setPrefersHoverPreviewEnabled:(BOOL)arg0 withCompletion:(id)arg1 ;
+(void)_setPrefersPencilOnlyDrawingForiWork:(BOOL)arg0 ;
-(BOOL)_canFitOneMoreTool;
-(BOOL)_canInsertTool:(id)arg0 ;
-(BOOL)_canRemoveTool:(id)arg0 ;
-(BOOL)_canResetToolsFrom:(id)arg0 ;
-(BOOL)_hasEraserTool;
-(BOOL)_hasHandwritingTool;
-(BOOL)_hasLassoTool;
-(BOOL)_hasToolPassingTest:(id)arg0 ;
-(BOOL)_internalClassesAcceptingFirstResponderContainsObject:(id)arg0 ;
-(BOOL)paletteView:(id)arg0 shouldChangeSelectedToolColor:(id)arg1 ;
-(BOOL)shouldHandlePencilInteractionWhenNotVisible:(id)arg0 ;
-(BOOL)toggleLassoToolEditingViewColorPickerForPaletteView:(id)arg0 ;
-(NSUInteger)_edgeForContextualEditingViewFromPosition:(NSInteger)arg0 ;
-(NSUInteger)_indexOfMarkerTool;
-(NSUInteger)_indexOfMonolineTool;
-(NSUInteger)_indexOfPencilTool;
-(id)_currentFirstResponder;
-(id)_delegateForSelector:(SEL)arg0 ;
-(id)_handwritingTool;
-(id)_paletteAccessibilityIdentifier;
-(id)_validatedEncodedToolsArray:(id)arg0 ;
-(id)_windowScene;
-(id)init;
-(id)paletteViewColorPickerPopoverPresentationSourceView:(id)arg0 ;
-(id)paletteViewCurrentFirstResponder:(id)arg0 ;
-(id)paletteViewCurrentSelectionColor:(id)arg0 ;
-(id)paletteViewUndoManager:(id)arg0 ;
-(struct CGRect )frameObscuredInView:(id)arg0 ;
-(struct CGRect )paletteViewColorPickerPopoverPresentationSourceRect:(id)arg0 ;
-(void)_addFountainPenAtIndex:(NSInteger)arg0 ;
-(void)_addMonolineAtIndex:(NSInteger)arg0 ;
-(void)_addNewInks;
-(void)_addTool:(id)arg0 ;
-(void)_addTool:(id)arg0 updateUI:(BOOL)arg1 ;
-(void)_addWatercolorAtIndex:(NSInteger)arg0 ;
-(void)_disableTapInteractionWhenNotVisible;
-(void)_enableTapInteractionForWindow:(id)arg0 ;
-(void)_hasSeenPencilPairingUIDidChange:(id)arg0 ;
-(void)_insertTool:(id)arg0 atIndex:(NSUInteger)arg1 ;
-(void)_insertTool:(id)arg0 atIndex:(NSUInteger)arg1 updateUI:(BOOL)arg2 ;
-(void)_notifyScaleFactorDidChange;
-(void)_notifySelectedToolDidChange;
-(void)_notifyVisibilityDidChangeIsAnimationFinished:(BOOL)arg0 ;
-(void)_performPencilPreferredActionShowColorPalette;
-(void)_performPencilPreferredActionSwitchEraser;
-(void)_performPencilPreferredActionSwitchPrevious;
-(void)_recognitionLocaleIdentifierDidChange:(id)arg0 ;
-(void)_removeNewInks;
-(void)_removeTool:(id)arg0 ;
-(void)_removeTool:(id)arg0 updateUI:(BOOL)arg1 ;
-(void)_removeToolsAtIndexes:(id)arg0 ;
-(void)_removeToolsAtIndexes:(id)arg0 updateUI:(BOOL)arg1 ;
-(void)_resetTools:(id)arg0 selectedTool:(id)arg1 ;
-(void)_restoreToolPickerState;
-(void)_saveStateIfNecessary;
-(void)_saveToolPickerState;
-(void)_setVisibleInWindow:(id)arg0 ;
-(void)_setVisibleInWindow:(id)arg0 animated:(BOOL)arg1 notify:(BOOL)arg2 ;
-(void)_tellDelegateToHideToolPicker;
-(void)_textInputResponderDidReloadNotification:(id)arg0 ;
-(void)_updateHandwritingInputAssistantItems;
-(void)_updatePaletteTraitCollection:(id)arg0 ;
-(void)_updatePaletteUserInterfaceStyle:(NSInteger)arg0 ;
-(void)_updateToolPickerVisibility;
-(void)_updateUI;
-(void)_updateVisibilityForFirstResponder:(id)arg0 ;
-(void)addObserver:(id)arg0 ;
-(void)calculateIsVisibleBeforeResponderChangesForCurrentRunLoopIfNecessary;
-(void)dealloc;
-(void)keyboardSceneDelegate:(id)arg0 inputViewSetVisibilityDidChange:(BOOL)arg1 includedReset:(BOOL)arg2 ;
-(void)paletteView:(id)arg0 didChangeColor:(id)arg1 ;
-(void)paletteView:(id)arg0 didSelectTool:(id)arg1 atIndex:(NSUInteger)arg2 ;
-(void)paletteViewDidChangePosition:(id)arg0 ;
-(void)paletteViewDidChangePosition:(id)arg0 fromPosition:(NSInteger)arg1 toPosition:(NSInteger)arg2 ;
-(void)paletteViewDidChangeScaleFactor:(id)arg0 ;
-(void)paletteViewDidToggleRuler:(id)arg0 ;
-(void)paletteViewFirstResponderDidUpdate:(id)arg0 ;
-(void)paletteViewInteractionDidActivate:(id)arg0 ;
-(void)paletteViewInteractionWillEnterForeground:(id)arg0 ;
-(void)paletteViewToolsDidChange:(id)arg0 ;
-(void)removeObserver:(id)arg0 ;
-(void)setVisible:(BOOL)arg0 forFirstResponder:(id)arg1 ;


@end


#endif