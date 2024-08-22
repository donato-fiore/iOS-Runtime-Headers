// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef QLPREVIEWCONTROLLER_H
#define QLPREVIEWCONTROLLER_H

@class UIViewController, NSMutableArray, NSString, NSDate, NSUserActivity, NSURL, NSArray, UIColor, UIAlertController, QLItem, UINavigationController, UIPinchGestureRecognizer, UIViewController<QLPreviewCollectionProtocol>, NSMutableDictionary, UIRotationGestureRecognizer, UIDocumentInteractionController, UIPanGestureRecognizer, QLStateManager;
@protocol UIScreenshotServiceDelegate, UIDocumentPickerDelegate, UIDocumentInteractionControllerDelegate, UIGestureRecognizerDelegate, QLPreviewItemStoreDelegate, QLPreviewItemProvider, QLPreviewControllerStateProtocolHostOnly, UIPageViewControllerDelegate, UIViewControllerTransitioningDelegate, UINavigationControllerDelegate, UIGestureRecognizerDelegate, UIScrollViewDelegate, QLPreviewItem, QLPreviewControllerDataSource, QLPreviewControllerDelegate, QLPrintingProtocol, QLRemotePopoverTracker;


#import "QLBarButtonItem.h"
#import "QLErrorView.h"
#import "QLTransitionController.h"
#import "QLActivityItemProvider.h"
#import "QLCustomURLSharingProxyDelegate.h"
#import "QLPinchRotationTracker.h"
#import "QLPreviewItemStore.h"
#import "QLNavigationState.h"
#import "QLSwipeDownTracker.h"
#import "QLToolbarController.h"

@interface QLPreviewController : UIViewController <UIScreenshotServiceDelegate, UIDocumentPickerDelegate, UIDocumentInteractionControllerDelegate, UIGestureRecognizerDelegate, QLPreviewItemStoreDelegate, QLPreviewItemProvider, QLPreviewControllerStateProtocolHostOnly, UIPageViewControllerDelegate, UIViewControllerTransitioningDelegate, UINavigationControllerDelegate, UIGestureRecognizerDelegate, UIScrollViewDelegate>

 {
    QLBarButtonItem *_doneButton;
    QLBarButtonItem *_actionButton;
    QLBarButtonItem *_listButton;
    BOOL _previewCollectionNeedsConfiguration;
    BOOL _previewCollectionIsLoading;
    BOOL _changingCurrentPreview;
    NSMutableArray *_previewCollectionReadyCompletionBlocks;
    NSString *_loadingTextForMissingFiles;
    NSInteger _whitePointAdaptivityStyle;
    NSInteger _enqueuedWhitePointAdaptivityStyle;
    QLErrorView *_noDataView;
    BOOL _deferReloadData;
    NSInteger _deferredSetIndex;
    NSDate *_lastCrashTimeStamp;
    NSUInteger _numberOfRetries;
    BOOL _viewWillAppearPerformed;
    UIViewController *_modalRootViewController;
    NSUserActivity *_userActivity;
}


@property (retain, nonatomic) NSURL *accessedUrlForSharingController; // ivar: _accessedUrlForSharingController
@property (retain, nonatomic) NSArray *additionalLeftBarButtonItems; // ivar: _additionalLeftBarButtonItems
@property (retain, nonatomic) NSArray *additionalRightBarButtonItems; // ivar: _additionalRightBarButtonItems
@property (nonatomic) BOOL allowInteractiveTransitions; // ivar: _allowInteractiveTransitions
@property (nonatomic) BOOL alwaysDisplayPreviewItemTitle; // ivar: _alwaysDisplayPreviewItemTitle
@property (nonatomic) NSUInteger appearanceActions; // ivar: _appearanceActions
@property (retain, nonatomic) UIColor *backgroundColor; // ivar: _backgroundColor
@property (nonatomic) BOOL canChangeCurrentPage; // ivar: _canChangeCurrentPage
@property BOOL canShowNavBar; // ivar: _canShowNavBar
@property BOOL canShowToolbar; // ivar: _canShowToolbar
@property (retain) QLTransitionController *currentAnimator; // ivar: _currentAnimator
@property (retain) QLActivityItemProvider *currentItemProvider; // ivar: _currentItemProvider
@property (nonatomic) BOOL currentPreviewHasRemoteUnsavedEdits; // ivar: _currentPreviewHasRemoteUnsavedEdits
@property (readonly) NSObject<QLPreviewItem> *currentPreviewItem;
@property NSInteger currentPreviewItemIndex; // ivar: _currentPreviewItemIndex
@property (retain) NSString *currentTitleFromItemViewController; // ivar: _currentTitleFromItemViewController
@property (retain, nonatomic) QLCustomURLSharingProxyDelegate *customURLSharingProxyDelegate; // ivar: _customURLSharingProxyDelegate
@property (weak, nonatomic) NSObject<QLPreviewControllerDataSource> *dataSource; // ivar: _dataSource
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<QLPreviewControllerDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *description;
@property (nonatomic) BOOL didTransitionFromInternalView; // ivar: _didTransitionFromInternalView
@property (weak, nonatomic) UIAlertController *doneButtonAlertController; // ivar: _doneButtonAlertController
@property (readonly) NSArray *excludedToolbarButtonIdentifiers; // ivar: _excludedToolbarButtonIdentifiers
@property (nonatomic) BOOL forceDismissActionsPresentation; // ivar: _forceDismissActionsPresentation
@property (nonatomic) BOOL forceModalPresentation; // ivar: _forceModalPresentation
@property (nonatomic) NSUInteger forcedSupportedInterfaceOrientations; // ivar: _forcedSupportedInterfaceOrientations
@property (nonatomic) BOOL fullScreen; // ivar: _fullScreen
@property (retain, nonatomic) UIColor *fullscreenBackgroundColor; // ivar: _fullscreenBackgroundColor
@property (readonly) NSUInteger hash;
@property (readonly) NSUInteger hash;
@property (readonly) NSUInteger hash;
@property (readonly) NSUInteger hash;
@property (readonly) NSUInteger hash;
@property (readonly) QLItem *internalCurrentPreviewItem;
@property (retain, nonatomic) UINavigationController *internalNavigationController; // ivar: _internalNavigationController
@property (nonatomic) BOOL isContentManaged; // ivar: _isContentManaged
@property (nonatomic) BOOL isInteractivePopEnabled; // ivar: _isInteractivePopEnabled
@property (nonatomic) BOOL isObtainingEditsFromServiceBeforeDismissing; // ivar: _isObtainingEditsFromServiceBeforeDismissing
@property (readonly, nonatomic) BOOL isTopPreviewController;
@property (retain, nonatomic) UIColor *navigationBarTintColor; // ivar: _navigationBarTintColor
@property (readonly) NSInteger numberOfPreviewItems;
@property (retain) NSArray *originalLeftBarButtonItems; // ivar: _originalLeftBarButtonItems
@property (retain) NSArray *originalRightBarButtonItems; // ivar: _originalRightBarButtonItems
@property (nonatomic) BOOL overlayHidden; // ivar: _overlayHidden
@property (copy, nonatomic) NSString *overrideParentApplicationDisplayIdentifier; // ivar: _overrideParentApplicationDisplayIdentifier
@property (copy, nonatomic) NSString *personaUniqueString; // ivar: _personaUniqueString
@property (retain) UIPinchGestureRecognizer *pinchGesture; // ivar: _pinchGesture
@property (retain) QLPinchRotationTracker *pinchRotationTracker; // ivar: _pinchRotationTracker
@property (readonly, nonatomic) NSUInteger presentationMode; // ivar: _presentationMode
@property NSUInteger presentationStyle; // ivar: _presentationStyle
@property (readonly) UIViewController<QLPreviewCollectionProtocol> *previewCollection; // ivar: _previewCollection
@property (readonly) QLPreviewItemStore *previewItemStore; // ivar: _previewItemStore
@property (retain, nonatomic) NSMutableDictionary *previewKeyCommands; // ivar: _previewKeyCommands
@property (readonly) NSArray *previewToolbarButtons; // ivar: _previewToolbarButtons
@property (readonly) QLNavigationState *previousNavigationVCState; // ivar: _previousNavigationVCState
@property (nonatomic) BOOL previousStatusBarHidden; // ivar: _previousStatusBarHidden
@property (readonly) NSObject<QLPrintingProtocol> *printer; // ivar: _printer
@property (nonatomic) NSUInteger quickLookVisibility; // ivar: _quickLookVisibility
@property (retain) UIRotationGestureRecognizer *rotationGesture; // ivar: _rotationGesture
@property (copy, nonatomic) id *shareSheetDismissCompletion; // ivar: _shareSheetDismissCompletion
@property (retain, nonatomic) NSObject<QLRemotePopoverTracker> *shareSheetPopoverTracker; // ivar: _shareSheetPopoverTracker
@property (retain) UIDocumentInteractionController *sharingInteractionController; // ivar: _sharingInteractionController
@property (nonatomic) BOOL showActionAsDefaultButton; // ivar: _showActionAsDefaultButton
@property (retain) UIPanGestureRecognizer *slideGesture; // ivar: _slideGesture
@property (retain) QLStateManager *stateManager; // ivar: _stateManager
@property (retain, nonatomic) NSObject<QLPreviewControllerDelegate> *strongDelegate; // ivar: _strongDelegate
@property (readonly) Class superclass;
@property (readonly) Class superclass;
@property (readonly) Class superclass;
@property (readonly) Class superclass;
@property (readonly) Class superclass;
@property (retain) QLSwipeDownTracker *swipeDownTracker; // ivar: _swipeDownTracker
@property (readonly, nonatomic) QLToolbarController *toolbarController; // ivar: _toolbarController
@property (retain, nonatomic) UIColor *toolbarTintColor; // ivar: _toolbarTintColor
@property (nonatomic) BOOL useCustomActionButton; // ivar: _useCustomActionButton
@property (nonatomic) BOOL willTransitionToInternalView; // ivar: _willTransitionToInternalView


+(BOOL)canPreviewDocumentType:(id)arg0 ;
+(BOOL)canPreviewItem:(id)arg0 ;
+(BOOL)canPreviewMIMEType:(id)arg0 ;
+(BOOL)copyPreviewItemToPasteboard:(id)arg0 ;
+(id)contentTypeForPreviewItem:(id)arg0 ;
+(id)controllerWithItemStore:(id)arg0 ;
+(id)printPageRendererForItem:(id)arg0 ;
+(id)titleForPreviewItem:(id)arg0 ;
+(void)logDeprecatedMessageForMethodName:(id)arg0 ;
+(void)logDeprecatedMessageForSelector:(SEL)arg0 ;
+(void)presentPreviewItem:(id)arg0 onViewController:(id)arg1 withDelegate:(id)arg2 animated:(BOOL)arg3 ;
-(BOOL)_adoptPersona:(id)arg0 andPerformBlock:(id)arg1 ;
-(BOOL)_barButtonItemArray:(id)arg0 isEqualToArray:(id)arg1 ;
-(BOOL)_basePreviewControllerIsBeingFullyDismissed;
-(BOOL)_canDisplayOpenInButtonForItem:(id)arg0 ;
-(BOOL)_canPerformBarButtonAction;
-(BOOL)_displayDismissActionsForEditedPreviewItemsIfNeeded:(id)arg0 fromBarButtonItem:(id)arg1 ;
-(BOOL)_isBeingFullyDismissed;
-(BOOL)_isInPickMode;
-(BOOL)_isQuickLookVisible;
-(BOOL)_isToolbarVisibleForTraitCollection:(id)arg0 ;
-(BOOL)_needsListButton;
-(BOOL)_quickLookWillBecomeVisible;
-(BOOL)_shouldAllowInteractiveTransitions;
-(BOOL)_shouldDisplayOpenInInChromeIfAvailable;
-(BOOL)_topViewControllerBelongsToHierarchy:(id)arg0 ;
-(BOOL)accessibilityPerformEscape;
-(BOOL)canPerformAction:(SEL)arg0 withSender:(id)arg1 ;
-(BOOL)canPerformExportForItem:(id)arg0 atURL:(id)arg1 ;
-(BOOL)canPerformPrintForItem:(id)arg0 atURL:(id)arg1 ;
-(BOOL)canPerformPrintForItem:(id)arg0 customPrinter:(*id)arg1 shouldUseDefaultPrinter:(*BOOL)arg2 ;
-(BOOL)currentPreviewHasUnsavedEdits;
-(BOOL)hasEditedItems;
-(BOOL)hasItemsToPreview;
-(BOOL)itemStore:(id)arg0 canEditItem:(id)arg1 ;
-(BOOL)itemStore:(id)arg0 canHandleEditedCopyOfPreviewItem:(id)arg1 ;
-(BOOL)itemStore:(id)arg0 canShareItem:(id)arg1 ;
-(BOOL)parentIsNavigationController;
-(BOOL)prefersHomeIndicatorAutoHidden;
-(BOOL)prefersStatusBarHidden;
-(BOOL)sourceIsManaged;
-(NSInteger)_preferredModalPresentationStyle;
-(NSInteger)_preferredWhitePointAdaptivityStyle;
-(NSInteger)itemStore:(id)arg0 editingModeForPreviewItem:(id)arg1 ;
-(NSInteger)preferredStatusBarUpdateAnimation;
-(NSUInteger)_computePresentationMode;
-(NSUInteger)_numberOfButtonsExcludingSpacersInButtons:(id)arg0 disappearingOnTap:(BOOL)arg1 ;
-(NSUInteger)currentOrbMode;
-(NSUInteger)itemStore:(id)arg0 editedFileBehaviorForItem:(id)arg1 ;
-(NSUInteger)supportedInterfaceOrientations;
-(id)_actionButton;
-(id)_additionalLeftButtonItems;
-(id)_additionalRightButtonItems;
-(id)_buttonWithAccessibilityIdentifierPointer:(id)arg0 inButtons:(id)arg1 ;
-(id)_childViewControllerForWhitePointAdaptivityStyle;
-(id)_copyBarButtons:(id)arg0 ;
-(id)_displayedButtonWithAccessibilityIdentifier:(id)arg0 ;
-(id)_doneButton;
-(id)_editedItemsForDoneActionControllerWithItems:(id)arg0 ;
-(id)_listButton;
-(id)_navigationBarLeftButtonsWithTraitCollection:(id)arg0 ;
-(id)_navigationBarRightButtonsWithTraitCollection:(id)arg0 ;
-(id)_openInButton;
-(id)_openInTitleForOpenInType:(NSUInteger)arg0 claimBinding:(id)arg1 ;
-(id)_preferredBackgroundColor;
-(id)_toolBarButtonsWithTraitCollection:(id)arg0 ;
-(id)_topNavigationItem;
-(id)_topPreviewController;
-(id)_topViewController;
-(id)activityControllerForURL:(id)arg0 ;
-(id)activityItemForDocumentInteractionController:(id)arg0 ;
-(id)activityItemsConfiguration;
-(id)additionalActivitiesForDocumentInteractionController:(id)arg0 ;
-(id)animationControllerForDismissedController:(id)arg0 ;
-(id)animationControllerForPresentedController:(id)arg0 presentingController:(id)arg1 sourceController:(id)arg2 ;
-(id)animatorForShowing:(BOOL)arg0 previewController:(id)arg1 presentingController:(id)arg2 ;
-(id)childViewControllerForStatusBarHidden;
-(id)currentItem;
-(id)currentTracker;
-(id)editedItems;
-(id)excludedActivityTypesForCurrentPreviewItem;
-(id)excludedActivityTypesForDocumentInteractionController:(id)arg0 ;
-(id)flexibleSpace;
-(id)initWithNibName:(id)arg0 bundle:(id)arg1 ;
-(id)initWithPreviewItems:(id)arg0 ;
-(id)interactionControllerForDismissal:(id)arg0 ;
-(id)interactionControllerForPresentation:(id)arg0 ;
-(id)itemProviderForItem:(id)arg0 shareableURL:(id)arg1 ;
-(id)keyCommands;
-(id)lockPDFActionForItem:(id)arg0 atURL:(id)arg1 ;
-(id)previewItemAtIndex:(NSInteger)arg0 ;
-(id)previewItemDisplayStateForItem:(id)arg0 ;
-(id)printActionForItem:(id)arg0 atURL:(id)arg1 ;
-(id)printInfoForDocumentInteractionController:(id)arg0 ;
-(id)saveToFilesActionForItem:(id)arg0 atURL:(id)arg1 ;
-(id)saveToPhotosActionForItem:(id)arg0 atURL:(id)arg1 ;
-(id)titleMenuElementsForItem:(id)arg0 atURL:(id)arg1 withSuggestedActions:(id)arg2 ;
-(id)userActivity;
-(id)viewForAdditionalButtonWithActionName:(SEL)arg0 ;
-(int)mode;
-(struct CGRect )frameForAdditionalButtonWithActionName:(SEL)arg0 ;
-(void)_actionButtonTapped:(id)arg0 ;
-(void)_asynchronouslyUpdateContentsOfPreviewItem:(id)arg0 editedCopy:(id)arg1 completionHandler:(id)arg2 ;
-(void)_configurePreviewCollectionIfNeeded;
-(void)_copyToButtonTapped:(id)arg0 ;
-(void)_didEditCopyOfPreviewItemAtIndex:(NSUInteger)arg0 editedCopy:(id)arg1 synchronously:(BOOL)arg2 completionHandler:(id)arg3 ;
-(void)_didObtainEditsFromService;
-(void)_dismissQuickLookFromKeyboardCommand;
-(void)_doneButtonTapped:(id)arg0 ;
-(void)_handleEditedPreviewItem:(id)arg0 editedCopy:(id)arg1 synchronously:(BOOL)arg2 completionHandler:(id)arg3 ;
-(void)_invalidatePreviewCollectionIfNeeded;
-(void)_invalidatePreviewCollectionIfNeededNow;
-(void)_keyCommandWasPerformed:(id)arg0 ;
-(void)_listButtonTapped:(id)arg0 ;
-(void)_nextPreview;
-(void)_notifyFirstAppearanceIfNeeded;
-(void)_notifyPreviewCollectionOfDoneButtonTapWithSender:(id)arg0 ;
-(void)_obtainEditsFromServiceAndNotifyPreviewCollectionOfDoneButtonTappedWithSender:(id)arg0 ;
-(void)_openInButtonTapped:(id)arg0 ;
-(void)_performOpenInWithFileURL:(id)arg0 claimBinding:(id)arg1 additionalLaunchServicesOptions:(id)arg2 completion:(id)arg3 ;
-(void)_performQuickLookDismissalAnimated:(BOOL)arg0 ;
-(void)_prepareDelayedAppearance;
-(void)_presentLoadedPreviewCollection:(id)arg0 ;
-(void)_presentPreviewCollection;
-(void)_previousPreview;
-(void)_printDocument:(id)arg0 ;
-(void)_promptUserAndOpenURLIfNeeded:(id)arg0 ;
-(void)_refreshCurrentPreviewItemAnimated:(BOOL)arg0 ;
-(void)_registerForApplicationStateChangesNotifications;
-(void)_reloadDataIfNeeded;
-(void)_removePreviewCollectionFromViewHierarchy;
-(void)_savePreviousNavigationVCState;
-(void)_setPreferredWhitePointAdaptivityStyle:(NSInteger)arg0 ;
-(void)_setupDocumentInteractionControllerForPresentation:(id)arg0 ;
-(void)_setupDocumentInteractionControllerForPresentationWithURL:(id)arg0 isCustomURL:(BOOL)arg1 completionHandler:(id)arg2 ;
-(void)_showPreviewCollection;
-(void)_showShareSheetFromBarButton:(id)arg0 ;
-(void)_stopAccessingUrlForSharingController;
-(void)_synchronouslyUpdateContentsOfPreviewItem:(id)arg0 editedCopy:(id)arg1 completionHandler:(id)arg2 ;
-(void)_toolbarButtonPressed:(id)arg0 ;
-(void)_triggerOverlayUpdateAfterDelay;
-(void)_unregisterForApplicationStateChangesNotifications;
-(void)_updateAllowInteractiveTransitionsIfNeeded;
-(void)_updateAppearance:(BOOL)arg0 ;
-(void)_updateBackgroundColor;
-(void)_updateBarTintColors;
-(void)_updateCurrentPopoverButtonIfNeeded:(id)arg0 newNavigationLeftButtons:(id)arg1 ;
-(void)_updateNavigationBarBehaviorStyle;
-(void)_updateOverlayButtonsForTraitCollection:(id)arg0 animated:(BOOL)arg1 ;
-(void)_updateOverlayButtonsIfNeededWithTraitCollection:(id)arg0 animated:(BOOL)arg1 updatedToolbarButtons:(*id)arg2 ;
-(void)_updatePreviewItem:(id)arg0 editedCopy:(id)arg1 completionHandler:(id)arg2 ;
-(void)_updateToolbarSuperview;
-(void)_updateViewHierarchyPresentation;
-(void)_willStartObtainingEditsFromService;
-(void)applicationDidBecomeActive:(id)arg0 ;
-(void)applicationDidEnterBackground:(id)arg0 ;
-(void)applyPreviewItemDisplayState:(id)arg0 toItem:(id)arg1 ;
-(void)beginInteractiveTransition;
-(void)createDocumentPropertiesWithItem:(id)arg0 shareableURL:(id)arg1 ;
-(void)currentPreviewItemViewControllerHasUnsavedEdits:(BOOL)arg0 ;
-(void)dealloc;
-(void)didEditCopyOfPreviewItemAtIndex:(NSUInteger)arg0 editedCopy:(id)arg1 ;
-(void)didEditCopyOfPreviewItemAtIndex:(NSUInteger)arg0 editedCopy:(id)arg1 completionHandler:(id)arg2 ;
-(void)didSelectPreviewItem:(id)arg0 ;
-(void)dismissQuickLook;
-(void)documentInteractionControllerDidDismissOptionsMenu:(id)arg0 ;
-(void)documentPicker:(id)arg0 didPickDocumentsAtURLs:(id)arg1 ;
-(void)documentPickerWasCancelled:(id)arg0 ;
-(void)expandContentOfItemAtIndex:(NSUInteger)arg0 withUUID:(id)arg1 unarchivedItemsURLWrapper:(id)arg2 ;
-(void)export:(id)arg0 ;
-(void)exportItem:(id)arg0 atURL:(id)arg1 ;
-(void)forwardMessage:(id)arg0 toItemAtIndex:(NSUInteger)arg1 withUUID:(id)arg2 completionHandler:(id)arg3 ;
-(void)getStateRestorationUserInfo:(id)arg0 ;
-(void)handleShortcutsActionOutputFile:(id)arg0 forAction:(id)arg1 ;
-(void)hideNoDataView;
-(void)loadView;
-(void)navigationController:(id)arg0 willShowViewController:(id)arg1 animated:(BOOL)arg2 ;
-(void)obtainAndUpdateEditedCopyOfCurrentPreviewItem:(id)arg0 ;
-(void)openURLIfAllowed:(id)arg0 ;
-(void)prepareForActionSheetPresentationWithCompletionHandler:(id)arg0 ;
-(void)presentAlertControllerForScenario:(NSInteger)arg0 ;
-(void)presentError:(id)arg0 forAction:(id)arg1 ;
-(void)presentPreviewItem:(id)arg0 onViewController:(id)arg1 withDelegate:(id)arg2 animated:(BOOL)arg3 ;
-(void)presentSaveToFilesForEditedItems:(id)arg0 ;
-(void)presentSaveToPhotoError:(id)arg0 forItem:(id)arg1 ;
-(void)previewCollectionPrefersWhitePointAdaptivityStyle:(NSInteger)arg0 ;
-(void)previewCollectionUpdatePreviewItem:(NSInteger)arg0 ;
-(void)previewItemAtIndex:(NSUInteger)arg0 wasUpdatedWithLifecycleState:(NSInteger)arg1 withError:(id)arg2 ;
-(void)previewItemAtIndex:(NSUInteger)arg0 withCompletionHandler:(id)arg1 ;
-(void)print:(id)arg0 ;
-(void)printItem:(id)arg0 atURL:(id)arg1 ;
-(void)printItemAtURL:(id)arg0 withCustomPrinter:(id)arg1 shouldUseDefaultPrinter:(BOOL)arg2 ;
-(void)refreshCurrentPreviewItem;
-(void)registerForScreenshotService;
-(void)reloadData;
-(void)remoteViewControllerWasInvalidated;
-(void)saveEditsIfNecessary:(id)arg0 ;
-(void)sceneWillDeactivate:(id)arg0 ;
-(void)screenshotService:(id)arg0 generatePDFRepresentationWithCompletion:(id)arg1 ;
-(void)setAccessoryViewVisible:(BOOL)arg0 ;
-(void)setCurrentOrbMode:(NSUInteger)arg0 ;
-(void)setLoadingTextForMissingFiles:(id)arg0 ;
-(void)setNavBarCanBeVisible:(BOOL)arg0 ;
-(void)setPreviewItemDisplayState:(id)arg0 onItemAtIndex:(NSUInteger)arg1 ;
-(void)setScreenEdgePanWidth:(CGFloat)arg0 ;
-(void)setToolbarCanBeVisible:(BOOL)arg0 ;
-(void)setUserActivity:(id)arg0 ;
-(void)shareSheetDidDismiss;
-(void)shareableURLForCurrentPreviewItem:(id)arg0 ;
-(void)showNoDataViewIfNeeded;
-(void)showShareSheet;
-(void)showShareSheetFromBarButton:(id)arg0 ;
-(void)showShareSheetFromRemoteViewWithPopoverTracker:(id)arg0 customSharedURL:(id)arg1 dismissCompletion:(id)arg2 ;
-(void)showShareSheetWithPopoverTracker:(id)arg0 customSharedURL:(id)arg1 dismissCompletion:(id)arg2 ;
-(void)traitCollectionDidChange:(id)arg0 ;
-(void)triggerQuickLookDismissal;
-(void)unregisterFromScreenshotService;
-(void)updateDocumentPropertiesActivityProviderWithShareableURL:(id)arg0 ;
-(void)updateDocumentPropertiesDragItemsProviderWithItem:(id)arg0 shareableURL:(id)arg1 ;
-(void)updateDocumentPropertiesMetadataForItem:(id)arg0 withShareableURL:(id)arg1 ;
-(void)updateKeyCommands;
-(void)updateNavigationTitle;
-(void)updateOverlayAnimated:(BOOL)arg0 animatedButtons:(BOOL)arg1 forceRefresh:(BOOL)arg2 withTraitCollection:(id)arg3 ;
-(void)updateOverlayAnimated:(BOOL)arg0 forceRefresh:(BOOL)arg1 ;
-(void)updateOverlayAnimated:(BOOL)arg0 forceRefresh:(BOOL)arg1 withTraitCollection:(id)arg2 ;
-(void)updateOverlayButtons:(BOOL)arg0 ;
-(void)updatePreferredContentSize:(struct CGSize )arg0 ;
-(void)updatePreviewItemAtIndex:(NSUInteger)arg0 editedCopy:(id)arg1 completionHandler:(id)arg2 ;
-(void)updateRemoteOverlayIfNeeded;
-(void)updateStateRestorationWithUserInfo:(id)arg0 ;
-(void)updateStatusBarAnimated:(BOOL)arg0 ;
-(void)updateTitle:(id)arg0 ;
-(void)updateTitleMenuAndDocumentProperties;
-(void)updateTitleMenuWithItem:(id)arg0 ;
-(void)viewDidAppear:(BOOL)arg0 ;
-(void)viewDidDisappear:(BOOL)arg0 ;
-(void)viewDidLoad;
-(void)viewWillAppear:(BOOL)arg0 ;
-(void)viewWillDisappear:(BOOL)arg0 ;
-(void)viewWillTransitionToSize:(struct CGSize )arg0 withTransitionCoordinator:(id)arg1 ;
-(void)waitForPreviewCollectionWithCompletionHandler:(id)arg0 ;
-(void)willMoveToParentViewController:(id)arg0 ;
-(void)willTransitionToTraitCollection:(id)arg0 withTransitionCoordinator:(id)arg1 ;


@end


#endif