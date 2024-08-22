// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef AKTOOLBARVIEWCONTROLLER_IOS_H
#define AKTOOLBARVIEWCONTROLLER_IOS_H

@class NSLayoutConstraint, UIColor, NSString, UIView, UIBarButtonItem, UIAlertController, NSArray;
@protocol AKSignaturesViewControllerDelegate, AKSignatureCreationControllerDelegate, UIPopoverPresentationControllerDelegate;


#import "AKToolbarViewController.h"
#import "AKFloatingAttributePickerViewController.h"
#import "AKColorPickerViewController.h"
#import "AKLineStylesViewController.h"
#import "AKSignaturesViewController_iOS.h"
#import "AKTextAttributesViewController.h"

@interface AKToolbarViewController_iOS : AKToolbarViewController <AKSignaturesViewControllerDelegate, AKSignatureCreationControllerDelegate, UIPopoverPresentationControllerDelegate>



@property (retain, nonatomic) AKFloatingAttributePickerViewController *attributeToolbarViewController; // ivar: _attributeToolbarViewController
@property (retain, nonatomic) NSLayoutConstraint *attributeToolbarViewControllerConstraint; // ivar: _attributeToolbarViewControllerConstraint
@property (retain, nonatomic) UIColor *barTintColor; // ivar: _barTintColor
@property (retain, nonatomic) AKColorPickerViewController *colorPickerPopoverViewController; // ivar: _colorPickerPopoverViewController
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (retain, nonatomic) UIView *floatingAttributeToolbarContainer; // ivar: _floatingAttributeToolbarContainer
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) CGFloat heightIncludingAdditionalVisibleBars;
@property (retain, nonatomic) UIBarButtonItem *inkButton; // ivar: _inkButton
@property (retain, nonatomic) UIBarButtonItem *lineStyleButton; // ivar: _lineStyleButton
@property (retain, nonatomic) AKLineStylesViewController *lineStylesViewController; // ivar: _lineStylesViewController
@property (retain, nonatomic) UIBarButtonItem *loupeButton; // ivar: _loupeButton
@property (retain, nonatomic) UIBarButtonItem *redoButton; // ivar: _redoButton
@property (retain, nonatomic) UIBarButtonItem *richSketchButton; // ivar: _richSketchButton
@property (retain, nonatomic) UIBarButtonItem *signatureButton; // ivar: _signatureButton
@property (retain, nonatomic) UIAlertController *signaturesAlertController; // ivar: _signaturesAlertController
@property (retain, nonatomic) AKSignaturesViewController_iOS *signaturesSheetViewController; // ivar: _signaturesSheetViewController
@property (retain, nonatomic) UIBarButtonItem *sketchButton; // ivar: _sketchButton
@property (retain, nonatomic) NSArray *staticToolbarItems; // ivar: _staticToolbarItems
@property (retain, nonatomic) UIBarButtonItem *strokeColorButton; // ivar: _strokeColorButton
@property (readonly) Class superclass;
@property (retain, nonatomic) AKTextAttributesViewController *textAttributesViewController; // ivar: _textAttributesViewController
@property (retain, nonatomic) UIBarButtonItem *textButton; // ivar: _textButton
@property (retain, nonatomic) UIBarButtonItem *textStyleButton; // ivar: _textStyleButton
@property (retain, nonatomic) UIColor *tintColor; // ivar: _tintColor
@property (retain, nonatomic) UIAlertController *undoAlertController; // ivar: _undoAlertController
@property (retain, nonatomic) UIBarButtonItem *undoButton; // ivar: _undoButton
@property (readonly, nonatomic) CGFloat visibleHeightOfAttributeBar;


-(BOOL)_legacyDoodlesEnabled;
-(BOOL)_validateUndoButton;
-(BOOL)isPresentingPopover;
-(BOOL)isPresentingPopovers;
-(BOOL)presentationControllerShouldDismiss:(id)arg0 ;
-(NSInteger)_attributeTagForCurrentSelectionState;
-(NSUInteger)_workaroundToolbarPopoverPositioningBug26744300;
-(id)_barButtonForToolbarType:(NSUInteger)arg0 ;
-(id)_buildUndoAlertController;
-(id)_createNewColorPickerToolbarButtonWithTarget:(id)arg0 selector:(SEL)arg1 ;
-(id)_createNewCustomViewToolbarButtonWithImage:(id)arg0 target:(id)arg1 selector:(SEL)arg2 ;
-(id)_createNewToggleToolbarButtonWithImage:(id)arg0 tag:(NSInteger)arg1 target:(id)arg2 selector:(SEL)arg3 autoUpdatesColor:(BOOL)arg4 ;
-(id)_doodleModeToolbarImage;
-(id)_toolbarButtonItemOfType:(NSUInteger)arg0 ;
-(id)initWithController:(id)arg0 ;
-(void)_buildBasicItems;
-(void)_deleteSelectedItems:(id)arg0 ;
-(void)_dismissCurrentlyPresentedPopoverAnimated:(BOOL)arg0 withCompletion:(id)arg1 ;
-(void)_layoutAttributeContainer;
-(void)_layoutToolbarForTraitCollection:(id)arg0 ;
-(void)_peripheralAvailabilityDidUpdate:(id)arg0 ;
-(void)_redoButtonAction:(id)arg0 ;
-(void)_setupPassthroughViewsForViewController:(id)arg0 ;
-(void)_showColorPickerPopover:(id)arg0 ;
-(void)_showLineStylePopover:(id)arg0 ;
-(void)_showSignaturesPopover:(id)arg0 ;
-(void)_showTextStylePopover:(id)arg0 ;
-(void)_showUndoAlert:(id)arg0 ;
-(void)_undoAllButtonAction:(id)arg0 ;
-(void)_undoButtonAction:(id)arg0 ;
-(void)_undoLongPressAction:(id)arg0 ;
-(void)_undoManagerNotification:(id)arg0 ;
-(void)_updateToggleButton:(id)arg0 withTraitCollection:(id)arg1 ;
-(void)dealloc;
-(void)dismissAttributeToolbarForSelectedAnnotations;
-(void)dismissAttributeToolbarImmediately;
-(void)dismissPresentedPopovers;
-(void)loadView;
-(void)observeValueForKeyPath:(id)arg0 ofObject:(id)arg1 change:(id)arg2 context:(*void)arg3 ;
-(void)revalidateItems;
-(void)setFillColorUIDisplayToColor:(id)arg0 ;
-(void)setStrokeColorUIDisplayToColor:(id)arg0 ;
-(void)showAttributeToolbarForSelectedAnnotations:(id)arg0 andToolMode:(NSUInteger)arg1 ;
-(void)signatureCreationControllerDidCreateSignature:(id)arg0 ;
-(void)signaturesViewControllerContinueToCreateSignature:(id)arg0 ;
-(void)signaturesViewControllerContinueToManageSignatures:(id)arg0 ;
-(void)signaturesViewControllerDidCancel:(id)arg0 ;
-(void)signaturesViewControllerDidSelectSignature:(id)arg0 ;
-(void)signaturesViewControllerEnterSignatureMode:(id)arg0 ;
-(void)syncUIToSelectedColor;
-(void)traitCollectionDidChange:(id)arg0 ;


@end


#endif