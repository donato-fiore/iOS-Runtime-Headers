// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef CKCHATINPUTCONTROLLER_H
#define CKCHATINPUTCONTROLLER_H

@class IMBalloonPlugin, IMBalloonPluginDataSource, NSString, IMScheduledUpdater, UIView, UIViewController<CKBrowserViewControllerProtocol>, UINavigationController, UIViewController, NSDate, UITextInputPayloadController;
@protocol UITextInputPayloadDelegate, CKMessageEntryViewInputDelegate, CKPhotoBrowserViewControllerSendDelegate, CKHandwritingViewControllerSendDelegate, CKBrowserViewControllerStoreSendDelegate, CKPluginEntryViewControllerDelegate, CKExpandedAppViewControllerDelegate, CKDeviceOrientationManagerDelegate, CKBrowserSwitcherViewControllerDelegate, CKBrowserTransitionCoordinatorDelegate, CKHandwritingPresentationControllerDelegate, CKBrowserAppManagerViewControllerDelegate, CKAppMenuViewControllerDelegate, UIViewControllerTransitioningDelegate, UIPopoverPresentationControllerDelegate, SKStoreProductViewControllerDelegate, CKAppSelectionInterface, CKChatInputControllerDelegate, CKExternalPluginViewControllerProvider;

#import <Foundation/Foundation.h>

#import "CKBrowserSwitcherViewController.h"
#import "CKKeyboardContentViewController.h"
#import "CKChatEagerUploadController.h"
#import "CKMessageEntryView.h"
#import "CKHandwritingPresentationController.h"
#import "CKDeviceOrientationManager.h"
#import "CKScheduledUpdater.h"

@interface CKChatInputController : NSObject <UITextInputPayloadDelegate, CKMessageEntryViewInputDelegate, CKPhotoBrowserViewControllerSendDelegate, CKHandwritingViewControllerSendDelegate, CKBrowserViewControllerStoreSendDelegate, CKPluginEntryViewControllerDelegate, CKExpandedAppViewControllerDelegate, CKDeviceOrientationManagerDelegate, CKBrowserSwitcherViewControllerDelegate, CKBrowserTransitionCoordinatorDelegate, CKHandwritingPresentationControllerDelegate, CKBrowserAppManagerViewControllerDelegate, CKAppMenuViewControllerDelegate, UIViewControllerTransitioningDelegate, UIPopoverPresentationControllerDelegate, SKStoreProductViewControllerDelegate, CKAppSelectionInterface>



@property (nonatomic) BOOL _isRunningPPT; // ivar: __isRunningPPT
@property (readonly, nonatomic) BOOL appManagerIsDisplayed;
@property (readonly, nonatomic) BOOL appModalIsDisplayed;
@property (readonly, nonatomic) BOOL appStoreIsDisplayed;
@property (retain, nonatomic) IMBalloonPlugin *browserPlugin; // ivar: _browserPlugin
@property (retain, nonatomic) IMBalloonPluginDataSource *browserPluginDataSource; // ivar: _browserPluginDataSource
@property (readonly, nonatomic) BOOL browserShouldAutorotate;
@property (readonly, nonatomic) NSUInteger browserSupportedInterfaceOrientations;
@property (retain, nonatomic) CKBrowserSwitcherViewController *browserSwitcher; // ivar: _browserSwitcher
@property (retain, nonatomic) CKKeyboardContentViewController *currentInputViewController; // ivar: _currentInputViewController
@property (readonly, copy) NSString *debugDescription;
@property (retain, nonatomic) IMBalloonPluginDataSource *deferredPluginDataSource; // ivar: _deferredPluginDataSource
@property (weak, nonatomic) NSObject<CKChatInputControllerDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (retain, nonatomic) IMScheduledUpdater *dismissEntryViewShelfUpdater; // ivar: _dismissEntryViewShelfUpdater
@property (retain, nonatomic) CKChatEagerUploadController *eagerUploadController; // ivar: _eagerUploadController
@property (retain, nonatomic) CKMessageEntryView *entryView; // ivar: _entryView
@property (weak, nonatomic) NSObject<CKExternalPluginViewControllerProvider> *externalPluginControllerProvider; // ivar: _externalPluginControllerProvider
@property (retain, nonatomic) CKHandwritingPresentationController *handwritingPresentationController; // ivar: _handwritingPresentationController
@property (readonly, nonatomic) BOOL hasExternalPluginViewControllerProvider;
@property (readonly) NSUInteger hash;
@property (nonatomic) BOOL inCollapseOrExpandAnimation; // ivar: _inCollapseOrExpandAnimation
@property (nonatomic, getter=isInputViewVisible) BOOL inputViewVisible; // ivar: _inputViewVisible
@property (nonatomic) BOOL inputViewWillBecomeVisible; // ivar: _inputViewWillBecomeVisible
@property (copy, nonatomic) id *insertPayloadCompletionHandler; // ivar: _insertPayloadCompletionHandler
@property (readonly, nonatomic) BOOL isDismissingAppModal; // ivar: _isDismissingAppModal
@property (nonatomic) BOOL keyboardIsHiding; // ivar: _keyboardIsHiding
@property (retain, nonatomic) UIView *keyboardSnapshotView; // ivar: _keyboardSnapshotView
@property (nonatomic) NSInteger lastSeenOrientation; // ivar: _lastSeenOrientation
@property (retain, nonatomic) UIViewController<CKBrowserViewControllerProtocol> *macBrowserViewController; // ivar: _macBrowserViewController
@property (retain, nonatomic) CKDeviceOrientationManager *orientationManager; // ivar: _orientationManager
@property (retain, nonatomic) CKScheduledUpdater *orientationUpdater; // ivar: _orientationUpdater
@property (retain, nonatomic) UINavigationController *presentedBrowserNavigationController; // ivar: _presentedBrowserNavigationController
@property (nonatomic) BOOL shouldBlurForMessageEditing;
@property (nonatomic) BOOL shouldRestoreAppSwitcher; // ivar: _shouldRestoreAppSwitcher
@property (nonatomic) BOOL shouldSuppressStatusBarForHandwriting; // ivar: _shouldSuppressStatusBarForHandwriting
@property (retain, nonatomic) UIViewController *statusBarStyleViewController; // ivar: _statusBarStyleViewController
@property (readonly) Class superclass;
@property (retain, nonatomic) CKKeyboardContentViewController *switcherInputViewController; // ivar: _switcherInputViewController
@property (retain, nonatomic) NSDate *switcherLastTouchDate; // ivar: _switcherLastTouchDate
@property (retain, nonatomic) UITextInputPayloadController *textInputPayloadController; // ivar: _textInputPayloadController


-(BOOL)_currentPluginIsDT;
-(BOOL)_currentPluginIsPhotos;
-(BOOL)_isRunningInMVS;
-(BOOL)_shouldSendTypingIndicatorDataForPluginIdentifier:(id)arg0 ;
-(BOOL)_shouldShowHandwriting;
-(BOOL)_switcherPluginCanMessageAPI;
-(BOOL)_switcherPluginCanMessageAPIOnBehalfOfPlugin:(id)arg0 ;
-(BOOL)_switcherPluginHasTouchTokenForDirectSend;
-(BOOL)canHandleClientActionFromUrl:(id)arg0 ;
-(BOOL)commitPayload:(id)arg0 forPlugin:(id)arg1 allowAllCommits:(BOOL)arg2 error:(*id)arg3 ;
-(BOOL)commitPayloadBypassingValidation:(id)arg0 forPlugin:(id)arg1 ;
-(BOOL)handwritingIsDisplayed;
-(BOOL)isHandwritingLandscape;
-(BOOL)messageEntryShouldHideCaret:(id)arg0 ;
-(BOOL)shouldInterfaceBeRestrictedToPortraitForPluginID:(id)arg0 ;
-(BOOL)shouldPreventAppFromDisplayingForBundleIdentifier:(id)arg0 ;
-(BOOL)shouldShowMoneyActionWithAmount:(id)arg0 currencies:(id)arg1 ;
-(NSInteger)messageEntryViewHighLightInputButton:(id)arg0 ;
-(NSUInteger)presentationStyleInOrientation:(NSInteger)arg0 forPluginID:(id)arg1 ;
-(id)_adamIDFromPluginPayloadData:(id)arg0 ;
-(id)_browserViewControllerForInterfaceOrientationMethods;
-(id)_entryViewSnapshotWithFrame:(struct CGRect )arg0 ;
-(id)_formattedPayload:(id)arg0 forPayloadID:(id)arg1 ;
-(id)animationControllerForDismissedController:(id)arg0 ;
-(id)animationControllerForPresentedController:(id)arg0 presentingController:(id)arg1 sourceController:(id)arg2 ;
-(id)appIconOverride;
-(id)appTitleOverride;
-(id)balloonPluginForIndexPath:(id)arg0 ;
-(id)dragControllerTranscriptDelegate;
-(id)init;
-(id)inputViewController;
-(id)localizedTitleForClientActionFromUrl:(id)arg0 context:(id)arg1 ;
-(id)participantHandles;
-(id)pluginBundleID;
-(id)presentationControllerForPresentedViewController:(id)arg0 presentingViewController:(id)arg1 sourceViewController:(id)arg2 ;
-(id)workingDirForDraft;
-(id)workingDraftDirForPluginIdentifier:(id)arg0 ;
-(void)_deferredCommitPayload:(id)arg0 ;
-(void)_deferredCommitSticker:(id)arg0 ;
-(void)_deferredDismissToKeyboardAndFocusEntryView:(id)arg0 ;
-(void)_deferredRequestPresentationStyleExpanded:(id)arg0 ;
-(void)_deferredRequestPresentationStyleFullScreenModalForPluginInfo:(id)arg0 ;
-(void)_dismissBrowserViewControllerAndReloadInputViews:(BOOL)arg0 ;
-(void)_dismissCompactSwitcherOverKeyboardWithCompletion:(id)arg0 ;
-(void)_handleOrientation;
-(void)_launchAppExtensionForDebugging;
-(void)_loadPhotosBrowser;
-(void)_loadPhotosBrowserCollapsingEntryField:(BOOL)arg0 ;
-(void)_openContainingBundleID:(id)arg0 applicationService:(id)arg1 withURL:(id)arg2 pluginID:(id)arg3 completionHandler:(id)arg4 ;
-(void)_presentCompactSwitcherOverKeyboardWithCompletion:(id)arg0 ;
-(void)_presentPluginWithBundleID:(id)arg0 sendingTextInputPayload:(id)arg1 withPayloadID:(id)arg2 ;
-(void)_presentPluginWithBundleID:(id)arg0 sendingTextInputPayload:(id)arg1 withPayloadID:(id)arg2 style:(NSUInteger)arg3 ;
-(void)_reconfigurePluginDataSourceWithBalloonControllerIfNecessary;
-(void)_setupObserverForLaunchAppExtensionForDebugging;
-(void)_showFullScreenBrowser:(id)arg0 ;
-(void)_startEditingPayload:(id)arg0 ;
-(void)adjustSupportedInterfaceOrientationForPluginID:(id)arg0 requiredPortrait:(*BOOL)arg1 ;
-(void)appMenuViewController:(id)arg0 didSelectMenuItem:(id)arg1 ;
-(void)appSelectionInterfaceSelectedItem:(id)arg0 ;
-(void)applicationWillAddDeactivationReasonNotification:(id)arg0 ;
-(void)browserAppManagerDidSelectPlugin:(id)arg0 ;
-(void)browserTransitionCoordinatorDidCollapseOrDismiss:(id)arg0 withReason:(NSInteger)arg1 ;
-(void)browserTransitionCoordinatorDidTransitionOrPresentToFullscreen:(id)arg0 withReason:(NSInteger)arg1 ;
-(void)browserTransitionCoordinatorWillCollapseOrDismiss:(id)arg0 withReason:(NSInteger)arg1 ;
-(void)browserTransitionCoordinatorWillTransitionOrPresentToFullscreen:(id)arg0 withReason:(NSInteger)arg1 ;
-(void)browserWillDismiss;
-(void)clearBrowserViewControllerIfNecessary;
-(void)commitPayload:(id)arg0 ;
-(void)commitSticker:(id)arg0 ;
-(void)commitSticker:(id)arg0 atScreenCoordinate:(struct CGPoint )arg1 scale:(CGFloat)arg2 rotation:(CGFloat)arg3 ;
-(void)commitSticker:(id)arg0 forPlugin:(id)arg1 ;
-(void)commitSticker:(id)arg0 forPlugin:(id)arg1 bypassValidation:(BOOL)arg2 ;
-(void)commitSticker:(id)arg0 withDragTarget:(id)arg1 ;
-(void)commitStickerBypassingValidation:(id)arg0 forPlugin:(id)arg1 ;
-(void)composeRecipientViewDidBecomeFirstResponder:(id)arg0 ;
-(void)dealloc;
-(void)deviceOrientationManager:(id)arg0 orientationDidChange:(NSInteger)arg1 ;
-(void)didBeginInstallingAppWithBundleIdentifier:(id)arg0 ;
-(void)didSelectPlugin:(id)arg0 ;
-(void)didStageAssetArchive:(id)arg0 identifier:(id)arg1 ;
-(void)didTransitionFromOrientation:(NSInteger)arg0 toOrientation:(NSInteger)arg1 ;
-(void)dismiss;
-(void)dismissAndReloadInputViews:(BOOL)arg0 ;
-(void)dismissAndReloadInputViews:(BOOL)arg0 forPlugin:(id)arg1 ;
-(void)dismissBrowserViewController;
-(void)dismissEntryViewShelf;
-(void)dismissPlugin;
-(void)dismissToKeyboard:(BOOL)arg0 ;
-(void)eagerUploadCancelIdentifier:(id)arg0 ;
-(void)eagerUploadPayload:(id)arg0 identifier:(id)arg1 replace:(BOOL)arg2 ;
-(void)expandedAppViewController:(id)arg0 hasUpdatedLastTouchDate:(id)arg1 ;
-(void)expandedAppViewController:(id)arg0 wantsToSwitchToPlugin:(id)arg1 datasource:(id)arg2 ;
-(void)expandedAppViewControllerDidTransitionFromOrientation:(NSInteger)arg0 toOrientation:(NSInteger)arg1 ;
-(void)expandedAppViewControllerSwitcherDidSelectAppManager:(id)arg0 ;
-(void)expandedAppViewControllerSwitcherDidSelectAppStore:(id)arg0 ;
-(void)expandedAppViewControllerWantsToCollapse:(id)arg0 ;
-(void)forceDismissWithoutAnimation;
-(void)handleClientActionFromUrl:(id)arg0 context:(id)arg1 ;
-(void)handleMoneyActionWithAmount:(id)arg0 currencies:(id)arg1 ;
-(void)handlePayload:(id)arg0 withPayloadId:(id)arg1 ;
-(void)handwritingPresentationControllerDidHideHandwriting:(id)arg0 ;
-(void)handwritingPresentationControllerDidShowHandwriting:(id)arg0 ;
-(void)handwritingPresentationControllerWillHideHandwriting:(id)arg0 ;
-(void)keyboardDidHide:(id)arg0 ;
-(void)keyboardWillHide:(id)arg0 ;
-(void)keyboardWillShow:(id)arg0 ;
-(void)launchAndShowBrowserForPlugin:(id)arg0 dataSource:(id)arg1 style:(NSUInteger)arg2 ;
-(void)launchAndShowBrowserForPlugin:(id)arg0 dataSource:(id)arg1 style:(NSUInteger)arg2 presentationConfiguration:(id)arg3 ;
-(void)macPresentStoreViewControllerForAdamID:(id)arg0 ;
-(void)macShowBrowserForPlugin:(id)arg0 dataSource:(id)arg1 style:(NSUInteger)arg2 presentationConfiguration:(id)arg3 ;
-(void)macShowExpandedBrowser:(id)arg0 presentationConfiguration:(id)arg1 ;
-(void)messageEntryView:(id)arg0 didSelectPluginAtIndex:(id)arg1 ;
-(void)messageEntryViewBrowserButtonHit:(id)arg0 ;
-(void)messageEntryViewDidCollapse:(id)arg0 ;
-(void)messageEntryViewDidExpand:(id)arg0 ;
-(void)messageEntryViewDidTakeFocus:(id)arg0 ;
-(void)messageEntryViewHandwritingButtonHit:(id)arg0 ;
-(void)messageEntryViewPhotoButtonHit:(id)arg0 ;
-(void)messageEntryViewPhotoButtonTouchCancel:(id)arg0 ;
-(void)messageEntryViewPhotoButtonTouchDown:(id)arg0 ;
-(void)messageEntryViewPhotoButtonTouchUpOutside:(id)arg0 ;
-(void)messageEntryViewSelectedAppMenuItem:(id)arg0 ;
-(void)notifyBrowserViewControllerOfMatchingNewMessages:(id)arg0 ;
-(void)openAppExtensionWithAdamID:(id)arg0 ;
-(void)openURL:(id)arg0 applicationIdentifier:(id)arg1 pluginID:(id)arg2 completionHandler:(id)arg3 ;
-(void)openURL:(id)arg0 pluginID:(id)arg1 completionHandler:(id)arg2 ;
-(void)prepareForSuspend;
-(void)presentAlertWithTitle:(id)arg0 message:(id)arg1 buttonTitle:(id)arg2 completion:(id)arg3 ;
-(void)presentAppManager;
-(void)presentAppStoreForAdamID:(id)arg0 ;
-(void)presentAppStoreForURL:(id)arg0 ;
-(void)presentAppStoreForURL:(id)arg0 fromSourceApplication:(id)arg1 ;
-(void)presentModernCardForPlugin:(id)arg0 presentationStyle:(NSUInteger)arg1 ;
-(void)presentPluginWithBundleID:(id)arg0 appLaunchPayload:(id)arg1 ;
-(void)presentViewControllerWithPluginChatItem:(id)arg0 presentationStyle:(NSUInteger)arg1 ;
-(void)presentViewControllerWithPluginChatItem:(id)arg0 presentationStyle:(NSUInteger)arg1 presentationConfiguration:(id)arg2 ;
-(void)presentationControllerDidDismiss:(id)arg0 ;
-(void)productViewControllerDidFinish:(id)arg0 ;
-(void)registerForTextInputPayloadHandling:(BOOL)arg0 isGroupChat:(BOOL)arg1 ;
-(void)requestPhotoBrowserInitFromDraft:(id)arg0 ;
-(void)requestPhotoBrowserToAppendFinalImagesToComposition;
-(void)requestPhotoBrowserToEnumerateSelectedImagesUsingBlock:(id)arg0 ;
-(void)requestPhotoBrowserToPrepareForDraft;
-(void)requestPhotoBrowserToUnstageImages:(id)arg0 ;
-(void)requestPresentationStyleExpanded:(BOOL)arg0 ;
-(void)requestPresentationStyleExpanded:(BOOL)arg0 forPlugin:(id)arg1 ;
-(void)requestPresentationStyleFullScreenModalForPlugin:(id)arg0 ;
-(void)requestPresentationStyleFullScreenModalForPlugin:(id)arg0 datasource:(id)arg1 skipValidation:(BOOL)arg2 ;
-(void)setConversationAndRecipientsForBrowser:(id)arg0 ;
-(void)setLocalUserIsTyping:(BOOL)arg0 ;
-(void)showBrowserForPlugin:(id)arg0 dataSource:(id)arg1 style:(NSUInteger)arg2 ;
-(void)showBrowserForPlugin:(id)arg0 dataSource:(id)arg1 style:(NSUInteger)arg2 presentationConfiguration:(id)arg3 ;
-(void)showDTCompose;
-(void)showEntryViewShelf:(id)arg0 ;
-(void)showEntryViewShelf:(id)arg0 forPlugin:(id)arg1 completion:(id)arg2 ;
-(void)showFunCamera;
-(void)showFunCamera:(id)arg0 ;
-(void)showHandwritingBrowser;
-(void)showHandwritingBrowserWithExistingPayload:(id)arg0 ;
-(void)showKeyboard;
-(void)showModalViewController:(id)arg0 animated:(BOOL)arg1 completion:(id)arg2 ;
-(void)showPhotosBrowser;
-(void)showPhotosBrowserCollapsingEntryField:(BOOL)arg0 ;
-(void)stageAssetArchive:(id)arg0 skipShelf:(BOOL)arg1 completionHandler:(id)arg2 ;
-(void)startEditingPayload:(id)arg0 ;
-(void)startEditingPayload:(id)arg0 dismiss:(BOOL)arg1 ;
-(void)startEditingPayload:(id)arg0 dismiss:(BOOL)arg1 forPlugin:(id)arg2 ;
-(void)startEditingPayload:(id)arg0 dismiss:(BOOL)arg1 forPlugin:(id)arg2 completion:(id)arg3 ;
-(void)startEditingPayloadBypassingValidation:(id)arg0 forPlugin:(id)arg1 completion:(id)arg2 ;
-(void)swipeDismissBrowser;
-(void)switcherViewController:(id)arg0 didSelectPluginAtIndexPath:(id)arg1 ;
-(void)switcherViewController:(id)arg0 hasUpdatedLastTouchDate:(id)arg1 ;
-(void)switcherViewControllerDidCollapse:(id)arg0 ;
-(void)switcherViewControllerDidFinishSwitching:(id)arg0 toViewController:(id)arg1 ;
-(void)switcherViewControllerDidSelectAppManager:(id)arg0 shouldRestoreAppSwitcher:(BOOL)arg1 ;
-(void)switcherViewControllerDidSelectAppStore:(id)arg0 shouldRestoreAppSwitcher:(BOOL)arg1 ;
-(void)switcherViewControllerWillAppear:(id)arg0 ;
-(void)switcherViewControllerWillDisappear:(id)arg0 ;
-(void)unregisterForTextInputPayloadHandling;
-(void)willSendComposition;


@end


#endif