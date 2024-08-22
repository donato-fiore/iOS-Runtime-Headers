// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef QLPREVIEWCOLLECTION_H
#define QLPREVIEWCOLLECTION_H

@class UIViewController, UIView, UITapGestureRecognizer, UIPanGestureRecognizer, UISwipeGestureRecognizer, NSString, UIPinchGestureRecognizer, UIRotationGestureRecognizer;
@protocol QLTransitionControllerProtocol, QLPageViewControllerDataSource, QLPageViewControllerDelegate, QLPreviewItemViewControllerDelegate, QLItemPresenterViewControllerDelegate, UIGestureRecognizerDelegatePrivate, QLPreviewCollectionProtocol, QLPreviewControllerStateProtocol;


#import "QLPreviewItemStore.h"
#import "QLAppearance.h"
#import "QLItemViewController.h"
#import "QLPageViewController.h"
#import "QLPinchRotationTracker.h"
#import "QLSwipeDownTracker.h"
#import "QLTransitionContext.h"
#import "QLTransitionDriver.h"

@interface QLPreviewCollection : UIViewController <QLTransitionControllerProtocol, QLPageViewControllerDataSource, QLPageViewControllerDelegate, QLPreviewItemViewControllerDelegate, QLItemPresenterViewControllerDelegate, UIGestureRecognizerDelegatePrivate, QLPreviewCollectionProtocol>

 {
    _NSRange _previewItemRange;
    NSInteger _currentItemIndex;
    QLPreviewItemStore *_itemStore;
    UIView *_localAccessoryViewContainer;
    UIView *_remoteAccessoryViewContainer;
    UITapGestureRecognizer *_tapGesture;
    UIPanGestureRecognizer *_verticalPanGesture;
    UISwipeGestureRecognizer *_pageSwipeGesture;
    UIPanGestureRecognizer *_pagePanGesture;
    QLAppearance *_appearance;
    NSString *_loadingString;
    NSUInteger _visibilityState;
    BOOL _previewCollectionIsPartOfViewHierarchy;
    NSUInteger _appearanceActions;
}


@property (nonatomic) BOOL allowInteractiveTransitions; // ivar: _allowInteractiveTransitions
@property (nonatomic) BOOL currentItemViewControllerIsPerformingFocusedAction; // ivar: _currentItemViewControllerIsPerformingFocusedAction
@property (readonly) QLItemViewController *currentPreviewItemViewController;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic) BOOL fullScreen; // ivar: _fullScreen
@property BOOL hasTriggeredInteractiveTransitionAnimation; // ivar: _hasTriggeredInteractiveTransitionAnimation
@property (readonly) NSUInteger hash;
@property (copy, nonatomic) NSString *hostApplicationBundleIdentifier; // ivar: _hostApplicationBundleIdentifier
@property (nonatomic) BOOL isAvailable; // ivar: _isAvailable
@property (nonatomic) BOOL isEditing; // ivar: _isEditing
@property (nonatomic) BOOL isTransitioningPage; // ivar: _isTransitioningPage
@property (copy, nonatomic) NSString *overrideParentApplicationDisplayIdentifier; // ivar: _overrideParentApplicationDisplayIdentifier
@property (retain) QLPageViewController *pageViewController; // ivar: _pageViewController
@property (readonly, nonatomic) NSString *parentApplicationDisplayIdentifier;
@property (retain) UIPinchGestureRecognizer *pinchGesture; // ivar: _pinchGesture
@property (retain) QLPinchRotationTracker *pinchRotationTracker; // ivar: _pinchRotationTracker
@property (copy, nonatomic) id *prepareForInvalidationCompletionHandler; // ivar: _prepareForInvalidationCompletionHandler
@property (retain) UIRotationGestureRecognizer *rotationGesture; // ivar: _rotationGesture
@property (retain) UIPanGestureRecognizer *slideGesture; // ivar: _slideGesture
@property (retain) NSObject<QLPreviewControllerStateProtocol> *stateManager; // ivar: _stateManager
@property (readonly) Class superclass;
@property (retain) QLSwipeDownTracker *swipeDownTracker; // ivar: _swipeDownTracker
@property (retain) QLTransitionContext *transitionContext; // ivar: _transitionContext
@property (retain) NSObject<QLTransitionControllerProtocol> *transitionController; // ivar: _transitionController
@property (retain) QLTransitionDriver *transitionDriver; // ivar: _transitionDriver


+(id)quickLookExtension;
+(void)previewCollectionUsingRemoteViewController:(BOOL)arg0 completionHandler:(id)arg1 ;
+(void)remotePreviewCollectionWithCompletionHandler:(id)arg0 ;
-(BOOL)_isBeingDismissed;
-(BOOL)_isBeingPresented;
-(BOOL)_isVisible;
-(BOOL)_itemViewControllerIsCurrentlyPresentedItemViewController:(id)arg0 ;
-(BOOL)_toggleFullscreenIfPossible;
-(BOOL)gestureRecognizer:(id)arg0 shouldReceiveTouch:(id)arg1 ;
-(BOOL)gestureRecognizer:(id)arg0 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)arg1 ;
-(BOOL)gestureRecognizer:(id)arg0 shouldRequireFailureOfGestureRecognizer:(id)arg1 ;
-(BOOL)gestureRecognizerShouldBegin:(id)arg0 ;
-(BOOL)isRemote;
-(BOOL)itemPresenterViewControllerShouldForceAutodownloadFile:(id)arg0 ;
-(BOOL)pinchDismissGestureInProgress;
-(BOOL)transitionInProgress;
-(NSInteger)dragDataOwnerForPreviewItemViewController:(id)arg0 ;
-(id)_defaultKeyCommands;
-(id)_sandboxExtensionForEditedFileAtURL:(id)arg0 ;
-(id)accessoryView;
-(id)gestureTracker;
-(id)init;
-(id)loadingTextForPreviewItemViewController:(id)arg0 ;
-(id)pageViewController:(id)arg0 parallaxViewInPage:(id)arg1 withIndex:(NSUInteger)arg2 ;
-(id)pageViewController:(id)arg0 viewControllerAtIndex:(NSUInteger)arg1 ;
-(void)_cleanAccessoryViewContainer;
-(void)_installGestures;
-(void)_notifyHostPreviewCollectionIsReadyForInvalidationIfNeeded;
-(void)_setCurrentPreviewItemIndex:(NSInteger)arg0 animated:(BOOL)arg1 ;
-(void)_setUpTransitionDriverForPresenting:(BOOL)arg0 duration:(CGFloat)arg1 ;
-(void)_tapGestureRecognized;
-(void)_tearDownTransition:(BOOL)arg0 ;
-(void)_updateAccessoryViewWithPreviewItemViewController:(id)arg0 ;
-(void)_updateCanChangeCurrentPage;
-(void)_updateEnableChangingPageUsingGestures;
-(void)_updateFullscreen;
-(void)_updateFullscreenBackgroundColor;
-(void)_updateOverlay:(BOOL)arg0 ;
-(void)_updateOverlayVisibility;
-(void)_updatePreferredContentSize;
-(void)_updatePreviewVisibility:(BOOL)arg0 ;
-(void)_updatePrinter;
-(void)_updateTitleFromController;
-(void)_updateWhitePointAdaptivityStyle;
-(void)actionSheetDidDismiss;
-(void)completeTransition:(BOOL)arg0 withDuration:(CGFloat)arg1 ;
-(void)configureWithNumberOfItems:(NSInteger)arg0 currentPreviewItemIndex:(NSUInteger)arg1 itemProvider:(id)arg2 stateManager:(id)arg3 ;
-(void)expandContentOfPreviewItemViewController:(id)arg0 unarchivedItemsURL:(id)arg1 ;
-(void)getCurrentPreviewActivityUserInfoWithCompletionHandler:(id)arg0 ;
-(void)hostApplicationDidBecomeActive;
-(void)hostApplicationDidEnterBackground:(BOOL)arg0 ;
-(void)hostViewControlerTransitionToState:(NSUInteger)arg0 animated:(BOOL)arg1 ;
-(void)invalidateService;
-(void)keyCommandWasPerformed:(id)arg0 ;
-(void)keyCommandsWithCompletionHandler:(id)arg0 ;
-(void)loadView;
-(void)notifyFirstTimeAppearanceWithActions:(NSUInteger)arg0 ;
-(void)notifyStateRestorationUserInfo:(id)arg0 ;
-(void)overrideParentApplicationDisplayIdentifierWithIdentifier:(id)arg0 ;
-(void)pageViewController:(id)arg0 didCancelTransitionFromPage:(id)arg1 withIndex:(NSUInteger)arg2 toPage:(id)arg3 withIndex:(NSUInteger)arg4 animated:(BOOL)arg5 ;
-(void)pageViewController:(id)arg0 didTransitionFromPage:(id)arg1 withIndex:(NSUInteger)arg2 toPage:(id)arg3 withIndex:(NSUInteger)arg4 animated:(BOOL)arg5 ;
-(void)pageViewController:(id)arg0 isTransitioningFromPage:(id)arg1 withIndex:(NSUInteger)arg2 toPage:(id)arg3 withIndex:(NSUInteger)arg4 withProgress:(CGFloat)arg5 ;
-(void)pageViewController:(id)arg0 willBeginInteractiveTransitionFromPage:(id)arg1 withIndex:(NSUInteger)arg2 toPage:(id)arg3 withIndex:(NSUInteger)arg4 ;
-(void)pageViewController:(id)arg0 willCancelTransitionFromPage:(id)arg1 withIndex:(NSUInteger)arg2 toPage:(id)arg3 withIndex:(NSUInteger)arg4 animated:(BOOL)arg5 ;
-(void)pageViewController:(id)arg0 willTransitionFromPage:(id)arg1 withIndex:(NSUInteger)arg2 toPage:(id)arg3 withIndex:(NSUInteger)arg4 animated:(BOOL)arg5 ;
-(void)prepareForActionSheetPresentationWithCompletionHandler:(id)arg0 ;
-(void)preparePreviewCollectionForInvalidationWithCompletionHandler:(id)arg0 ;
-(void)previewItemViewController:(id)arg0 didEnableEditMode:(BOOL)arg1 ;
-(void)previewItemViewController:(id)arg0 didFailWithError:(id)arg1 ;
-(void)previewItemViewController:(id)arg0 hasUnsavedEdits:(BOOL)arg1 ;
-(void)previewItemViewController:(id)arg0 wantsFullScreen:(BOOL)arg1 ;
-(void)previewItemViewController:(id)arg0 wantsToForwardMessageToHost:(id)arg1 completionHandler:(id)arg2 ;
-(void)previewItemViewController:(id)arg0 wantsToOpenURL:(id)arg1 ;
-(void)previewItemViewController:(id)arg0 wantsToShowShareSheetWithPopoverTracker:(id)arg1 customSharedURL:(id)arg2 dismissCompletion:(id)arg3 ;
-(void)previewItemViewController:(id)arg0 wantsToUpdateStateRestorationWithUserInfo:(id)arg1 ;
-(void)previewItemViewControllerDidAcquireLock:(id)arg0 ;
-(void)previewItemViewControllerDidChangeCurrentPreviewController:(id)arg0 ;
-(void)previewItemViewControllerDidEditCopyOfPreviewItem:(id)arg0 editedCopy:(id)arg1 completionHandler:(id)arg2 ;
-(void)previewItemViewControllerDidHandOverLock:(id)arg0 ;
-(void)previewItemViewControllerDidUpdatePreferredContentSize:(id)arg0 ;
-(void)previewItemViewControllerDidUpdateTitle:(id)arg0 ;
-(void)previewItemViewControllerWantsToDismissQuickLook:(id)arg0 ;
-(void)previewItemViewControllerWantsToShowNoInternetConnectivityAlert:(id)arg0 ;
-(void)previewItemViewControllerWantsToShowShareSheet:(id)arg0 ;
-(void)previewItemViewControllerWantsUpdateKeyCommands:(id)arg0 ;
-(void)previewItemViewControllerWantsUpdateOverlay:(id)arg0 animated:(BOOL)arg1 ;
-(void)previewItemViewControllerWantsUpdatePrinter:(id)arg0 ;
-(void)requestLockForCurrentItem;
-(void)rotationOrPinchGestureRecognized:(id)arg0 ;
-(void)saveCurrentPreviewEditsSynchronously:(BOOL)arg0 withCompletionHandler:(id)arg1 ;
-(void)setAppearance:(id)arg0 animated:(BOOL)arg1 ;
-(void)setCurrentPreviewItemIndex:(NSInteger)arg0 animated:(BOOL)arg1 ;
-(void)setIsContentManaged:(BOOL)arg0 ;
-(void)setLoadingString:(id)arg0 ;
-(void)setRemoteAccessoryContainer:(id)arg0 ;
-(void)shouldDisplayLockActivityWithCompletionHandler:(id)arg0 ;
-(void)slideToDismissGestureRecognized:(id)arg0 ;
-(void)startNonInteractiveTransitionPresenting:(BOOL)arg0 ;
-(void)startTransitionWithSourceViewProvider:(id)arg0 transitionController:(id)arg1 presenting:(BOOL)arg2 useInteractiveTransition:(BOOL)arg3 completionHandler:(id)arg4 ;
-(void)tearDownTransition:(BOOL)arg0 ;
-(void)toolbarButtonPressedWithIdentifier:(id)arg0 completionHandler:(id)arg1 ;
-(void)toolbarButtonsForTraitCollection:(id)arg0 withCompletionHandler:(id)arg1 ;
-(void)triggerInteractiveTransitionAnimationIfNeeded;
-(void)updateCurrentPreviewConfiguration;
-(void)updateTransitionWithProgress:(CGFloat)arg0 ;
-(void)viewDidAppear:(BOOL)arg0 ;
-(void)viewDidDisappear:(BOOL)arg0 ;
-(void)viewWillAppear:(BOOL)arg0 ;


@end


#endif