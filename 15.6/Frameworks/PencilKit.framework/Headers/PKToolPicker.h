// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef PKTOOLPICKER_H
#define PKTOOLPICKER_H

@class NSMutableArray, NSHashTable, NSString, UIViewController, NSArray;
@protocol PKDrawingPaletteViewDelegate, PKPaletteViewInteractionDelegate, PKToolPickerPopoverPresentationConfiguring, PKToolPickerSelectionContext, PKPaletteViewAnnotationDelegate, PKToolPickerPrivateDelegate;

#import <Foundation/Foundation.h>

#import "PKPaletteViewInteraction.h"
#import "PKPaletteHostView.h"
#import "PKDrawingPaletteView.h"
#import "PKTool.h"

@interface PKToolPicker : NSObject <PKDrawingPaletteViewDelegate, PKPaletteViewInteractionDelegate, PKToolPickerPopoverPresentationConfiguring, PKToolPickerSelectionContext>

 {
    NSMutableArray *_mutableTools;
}


@property (readonly, nonatomic, getter=_isAnimatingToVisible) BOOL _animatingToVisible; // ivar: __animatingToVisible
@property (weak, nonatomic, setter=_setAnnotationDelegate:) NSObject<PKPaletteViewAnnotationDelegate> *_annotationDelegate; // ivar: __annotationDelegate
@property (readonly, nonatomic) BOOL _canShowEllipsisButtonInCompactSize; // ivar: __canShowEllipsisButtonInCompactSize
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
@property (retain, nonatomic) NSHashTable *_observers; // ivar: __observers
@property (readonly, nonatomic) PKPaletteHostView *_paletteHostView;
@property (readonly, nonatomic) NSInteger _palettePosition;
@property (readonly, nonatomic) PKDrawingPaletteView *_paletteView;
@property (readonly, nonatomic) NSString *_paletteViewStateRestorationDefaultsKey;
@property (nonatomic) BOOL _paletteWasCompact; // ivar: __paletteWasCompact
@property (nonatomic, getter=_isPencilInteractionEnabledWhenNotVisible) BOOL _pencilInteractionEnabledWhenNotVisible; // ivar: __pencilInteractionEnabledWhenNotVisible
@property (readonly, weak, nonatomic) NSObject<PKToolPickerPopoverPresentationConfiguring> *_popoverPresentationConfiguration;
@property (weak, nonatomic, setter=_setPresentationController:) UIViewController *_presentationController; // ivar: __presentationController
@property (readonly, nonatomic) NSObject<PKToolPickerSelectionContext> *_selectionContext;
@property (nonatomic, setter=_setShowsHandwritingTool:) BOOL _showsHandwritingTool; // ivar: __showsHandwritingTool
@property (nonatomic, setter=_setShowsPlusButton:) BOOL _showsPlusButton; // ivar: __showsPlusButton
@property (nonatomic, setter=_setShowsRuler:) BOOL _showsRuler; // ivar: __showsRuler
@property (nonatomic) BOOL _toolPickerVisible; // ivar: __toolPickerVisible
@property (readonly, nonatomic) NSArray *_tools;
@property (nonatomic, setter=_setUseEqualSpacingLayoutInCompactSize:) BOOL _useEqualSpacingLayoutInCompactSize; // ivar: __useEqualSpacingLayoutInCompactSize
@property (nonatomic, setter=_setWantsBottomLineDividerVisibleInCompactSize:) BOOL _wantsBottomLineDividerVisibleInCompactSize; // ivar: __wantsBottomLineDividerVisibleInCompactSize
@property (nonatomic, setter=_setWantsClearBackgroundColorInCompactSize:) BOOL _wantsClearBackgroundColorInCompactSize; // ivar: __wantsClearBackgroundColorInCompactSize
@property (nonatomic, setter=_setWantsEllipsisButtonVisibleInCompactSize:) BOOL _wantsEllipsisButtonVisibleInCompactSize; // ivar: __wantsEllipsisButtonVisibleInCompactSize
@property (nonatomic, setter=_setWantsUndoRedoButtonsVisibleInCompactSize:) BOOL _wantsUndoRedoButtonsVisibleInCompactSize; // ivar: __wantsUndoRedoButtonsVisibleInCompactSize
@property (nonatomic) BOOL _wasVisibleBeforeResponderChanges; // ivar: _wasVisibleBeforeResponderChanges
@property (nonatomic) NSInteger colorUserInterfaceStyle; // ivar: _colorUserInterfaceStyle
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) BOOL isVisible;
@property (readonly, nonatomic) UIEdgeInsets layoutSceneMargins;
@property (nonatomic) NSInteger overrideUserInterfaceStyle; // ivar: _overrideUserInterfaceStyle
@property (readonly, nonatomic) NSArray *passthroughViews;
@property (readonly, nonatomic) NSUInteger permittedArrowDirections;
@property (nonatomic, getter=isRulerActive) BOOL rulerActive; // ivar: _rulerActive
@property (retain, nonatomic) PKTool *selectedTool; // ivar: _selectedTool
@property (nonatomic) NSUInteger selectionMask; // ivar: _selectionMask
@property (nonatomic) BOOL showsDrawingPolicyControls; // ivar: _showsDrawingPolicyControls
@property (copy, nonatomic) NSString *stateAutosaveName; // ivar: _stateAutosaveName
@property (readonly) Class superclass;


+(BOOL)_canShowHandwritingTool;
+(BOOL)_internalClassWantsToolPicker:(id)arg0 visibleForResponder:(id)arg1 ;
+(BOOL)_textInputWantsToolPickerVisible:(id)arg0 forFirstResponder:(id)arg1 ;
+(BOOL)isActiveToolPickerVisibleForWindow:(id)arg0 ;
+(id)_toolPickerForWindow:(id)arg0 ;
+(id)_windowForToolPicker:(id)arg0 ;
+(id)_windowSceneForToolPicker:(id)arg0 ;
+(id)activeToolPickerForWindow:(id)arg0 ;
+(id)sharedToolPickerForWindow:(id)arg0 ;
+(void)_setPrefersPencilOnlyDrawingForiWork:(BOOL)arg0 ;
-(BOOL)_canInsertTool:(id)arg0 ;
-(BOOL)_canRemoveTool:(id)arg0 ;
-(BOOL)_canResetToolsFrom:(id)arg0 ;
-(BOOL)_canRestoreToolWithIdentifier:(id)arg0 ;
-(BOOL)_canSelectTool:(id)arg0 ;
-(BOOL)_hasEraserTool;
-(BOOL)_hasHandwritingTool;
-(BOOL)_hasLassoTool;
-(BOOL)_hasToolPassingTest:(id)arg0 ;
-(BOOL)_internalClassesAcceptingFirstResponderContainsObject:(id)arg0 ;
-(BOOL)paletteView:(id)arg0 shouldChangeSelectedToolColor:(id)arg1 ;
-(BOOL)shouldHandlePencilInteractionWhenNotVisible:(id)arg0 ;
-(id)_configuredPaletteViewInteractionForWindow:(id)arg0 ;
-(id)_currentFirstResponder;
-(id)_handwritingTool;
-(id)_paletteAccessibilityIdentifier;
-(id)init;
-(id)paletteViewColorPickerPopoverPresentationSourceView:(id)arg0 ;
-(id)paletteViewCurrentFirstResponder:(id)arg0 ;
-(id)paletteViewUndoManager:(id)arg0 ;
-(struct CGRect )frameObscuredInView:(id)arg0 ;
-(struct CGRect )paletteViewColorPickerPopoverPresentationSourceRect:(id)arg0 ;
-(void)_addTool:(id)arg0 ;
-(void)_addTool:(id)arg0 updateUI:(BOOL)arg1 ;
-(void)_enableTapInteractionForWindow:(id)arg0 ;
-(void)_hasSeenPencilPairingUIDidChange:(id)arg0 ;
-(void)_insertTool:(id)arg0 atIndex:(NSUInteger)arg1 ;
-(void)_insertTool:(id)arg0 atIndex:(NSUInteger)arg1 updateUI:(BOOL)arg2 ;
-(void)_notifySelectedToolDidChange;
-(void)_notifyVisibilityDidChangeIsAnimationFinished:(BOOL)arg0 ;
-(void)_performPencilPreferredActionShowColorPalette;
-(void)_performPencilPreferredActionSwitchEraser;
-(void)_performPencilPreferredActionSwitchPrevious;
-(void)_recognitionLocaleIdentifierDidChange:(id)arg0 ;
-(void)_removeTool:(id)arg0 ;
-(void)_removeTool:(id)arg0 updateUI:(BOOL)arg1 ;
-(void)_resetTools:(id)arg0 selectedTool:(id)arg1 ;
-(void)_restoreToolPickerState;
-(void)_saveStateIfNecessary;
-(void)_saveToolPickerState;
-(void)_setVisibleInWindow:(id)arg0 ;
-(void)_setVisibleInWindow:(id)arg0 animated:(BOOL)arg1 notify:(BOOL)arg2 ;
-(void)_tellDelegateToHideToolPicker;
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
-(void)paletteViewDidToggleRuler:(id)arg0 ;
-(void)paletteViewFirstResponderDidUpdate:(id)arg0 ;
-(void)paletteViewInteractionDidActivate:(id)arg0 ;
-(void)paletteViewInteractionWillEnterForeground:(id)arg0 ;
-(void)paletteViewToolsDidChange:(id)arg0 ;
-(void)removeObserver:(id)arg0 ;
-(void)setVisible:(BOOL)arg0 forFirstResponder:(id)arg1 ;


@end


#endif