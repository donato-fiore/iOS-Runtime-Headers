// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef AKTOOLBARVIEW_H
#define AKTOOLBARVIEW_H

@class UIView, UIToolbar, UIBarButtonItem, NSLayoutConstraint, UIAlertController, AXSSImageDescriptionViewController, NSString, PKToolPicker;
@protocol AXSSImageDescriptionViewControllerDelegate, AKToolsListViewControllerDelegate, AKAttributePickerViewControllerDelegate, AKSignaturesViewControllerDelegate, AKSignatureCreationControllerDelegate, UIPopoverPresentationControllerDelegate, PKPaletteViewPrivateDelegate, PKToolPickerObserverPrivate, PKToolPickerPrivateDelegate, PKPaletteViewAnnotationDelegate, AKToolbarViewOpacityEditingDelegate;


#import "AKToolbarBackgroundView.h"
#import "AKTextAttributesViewController.h"
#import "AKSignaturesViewController_iOS.h"
#import "AKSignatureCreationViewController_iOS.h"
#import "AKToolsListViewController.h"
#import "AKAttributePickerViewController.h"
#import "AKAttributesPickerButton.h"
#import "AKController.h"

@interface AKToolbarView : UIView <AXSSImageDescriptionViewControllerDelegate, AKToolsListViewControllerDelegate, AKAttributePickerViewControllerDelegate, AKSignaturesViewControllerDelegate, AKSignatureCreationControllerDelegate, UIPopoverPresentationControllerDelegate, PKPaletteViewPrivateDelegate, PKToolPickerObserverPrivate, PKToolPickerPrivateDelegate, PKPaletteViewAnnotationDelegate>

 {
    UIToolbar *_toolbar;
    AKToolbarBackgroundView *_backgroundView;
    UIBarButtonItem *_undoButton;
    UIBarButtonItem *_redoButton;
    UIBarButtonItem *_shareButton;
    UIBarButtonItem *_shapesPickerButton;
    UIBarButtonItem *_attributesPickerBarButton;
    UIBarButtonItem *_undoRedoFixedSpace;
    UIBarButtonItem *_attributesAddShapeFixedSpace;
    NSLayoutConstraint *_toolbarBottomConstraint;
    NSLayoutConstraint *_heightConstraint;
    UIAlertController *_signaturesAlertController;
    UIAlertController *_undoAlertController;
    AKTextAttributesViewController *_textAttributesViewController;
    AKSignaturesViewController_iOS *_signaturesSheetViewController;
    AKSignatureCreationViewController_iOS *_signaturesCreationController;
    AKToolsListViewController *_toolsListViewController;
    AKAttributePickerViewController *_attributePickerViewController;
    BOOL _showAttributePicker;
    BOOL _didSetupToolPicker;
    BOOL _shouldUseCachedSafeAreaInsets;
    UIEdgeInsets _cachedSafeAreaInsets;
    AKAttributesPickerButton *_attributesPickerButton;
    NSLayoutConstraint *_attributesPickerButtonWidthConstraint;
    NSLayoutConstraint *_attributesPickerButtonHeigthConstraint;
    BOOL _supportsOpacityEditing;
    AXSSImageDescriptionViewController *_imageDescriptionViewController;
}


@property (nonatomic) BOOL alwaysShowUndoButton; // ivar: _alwaysShowUndoButton
@property (weak, nonatomic) AKController *annotationController; // ivar: _annotationController
@property (nonatomic) BOOL contentsHidden; // ivar: _contentsHidden
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) NSUInteger hash;
@property (weak, nonatomic) NSObject<AKToolbarViewOpacityEditingDelegate> *opacityEditingDelegate; // ivar: _opacityEditingDelegate
@property (nonatomic) SEL shareButtonAction;
@property (nonatomic, getter=isShareButtonHidden) BOOL shareButtonHidden; // ivar: _shareButtonHidden
@property (nonatomic) id *shareButtonTarget;
@property (readonly) Class superclass;
@property (readonly) Class superclass;
@property (nonatomic) BOOL supportsOpacityEditing;
@property (retain, nonatomic) PKToolPicker *toolPicker; // ivar: _toolPicker
@property (nonatomic, getter=isTranslucent) BOOL translucent; // ivar: _translucent
@property (nonatomic) BOOL undoRedoButtonsHidden; // ivar: _undoRedoButtonsHidden
@property (readonly, nonatomic) BOOL useNewFullscreenPalette;
@property (nonatomic) BOOL wantsClearBackgroundColorInCompactSize; // ivar: _wantsClearBackgroundColorInCompactSize


+(id)redoButtonImage;
+(id)redoButtonImageWithStyle:(NSUInteger)arg0 ;
+(id)undoButtonImage;
+(id)undoButtonImageWithStyle:(NSUInteger)arg0 ;
-(BOOL)_hasSelectedAnnotations;
-(BOOL)_toolPicker:(id)arg0 shouldChangeSelectedToolColor:(id)arg1 ;
-(BOOL)canBecomeFirstResponder;
-(BOOL)isPresentingPopover;
-(BOOL)isPresentingPopovers;
-(BOOL)pointInside:(struct CGPoint )arg0 withEvent:(id)arg1 ;
-(BOOL)presentationControllerShouldDismiss:(id)arg0 ;
-(BOOL)shouldHide;
-(BOOL)shouldUseCompactHeight;
-(BOOL)shouldUseCompactWidth;
-(NSInteger)adaptivePresentationStyleForPresentationController:(id)arg0 traitCollection:(id)arg1 ;
-(NSUInteger)layoutForSize:(struct CGSize )arg0 ;
-(id)_paletteView;
-(id)_toolPickerUndoManager:(id)arg0 ;
-(id)createUndoViewController;
-(id)createUndoViewControllerWithActionHandler:(id)arg0 ;
-(id)hitTest:(struct CGPoint )arg0 withEvent:(id)arg1 ;
-(id)initWithFrame:(struct CGRect )arg0 ;
-(id)paletteViewSelectedAnnotationColor:(id)arg0 ;
-(id)popoverPresentingController;
-(id)presentedViewController;
-(id)selectedAnnotations;
-(struct CGRect )frameObscuredInView:(id)arg0 ;
-(struct CGSize )intrinsicContentSize;
-(struct CGSize )sizeThatFits:(struct CGSize )arg0 ;
-(struct UIEdgeInsets )_safeAreaInsetsWithCachingIfNeeded;
-(void)_annotationSelectionNotification:(id)arg0 ;
-(void)_askAnnotationControllerDelegateToEnterFullScreen:(BOOL)arg0 ;
-(void)_cleanupAfterUndoAlert;
-(void)_clearPresentedPopoverPointers;
-(void)_dismissCurrentlyPresentedPopoverAnimated:(BOOL)arg0 withCompletion:(id)arg1 ;
-(void)_dismissImageDescriptionViewController;
-(void)_forceToolPickerVisibleForViewStateChange:(BOOL)arg0 ;
-(void)_installAttributesPickerButtonInPaletteContextEditingViewIfNeeded;
-(void)_presentImageDescriptionViewController;
-(void)_presentViewController:(id)arg0 animated:(BOOL)arg1 ;
-(void)_redo:(id)arg0 ;
-(void)_saveCachedSafeAreaInsets;
-(void)_setCurrentOverlaysToolPickerVisible:(BOOL)arg0 ;
-(void)_setPopoverPresentationSource:(id)arg0 fromSender:(id)arg1 ;
-(void)_setPopoverPresentationSource:(id)arg0 fromSender:(id)arg1 sourceRect:(struct CGRect )arg2 ;
-(void)_setupPaletteViewIfNecessary;
-(void)_shouldUseCachedSafeAreaInsets:(BOOL)arg0 ;
-(void)_showColorPicker:(id)arg0 ;
-(void)_showMarkupToolsPopover:(id)arg0 ;
-(void)_showShapeAttributes:(id)arg0 ;
-(void)_showShapeAttributesPopover:(id)arg0 ;
-(void)_showShapesPicker:(id)arg0 ;
-(void)_showSignaturesPopover:(id)arg0 fromSourceView:(id)arg1 sourceRect:(struct CGRect )arg2 ;
-(void)_showTextAttributes:(id)arg0 ;
-(void)_showTextStylePopover:(id)arg0 ;
-(void)_showUndoAlertPopover:(id)arg0 ;
-(void)_textEffectsWindowIsHosted:(id)arg0 ;
-(void)_toolPicker:(id)arg0 didChangeColor:(id)arg1 ;
-(void)_toolPickerDidChangePosition:(id)arg0 ;
-(void)_undo:(id)arg0 ;
-(void)_undoAll:(id)arg0 ;
-(void)_undoLongPress:(id)arg0 ;
-(void)_undoManagerNotification:(id)arg0 ;
-(void)_updateAttributeControllerInk:(id)arg0 ;
-(void)_updatePalette;
-(void)_updatePaletteUI;
-(void)_updateTraitCollectionForViewControllerIfNecessary:(id)arg0 ;
-(void)attributePicker:(id)arg0 didSelectToolWithTag:(NSInteger)arg1 attributeTag:(NSInteger)arg2 ;
-(void)dealloc;
-(void)didDismissPopover;
-(void)didDismissPopoverAndRestorePalette;
-(void)didMoveToWindow;
-(void)dismissPalettePopoverWithCompletion:(id)arg0 ;
-(void)dismissPresentedPopovers;
-(void)dismissPresentedPopoversAnimated:(BOOL)arg0 ;
-(void)endAnnotationEditing;
-(void)endOpacityEditing;
-(void)forceHideRuler;
-(void)hideModernToolbarView;
-(void)imageDescriptionViewControllerDidCancel:(id)arg0 ;
-(void)imageDescriptionViewControllerDidDismiss:(id)arg0 ;
-(void)imageDescriptionViewControllerDidSave:(id)arg0 ;
-(void)layoutSubviews;
-(void)paletteViewDidSelectPlusButton:(id)arg0 ;
-(void)popoverPresentationController:(id)arg0 willRepositionPopoverToRect:(struct CGRect *)arg1 inView:(*id)arg2 ;
-(void)resetToLastDrawingTool;
-(void)revalidateItems;
-(void)setAlpha:(CGFloat)arg0 ;
-(void)setBackgroundColor:(id)arg0 ;
-(void)setBackgroundImage:(id)arg0 forToolbarPosition:(NSInteger)arg1 barMetrics:(NSInteger)arg2 ;
-(void)setHidden:(BOOL)arg0 ;
-(void)setInk:(id)arg0 ;
-(void)setOpaque:(BOOL)arg0 ;
-(void)setShadowImage:(id)arg0 forToolbarPosition:(NSInteger)arg1 ;
-(void)signatureCreationControllerDidCreateSignature:(id)arg0 ;
-(void)signatureCreationControllerDidDismiss:(id)arg0 ;
-(void)signaturesViewControllerContinueToCreateSignature:(id)arg0 ;
-(void)signaturesViewControllerContinueToManageSignatures:(id)arg0 ;
-(void)signaturesViewControllerDidCancel:(id)arg0 ;
-(void)signaturesViewControllerDidSelectSignature:(id)arg0 ;
-(void)toolPickerIsRulerActiveDidChange:(id)arg0 ;
-(void)toolPickerSelectedToolDidChange:(id)arg0 ;
-(void)toolPickerVisibilityDidChange:(id)arg0 ;
-(void)toolsList:(id)arg0 didSelectToolWithTag:(NSInteger)arg1 ;
-(void)toolsListDidSelectOpacityItem:(id)arg0 ;
-(void)traitCollectionDidChange:(id)arg0 ;
-(void)updateConstraints;
-(void)updateCurrentOverlaysToolPickerVisibility;
-(void)willMoveToWindow:(id)arg0 ;


@end


#endif