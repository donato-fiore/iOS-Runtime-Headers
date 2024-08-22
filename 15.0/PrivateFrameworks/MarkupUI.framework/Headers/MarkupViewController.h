// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef MARKUPVIEWCONTROLLER_H
#define MARKUPVIEWCONTROLLER_H

@class UIViewController, UIColor, NSUndoManager, AKController, NSData, UIBarButtonItem, UIView, UIViewController<MUContentViewControllerProtocol>, UIScrollView, NSString, AKToolbarView, UINavigationBar, UINavigationItem, UTType, PDFDocument, PDFView, UIImage, UIImageView, NSLayoutConstraint;
@protocol MUContentViewControllerDelegate, UINavigationBarDelegate, UIToolbarDelegate, PKRulerHostingDelegate, MarkupViewControllerDelegate;



@interface MarkupViewController : UIViewController <MUContentViewControllerDelegate, UINavigationBarDelegate, UIToolbarDelegate, PKRulerHostingDelegate>

 {
    UIColor *_backgroundColor;
    UIColor *_toolbarItemTintColor;
    UIColor *_toolbarTintColor;
    UIColor *_navBarTitleColor;
    BOOL _showingSignaturesUI;
}


@property (readonly) CGSize adjustedSourceImageSize;
@property (retain, nonatomic) NSUndoManager *akUndoManager; // ivar: _akUndoManager
@property (nonatomic) BOOL allEditingDisabled;
@property (nonatomic) BOOL allowShakeToUndo; // ivar: _allowShakeToUndo
@property (nonatomic) BOOL allowsThumbnailViewPageReordering;
@property (nonatomic) BOOL alreadyLoggedSavingForThisDocument; // ivar: _alreadyLoggedSavingForThisDocument
@property (readonly, nonatomic) AKController *annotationController;
@property (nonatomic) BOOL annotationEditingEnabled;
@property (retain) NSData *archivedModelData; // ivar: _archivedModelData
@property (copy) UIColor *backgroundColor;
@property (retain) UIBarButtonItem *cancelButton; // ivar: _cancelButton
@property (nonatomic) BOOL centersIgnoringContentInsets; // ivar: _centersIgnoringContentInsets
@property (retain) UIView *contentContainerView; // ivar: _contentContainerView
@property (retain) UIViewController<MUContentViewControllerProtocol> *contentViewController; // ivar: _contentViewController
@property (readonly, nonatomic) UIScrollView *contentViewScrollView;
@property (nonatomic) NSUInteger currentPDFPageIndex;
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<MarkupViewControllerDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (retain) id *digestedSourceContent; // ivar: _digestedSourceContent
@property (retain) UIBarButtonItem *doneButton; // ivar: _doneButton
@property BOOL encryptPrivateMetadata; // ivar: _encryptPrivateMetadata
@property (nonatomic) BOOL fixedThumbnailView;
@property (nonatomic) BOOL forcesPDFViewTopAlignment; // ivar: _forcesPDFViewTopAlignment
@property (readonly) NSUInteger hash;
@property (copy, nonatomic) NSString *hostProcessBundleIdentifier; // ivar: _hostProcessBundleIdentifier
@property (readonly, nonatomic) UIView *imageViewCombinedContentView;
@property CGFloat initialContentScale; // ivar: _initialContentScale
@property NSUInteger inkStyle; // ivar: _inkStyle
@property BOOL isAnimatingMarkupExtensionTransition; // ivar: _isAnimatingMarkupExtensionTransition
@property (readonly) BOOL isUsedOnDarkBackground;
@property (retain) AKToolbarView *modernToolbar; // ivar: _modernToolbar
@property (retain, nonatomic) UINavigationBar *navBar; // ivar: _navBar
@property (copy) UIColor *navBarTitleColor;
@property (retain, nonatomic) UINavigationItem *navItem; // ivar: _navItem
@property (nonatomic, getter=isNavigationModeHorizontal) BOOL navigationModeHorizontal; // ivar: _navigationModeHorizontal
@property BOOL needToPerformDocumentClosedTeardown; // ivar: _needToPerformDocumentClosedTeardown
@property BOOL needToPerformFullTeardown; // ivar: _needToPerformFullTeardown
@property (nonatomic) BOOL needsToolPickerVisibleWhenAnnotationControllerIsAvailable; // ivar: _needsToolPickerVisibleWhenAnnotationControllerIsAvailable
@property (getter=isObservingAKCurrentPageIndex) BOOL observingAKCurrentPageIndex; // ivar: _observingAKCurrentPageIndex
@property (copy, nonatomic) NSString *originalImageDescription; // ivar: _originalImageDescription
@property (readonly, nonatomic) UTType *outputContentType;
@property (readonly, nonatomic) NSString *outputType;
@property (readonly, weak) UIView *pageLabelView;
@property (readonly) PDFDocument *pdfDocument;
@property (readonly) PDFView *pdfView;
@property (nonatomic) BOOL pencilAlwaysDraws; // ivar: _pencilAlwaysDraws
@property (retain) UIImage *placeholderImage; // ivar: _placeholderImage
@property (retain) UIImageView *placeholderImageView; // ivar: _placeholderImageView
@property (copy, nonatomic) NSString *preferredFileDisplayName; // ivar: _preferredFileDisplayName
@property (nonatomic, getter=isShapeDetectionEnabled) BOOL shapeDetectionEnabled; // ivar: _shapeDetectionEnabled
@property BOOL showAsFormSheet; // ivar: _showAsFormSheet
@property (nonatomic) BOOL showShareButtonInToolbar; // ivar: _showShareButtonInToolbar
@property (nonatomic) BOOL showThumbnailViewForMultipage; // ivar: _showThumbnailViewForMultipage
@property (retain, nonatomic) id *sourceContent; // ivar: _sourceContent
@property (retain) NSString *sourceContentType; // ivar: _sourceContentType
@property (readonly) Class superclass;
@property (nonatomic, getter=isThumbnailViewHidden) BOOL thumbnailViewHidden; // ivar: _thumbnailViewHidden
@property (nonatomic) NSInteger thumbnailViewStyle;
@property (retain, nonatomic) UIView *toolbar; // ivar: _toolbar
@property (retain) NSLayoutConstraint *toolbarBottomConstraint; // ivar: _toolbarBottomConstraint
@property (nonatomic, getter=isToolbarHidden) BOOL toolbarHidden; // ivar: _toolbarHidden
@property (copy) UIColor *toolbarItemTintColor;
@property (nonatomic) NSInteger toolbarPosition; // ivar: _toolbarPosition
@property (copy) UIColor *toolbarTintColor;
@property (retain) NSLayoutConstraint *toolbarTopAttachedConstraint; // ivar: _toolbarTopAttachedConstraint
@property (retain) NSLayoutConstraint *toolbarTopConstraint; // ivar: _toolbarTopConstraint
@property (retain) UIView *transitionDimmingView; // ivar: _transitionDimmingView
@property BOOL useFancyTransition; // ivar: _useFancyTransition
@property BOOL userDidCancel; // ivar: _userDidCancel
@property (retain) UIView *whiteView; // ivar: _whiteView


+(BOOL)_isInLowMemoryEnvironment;
+(BOOL)hasPrivateImageMetadata:(id)arg0 ;
+(CGFloat)_maxImageDimensionInView;
+(id)cleanImageMetadataFromData:(id)arg0 ;
+(id)markupBarButtonItemWithTarget:(id)arg0 action:(SEL)arg1 ;
+(id)supportedOutputTypes;
-(BOOL)_canShowWhileLocked;
-(BOOL)_shouldShowUndoRedoButtonsInNavigationBar;
-(BOOL)_sourceImageMayContainBaseImageAndModel;
-(BOOL)_useLegacyToolbar;
-(BOOL)_writeToDataConsumer:(struct CGDataConsumer *)arg0 embedSourceImageAndEditModel:(BOOL)arg1 error:(*id)arg2 ;
-(BOOL)_writeToDataConsumer:(struct CGDataConsumer *)arg0 embedSourceImageAndEditModel:(BOOL)arg1 options:(id)arg2 error:(*id)arg3 ;
-(BOOL)canBecomeFirstResponder;
-(BOOL)canPerformAction:(SEL)arg0 withSender:(id)arg1 ;
-(BOOL)contentViewController:(id)arg0 shouldHandleURL:(id)arg1 ;
-(BOOL)isTouchInThumbnailView:(id)arg0 ;
-(BOOL)rulerHostWantsSharedRuler;
-(BOOL)writeToURL:(id)arg0 embeddingSourceImageAndEditModel:(BOOL)arg1 error:(*id)arg2 ;
-(BOOL)writeToURL:(id)arg0 embeddingSourceImageAndEditModel:(BOOL)arg1 options:(id)arg2 error:(*id)arg3 ;
-(BOOL)writeToURL:(id)arg0 error:(*id)arg1 ;
-(BOOL)writeToURL:(id)arg0 options:(id)arg1 error:(*id)arg2 ;
-(CGFloat)modelBaseScaleFactorOfPageAtIndex:(NSUInteger)arg0 forContentViewController:(id)arg1 ;
-(NSInteger)positionForBar:(id)arg0 ;
-(NSInteger)preferredStatusBarStyle;
-(NSInteger)toolbarController:(id)arg0 positionForBar:(id)arg1 ;
-(id)_effectiveBackgroundColor;
-(id)_effectiveNavBarTitleColor;
-(id)_effectiveToolbarItemTintColor;
-(id)_effectiveToolbarTintColor;
-(id)_markupBlackColor;
-(id)annotationControllerOfContentViewController:(id)arg0 willSetToolbarItems:(id)arg1 ;
-(id)createArchivedModelData;
-(id)dataRepresentationEmbeddingSourceImageAndEditModel:(BOOL)arg0 error:(*id)arg1 ;
-(id)dataRepresentationWithError:(*id)arg0 ;
-(id)filteredToolbarItemsForItems:(id)arg0 fromController:(id)arg1 ;
-(id)getMenuElementsForPage:(id)arg0 ;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithNibName:(id)arg0 bundle:(id)arg1 ;
-(id)popoverPresentingViewControllerForAnnotationController:(id)arg0 ;
-(id)rulerHostingView;
-(id)undoManager;
-(id)undoManagerForContentViewController:(id)arg0 ;
-(struct UIEdgeInsets )sketchOverlayInsets;
-(void)_bailFailedAnimateEnterMarkup;
-(void)_cancel;
-(void)_cleanupPlaceholderImage;
-(void)_commonInit;
-(void)_createCancelDoneNavBar;
-(void)_installContentViewControllerForUTI:(id)arg0 ;
-(void)_loadSourceContentWithCompletion:(id)arg0 ;
-(void)_presentPlaceholderImage;
-(void)_saveEditing:(id)arg0 ;
-(void)_setData:(id)arg0 withArchivedModelData:(id)arg1 withCompletion:(id)arg2 ;
-(void)_setFileURL:(id)arg0 withArchivedModelData:(id)arg1 withCompletion:(id)arg2 ;
-(void)_setLegacyToolbarHidden:(BOOL)arg0 animated:(BOOL)arg1 ;
-(void)_setupAnnotationController;
-(void)_setupInitialBaseModelScaleFactorWithScreenSize:(struct CGSize )arg0 windowDecorationSize:(struct CGSize )arg1 ;
-(void)_showTextStyleOptions:(id)arg0 ;
-(void)_startObservingAnnotationController;
-(void)_stopObservingAnnotationController;
-(void)_toolbarShareButtonTapped:(id)arg0 ;
-(void)_updateAndLoadSourceContent:(id)arg0 withArchivedModelData:(id)arg1 withCompletion:(id)arg2 ;
-(void)_updateAppearanceForTraitCollection:(id)arg0 ;
-(void)_updateConstraintsForBarPosition:(NSInteger)arg0 ;
-(void)_updateNavBarProperties;
-(void)_updateundoBarButtonWithController:(id)arg0 ;
-(void)adjustContentInsetsForBars;
-(void)annotationController:(id)arg0 detectedEditOfType:(NSUInteger)arg1 ;
-(void)cancel:(id)arg0 ;
-(void)controllerWillDismissSignatureCaptureView:(id)arg0 ;
-(void)controllerWillDismissSignatureManagerView:(id)arg0 ;
-(void)controllerWillShowSignatureCaptureView:(id)arg0 ;
-(void)controllerWillShowSignatureManagerView:(id)arg0 ;
-(void)dealloc;
-(void)delete:(id)arg0 ;
-(void)documentDidCloseTeardown;
-(void)done:(id)arg0 ;
-(void)duplicate:(id)arg0 ;
-(void)editCheckpointReachedForAnnotationController:(id)arg0 ;
-(void)editDetectedForAnnotationController:(id)arg0 ;
-(void)editTextAnnotation:(id)arg0 ;
-(void)finalizeCrop;
-(void)fullTeardown;
-(void)motionEnded:(NSInteger)arg0 withEvent:(id)arg1 ;
-(void)observeValueForKeyPath:(id)arg0 ofObject:(id)arg1 change:(id)arg2 context:(*void)arg3 ;
-(void)penStrokeCompletedForAnnotationController:(id)arg0 ;
-(void)positionSketchOverlay:(id)arg0 forContentViewController:(id)arg1 ;
-(void)restoreToolModeForContentType;
-(void)revert;
-(void)setData:(id)arg0 ;
-(void)setData:(id)arg0 withArchivedModelData:(id)arg1 ;
-(void)setData:(id)arg0 withArchivedModelData:(id)arg1 placeholderImage:(id)arg2 ;
-(void)setFileURL:(id)arg0 ;
-(void)setFileURL:(id)arg0 withArchivedModelData:(id)arg1 ;
-(void)setFileURL:(id)arg0 withArchivedModelData:(id)arg1 placeholderImage:(id)arg2 ;
-(void)setImage:(id)arg0 ;
-(void)setImage:(id)arg0 withArchivedModelData:(id)arg1 ;
-(void)setImage:(id)arg0 withArchivedModelData:(id)arg1 placeholderImage:(id)arg2 ;
-(void)traitCollectionDidChange:(id)arg0 ;
-(void)viewDidAppear:(BOOL)arg0 ;
-(void)viewDidLayoutSubviews;
-(void)viewDidLoad;
-(void)viewWillAppear:(BOOL)arg0 ;
-(void)viewWillLayoutSubviews;
-(void)willBeginLoadingNewDocument;


@end


#endif