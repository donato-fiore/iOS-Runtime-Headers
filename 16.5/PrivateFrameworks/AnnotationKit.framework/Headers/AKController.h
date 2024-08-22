// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef AKCONTROLLER_H
#define AKCONTROLLER_H

@class NSString, NSArray, NSMapTable, PKToolPicker, UIView;
@protocol AKControllerDelegateProtocol, AKControllerOverlayInteractionProtocol, PKRulerHostingDelegate;

#import <Foundation/Foundation.h>

#import "AKActionController.h"
#import "AKAttributeController.h"
#import "AKFormFeatureDetectorController.h"
#import "AKHighlightAnnotationController.h"
#import "AKPageController.h"
#import "AKLegacyDoodleController.h"
#import "AKMainEventHandler.h"
#import "AKModelController.h"
#import "AKToolbarView.h"
#import "AKSparseMutableControllerArray.h"
#import "AKPeripheralAvailabilityManager_iOS.h"
#import "AKSidecarController.h"
#import "AKSignatureModelController.h"
#import "AKSignaturesController.h"
#import "AKStatistics.h"
#import "AKTextEditorController.h"
#import "AKToolController.h"
#import "AKToolbarViewController.h"
#import "AKUndoController.h"

@interface AKController : NSObject {
    BOOL _isEditingAnnotation;
    BOOL _toolPickerVisibleBeforeTextEditing;
}


@property (readonly) BOOL _isInDFRAction; // ivar: __isInDFRAction
@property (retain) AKActionController *actionController; // ivar: _actionController
@property CGFloat akModelToCanvasFixedPixelScaleOfFirstEncounteredPage; // ivar: _akModelToCanvasFixedPixelScaleOfFirstEncounteredPage
@property (nonatomic) BOOL allEditingDisabled; // ivar: _allEditingDisabled
@property (nonatomic) BOOL annotationEditingEnabled; // ivar: _annotationEditingEnabled
@property (retain) AKAttributeController *attributeController; // ivar: _attributeController
@property (copy) NSString *author; // ivar: _author
@property (readonly, nonatomic) NSArray *cachedKeyCommands; // ivar: _cachedKeyCommands
@property NSUInteger creationCascadingMultiplier; // ivar: _creationCascadingMultiplier
@property NSUInteger currentPageIndex; // ivar: _currentPageIndex
@property (weak) NSObject<AKControllerDelegateProtocol> *delegate; // ivar: _delegate
@property (retain) AKFormFeatureDetectorController *formDetectionController; // ivar: _formDetectionController
@property (nonatomic) BOOL formFillingEnabled; // ivar: _formFillingEnabled
@property (nonatomic) BOOL hideAllAdornments; // ivar: _hideAllAdornments
@property (retain) AKHighlightAnnotationController *highlightAnnotationController; // ivar: _highlightAnnotationController
@property (nonatomic) BOOL isLogging; // ivar: _isLogging
@property BOOL isTestingInstance; // ivar: _isTestingInstance
@property BOOL isTornDown; // ivar: _isTornDown
@property (nonatomic) BOOL isUsedOnDarkBackground; // ivar: _isUsedOnDarkBackground
@property (weak) AKPageController *lastCreationCascadingPageController; // ivar: _lastCreationCascadingPageController
@property NSInteger lastPasteboardChangeCount; // ivar: _lastPasteboardChangeCount
@property (retain) AKLegacyDoodleController *legacyDoodleController; // ivar: _legacyDoodleController
@property (retain) AKMainEventHandler *mainEventHandler; // ivar: _mainEventHandler
@property (retain) AKModelController *modelController; // ivar: _modelController
@property (weak, nonatomic) AKToolbarView *modernToolbarView; // ivar: _modernToolbarView
@property (readonly, copy, nonatomic) NSString *modifiedImageDescription; // ivar: _modifiedImageDescription
@property (readonly, nonatomic) BOOL onlyDrawWithApplePencil;
@property (weak, nonatomic) NSObject<AKControllerOverlayInteractionProtocol> *overlayInteractionDelegate; // ivar: _overlayInteractionDelegate
@property (nonatomic) BOOL overlayShouldPixelate; // ivar: overlayShouldPixelate
@property (retain) AKSparseMutableControllerArray *pageControllers; // ivar: _pageControllers
@property (retain) NSMapTable *pageModelControllersToPageControllers; // ivar: _pageModelControllersToPageControllers
@property NSUInteger pasteCascadingMultiplier; // ivar: _pasteCascadingMultiplier
@property (nonatomic) BOOL pencilAlwaysDraws; // ivar: _pencilAlwaysDraws
@property (retain) AKPeripheralAvailabilityManager_iOS *peripheralAvailabilityManager; // ivar: _peripheralAvailabilityManager
@property (weak, nonatomic) NSObject<PKRulerHostingDelegate> *rulerHostingDelegate; // ivar: _rulerHostingDelegate
@property CGFloat screenPixelsToCanvasPixelsDownscale; // ivar: _screenPixelsToCanvasPixelsDownscale
@property (nonatomic) BOOL selectNewlyCreatedAnnotations; // ivar: _selectNewlyCreatedAnnotations
@property (nonatomic) BOOL shapeDetectionEnabled; // ivar: _shapeDetectionEnabled
@property (retain) AKSidecarController *sidecarController; // ivar: _sidecarController
@property (retain) AKSignatureModelController *signatureModelController; // ivar: _signatureModelController
@property (retain, nonatomic) AKSignaturesController *signaturesController; // ivar: _signaturesController
@property (retain) AKStatistics *statisticsLogger; // ivar: _statisticsLogger
@property (retain) AKTextEditorController *textEditorController; // ivar: _textEditorController
@property (retain) AKToolController *toolController; // ivar: _toolController
@property (readonly, nonatomic) PKToolPicker *toolPicker;
@property (retain) UIView *toolbarView; // ivar: _toolbarView
@property (retain) AKToolbarViewController *toolbarViewController; // ivar: _toolbarViewController
@property (retain) AKUndoController *undoController; // ivar: _undoController
@property (nonatomic) BOOL useHighVisibilityDefaultInks; // ivar: _useHighVisibilityDefaultInks


+(BOOL)_isInLowMemoryEnvironment;
+(BOOL)automaticallyNotifiesObserversForKey:(id)arg0 ;
+(BOOL)canConnectToStylus;
+(BOOL)hasPressureCapableHardware;
+(id)akBundle;
+(id)akBundleIdentifier;
+(id)colorForHighlightAttributeWithTag:(NSInteger)arg0 ;
+(id)controllerWithDelegate:(id)arg0 ;
+(id)markupBarButtonItemWithTarget:(id)arg0 action:(SEL)arg1 ;
+(void)adjustAnnotationBoundsToFitText:(id)arg0 ;
+(void)renderAnnotation:(id)arg0 inContext:(struct CGContext *)arg1 ;
-(BOOL)_validateCutCopyDelete;
-(BOOL)canBeginEditingTextAnnotation:(id)arg0 ;
-(BOOL)canPerformKeyCommandAction:(SEL)arg0 withSender:(id)arg1 handled:(*BOOL)arg2 ;
-(BOOL)handleEvent:(id)arg0 ;
-(BOOL)isOverlayViewLoadedAtIndex:(NSUInteger)arg0 ;
-(BOOL)isPresentingPopover;
-(BOOL)shouldDrawVariableStrokeDoodles;
-(BOOL)supportForPencilAlwaysDrawsSatisfied;
-(BOOL)supportsFormFill;
-(BOOL)supportsImageDescriptionEditing;
-(BOOL)validateCopy:(id)arg0 ;
-(BOOL)validateCut:(id)arg0 ;
-(BOOL)validateDelete:(id)arg0 ;
-(BOOL)validateDuplicate:(id)arg0 ;
-(BOOL)validateEditTextAnnotation:(id)arg0 ;
-(BOOL)validatePaste:(id)arg0 ;
-(BOOL)validateRedo:(id)arg0 ;
-(BOOL)validateSelectAll:(id)arg0 ;
-(BOOL)validateSender:(id)arg0 ;
-(BOOL)validateShowAttributeInspector:(id)arg0 ;
-(BOOL)validateUndo:(id)arg0 ;
-(CGFloat)currentModelBaseScaleFactorForPageAtIndex:(NSUInteger)arg0 ;
-(NSInteger)currentExifOrientationForPageAtIndex:(NSUInteger)arg0 ;
-(NSUInteger)toolMode;
-(id)_toolpicker_color;
-(id)_toolpicker_inkIdentifier;
-(id)currentPageController;
-(id)doubleTapGestureRecognizer;
-(id)imageForToolbarButtonItemOfType:(NSUInteger)arg0 ;
-(id)initForTesting;
-(id)initWithDelegate:(id)arg0 ;
-(id)keyCommandsForAnnotations;
-(id)originalOrModifiedImageDescription;
-(id)overlayViewAtIndex:(NSUInteger)arg0 ;
-(id)pageControllerForAnnotation:(id)arg0 ;
-(id)pageControllerForPageModelController:(id)arg0 ;
-(id)panGestureRecognizer;
-(id)pressGestureRecognizer;
-(id)rotationGestureRecognizer;
-(id)tapGestureRecognizer;
-(id)toolbarButtonItemOfType:(NSUInteger)arg0 ;
-(struct CGRect )_popoverAnchorFrameInModelForAnnotations:(id)arg0 ;
-(struct CGRect )contentAlignedRectForRect:(struct CGRect )arg0 onPageAtIndex:(NSUInteger)arg1 ;
-(void)_didReceiveMemoryWarning:(id)arg0 ;
-(void)_didScrollPDFPage:(id)arg0 ;
-(void)_pageModelControllerSelectedAnnotationsChangedNotification:(id)arg0 ;
-(void)_setupPageModelController:(id)arg0 ;
-(void)_toolpicker_setColor:(id)arg0 ;
-(void)_toolpicker_setInkIdentifier:(id)arg0 ;
-(void)_updateGestureDependencyPriority;
-(void)addPopupToAnnotation:(id)arg0 openPopup:(BOOL)arg1 ;
-(void)applyCurrentCrop;
-(void)beginLogging:(id)arg0 documentType:(id)arg1 ;
-(void)clearUndoStack;
-(void)commitEditing;
-(void)copy:(id)arg0 ;
-(void)cut:(id)arg0 ;
-(void)dealloc;
-(void)delayedUndoControllerSetup;
-(void)delete:(id)arg0 ;
-(void)didBeginEditingAnnotation:(id)arg0 ;
-(void)didEndEditingAnnotation:(id)arg0 ;
-(void)duplicate:(id)arg0 ;
-(void)editTextAnnotation:(id)arg0 ;
-(void)editTextAnnotation:(id)arg0 selectAllText:(BOOL)arg1 ;
-(void)enclosingScrollViewDidScroll:(id)arg0 ;
-(void)endEditingTextAnnotation;
-(void)endLogging;
-(void)hideSelectionMenu:(id)arg0 ;
-(void)highlightableSelectionChanged;
-(void)highlightableSelectionDidEndChanging;
-(void)highlightableSelectionWillBeginChanging;
-(void)observeValueForKeyPath:(id)arg0 ofObject:(id)arg1 change:(id)arg2 context:(*void)arg3 ;
-(void)paste:(id)arg0 ;
-(void)performActionForSender:(id)arg0 ;
-(void)prepareOverlayAtIndex:(NSUInteger)arg0 ;
-(void)redo:(id)arg0 ;
-(void)relinquishOverlayAtIndex:(NSUInteger)arg0 ;
-(void)reloadVisibleToolbarItemIdentifiers;
-(void)removeNoteFromAnnotation:(id)arg0 ;
-(void)renderAnnotation:(id)arg0 inContext:(struct CGContext *)arg1 ;
-(void)resetToDefaultToolMode;
-(void)selectAll:(id)arg0 ;
-(void)setToolMode:(NSUInteger)arg0 ;
-(void)showAttributeInspector:(id)arg0 ;
-(void)showSelectionMenu:(id)arg0 ;
-(void)strokeAddedNotification:(id)arg0 ;
-(void)teardown;
-(void)toolPickerVisibilityDidChange:(id)arg0 ;
-(void)undo:(id)arg0 ;
-(void)updateOverlayViewAtIndex:(NSUInteger)arg0 ;


@end


#endif