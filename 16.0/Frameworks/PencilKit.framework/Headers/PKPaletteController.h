// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PKPALETTECONTROLLER_H
#define PKPALETTECONTROLLER_H

@class NSString, NSLayoutConstraint, NSArray;
@protocol PKPaletteHostingWindowScene, PKPaletteFloatingKeyboardControllerDelegate, UIPopoverPresentationControllerDelegate, PKPaletteMoreOptionsViewControllerDelegate, PKPaletteControllerDelegate;

#import <Foundation/Foundation.h>

#import "PKPaletteHostView.h"
#import "PKUCBPaletteView.h"
#import "PKTextInputWindowFirstResponder.h"
#import "PKPaletteFloatingKeyboardController.h"
#import "PKPaletteInputAssistantButtonProvider.h"
#import "PKPaletteKeyboardButton.h"
#import "PKPaletteButton.h"
#import "PKPaletteTapToRadarCommand.h"

@interface PKPaletteController : NSObject <PKPaletteHostingWindowScene, PKPaletteFloatingKeyboardControllerDelegate, UIPopoverPresentationControllerDelegate, PKPaletteMoreOptionsViewControllerDelegate>



@property (retain, nonatomic) PKPaletteHostView *_hostView; // ivar: __hostView
@property (retain, nonatomic) PKUCBPaletteView *_paletteView; // ivar: __paletteView
@property (nonatomic) CGRect adjustedWindowSceneBounds; // ivar: _adjustedWindowSceneBounds
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<PKPaletteControllerDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (retain, nonatomic) PKTextInputWindowFirstResponder *firstResponder; // ivar: _firstResponder
@property (retain, nonatomic) PKPaletteFloatingKeyboardController *floatingKeyboardController; // ivar: _floatingKeyboardController
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) PKPaletteInputAssistantButtonProvider *inputAssistantButtonProvider; // ivar: _inputAssistantButtonProvider
@property (retain, nonatomic) PKPaletteKeyboardButton *keyboardButton; // ivar: _keyboardButton
@property (retain, nonatomic) NSLayoutConstraint *paletteHostViewHeightConstraint; // ivar: _paletteHostViewHeightConstraint
@property (retain, nonatomic) NSLayoutConstraint *paletteHostViewWidthConstraint; // ivar: _paletteHostViewWidthConstraint
@property (readonly, nonatomic) CGRect paletteHostingWindowSceneBounds;
@property (readonly, nonatomic) NSInteger palettePosition;
@property (readonly, nonatomic, getter=isPaletteVisible) BOOL paletteVisible;
@property (retain, nonatomic) PKPaletteButton *redoButton; // ivar: _redoButton
@property (retain, nonatomic) PKPaletteButton *returnKeyButton; // ivar: _returnKeyButton
@property (readonly) Class superclass;
@property (retain, nonatomic) PKPaletteTapToRadarCommand *tapToRadarCommand; // ivar: _tapToRadarCommand
@property (readonly, copy, nonatomic) NSArray *trailingButtonsWithReturnKey; // ivar: _trailingButtonsWithReturnKey
@property (readonly, copy, nonatomic) NSArray *trailingButtonsWithoutReturnKey; // ivar: _trailingButtonsWithoutReturnKey
@property (retain, nonatomic) PKPaletteButton *undoButton; // ivar: _undoButton


-(BOOL)_shouldOverridePaletteViewTraitCollectionTo:(id)arg0 ;
-(BOOL)_shouldPaletteUseCompactHorizontalSizeClass;
-(NSInteger)_adjustedUserInterfaceSizeClass;
-(NSInteger)adaptivePresentationStyleForPresentationController:(id)arg0 ;
-(NSInteger)adaptivePresentationStyleForPresentationController:(id)arg0 traitCollection:(id)arg1 ;
-(id)_adjustedHorizontalSizeClassTraitCollection;
-(id)init;
-(id)responderForFloatingKeyboardController:(id)arg0 ;
-(void)_handleKeyboard;
-(void)_handleMoreButton:(id)arg0 ;
-(void)_handleRedo;
-(void)_handleReturn;
-(void)_handleTextInputResponderCapabilitiesChanged:(id)arg0 ;
-(void)_handleTextInputReturnKeyStateChanged:(id)arg0 ;
-(void)_handleUndo;
-(void)_openPencilSettings;
-(void)_presentMoreOptionsPopoverFromButton:(id)arg0 ;
-(void)_recognitionLocaleIdentifierDidChange:(id)arg0 ;
-(void)_updatePaletteUI;
-(void)_updatePaletteViewTraitCollection;
-(void)_updatePaletteWithApplicationSpecificItems;
-(void)_updatePaletteWithDefaultItems;
-(void)_updateReturnKey;
-(void)_updateTrailingBarButtons;
-(void)_updateUndoRedoEnabledState;
-(void)dealloc;
-(void)floatingKeyboardController:(id)arg0 didChangeKeyboardType:(NSInteger)arg1 ;
-(void)floatingKeyboardControllerWillHide:(id)arg0 ;
-(void)floatingKeyboardControllerWillShow:(id)arg0 ;
-(void)installInView:(id)arg0 ;
-(void)moreOptionsViewControllerDidSelectOpenPencilSettings:(id)arg0 ;
-(void)moreOptionsViewControllerDidSelectTapToRadar:(id)arg0 ;
-(void)moreOptionsViewControllerDidToggleAutoHide:(id)arg0 ;
-(void)moreOptionsViewControllerDidToggleFingerDraws:(id)arg0 ;
-(void)tearDown;


@end


#endif