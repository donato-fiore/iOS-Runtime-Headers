// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef MFMAILCOMPOSECONTROLLER_H
#define MFMAILCOMPOSECONTROLLER_H

@class UIViewController, NSArray, NSString, UIView, UIBarButtonItem, UIButton, UIImagePickerController, CNRecentComposeRecipient, MFMutableMessageHeaders, MFLock, MFSecureMIMECompositionManager, UIAlertController, UIProgressView, NSTimer, NSDate, NSDictionary, EFFuture, UIResponder, UIWindow, CNComposeRecipientAtom, MSAutosaveSession, CNContactViewController, MFOutgoingMessageDelivery, VNDocumentCameraViewController, EMMailboxObjectID, NSMutableSet, EMMessage, CNContactPickerViewController, QLPreviewController, MFAttachment, CNComposeRecipient;
@protocol UINavigationControllerDelegate, CNContactContentViewControllerDelegate, MFMailComposeToFieldDelegate, MFComposeActivityHandoffOperationDelegate, MFComposeStyleSelectorViewControllerDelegate, MFPhotoPickerControllerDelegate, NSUserActivityDelegate, QLPreviewControllerDelegate, VNDocumentCameraViewControllerDelegate, _MFMailCompositionContextDelegate, MFPreferredTitleProvider, ComposeViewNavigationBarDelegate, MFMailComposeViewDelegate, MFMailMenuCommandProvider, CNComposeHeaderViewDelegate, MFComposeSubjectViewDelegate, MFComposeImageSizeViewDelegate, MFSecureMIMECompositionManagerDelegate, MFComposeTypeFactoryDelegate, MFMailComposeRecipientTextViewDelegate, UIImagePickerControllerDelegate, UIPopoverPresentationControllerDelegate, CNAutocompleteGroupDetailViewControllerDelegate, CNContactPickerDelegate, OS_dispatch_group, MFMailAccountProxyGenerator, EFScheduler;


#import "_MFMailCompositionContext.h"
#import "MFPhotoPickerController.h"
#import "MFMailComposeToField.h"
#import "MFMailComposeRecipientTextView.h"
#import "MFComposeSubjectView.h"
#import "MFComposeImageSizeView.h"
#import "MFComposeWebView.h"
#import "MFMailPopoverManager.h"
#import "MFAddressPickerReformatter.h"
#import "MFComposeActivityHandoffOperation.h"
#import "MFMessageContentProgressLayer.h"
#import "MFLANHandoffAgent.h"
#import "MFMailSignatureController.h"
#import "MFComposeDisplayMetrics.h"
#import "MFPhotoPickerProgressManager.h"
#import "MFComposeStyleSelectorViewController.h"

@interface MFMailComposeController : UIViewController <UINavigationControllerDelegate, CNContactContentViewControllerDelegate, MFMailComposeToFieldDelegate, MFComposeActivityHandoffOperationDelegate, MFComposeStyleSelectorViewControllerDelegate, MFPhotoPickerControllerDelegate, NSUserActivityDelegate, QLPreviewControllerDelegate, VNDocumentCameraViewControllerDelegate, _MFMailCompositionContextDelegate, MFPreferredTitleProvider, ComposeViewNavigationBarDelegate, MFMailComposeViewDelegate, MFMailMenuCommandProvider, CNComposeHeaderViewDelegate, MFComposeSubjectViewDelegate, MFComposeImageSizeViewDelegate, MFSecureMIMECompositionManagerDelegate, MFComposeTypeFactoryDelegate, MFMailComposeRecipientTextViewDelegate, UIImagePickerControllerDelegate, UIPopoverPresentationControllerDelegate, CNAutocompleteGroupDetailViewControllerDelegate, CNContactPickerDelegate>

 {
    _MFMailCompositionContext *_compositionContext;
    NSUInteger _options;
    NSArray *_toAddresses;
    NSArray *_ccAddresses;
    NSArray *_bccAddresses;
    NSArray *_originalBccAddresses;
    NSString *_subject;
    NSString *_originalSendingEmailAddress;
    NSString *_primaryAddressForForcedSendingAccount;
    NSString *_sendingEmailAddress;
    NSInteger _sendingEmailAddressIndex;
    NSUInteger _initialAttachmentCount;
    UIView *_alternateTitleView;
    UIBarButtonItem *_sendButtonItem;
    UIBarButtonItem *_closeButtonItem;
    UIButton *_sendAccessoryButton;
    MFPhotoPickerController *_photosPickerController;
    UIImagePickerController *_cameraPickerController;
    MFMailComposeToField *_toField;
    MFMailComposeRecipientTextView *_ccField;
    MFMailComposeRecipientTextView *_lastFocusedRecipientView;
    MFComposeSubjectView *_subjectField;
    MFComposeImageSizeView *_imageSizeField;
    MFComposeWebView *_composeWebView;
    CNRecentComposeRecipient *_recentRecipientPresentingCard;
    MFMailPopoverManager *_popoverManager;
    MFMutableMessageHeaders *_savedHeaders;
    NSString *_initialTitle;
    MFLock *_autosaveLock;
    NSString *_autosaveIdentifier;
    MFSecureMIMECompositionManager *_secureCompositionManager;
    int _signingIdentityStatus;
    int _encryptionIdentityStatus;
    BOOL _encryptionStatusIsKnown;
    int _resolution;
    int _recipientFieldWhileViewUnloaded;
    BOOL _isDirty;
    BOOL _bodyTextChanged;
    BOOL _shouldAutosaveWithSuspendInfo;
    BOOL _isSuspended;
    BOOL _viewWasUnloaded;
    BOOL _stillLoading;
    BOOL _hosted;
    BOOL _hasViewAppeared;
    BOOL _rotationSnapshotTaken;
    BOOL _isPopoverVisible;
    BOOL _useSuspended;
    MFAddressPickerReformatter *_addressPickerReformatter;
    BOOL _contentVisible;
    BOOL _allowRestrictedAccounts;
    BOOL _encryptionOverrideSetting;
    BOOL _initializedRecipients;
    BOOL _originalMessageWasEncrypted;
    NSUInteger _selectedContentVariationIndex;
    UIAlertController *_notifyConfirmation;
    MFComposeActivityHandoffOperation *_handoffOperation;
    UIProgressView *_handoffProgressView;
    MFMessageContentProgressLayer *_progressIndicatorView;
    MFLANHandoffAgent *_LANHandoffAgent;
    NSObject<OS_dispatch_group> *_imageScalingGroup;
    unsigned short _lastTypedCharacter;
    NSTimer *_autosaveTimer;
    NSDate *_lastActiveDate;
    NSDictionary *_securityScopes;
    uint8_t _autosaveCount;
    EFFuture *_undoMoveAction;
    id *_releaseActiveFocusedState;
    MFMailSignatureController *_signatureController;
    UIResponder *_savedFirstResponder;
    EFFuture *_content;
    NSUInteger _drawingSequenceNumber;
    UIWindow *_containingWindow;
    ? _composeWebViewFlags;
}


@property (retain, nonatomic) NSObject<MFMailAccountProxyGenerator> *accountProxyGenerator; // ivar: _accountProxyGenerator
@property (copy, nonatomic) NSString *addressForMissingIdentity; // ivar: _addressForMissingIdentity
@property (retain, nonatomic) CNComposeRecipientAtom *atomPresentingCard; // ivar: _atomPresentingCard
@property (nonatomic) BOOL attachmentToMarkupIsLoaded; // ivar: _attachmentToMarkupIsLoaded
@property (retain, nonatomic) NSString *autosaveIdentifier;
@property (nonatomic) BOOL autosaveIsValid; // ivar: _autosaveIsValid
@property (retain, nonatomic) NSObject<EFScheduler> *autosaveQueue; // ivar: _autosaveQueue
@property (retain, nonatomic) MSAutosaveSession *autosaveSession; // ivar: _autosaveSession
@property (readonly, nonatomic) NSDate *autosavedDate; // ivar: _autosavedDate
@property (retain, nonatomic) NSDictionary *certificatesByRecipient; // ivar: _certificatesByRecipient
@property (retain, nonatomic) CNContactViewController *contactViewController; // ivar: _contactViewController
@property (readonly, nonatomic) NSInteger countofDrawingAttachmentsLeftInCompose;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) BOOL delayToShowMarkupHasPassed; // ivar: _delayToShowMarkupHasPassed
@property (weak, nonatomic) id *delegate; // ivar: _delegate
@property (readonly, nonatomic) MFOutgoingMessageDelivery *delivery; // ivar: _delivery
@property (readonly, copy) NSString *description;
@property (retain, nonatomic) MFComposeDisplayMetrics *displayMetrics; // ivar: _displayMetrics
@property (weak, nonatomic) VNDocumentCameraViewController *documentCameraViewController; // ivar: _documentCameraViewController
@property (readonly, nonatomic) NSString *documentID; // ivar: _documentID
@property (readonly, nonatomic) EMMailboxObjectID *draftMailboxObjectID; // ivar: _draftMailboxObjectID
@property (retain, nonatomic) NSMutableSet *drawingFileAttachments; // ivar: _drawingFileAttachments
@property (nonatomic) NSInteger drawingInsertCount; // ivar: _drawingInsertCount
@property (retain, nonatomic) NSDictionary *errorsByRecipient; // ivar: _errorsByRecipient
@property (retain, nonatomic) NSDictionary *fontAttributes; // ivar: _fontAttributes
@property (readonly) NSUInteger hash;
@property (nonatomic) BOOL insertingDrawing; // ivar: _insertingDrawing
@property (nonatomic) BOOL isModal; // ivar: _isModal
@property (readonly, nonatomic) EMMessage *lastDraftMessage; // ivar: _lastDraftMessage
@property (nonatomic) NSUInteger markupReplyAttachmentLoadingProgress; // ivar: _markupReplyAttachmentLoadingProgress
@property (copy, nonatomic) NSString *originatingBundleID; // ivar: _originatingBundleID
@property (retain, nonatomic) CNContactPickerViewController *peoplePicker; // ivar: _peoplePicker
@property (retain, nonatomic) MFPhotoPickerProgressManager *photoPickerProgressManager; // ivar: _photoPickerProgressManager
@property (retain, nonatomic) UIAlertController *popoverAlert; // ivar: _popoverAlert
@property (weak, nonatomic) QLPreviewController *previewController; // ivar: _previewController
@property (retain, nonatomic) MFAttachment *previewingAttachment; // ivar: _previewingAttachment
@property (retain, nonatomic) CNComposeRecipient *recipientPresentingCard; // ivar: _recipientPresentingCard
@property (retain, nonatomic) id *remoteViewControllerProxy; // ivar: _remoteViewControllerProxy
@property (nonatomic) int sourceAccountManagement; // ivar: _sourceAccountManagement
@property (retain, nonatomic) MFComposeStyleSelectorViewController *styleSelector; // ivar: _styleSelector
@property (readonly, nonatomic) NSString *subject;
@property (readonly) Class superclass;
@property (nonatomic) BOOL useMailDrop; // ivar: _useMailDrop
@property (readonly, nonatomic, getter=isVerticallyCompact) BOOL verticallyCompact;


+(BOOL)isSetupForDeliveryAllowingRestrictedAccounts:(BOOL)arg0 ;
+(BOOL)isSetupForDeliveryAllowingRestrictedAccounts:(BOOL)arg0 originatingBundleID:(id)arg1 sourceAccountManagement:(int)arg2 ;
+(id)menuCommands;
+(id)preferenceForKey:(id)arg0 ;
+(id)signpostLog;
+(void)initialize;
-(BOOL)_anyRecipientViewContainsAddress:(id)arg0 ;
-(BOOL)_hasEncryptionIdentityError;
-(BOOL)_hasRecipients;
-(BOOL)_isActiveComposeController;
-(BOOL)_isDummyViewController;
-(BOOL)_isPopoverOrActionSheetOrAlertVisible;
-(BOOL)_isReplyOrForward;
-(BOOL)_isRestoredComposition;
-(BOOL)_isSetupForDelivery;
-(BOOL)_isTabKeyCommandInvocationPossible;
-(BOOL)_secureCompositionManagerHasRecipients;
-(BOOL)_setSendingEmailAddress:(id)arg0 ;
-(BOOL)_shouldAutosaveAfterTimerFiredWithInterval:(CGFloat)arg0 ;
-(BOOL)_shouldEnableCloseButton;
-(BOOL)_shouldEnableSendButton;
-(BOOL)_shouldPrependBlankLineForAttachments;
-(BOOL)_shouldUseMailDrop;
-(BOOL)_wantsEncryption;
-(BOOL)bccAddressesDirtied;
-(BOOL)canBecomeFirstResponder;
-(BOOL)canPerformAction:(SEL)arg0 withSender:(id)arg1 ;
-(BOOL)canShowAttachmentPicker;
-(BOOL)canShowContentVariationPicker;
-(BOOL)canShowFromField;
-(BOOL)canShowImageSizeField;
-(BOOL)chooseSelectedSearchResultForComposeRecipientView:(id)arg0 ;
-(BOOL)composeRecipientViewShowingSearchResults:(id)arg0 ;
-(BOOL)contactViewController:(id)arg0 shouldPerformDefaultActionForContact:(id)arg1 propertyKey:(id)arg2 propertyIdentifier:(id)arg3 ;
-(BOOL)contactViewController:(id)arg0 shouldPerformDefaultActionForContactProperty:(id)arg1 ;
-(BOOL)getPrefersLargeTitles;
-(BOOL)hasAttachments;
-(BOOL)hosted;
-(BOOL)isDirty;
-(BOOL)isManagedAccount;
-(BOOL)isSavingAsDraft;
-(BOOL)isShowingRecentPersonCard;
-(BOOL)needsDelivery;
-(BOOL)presentSearchResultsForComposeRecipientView:(id)arg0 ;
-(BOOL)recipientViewShouldIgnoreFirstResponderChanges:(id)arg0 ;
-(BOOL)sendingAccountIsExchange;
-(BOOL)sendingEmailDirtied;
-(BOOL)shouldShowSMIMEButton;
-(NSInteger)adaptivePresentationStyleForPresentationController:(id)arg0 traitCollection:(id)arg1 ;
-(NSInteger)composeType;
-(NSInteger)compositionType;
-(NSInteger)popoverPresentationStyleForViewController:(id)arg0 ;
-(NSInteger)previewController:(id)arg0 editingModeForPreviewItem:(id)arg1 ;
-(NSUInteger)_composeWebViewTextContentLength;
-(NSUInteger)_defaultAtomPresentationOptions;
-(NSUInteger)_reloadNumberOfReformattedAddressesWithMaximumWidth:(CGFloat)arg0 defaultFontSize:(CGFloat)arg1 ;
-(NSUInteger)_sizeForScale:(NSUInteger)arg0 imagesOnly:(BOOL)arg1 ;
-(NSUInteger)contentVariationIndex;
-(NSUInteger)presentationOptionsForRecipient:(id)arg0 ;
-(NSUInteger)signpostID;
-(id)_addressFieldForField:(int)arg0 ;
-(id)_allRecipientViews;
-(id)_alternateTitleView;
-(id)_attachmentToMarkup;
-(id)_availableAccountProxies;
-(id)_backgroundColorForMarkupController;
-(id)_contactViewControllerForRecipient:(id)arg0 ;
-(id)_copyMessageDataForActivityHandoff;
-(id)_copyMessagePlainTextForDonation;
-(id)_copyMessagePlainTextForDonationRemoveQuotes:(BOOL)arg0 ;
-(id)_defaultAccount;
-(id)_emailAddresses;
-(id)_estimateMessageSize;
-(id)_messageForAutosave;
-(id)_messageForDraft;
-(id)_messageForRemoteDelivery;
-(id)_messageToDonate;
-(id)_messageWithCompositionSpecification:(id)arg0 useSuspendInfo:(BOOL)arg1 endingEditing:(BOOL)arg2 ;
-(id)_missingIdentityErrorWithFormat:(id)arg0 title:(id)arg1 ;
-(id)_nextDrawingName;
-(id)_outgoingMessageWithSubstituteDocument:(id)arg0 compositionSpecification:(id)arg1 useSuspendInfo:(BOOL)arg2 endingEditing:(BOOL)arg3 ;
-(id)_reformattedAddressAtIndex:(NSUInteger)arg0 ;
-(id)_selectedAttachmentURLs;
-(id)_sheetDetentForIdentifier:(id)arg0 viewController:(id)arg1 ;
-(id)addressesForField:(int)arg0 ;
-(id)attachments;
-(id)bccRecipients;
-(id)ccRecipients;
-(id)composeRecipientView:(id)arg0 composeRecipientForAddress:(id)arg1 ;
-(id)composeRecipientView:(id)arg0 composeRecipientForContact:(id)arg1 ;
-(id)composeWebView;
-(id)compositionContext;
-(id)contentVariationName;
-(id)currentScaleImageSize;
-(id)dismissActionsForPreviewController:(id)arg0 ;
-(id)emailAddresses;
-(id)initWithCompositionContext:(id)arg0 options:(NSUInteger)arg1 ;
-(id)keyCommands;
-(id)mailComposeView;
-(id)mf_preferredTitle;
-(id)navigationBarTitle;
-(id)navigationControllerForRecentPersonCard;
-(id)nextResponderForRecipientView:(id)arg0 ;
-(id)popoverManager;
-(id)popoverManagerCreateIfNeeded:(BOOL)arg0 ;
-(id)presentationViewController;
-(id)presentingViewControllerForComposeStyleSelector:(id)arg0 ;
-(id)presentingViewControllerForPhotoPicker:(id)arg0 ;
-(id)rotatingHeaderView;
-(id)savedHeaders;
-(id)sendingAccountProxy;
-(id)sendingEmailAddress;
-(id)sendingEmailAddressIfExists;
-(id)shouldCreateRichTextRepresentation;
-(id)toRecipients;
-(int)_fieldForAddressField:(id)arg0 ;
-(int)resolution;
-(struct CGRect )_optimalRectForPresentingPopoverInComposeWebView;
-(struct CGRect )frameForAttachmentWithIdentifier:(id)arg0 ;
-(struct CGRect )rectOfAttachment:(id)arg0 ;
-(struct UIEdgeInsets )additionalContentInsetForComposeWebView:(id)arg0 ;
-(void)_accountsChanged:(id)arg0 ;
-(void)_attachmentLoaderFinishedWithOriginalContent:(id)arg0 ;
-(void)_autosaveTimerFired:(id)arg0 ;
-(void)_beginBlockingBodyScroll;
-(void)_bodyTextChanged;
-(void)_checkForCanSendMailWithContinuation:(id)arg0 ;
-(void)_checkForEmptySubjectWithContinuation:(id)arg0 ;
-(void)_checkForInFlightAssetDownloadsWithContinuation:(id)arg0 ;
-(void)_checkForInvalidAddressesWithContinuation:(id)arg0 ;
-(void)_checkForReplyAndForwardRestriction;
-(void)_checkForUnencryptedWithContinuation:(id)arg0 ;
-(void)_clearMessageValues;
-(void)_close;
-(void)_composeViewDidDraw:(id)arg0 ;
-(void)_createAndAddHandoffProgressViewIfNecessary;
-(void)_didDismissDocumentPicker;
-(void)_dismissAndCleanupCameraPickerController;
-(void)_dismissPeoplePicker:(id)arg0 ;
-(void)_dismissPersonCard;
-(void)_dismissPresentedHalfSheet;
-(void)_dismissPresentedViewController;
-(void)_displayPopoverAlert:(id)arg0 ;
-(void)_draftContentDidChange;
-(void)_endBlockingBodyScroll;
-(void)_escapeShortcutInvoked:(id)arg0 ;
-(void)_explainAirplaneMode;
-(void)_finishEnteringRecipients;
-(void)_finishModalAlertClosingComposition:(BOOL)arg0 ;
-(void)_finishPopoverAlertClosingComposition:(BOOL)arg0 ;
-(void)_finishedComposing;
-(void)_finishedLoadingAllContentAndAttachments;
-(void)_focusBccHeaderCommandInvoked:(id)arg0 ;
-(void)_focusGained:(id)arg0 ;
-(void)_getRotationContentSettings:(struct ? *)arg0 ;
-(void)_hideHandoffProgressViewAnimated:(BOOL)arg0 ;
-(void)_leaveMessageInOutbox;
-(void)_loadAttachments;
-(void)_loadCompositionContext;
-(void)_loadingContextDidLoadMessage;
-(void)_makeComposeUserActivityCurrent;
-(void)_physicallyScaleImagesToScale:(NSUInteger)arg0 ;
-(void)_popoverWillBePresented:(id)arg0 ;
-(void)_prepareCompositionContextForLoading:(id)arg0 ;
-(void)_prepareForSuspend;
-(void)_prepareImagesForSendWithContinuation:(id)arg0 ;
-(void)_preparePhotoPicker;
-(void)_presentModalAlert:(id)arg0 ;
-(void)_promptForMailDropIfNecessaryWithContinuation:(id)arg0 ;
-(void)_recipientTextChanged:(id)arg0 ;
-(void)_removeRecent;
-(void)_replyAllCommandInvoked:(id)arg0 ;
-(void)_replyCommandInvoked:(id)arg0 ;
-(void)_resetProxyGenerator;
-(void)_resetSecureCompositionManager;
-(void)_resetSecureCompositionManagerUsingNewAccount:(BOOL)arg0 ;
-(void)_restoreMessageValues;
-(void)_retainFocusOfComposeWebViewIfRequired:(id)arg0 ;
-(void)_saveMessageValues;
-(void)_scaleImages;
-(void)_sendViewVisibilityNotification:(id)arg0 window:(id)arg1 ;
-(void)_setComposeWebViewAutocorrectionContext:(id)arg0 ;
-(void)_setInitialStateForImageField;
-(void)_setIsLoading:(BOOL)arg0 ;
-(void)_setLastFocusedRecipientView:(id)arg0 ;
-(void)_setRecipients:(id)arg0 forField:(int)arg1 ;
-(void)_setTitleBarSubtitleText:(id)arg0 style:(NSUInteger)arg1 ;
-(void)_setUpDeliveryObject:(NSUInteger)arg0 completionHandler:(id)arg1 ;
-(void)_setUpForSaveAsDraft;
-(void)_setupForAutosavedMessage:(id)arg0 ;
-(void)_setupForDraft:(id)arg0 ;
-(void)_setupForExistingNewMessage:(id)arg0 content:(id)arg1 ;
-(void)_setupForOutbox:(id)arg0 ;
-(void)_setupLargeTitleAccessory;
-(void)_setupNavigationBarItems;
-(void)_showCamera:(id)arg0 ;
-(void)_showMissingIdentityAlert;
-(void)_showOriginalAttachmentsIfNecessary;
-(void)_showPersonCardForRecipient:(id)arg0 showDeleteButton:(BOOL)arg1 ;
-(void)_showPhotoPicker:(id)arg0 ;
-(void)_startAutosaveTimerIfNeeded;
-(void)_subjectTextChanged:(id)arg0 ;
-(void)_tabKeyCommandInvoked:(id)arg0 ;
-(void)_unscaleImages;
-(void)_updateAutoBccSendingAddress:(id)arg0 withNewSendingAddress:(id)arg1 ;
-(void)_updateAutosaveSession;
-(void)_updateComposeWebViewAutoCorrectionContext;
-(void)_updateIdentityStatus:(*int)arg0 withPolicy:(int)arg1 identity:(struct __SecIdentity *)arg2 error:(id)arg3 ;
-(void)_updateImageSizeTitles;
-(void)_updateManagedPasteboardOwner;
-(void)_updateNavigationBarTitleAnimated:(BOOL)arg0 ;
-(void)_updateOriginalBccStatusForRestore;
-(void)_updateOriginalBccStatusForRestoreAddingAddress:(BOOL)arg0 ;
-(void)_updatePersonCard;
-(void)_updateRecipientAtomStyles;
-(void)_updateSMIMEButtonEnabledForRecipientCount;
-(void)_updateSMIMEButtonForEncryptionStatus:(int)arg0 ;
-(void)_updateSendAndCloseEnabled;
-(void)_updateTitleBarForEncryptionStatus:(int)arg0 ;
-(void)_willPresentDocumentPicker;
-(void)activityHandoffOperation:(id)arg0 didFailWithError:(id)arg1 ;
-(void)activityHandoffOperation:(id)arg0 didFinishReceivingData:(id)arg1 ;
-(void)activityHandoffOperation:(id)arg0 didFinishSendingDataWithResult:(NSInteger)arg1 ;
-(void)activityHandoffOperationReceivedBytes:(id)arg0 ;
-(void)addAddress:(id)arg0 field:(int)arg1 ;
-(void)addSignature:(BOOL)arg0 ;
-(void)applicationDidResume;
-(void)applicationWillSuspend;
-(void)autocompleteGroupDetailViewController:(id)arg0 didAskToRemoveGroup:(id)arg1 ;
-(void)autocompleteGroupDetailViewController:(id)arg0 didTapComposeRecipient:(id)arg1 ;
-(void)autocompleteGroupDetailViewControllerDidCancel:(id)arg0 ;
-(void)autosaveIfNecessaryWithHandler:(id)arg0 ;
-(void)autosaveWithHandler:(id)arg0 ;
-(void)backUpDraft;
-(void)changeQuoteLevel:(NSInteger)arg0 ;
-(void)clearAllFields;
-(void)clearInitialTitle;
-(void)close:(id)arg0 ;
-(void)composeHeaderView:(id)arg0 didChangeSize:(struct CGSize )arg1 ;
-(void)composeHeaderViewDidChangeValue:(id)arg0 ;
-(void)composeHeaderViewDidConfirmValue:(id)arg0 ;
-(void)composeRecipientView:(id)arg0 didAddRecipient:(id)arg1 ;
-(void)composeRecipientView:(id)arg0 didFinishEnteringAddress:(id)arg1 ;
-(void)composeRecipientView:(id)arg0 didRemoveRecipient:(id)arg1 ;
-(void)composeRecipientView:(id)arg0 didReplaceRecipients:(id)arg1 withRecipients:(id)arg2 ;
-(void)composeRecipientView:(id)arg0 didSelectRecipients:(id)arg1 ;
-(void)composeRecipientView:(id)arg0 disambiguateRecipientForAtom:(id)arg1 ;
-(void)composeRecipientView:(id)arg0 showPersonCardForAtom:(id)arg1 ;
-(void)composeRecipientView:(id)arg0 showPersonCardForRecipient:(id)arg1 ;
-(void)composeRecipientView:(id)arg0 textDidChange:(id)arg1 ;
-(void)composeRecipientViewDidBecomeFirstResponder:(id)arg0 ;
-(void)composeRecipientViewDidFinishPickingRecipient:(id)arg0 ;
-(void)composeRecipientViewRequestAddRecipient:(id)arg0 ;
-(void)composeRecipientViewReturnPressed:(id)arg0 ;
-(void)composeStyleSelector:(id)arg0 didChangeFont:(id)arg1 ;
-(void)composeStyleSelector:(id)arg0 didChangeFontSize:(CGFloat)arg1 ;
-(void)composeStyleSelector:(id)arg0 didChangeTextColor:(id)arg1 ;
-(void)composeStyleSelector:(id)arg0 didSelectStyle:(id)arg1 ;
-(void)composeStyleSelectorDidCancel:(id)arg0 ;
-(void)composeStyleSelectorDidDismissFontPicker:(id)arg0 ;
-(void)composeStyleSelectorDidPresentColorPicker:(id)arg0 ;
-(void)composeSubjectViewDidSelectContentVariationButton:(id)arg0 ;
-(void)composeSubjectViewTextFieldDidBecomeFirstResponder:(id)arg0 ;
-(void)composeSubjectViewTextFieldDidResignFirstResponder:(id)arg0 ;
-(void)composeSubjectViewWillRemoveContent:(id)arg0 ;
-(void)composeViewBodyTextChanged:(id)arg0 ;
-(void)composeWebViewDidChangeFontAttributes:(id)arg0 ;
-(void)contactPicker:(id)arg0 didSelectContact:(id)arg1 ;
-(void)contactPicker:(id)arg0 didSelectContactProperty:(id)arg1 ;
-(void)contactPickerDidCancel:(id)arg0 ;
-(void)contactViewController:(id)arg0 didCompleteWithContact:(id)arg1 ;
-(void)contactViewController:(id)arg0 didDeleteContact:(id)arg1 ;
-(void)contentDidChange;
-(void)dealloc;
-(void)deliverMessageRemotely:(id)arg0 ;
-(void)didBecomeActiveComposeController;
-(void)didInsertAttachment:(id)arg0 ;
-(void)didInsertBodyText:(id)arg0 ;
-(void)didRemoveAttachment:(id)arg0 ;
-(void)didRotateFromInterfaceOrientation:(NSInteger)arg0 ;
-(void)dismissSearchResultsForComposeRecipientView:(id)arg0 ;
-(void)dismissSheet;
-(void)documentCameraViewController:(id)arg0 didFinishWithScan:(id)arg1 ;
-(void)documentCameraViewControllerDidCancel:(id)arg0 ;
-(void)documentPicker:(id)arg0 didPickDocumentsAtURLs:(id)arg1 ;
-(void)documentPickerWasCancelled:(id)arg0 ;
-(void)finalizeSignature:(id)arg0 ;
-(void)finishedBackingUpDraftWithSuccess:(BOOL)arg0 ;
-(void)forceSaveAsDraft;
-(void)handleLargeMessageComposeHandoffWithInputStream:(id)arg0 outputStream:(id)arg1 error:(id)arg2 ;
-(void)hostApplicationDidEnterBackground;
-(void)hostApplicationWillEnterForeground;
-(void)imagePickerController:(id)arg0 didFinishPickingMediaWithInfo:(id)arg1 ;
-(void)imagePickerControllerDidCancel:(id)arg0 ;
-(void)imageSizeView:(id)arg0 changedSelectedScaleTo:(NSUInteger)arg1 ;
-(void)importDocument;
-(void)insertDrawing;
-(void)insertPhotoOrVideo;
-(void)insertPhotoOrVideoWithAssetIdentifier:(id)arg0 info:(id)arg1 ;
-(void)loadView;
-(void)mailCompositionContext:(id)arg0 didFinishLoadingMessage:(id)arg1 legacyMessage:(id)arg2 error:(id)arg3 ;
-(void)mailCompositionContext:(id)arg0 messageDidChange:(id)arg1 ;
-(void)markupAttachment:(id)arg0 ;
-(void)photoPicker:(id)arg0 didDeselectAssetWithIdentifier:(id)arg1 ;
-(void)photoPicker:(id)arg0 didSelectAssetWithIdentifier:(id)arg1 mediaInfo:(id)arg2 ;
-(void)photoPickerDidCancel:(id)arg0 ;
-(void)photoPickerDidCancelSystemImagePicker:(id)arg0 ;
-(void)pickInitialFirstResponder;
-(void)popoverPresentationController:(id)arg0 willRepositionPopoverToRect:(struct CGRect *)arg1 inView:(*id)arg2 ;
-(void)prepareForPopoverPresentation:(id)arg0 ;
-(void)presentSaveDeleteDialogOrClose;
-(void)presentationControllerDidDismiss:(id)arg0 ;
-(void)previewController:(id)arg0 didSaveEditedCopyOfPreviewItem:(id)arg1 atURL:(id)arg2 ;
-(void)previewControllerDidDismiss:(id)arg0 ;
-(void)recipientViewDidBecomeFirstResponder:(id)arg0 ;
-(void)recipientViewDidResignFirstResponder:(id)arg0 ;
-(void)removeAddress:(id)arg0 field:(int)arg1 ;
-(void)saveAndResignFirstResponder;
-(void)saveFirstResponder;
-(void)scanDocument;
-(void)secureMIMECompositionManager:(id)arg0 encryptionStatusDidChange:(int)arg1 context:(id)arg2 ;
-(void)secureMIMECompositionManager:(id)arg0 signingStatusDidChange:(int)arg1 context:(id)arg2 ;
-(void)securityScopeForURL:(id)arg0 withHandler:(id)arg1 ;
-(void)selectNextSearchResultForComposeRecipientView:(id)arg0 ;
-(void)selectPreviousSearchResultForComposeRecipientView:(id)arg0 ;
-(void)send:(id)arg0 ;
-(void)sendMessage:(NSUInteger)arg0 ;
-(void)serializedPlaceholderForFileName:(id)arg0 fileSize:(NSInteger)arg1 mimeType:(id)arg2 contentID:(id)arg3 withHandler:(id)arg4 ;
-(void)setAddresses:(id)arg0 field:(int)arg1 ;
-(void)setBccRecipients:(id)arg0 ;
-(void)setCaretPosition:(NSUInteger)arg0 ;
-(void)setCcRecipients:(id)arg0 ;
-(void)setCompositionContext:(id)arg0 ;
-(void)setContentVisible:(BOOL)arg0 ;
-(void)setDraftMessage:(id)arg0 ;
-(void)setHeadersForDraft;
-(void)setHosted:(BOOL)arg0 ;
-(void)setInitialTitle:(id)arg0 ;
-(void)setOriginalMessageWasEncrypted:(BOOL)arg0 ;
-(void)setPrefersLargeTitles:(BOOL)arg0 ;
-(void)setProgressUIVisible:(BOOL)arg0 animated:(BOOL)arg1 ;
-(void)setRecipientsKeyboardType:(NSInteger)arg0 ;
-(void)setSavedHeaders:(id)arg0 ;
-(void)setSendingEmailAddress:(id)arg0 ;
-(void)setToRecipients:(id)arg0 ;
-(void)showMissingAttachmentDataAlert;
-(void)showPhotoPickerWithSourceType:(NSInteger)arg0 fromSource:(id)arg1 ;
-(void)showStyleSelector:(id)arg0 ;
-(void)takeFocusFromComposeWebView:(id)arg0 inDirection:(NSUInteger)arg1 ;
-(void)tappedSMIMEButton;
-(void)traitCollectionDidChange:(id)arg0 ;
-(void)updateSignature;
-(void)updateUserActivityState:(id)arg0 ;
-(void)userActivity:(id)arg0 didReceiveInputStream:(id)arg1 outputStream:(id)arg2 ;
-(void)viewDidAppear:(BOOL)arg0 ;
-(void)viewDidDisappear:(BOOL)arg0 ;
-(void)viewDidLoad;
-(void)viewDidUnload;
-(void)viewLayoutMarginsDidChange;
-(void)viewWillAppear:(BOOL)arg0 ;
-(void)viewWillDisappear:(BOOL)arg0 ;
-(void)viewWillUnload;
-(void)willRotateToInterfaceOrientation:(NSInteger)arg0 duration:(CGFloat)arg1 ;


@end


#endif