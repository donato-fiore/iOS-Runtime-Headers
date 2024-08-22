// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef ICNOTEEDITORVIEWCONTROLLER_H
#define ICNOTEEDITORVIEWCONTROLLER_H

@class UIBarButtonItem, NSLayoutConstraint, ICSelectorDelayer, ICAttachmentInsertionController, ICAuthorHighlightsController, UIResponder, NotesBackgroundView, NSUUID, UITouch, NSDate, NSString, NSArray, ICGelatoCollaborationController, ICHandwritingDebugWindow, ICHashtagController, ICManagedObjectContextChangeController, ICTextController, ICInkPaletteController, UIBarButtonItemGroup, ICInvitation, PKTool, UIAlertController, ICPasswordEntryViewController, ICMentionsController, ICNote, ICNoteContext, ICShareNoteExporter, NSUserActivity, TTMergeableStringSelection, ICInkToolPickerResponder, UIButton, UIViewController, UIView, NSMutableDictionary, NSRegularExpression, NSAttributedString, ICInlineCanvasTextAttachment, UITextRange, NSUndoManager, TPKContent, TPKContentController, TPKContentView, TPKContentPopoverViewController, UIToolbar, ICViewControllerManager;
@protocol ICAccessibilityChildReparentingController, ICAddCollaboratorsActivityDelegate, ICAttachmentInsertionDelegate, ICAudioBarViewControllerDelegate, ICBaseTextViewDelegate, ICDocCamViewControllerDelegate, ICRemoteDocCamViewControllerDelegate, ICHandwritingDebugDelegate, ICHashtagViewControllerDelegate, ICInkPaletteControllerDelegate, ICInkToolPickerResponderDelegate, ICMentionsAnalyticsDelegate, ICHashtagAnalyticsDelegate, ICNoteEditorInputAccessoryViewDelegate, ICStyleSelectorDelegate, NSUserActivityDelegate, PKRulerHostingDelegate, PKScribbleInteractionDelegate, TPKContentControllerDelegate, UIGestureRecognizerDelegate, UINavigationControllerDelegate, UIPopoverPresentationControllerDelegate, UITextViewDrawingDelegate, _UIViewBoundingPathChangeObserver, ICManagedObjectContextChangeControllerDelegate, ICAttachmentViewDelegate, ICAuxiliaryTextViewHosting, ICNoteEditing, UITextViewDelegate, ICAuxiliaryStyling, ICNoteEditorDelegate, OS_dispatch_queue;


#import "ICScrollViewDelegateViewController.h"
#import "ICActivityStreamDockView.h"
#import "ICTextViewScrollState.h"
#import "ICAttributionSidebarController.h"
#import "ICAudioBarViewController.h"
#import "ICAuthorHighlightsUpdater.h"
#import "ICAttachmentPresenter.h"
#import "ICInvitationViewController.h"
#import "ICNoteMergeabilityController.h"
#import "ICNoteUserActivityState.h"
#import "ICSystemPaperLinkBarViewController.h"
#import "ICSidecarInsertMenu.h"
#import "ICStyleSelectorViewController.h"
#import "ICNoteEditorTextFindingController.h"
#import "ICTextView.h"
#import "ICTextViewController.h"
#import "ICNoteEditorInputAccessoryView.h"
#import "ICUnsupportedNoteView.h"
#import "ICVisualAssetImportController.h"

@interface ICNoteEditorViewController : ICScrollViewDelegateViewController <ICAccessibilityChildReparentingController, ICAddCollaboratorsActivityDelegate, ICAttachmentInsertionDelegate, ICAudioBarViewControllerDelegate, ICBaseTextViewDelegate, ICDocCamViewControllerDelegate, ICRemoteDocCamViewControllerDelegate, ICHandwritingDebugDelegate, ICHashtagViewControllerDelegate, ICInkPaletteControllerDelegate, ICInkToolPickerResponderDelegate, ICMentionsAnalyticsDelegate, ICHashtagAnalyticsDelegate, ICNoteEditorInputAccessoryViewDelegate, ICStyleSelectorDelegate, NSUserActivityDelegate, PKRulerHostingDelegate, PKScribbleInteractionDelegate, TPKContentControllerDelegate, UIGestureRecognizerDelegate, UINavigationControllerDelegate, UIPopoverPresentationControllerDelegate, UITextViewDrawingDelegate, _UIViewBoundingPathChangeObserver, ICManagedObjectContextChangeControllerDelegate, ICAttachmentViewDelegate, ICAuxiliaryTextViewHosting, ICNoteEditing, UITextViewDelegate>



@property (retain, nonatomic) UIBarButtonItem *actionBarButton; // ivar: _actionBarButton
@property (retain, nonatomic) ICActivityStreamDockView *activityStreamToolbar; // ivar: _activityStreamToolbar
@property (retain, nonatomic) NSLayoutConstraint *activityStreamToolbarBottomConstraint; // ivar: _activityStreamToolbarBottomConstraint
@property (nonatomic) BOOL addDocumentScanAfterViewAppears; // ivar: _addDocumentScanAfterViewAppears
@property (retain, nonatomic) UIBarButtonItem *addImageAttachmentButton; // ivar: _addImageAttachmentButton
@property (retain, nonatomic) UIBarButtonItem *addImageAttachmentCenterButton; // ivar: _addImageAttachmentCenterButton
@property (retain, nonatomic) UIBarButtonItem *addTableButton; // ivar: _addTableButton
@property (retain, nonatomic) UIBarButtonItem *addTableCenterButton; // ivar: _addTableCenterButton
@property (nonatomic) BOOL addToDoListAfterViewAppears; // ivar: _addToDoListAfterViewAppears
@property (retain, nonatomic) UIBarButtonItem *addTodoBarButton; // ivar: _addTodoBarButton
@property (nonatomic) BOOL animateRangeToScrollToVisible; // ivar: _animateRangeToScrollToVisible
@property (retain, nonatomic) ICSelectorDelayer *applyAccessibilityInfoDelayer; // ivar: _applyAccessibilityInfoDelayer
@property (retain, nonatomic) ICTextViewScrollState *archivedScrollStateToApply; // ivar: _archivedScrollStateToApply
@property (retain, nonatomic) ICAttachmentInsertionController *attachmentInsertionController; // ivar: _attachmentInsertionController
@property (readonly, nonatomic) ICAttributionSidebarController *attributionSidebarController; // ivar: _attributionSidebarController
@property (retain, nonatomic) ICAudioBarViewController *audioBarViewController; // ivar: _audioBarViewController
@property (retain, nonatomic) ICAuthorHighlightsController *authorHighlightsController; // ivar: _authorHighlightsController
@property (retain, nonatomic) ICAuthorHighlightsUpdater *authorHighlightsUpdater; // ivar: _authorHighlightsUpdater
@property (weak, nonatomic) UIResponder *auxiliaryResponder; // ivar: _auxiliaryResponder
@property (weak, nonatomic) NSObject<ICAuxiliaryStyling> *auxiliaryStylingController; // ivar: _auxiliaryStylingController
@property (readonly, nonatomic) NotesBackgroundView *backgroundView;
@property (readonly, nonatomic) BOOL canFindInNote;
@property (nonatomic) BOOL canShowLinkBar; // ivar: _canShowLinkBar
@property (readonly, nonatomic) BOOL canShowOverflowActionMenu;
@property (nonatomic) CGPoint changePasswordContentOffset; // ivar: _changePasswordContentOffset
@property (retain, nonatomic) UIBarButtonItem *changeStyleBarButton; // ivar: _changeStyleBarButton
@property (retain, nonatomic) UIBarButtonItem *changeStyleButton; // ivar: _changeStyleButton
@property (retain, nonatomic) UIBarButtonItem *changeStyleCenterButton; // ivar: _changeStyleCenterButton
@property (retain, nonatomic) UIBarButtonItem *closeAuxiliaryWindowBarButton; // ivar: _closeAuxiliaryWindowBarButton
@property (retain, nonatomic) UIBarButtonItem *composeNoteBarButton; // ivar: _composeNoteBarButton
@property (retain, nonatomic) UIBarButtonItem *composeNoteNavBarButton; // ivar: _composeNoteNavBarButton
@property (retain, nonatomic) NSUUID *createdGalleryAttachmentUUID; // ivar: _createdGalleryAttachmentUUID
@property (readonly, nonatomic) ICTextViewScrollState *currentScrollState;
@property (readonly, nonatomic) BOOL currentSelectionContainsListOrFixedWidth;
@property (retain, nonatomic) UITouch *currentStrokeStartTouch; // ivar: _currentStrokeStartTouch
@property (nonatomic) NSInteger currentWritingDirection; // ivar: _currentWritingDirection
@property (retain, nonatomic) NSDate *dateOfLastStrokeOrNewDrawing; // ivar: _dateOfLastStrokeOrNewDrawing
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<ICNoteEditorDelegate> *delegate; // ivar: _delegate
@property (retain, nonatomic) UIBarButtonItem *deleteBarButton; // ivar: _deleteBarButton
@property (retain, nonatomic) UIBarButtonItem *deleteNavBarButton; // ivar: _deleteNavBarButton
@property (readonly, copy) NSString *description;
@property (nonatomic) BOOL didDrawWithPencilWithoutPalette; // ivar: _didDrawWithPencilWithoutPalette
@property (nonatomic) BOOL didEndEditingForAddingImageAttachment; // ivar: _didEndEditingForAddingImageAttachment
@property (nonatomic) BOOL doNotAdvanceInsertionPointAfterInsertingAttachment; // ivar: _doNotAdvanceInsertionPointAfterInsertingAttachment
@property (retain, nonatomic) UIBarButtonItem *doneNavBarButton; // ivar: _doneNavBarButton
@property (readonly, nonatomic, getter=isEditingOnSecureScreen) BOOL editingOnSecureScreen;
@property (readonly, nonatomic, getter=isEditingOnSystemPaper) BOOL editingOnSystemPaper;
@property (retain, nonatomic) NSArray *extraItemsBeforeCustomCalloutOptions; // ivar: _extraItemsBeforeCustomCalloutOptions
@property (retain, nonatomic) UIBarButtonItem *flexibleSpaceBarItem; // ivar: _flexibleSpaceBarItem
@property (retain, nonatomic) UIBarButtonItem *gelatoCollaborationBarButtonItem; // ivar: _gelatoCollaborationBarButtonItem
@property (retain, nonatomic) ICGelatoCollaborationController *gelatoCollaborationController; // ivar: _gelatoCollaborationController
@property (retain, nonatomic) ICSelectorDelayer *handwritingDebugSelectorDelayer; // ivar: _handwritingDebugSelectorDelayer
@property (retain, nonatomic) ICHandwritingDebugWindow *handwritingDebugWindow; // ivar: _handwritingDebugWindow
@property (nonatomic) BOOL hasKeyboardBeenVisibleBefore; // ivar: _hasKeyboardBeenVisibleBefore
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) ICHashtagController *hashtagController; // ivar: _hashtagController
@property (retain, nonatomic) ICManagedObjectContextChangeController *hashtagsChangeController; // ivar: _hashtagsChangeController
@property (copy, nonatomic) NSString *hostBundleIdentifier; // ivar: _hostBundleIdentifier
@property (retain, nonatomic) UIBarButtonItem *iCloudShareOffNavBarButton; // ivar: _iCloudShareOffNavBarButton
@property (retain, nonatomic) UIBarButtonItem *iCloudShareOnFolderNavBarButton; // ivar: _iCloudShareOnFolderNavBarButton
@property (retain, nonatomic) UIBarButtonItem *iCloudShareOnNoteNavBarButton; // ivar: _iCloudShareOnNoteNavBarButton
@property (retain, nonatomic) ICAttachmentPresenter *iPhoneSystemPaperAttachmentPresenter; // ivar: _iPhoneSystemPaperAttachmentPresenter
@property (retain, nonatomic) UIBarButtonItem *iPhoneSystemPaperCancelBarButton; // ivar: _iPhoneSystemPaperCancelBarButton
@property (nonatomic) BOOL iPhoneSystemPaperDidSaveOrCancel; // ivar: _iPhoneSystemPaperDidSaveOrCancel
@property (retain, nonatomic) UIBarButtonItem *iPhoneSystemPaperSaveBarButton; // ivar: _iPhoneSystemPaperSaveBarButton
@property (readonly, nonatomic) UIBarButtonItem *icaxAddAttachmentBarItem; // ivar: _icaxAddAttachmentBarItem
@property (readonly, nonatomic) ICAudioBarViewController *icaxAudioBarViewController; // ivar: _icaxAudioBarViewController
@property (readonly, nonatomic) UIBarButtonItem *icaxCameraBarButton; // ivar: _icaxCameraBarButton
@property (readonly, nonatomic) UIBarButtonItem *icaxCameraBarButtonCompact; // ivar: _icaxCameraBarButtonCompact
@property (readonly, nonatomic) UIBarButtonItem *icaxDrawBarButton; // ivar: _icaxDrawBarButton
@property (readonly, nonatomic) UIBarButtonItem *icaxDrawBarButtonCompact; // ivar: _icaxDrawBarButtonCompact
@property (readonly, nonatomic) UIBarButtonItem *icaxRecordAudioBarButton; // ivar: _icaxRecordAudioBarButton
@property (readonly, nonatomic) UIBarButtonItem *icaxRecordAudioBarButtonCompact; // ivar: _icaxRecordAudioBarButtonCompact
@property (readonly, nonatomic) UIBarButtonItem *icaxSelectStyleBarItem; // ivar: _icaxSelectStyleBarItem
@property (readonly, nonatomic) ICTextController *icaxTextController;
@property (readonly, nonatomic) UIBarButtonItem *icaxToggleTodoBarItem; // ivar: _icaxToggleTodoBarItem
@property (retain, nonatomic) NSArray *indentKeyCommands; // ivar: _indentKeyCommands
@property (retain, nonatomic) NSArray *indentRTLKeyCommands; // ivar: _indentRTLKeyCommands
@property (retain, nonatomic) ICInkPaletteController *inkPaletteController; // ivar: _inkPaletteController
@property (nonatomic) NSUInteger inkPickerState; // ivar: _inkPickerState
@property (retain, nonatomic) UIBarButtonItem *inlineSketchBarButton; // ivar: _inlineSketchBarButton
@property (nonatomic) BOOL inlineSketchBarButtonHasSelectedImage; // ivar: _inlineSketchBarButtonHasSelectedImage
@property (retain, nonatomic) ICSelectorDelayer *inlineSketchVisualIndicatorFadeOutSelectorDelayer; // ivar: _inlineSketchVisualIndicatorFadeOutSelectorDelayer
@property (nonatomic) CGFloat inputAccessoryViewHeight; // ivar: _inputAccessoryViewHeight
@property (retain, nonatomic) UIBarButtonItemGroup *inputAssistantLeadingGroup; // ivar: _inputAssistantLeadingGroup
@property (retain, nonatomic) UIBarButtonItemGroup *inputAssistantTrailingGroup; // ivar: _inputAssistantTrailingGroup
@property (retain, nonatomic) UIBarButtonItem *insertBarButton; // ivar: _insertBarButton
@property (retain, nonatomic) UIBarButtonItem *insertToolbarItem; // ivar: _insertToolbarItem
@property (retain, nonatomic) ICInvitation *invitation; // ivar: _invitation
@property (retain, nonatomic) ICInvitationViewController *invitationViewController; // ivar: _invitationViewController
@property (nonatomic) BOOL isAddingImageAttachment; // ivar: _isAddingImageAttachment
@property (nonatomic) BOOL isConvertToTag; // ivar: _isConvertToTag
@property (nonatomic) BOOL isDrawingStroke; // ivar: _isDrawingStroke
@property (nonatomic) BOOL isDrawingStrokeWithPencil; // ivar: _isDrawingStrokeWithPencil
@property (nonatomic) BOOL isEditingNewNote; // ivar: _isEditingNewNote
@property (readonly, nonatomic) BOOL isInkPickerShowing;
@property (nonatomic) BOOL isLoadingStyleSelectorInputView; // ivar: _isLoadingStyleSelectorInputView
@property (nonatomic) BOOL isPerformingDeleteAnimation; // ivar: _isPerformingDeleteAnimation
@property (nonatomic) BOOL isPreviewingAttachmentFromNote; // ivar: _isPreviewingAttachmentFromNote
@property (nonatomic) BOOL isSelecting; // ivar: _isSelecting
@property (nonatomic) BOOL isSettingEditing; // ivar: _isSettingEditing
@property (nonatomic) BOOL isSettingSelection; // ivar: _isSettingSelection
@property (nonatomic) BOOL isShowingUnseenShareSummaryIndicator; // ivar: _isShowingUnseenShareSummaryIndicator
@property (copy, nonatomic) NSDate *keyboardAnimateInFinishTime; // ivar: _keyboardAnimateInFinishTime
@property (retain, nonatomic) NSArray *keyboardButtonItems; // ivar: _keyboardButtonItems
@property (readonly, nonatomic) BOOL keyboardCameraIsAvailable; // ivar: _keyboardCameraIsAvailable
@property (retain, nonatomic) NSDate *keyboardDidShowAnimationDate; // ivar: _keyboardDidShowAnimationDate
@property (readonly, nonatomic) PKTool *lastSavedInkingTool;
@property (nonatomic) _NSRange lastSelectedRange; // ivar: _lastSelectedRange
@property (retain, nonatomic) UIBarButtonItem *leadingBarItem; // ivar: _leadingBarItem
@property (retain, nonatomic) UIAlertController *limitExceededAlertController; // ivar: _limitExceededAlertController
@property (nonatomic) BOOL linksBarNeedsAnimationWhileEditorIsVisible; // ivar: _linksBarNeedsAnimationWhileEditorIsVisible
@property (retain, nonatomic) ICPasswordEntryViewController *lockIconCoverViewController; // ivar: _lockIconCoverViewController
@property (retain, nonatomic) UIBarButtonItem *lockNavBarButton; // ivar: _lockNavBarButton
@property (retain, nonatomic) ICMentionsController *mentionsController; // ivar: _mentionsController
@property (retain, nonatomic) ICNoteMergeabilityController *mergeabilityController; // ivar: _mergeabilityController
@property (retain, nonatomic) UIBarButtonItem *moveBarButton; // ivar: _moveBarButton
@property (retain, nonatomic) UIBarButtonItem *moveNavBarButton; // ivar: _moveNavBarButton
@property (nonatomic) BOOL needsToPerformInitialPaperAnimations; // ivar: _needsToPerformInitialPaperAnimations
@property (retain, nonatomic) ICNote *note; // ivar: _note
@property (retain, nonatomic) ICManagedObjectContextChangeController *noteAndFolderChangeController; // ivar: _noteAndFolderChangeController
@property (readonly, nonatomic) ICNoteContext *noteContext;
@property (retain, nonatomic) ICShareNoteExporter *noteExporter; // ivar: _noteExporter
@property (copy, nonatomic) NSDate *noteLastModificationDate; // ivar: _noteLastModificationDate
@property (retain, nonatomic) ICSelectorDelayer *noteOrFolderChangedCallbackSelectorDelayer; // ivar: _noteOrFolderChangedCallbackSelectorDelayer
@property (retain) NSUserActivity *noteUserActivity; // ivar: _noteUserActivity
@property (retain) ICNoteUserActivityState *noteUserActivityState; // ivar: _noteUserActivityState
@property (retain, nonatomic) UIBarButtonItem *openInkPickerToolbarButton; // ivar: _openInkPickerToolbarButton
@property (retain, nonatomic) TTMergeableStringSelection *originalEndOfNote; // ivar: _originalEndOfNote
@property (retain, nonatomic) ICInkToolPickerResponder *paletteResponder; // ivar: _paletteResponder
@property (nonatomic, getter=isPaperLinkBarShowing) BOOL paperLinkBarShowing; // ivar: _paperLinkBarShowing
@property (retain, nonatomic) NSLayoutConstraint *paperLinkBarTopConstraint; // ivar: _paperLinkBarTopConstraint
@property (retain, nonatomic) ICSystemPaperLinkBarViewController *paperLinkBarViewController; // ivar: _paperLinkBarViewController
@property (nonatomic) NSInteger parentType; // ivar: _parentType
@property (retain, nonatomic) ICPasswordEntryViewController *passwordEntryViewController; // ivar: _passwordEntryViewController
@property (weak, nonatomic) ICNote *previousNote; // ivar: _previousNote
@property (nonatomic) BOOL previouslyHadMarkedText; // ivar: _previouslyHadMarkedText
@property (retain, nonatomic) UIBarButtonItem *quickNoteAllNotesBarButton; // ivar: _quickNoteAllNotesBarButton
@property (nonatomic) _NSRange rangeToScrollToVisible; // ivar: _rangeToScrollToVisible
@property (retain, nonatomic) UIBarButtonItem *redoBarButton; // ivar: _redoBarButton
@property (retain, nonatomic) UIButton *redoButton; // ivar: _redoButton
@property (retain, nonatomic) UIBarButtonItem *redoNavBarButton; // ivar: _redoNavBarButton
@property (readonly, nonatomic) UIViewController *rootViewController;
@property (retain, nonatomic) UIView *rulerHostingView; // ivar: _rulerHostingView
@property (retain, nonatomic) NSMutableDictionary *savedScrollStates; // ivar: _savedScrollStates
@property (retain, nonatomic) NSRegularExpression *searchRegex; // ivar: _searchRegex
@property (retain, nonatomic) NSAttributedString *searchableStringToScrollToVisible; // ivar: _searchableStringToScrollToVisible
@property (retain, nonatomic) UIBarButtonItem *selectStyleBarItem; // ivar: _selectStyleBarItem
@property (weak, nonatomic) ICInlineCanvasTextAttachment *selectedCanvasAttachment; // ivar: _selectedCanvasAttachment
@property (retain, nonatomic) UITextRange *selectedTextRangeToRestoreAfterBarSourcedPopoverPresentation; // ivar: _selectedTextRangeToRestoreAfterBarSourcedPopoverPresentation
@property (retain, nonatomic) UIBarButtonItem *shareNavBarButtonItem; // ivar: _shareNavBarButtonItem
@property (nonatomic) BOOL shouldAllowAttributionSidebar; // ivar: _shouldAllowAttributionSidebar
@property (nonatomic) BOOL shouldBeginEditingAfterNoteUnlock; // ivar: _shouldBeginEditingAfterNoteUnlock
@property (nonatomic) BOOL shouldClearBackgroundColorAfterPreview; // ivar: _shouldClearBackgroundColorAfterPreview
@property (nonatomic) BOOL shouldClearCornerRadiusAfterPreview; // ivar: _shouldClearCornerRadiusAfterPreview
@property (nonatomic) BOOL shouldFireNoteViewEventOnViewDisappear; // ivar: _shouldFireNoteViewEventOnViewDisappear
@property (readonly, nonatomic) BOOL shouldForceLightContent;
@property (nonatomic) BOOL shouldInputAccessoryViewButtonsBeVisible; // ivar: _shouldInputAccessoryViewButtonsBeVisible
@property (nonatomic) BOOL shouldOverscrollScrollState; // ivar: _shouldOverscrollScrollState
@property (nonatomic) BOOL shouldRemoveEmptyNoteWhenViewDisappeared; // ivar: _shouldRemoveEmptyNoteWhenViewDisappeared
@property (nonatomic) BOOL shouldResetTextViewContentOffsetWhenAppearing; // ivar: _shouldResetTextViewContentOffsetWhenAppearing
@property (nonatomic) BOOL shouldTrackNoteViewEventAnalyticsFromSettingNote; // ivar: _shouldTrackNoteViewEventAnalyticsFromSettingNote
@property (nonatomic) BOOL showInkPickerAfterViewAppears; // ivar: _showInkPickerAfterViewAppears
@property (retain, nonatomic) UIBarButtonItem *showInkPickerBarItem; // ivar: _showInkPickerBarItem
@property (retain, nonatomic) UIBarButtonItem *showInkPickerButton; // ivar: _showInkPickerButton
@property (nonatomic) BOOL showInsertUIAfterViewAppears; // ivar: _showInsertUIAfterViewAppears
@property (retain, nonatomic) ICSelectorDelayer *showOrHideSearchPatternHighlightsDelayer; // ivar: _showOrHideSearchPatternHighlightsDelayer
@property (nonatomic, getter=isShowingChecklistItems) BOOL showingChecklistItems; // ivar: _showingChecklistItems
@property (nonatomic, getter=isShowingIndentationItems) BOOL showingIndentationItems; // ivar: _showingIndentationItems
@property (retain, nonatomic) ICSidecarInsertMenu *sidecarInsertMenu; // ivar: _sidecarInsertMenu
@property (nonatomic, getter=isSplitViewExpandingOrCollapsing) BOOL splitViewExpandingOrCollapsing; // ivar: _splitViewExpandingOrCollapsing
@property (nonatomic) BOOL startEditingAfterViewAppears; // ivar: _startEditingAfterViewAppears
@property (retain, nonatomic) ICStyleSelectorViewController *styleSelectorController; // ivar: _styleSelectorController
@property (retain, nonatomic) UIView *styleSelectorDummyInputView; // ivar: _styleSelectorDummyInputView
@property (nonatomic, getter=isStyleSelectorInputViewPresenting) BOOL styleSelectorInputViewPresenting; // ivar: _styleSelectorInputViewPresenting
@property (readonly, nonatomic) BOOL styleSelectorInputViewShowing;
@property (readonly) Class superclass;
@property (nonatomic) BOOL suspendBarButtonUpdates; // ivar: _suspendBarButtonUpdates
@property (nonatomic) BOOL suspendSelectedRangeUpdates; // ivar: _suspendSelectedRangeUpdates
@property (nonatomic) BOOL suspendTapGestureRecognizer; // ivar: _suspendTapGestureRecognizer
@property (retain, nonatomic) NSArray *swipeGestureRecognizers; // ivar: _swipeGestureRecognizers
@property (nonatomic) BOOL tableButtonsShowMore; // ivar: _tableButtonsShowMore
@property (retain, nonatomic) UIBarButtonItem *tableToolbarItem; // ivar: _tableToolbarItem
@property (readonly, nonatomic) ICTextController *textController;
@property (readonly, nonatomic) ICNoteEditorTextFindingController *textFindingController; // ivar: _textFindingController
@property (readonly, nonatomic) ICTextView *textView;
@property (readonly, nonatomic) CGFloat textViewBottomInsetThatWeWant;
@property (retain, nonatomic) ICTextViewController *textViewController; // ivar: _textViewController
@property (readonly, nonatomic) ICTextView *textViewIfLoaded;
@property (retain, nonatomic) ICNoteEditorInputAccessoryView *textViewInputAccessoryView; // ivar: _textViewInputAccessoryView
@property (nonatomic) CGFloat textViewMinimumBottomInset; // ivar: _textViewMinimumBottomInset
@property (nonatomic) CGFloat textViewScrollIndicatorBottomInsetOverride; // ivar: _textViewScrollIndicatorBottomInsetOverride
@property (nonatomic) CGFloat textViewScrollIndicatorBottomInsetOverrideToRestore; // ivar: _textViewScrollIndicatorBottomInsetOverrideToRestore
@property (readonly, nonatomic) UIEdgeInsets textViewScrollIndicatorInsetsThatWeWant;
@property (readonly, nonatomic) CGFloat textViewTopInsetThatWeWant;
@property (readonly, nonatomic) NSUndoManager *textViewUndoManager;
@property (retain, nonatomic) TPKContent *tipContent; // ivar: _tipContent
@property (retain, nonatomic) TPKContentController *tipContentController; // ivar: _tipContentController
@property (nonatomic) BOOL tipContentControllerDelegateEnabled; // ivar: _tipContentControllerDelegateEnabled
@property (retain, nonatomic) TPKContentView *tipContentView; // ivar: _tipContentView
@property (retain, nonatomic) TPKContentPopoverViewController *tipContentViewController; // ivar: _tipContentViewController
@property (retain, nonatomic) UIBarButtonItem *toggleTodoBarItem; // ivar: _toggleTodoBarItem
@property (retain, nonatomic) UIBarButtonItem *toggleTodoStyleButton; // ivar: _toggleTodoStyleButton
@property (retain, nonatomic) UIBarButtonItem *toggleTodoStyleCenterButton; // ivar: _toggleTodoStyleCenterButton
@property (nonatomic, getter=isTogglingLock) BOOL togglingLock; // ivar: _togglingLock
@property (retain, nonatomic) UIToolbar *toolbar; // ivar: _toolbar
@property (nonatomic) NSUInteger toolbarState; // ivar: _toolbarState
@property (retain, nonatomic) UIBarButtonItem *trailingBarItem; // ivar: _trailingBarItem
@property (retain, nonatomic) UIBarButtonItem *undoBarButton; // ivar: _undoBarButton
@property (retain, nonatomic) UIButton *undoButton; // ivar: _undoButton
@property (retain, nonatomic) UIBarButtonItem *undoNavBarButton; // ivar: _undoNavBarButton
@property (retain, nonatomic) UIBarButtonItem *unlockNavBarButton; // ivar: _unlockNavBarButton
@property (retain, nonatomic) ICUnsupportedNoteView *unsupportedNoteView; // ivar: _unsupportedNoteView
@property (nonatomic) BOOL updateContentSizeCategoryWhenVisible; // ivar: _updateContentSizeCategoryWhenVisible
@property (retain, nonatomic) ICSelectorDelayer *updateNoteUserActivityStateDelayer; // ivar: _updateNoteUserActivityStateDelayer
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *userActivityUpdateQueue; // ivar: _userActivityUpdateQueue
@property (nonatomic) BOOL userWantsToSeeDateLabel; // ivar: _userWantsToSeeDateLabel
@property (weak, nonatomic) ICViewControllerManager *viewControllerManager; // ivar: _viewControllerManager
@property (retain, nonatomic) ICVisualAssetImportController *visualAssetImportController; // ivar: _visualAssetImportController
@property (readonly, nonatomic) BOOL wantsToRemainFirstResponder;
@property (nonatomic) BOOL wasEditingBeforeDrawing; // ivar: _wasEditingBeforeDrawing
@property (nonatomic) BOOL wasWindowlessDuringTransitionToSize; // ivar: _wasWindowlessDuringTransitionToSize


+(id)formatKeyboardShortcutMenu;
+(id)keyPathsForValuesAffectingIsInGridView;
+(id)keyPathsForValuesAffectingTextView;
+(void)dismissChildPresentedViewControllersInPostOrder:(id)arg0 animated:(BOOL)arg1 completion:(id)arg2 ;
+(void)initialize;
-(BOOL)_canShowWhileLocked;
-(BOOL)_scribbleInteraction:(id)arg0 shouldBeginAtLocation:(struct CGPoint )arg1 ;
-(BOOL)addSystemPaperLink:(id)arg0 updateFirstResponder:(BOOL)arg1 ;
-(BOOL)allowsAccessibilityChildReparenting;
-(BOOL)allowsNewTextLength:(NSUInteger)arg0 ;
-(BOOL)attachmentPresenter:(id)arg0 useFullPDFTransitionForAttachment:(id)arg1 ;
-(BOOL)becomeFirstResponder;
-(BOOL)canAddToTags;
-(BOOL)canBecomeFirstResponder;
-(BOOL)canConvertToTag;
-(BOOL)canConvertToText;
-(BOOL)canIndentByAmount:(NSInteger)arg0 ;
-(BOOL)canIndentLeft;
-(BOOL)canIndentRight;
-(BOOL)canMoveSelectedListItemDown;
-(BOOL)canMoveSelectedListItemUp;
-(BOOL)canOpenLink;
-(BOOL)canPerformAction:(SEL)arg0 withSender:(id)arg1 ;
-(BOOL)documentCameraController:(id)arg0 canAddImages:(NSUInteger)arg1 ;
-(BOOL)gestureRecognizer:(id)arg0 shouldReceiveTouch:(id)arg1 ;
-(BOOL)gestureRecognizer:(id)arg0 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)arg1 ;
-(BOOL)gestureRecognizer:(id)arg0 shouldRequireFailureOfGestureRecognizer:(id)arg1 ;
-(BOOL)handleTapGestureForAttribution:(id)arg0 ;
-(BOOL)hasInlineTip;
-(BOOL)inkPalette:(id)arg0 shouldResignFirstResponder:(id)arg1 ;
-(BOOL)isDocumentCameraAvailable;
-(BOOL)isInGridView;
-(BOOL)isKeyboardCameraAvailable;
-(BOOL)isNotePasswordProtectedAndLocked;
-(BOOL)isPhotosLibraryAvailable;
-(BOOL)isPositionOnTodoItem:(struct CGPoint )arg0 ;
-(BOOL)isSwipeOnTodoItem:(id)arg0 ;
-(BOOL)keyboardResizerAutoscrollAboveKeyboard;
-(BOOL)managedObjectContextChangeControllerShouldUpdateImmediately:(id)arg0 ;
-(BOOL)recreateTextViewIfNecessary;
-(BOOL)resignFirstResponder;
-(BOOL)shouldBlockHitTestOnTextView:(id)arg0 event:(id)arg1 ;
-(BOOL)shouldEnablePencilGestures;
-(BOOL)shouldIgnoreTapToStartEditingTextView:(id)arg0 ;
-(BOOL)shouldInsertNewDrawingsAsPaper;
-(BOOL)shouldLockTextViewContentOffset;
-(BOOL)shouldRespondToPanGestureTouch:(id)arg0 forAttachment:(id)arg1 ;
-(BOOL)shouldShowInlineTipForCustomizationID:(NSInteger)arg0 ;
-(BOOL)shouldShowMenuItems;
-(BOOL)shouldStartEditingForTapGesture:(id)arg0 ;
-(BOOL)shouldUseiPadBarLayout;
-(BOOL)styleSelectorCanIndentLeft:(id)arg0 ;
-(BOOL)styleSelectorCanIndentRight:(id)arg0 ;
-(BOOL)textView:(id)arg0 canAddDrawingAtIndex:(NSUInteger)arg1 ;
-(BOOL)textView:(id)arg0 shouldChangeTextInRange:(struct _NSRange )arg1 replacementText:(id)arg2 ;
-(BOOL)textView:(id)arg0 shouldInteractWithURL:(id)arg1 inRange:(struct _NSRange )arg2 interaction:(NSInteger)arg3 ;
-(BOOL)textViewCanAddStroke:(id)arg0 ;
-(BOOL)textViewCanSelectDrawing:(id)arg0 ;
-(BOOL)textViewShouldBeginEditing:(id)arg0 ;
-(BOOL)toggleInkPickerAnimated:(BOOL)arg0 ;
-(BOOL)useInputViewForStyleSelector;
-(CGFloat)consumedBottomAreaForResizer:(id)arg0 ;
-(CGFloat)textViewBottomInsetThatWeWantForEditing:(BOOL)arg0 ;
-(CGFloat)textViewTopInsetThatWeWantWithWillEndDragging:(BOOL)arg0 ;
-(CGFloat)topInsetForResizer:(id)arg0 ;
-(NSInteger)adaptivePresentationStyleForPresentationController:(id)arg0 traitCollection:(id)arg1 ;
-(NSInteger)attributionSidebarVisibility;
-(NSInteger)icasPalettePositionFromPKPalettePosition:(NSInteger)arg0 ;
-(NSInteger)preferredStatusBarStyle;
-(NSUInteger)currentBIUSForStyleSelector;
-(id)addImageSubmenuWithSender:(id)arg0 ;
-(id)addNewNote;
-(id)addNewNoteWithEvent:(id)arg0 ;
-(id)addQuickNoteWithPencil:(BOOL)arg0 ;
-(id)attachmentPresenter:(id)arg0 transitionViewForAttachment:(id)arg1 ;
-(id)attributedStringFromHTML:(id)arg0 ;
-(id)barButtonItemForTipCustomizationID:(NSInteger)arg0 ;
-(id)barButtonItemWithImage:(id)arg0 selector:(SEL)arg1 ;
-(id)contentController:(id)arg0 clientContextMapForKeys:(id)arg1 ;
-(id)contentController:(id)arg0 contentView:(id)arg1 iconForCustomizationID:(NSInteger)arg2 ;
-(id)contentScrollView;
-(id)createNewNote;
-(id)currentStylesForStyleSelectorIgnoreTypingAttributes:(BOOL)arg0 ;
-(id)currentValidToolForNewDrawingOrNote;
-(id)defaultInkColor;
-(id)documentCameraControllerCreateDataCryptorIfNecessary;
-(id)drawingsForHandwritingDebugWindow:(id)arg0 ;
-(id)flexibleSpaceBarButtonItem;
-(id)getTableControllerFor:(id)arg0 ;
-(id)iCloudShareNavBarButton;
-(id)icSplitViewController;
-(id)initWithParentType:(NSInteger)arg0 ;
-(id)inkPaletteButtonView:(id)arg0 ;
-(id)inkPaletteUndoManager:(id)arg0 ;
-(id)inlineDrawingAttachmentForPoint:(struct CGPoint )arg0 ;
-(id)linkForSelection;
-(id)managedObjectContextChangeController:(id)arg0 managedObjectIDsToUpdateForUpdatedManagedObjects:(id)arg1 ;
-(id)menuElementForSourceType:(NSInteger)arg0 sender:(id)arg1 ;
-(id)nibBundle;
-(id)radarTitleForHandwritingDebugWindow:(id)arg0 ;
-(id)responderToMatch;
-(id)scanDataDelegateWithIdentifier:(id)arg0 ;
-(id)scrollView;
-(id)systemImageNameForAddCollaboratorsActivity:(id)arg0 ;
-(id)tableActionMenu:(id)arg0 ;
-(id)textStorage;
-(id)textView:(id)arg0 newAttachmentForFileType:(id)arg1 ;
-(id)tipFeatureForCustomizationID:(NSInteger)arg0 ;
-(id)titleForAddCollaboratorsActivity:(id)arg0 ;
-(id)undoManager;
-(id)userActivity;
-(struct _NSRange )charRangeForSwipeTextRange:(id)arg0 ;
-(struct _NSRange )visibleRange;
-(void)_accessibilityLoadAccessibilityInformation;
-(void)_boundingPathMayHaveChangedForView:(id)arg0 relativeToBoundsOriginOnly:(BOOL)arg1 ;
-(void)_handleKeyUIEvent:(id)arg0 ;
-(void)_iCloudShareButtonPressed:(id)arg0 ;
-(void)_scribbleInteraction:(id)arg0 willBeginWritingInElement:(id)arg1 ;
-(void)addKVOObserversForNote:(id)arg0 ;
-(void)addNewNoteIfNeeded;
-(void)addNote:(id)arg0 ;
-(void)addNote:(id)arg0 event:(id)arg1 ;
-(void)addSystemPaperAttachment;
-(void)addSystemPaperImageData:(id)arg0 updateFirstResponder:(BOOL)arg1 ;
-(void)addSystemPaperImageData:(id)arg0 updateFirstResponder:(BOOL)arg1 forceAddToPaper:(BOOL)arg2 ;
-(void)addTable:(id)arg0 ;
-(void)addToTags:(id)arg0 ;
-(void)addTodoListAtEndOfNote;
-(void)applicationDidBecomeActive:(id)arg0 ;
-(void)applicationDidEnterBackground:(id)arg0 ;
-(void)applyAccessibilityInfo;
-(void)applyScrollStateFromArchive:(id)arg0 ;
-(void)applyScrollStateIfAvailable;
-(void)attachmentBrickDidChangeSize;
-(void)attachmentInsertionController:(id)arg0 didAddAttachment:(id)arg1 atRange:(struct _NSRange )arg2 ;
-(void)attachmentInsertionController:(id)arg0 didAddInlineAttachment:(id)arg1 atRange:(struct _NSRange )arg2 textStorage:(id)arg3 ;
-(void)attachmentInsertionController:(id)arg0 willAddAttachment:(id)arg1 atRange:(struct _NSRange )arg2 ;
-(void)attachmentPresenterDidDismiss:(id)arg0 ;
-(void)attachmentsExceeded:(id)arg0 ;
-(void)audioBarViewControllerDone:(id)arg0 ;
-(void)audioPlaybackPlayNotification:(id)arg0 ;
-(void)authenticationAuthenticateBiometricsAttemptDidFail:(id)arg0 ;
-(void)blockAccessibilityScreenChangedNotificationsIfNecessaryForDuration:(CGFloat)arg0 ;
-(void)cancelFromSystemPaperCard:(id)arg0 ;
-(void)changeStyle:(id)arg0 ;
-(void)checkAll:(id)arg0 ;
-(void)cleanupAfterAddImageAttachmentOperation;
-(void)cleanupAfterBarSourcedPopoverPresentation;
-(void)cleanupAfterFingerDrawing;
-(void)clearTextViewSelectionForPencilKit;
-(void)clearTipContent:(id)arg0 animated:(BOOL)arg1 ;
-(void)contentController:(id)arg0 contentDidBecomeAvailable:(id)arg1 animated:(BOOL)arg2 ;
-(void)contentController:(id)arg0 didFinishWithContent:(id)arg1 animated:(BOOL)arg2 ;
-(void)contentController:(id)arg0 eventOccurred:(NSInteger)arg1 content:(id)arg2 context:(id)arg3 ;
-(void)contentSizeCategoryDidChange;
-(void)convertToTag:(id)arg0 ;
-(void)convertToText:(id)arg0 ;
-(void)createAndPresentCloudSharingControllerBySender:(id)arg0 ;
-(void)createInkPickerControllerIfNecessary;
-(void)createSystemPaperLinkBarIfNecessary;
-(void)createTodoListItem:(id)arg0 ;
-(void)createUndoRedoBarButtonsIfNecessary;
-(void)dealloc;
-(void)decreaseIndentation:(id)arg0 ;
-(void)deleteCurrentNote:(id)arg0 ;
-(void)didAddAttachmentForNoteNotification:(id)arg0 ;
-(void)didBeginFindInteraction;
-(void)didEndEditingNote;
-(void)didInvokeAnalyticsCalloutBarButtonActionOfType:(NSInteger)arg0 ;
-(void)didInvokeAnalyticsChecklistActionChecked:(BOOL)arg0 ;
-(void)disableTipContentControllerDelegateAnimated:(BOOL)arg0 ;
-(void)documentCameraController:(id)arg0 didFinishWithDocInfoCollection:(id)arg1 imageCache:(id)arg2 warnUser:(BOOL)arg3 ;
-(void)documentCameraController:(id)arg0 didFinishWithDocInfoCollection:(id)arg1 imageCache:(id)arg2 warnUser:(BOOL)arg3 closeViewController:(BOOL)arg4 ;
-(void)documentCameraControllerDidCancel:(id)arg0 ;
-(void)documentCameraControllerDidCancelWithPresentingViewController:(id)arg0 ;
-(void)documentCameraControllerDidRetake:(id)arg0 pageCount:(NSUInteger)arg1 ;
-(void)documentCameraPresentingViewController:(id)arg0 didFinishWithInfoCollection:(id)arg1 imageCache:(id)arg2 warnUser:(BOOL)arg3 closeViewController:(BOOL)arg4 ;
-(void)donateEditingIntentIfNecessary;
-(void)doneEditing;
-(void)doneEditing:(id)arg0 ;
-(void)enableTipContentControllerDelegate;
-(void)ensurePaperPreviewsExistIfNecessary;
-(void)ensureValidInkForNewDrawingOrNote;
-(void)fadeOutVisualIndicator;
-(void)fetchAll;
-(void)forceLightContentDidChange:(id)arg0 ;
-(void)gridViewBack:(id)arg0 ;
-(void)handleLeftOrRightSwipe:(id)arg0 ;
-(void)handleMenuBarButtonTap:(id)arg0 ;
-(void)handwritingDebugWindowShouldClose:(id)arg0 ;
-(void)hashtagInsertedInNote:(id)arg0 tokenContentIdentifier:(id)arg1 viaAutoComplete:(BOOL)arg2 ;
-(void)hashtagViewController:(id)arg0 insertFutureHashtagWithText:(id)arg1 ;
-(void)hashtagViewController:(id)arg0 insertHashtagWithText:(id)arg1 ;
-(void)hashtagViewController:(id)arg0 insertUnknownInlineAttachmentWithText:(id)arg1 ;
-(void)hideActivityStreamToolbarAnimated:(BOOL)arg0 ;
-(void)hideAndDismissPresentedViewController;
-(void)hideInkPicker;
-(void)hideTipAnimated:(BOOL)arg0 ;
-(void)highlightSearchMatchesForRegex:(id)arg0 ;
-(void)iCloudShareButtonPressed:(id)arg0 ;
-(void)icaxToggleTodoStyle;
-(void)increaseIndentation:(id)arg0 ;
-(void)indentLeft:(id)arg0 ;
-(void)indentRight:(id)arg0 ;
-(void)indentSelectionIfPossibleByAmount:(NSInteger)arg0 ;
-(void)inkPalette:(id)arg0 didChangeColor:(id)arg1 ;
-(void)inkPalette:(id)arg0 didChangePalettePositionStart:(NSInteger)arg1 end:(NSInteger)arg2 ;
-(void)inkPalette:(id)arg0 didHideAnimated:(BOOL)arg1 ;
-(void)inkPalette:(id)arg0 didPickTool:(id)arg1 ;
-(void)inkPalette:(id)arg0 didShowAnimated:(BOOL)arg1 ;
-(void)inkPalette:(id)arg0 willHideAnimated:(BOOL)arg1 ;
-(void)inkPalette:(id)arg0 willShowAnimated:(BOOL)arg1 ;
-(void)inkPaletteDidToggleRuler:(id)arg0 isRulerActive:(BOOL)arg1 ;
-(void)inlineAttachmentDeleted:(id)arg0 ;
-(void)inputAccessoryDisclosureStateDidChange:(id)arg0 tapped:(BOOL)arg1 ;
-(void)inputAccessoryDisclosureStateWillChange:(id)arg0 ;
-(void)insertSidecarItems:(id)arg0 service:(NSInteger)arg1 ;
-(void)keyboardDidChangeFrame:(id)arg0 ;
-(void)keyboardDidHide:(id)arg0 ;
-(void)keyboardDidShow:(id)arg0 ;
-(void)keyboardResizerAdjustInsetsWithKeyboardFrame:(struct CGRect )arg0 scrollAboveHeight:(CGFloat)arg1 duration:(CGFloat)arg2 ;
-(void)keyboardWillShow:(id)arg0 ;
-(void)loadNoteContentIntoView;
-(void)localeChanged:(id)arg0 ;
-(void)lockBarButtonPressed:(id)arg0 ;
-(void)lockNoteManagerDidToggleLock:(id)arg0 ;
-(void)lockNoteManagerWillToggleLock:(id)arg0 ;
-(void)managedObjectContextChangeController:(id)arg0 performUpdatesForManagedObjectIDs:(id)arg1 ;
-(void)mentionInsertedInNote:(id)arg0 mentionID:(id)arg1 participantID:(id)arg2 viaAutoComplete:(BOOL)arg3 ;
-(void)mergeRelatedOperationsDidEnd:(id)arg0 ;
-(void)migrationStateDidChange:(id)arg0 ;
-(void)moveCheckedToBottom:(id)arg0 ;
-(void)moveSelectedListItemDown:(id)arg0 ;
-(void)moveSelectedListItemUp:(id)arg0 ;
-(void)moveToFolderPressed:(id)arg0 ;
-(void)noteDecryptedStatusDidChange:(id)arg0 ;
-(void)noteShowsAuthorHighlightsDidChange:(id)arg0 ;
-(void)noteWillBeDeleted:(id)arg0 ;
-(void)notesContextRefreshNotification:(id)arg0 ;
-(void)observeValueForKeyPath:(id)arg0 ofObject:(id)arg1 change:(id)arg2 context:(*void)arg3 ;
-(void)openExperimentalHashtagUI:(id)arg0 ;
-(void)openLink:(id)arg0 ;
-(void)passwordEntryAlertControllerAttemptDidFail:(id)arg0 ;
-(void)performAddCollaboratorsActivity:(id)arg0 ;
-(void)performDeleteAnimation:(id)arg0 ;
-(void)performFindInNote:(id)arg0 ;
-(void)performReplaceInNote:(id)arg0 ;
-(void)prepareForBarSourcedPopoverPresentation;
-(void)prepareSelectionForAddingAttachment;
-(void)presentAttachment:(id)arg0 ;
-(void)presentationControllerDidDismiss:(id)arg0 ;
-(void)quickNoteAllNotes:(id)arg0 ;
-(void)rebuildInputAccessoryView;
-(void)recreateTextView;
-(void)recreateTextViewIfPasswordEntryScreenExistsButNoteIsUnlocked;
-(void)redoAction:(id)arg0 ;
-(void)refreshHandwritingDebugWindow;
-(void)rememberNoteContentForEditingIntent;
-(void)remoteDocumentCameraController:(id)arg0 didFailWithError:(id)arg1 ;
-(void)remoteDocumentCameraController:(id)arg0 didFinishWithInfoCollection:(id)arg1 ;
-(void)remoteDocumentCameraControllerDidCancel:(id)arg0 ;
-(void)removeChecked:(id)arg0 ;
-(void)removeCurrentScrollState;
-(void)removeInlineTipViewAnimated:(BOOL)arg0 ;
-(void)removeKVOObserversForNote:(id)arg0 ;
-(void)resetBarButtonsAnimated:(BOOL)arg0 ;
-(void)resetBarButtonsAnimated:(BOOL)arg0 accessoryViewOnly:(BOOL)arg1 ;
-(void)resetDateView;
-(void)restoreTextViewScrollPosition:(CGFloat)arg0 ;
-(void)restoreTextViewVisibleRange:(struct _NSRange )arg0 animated:(BOOL)arg1 ;
-(void)restoreVisualIndicatorImageAnimated:(BOOL)arg0 ;
-(void)runScrollPerformanceTest:(id)arg0 iterations:(int)arg1 offset:(int)arg2 ;
-(void)runTableHorizontalScrollPerformanceTest:(id)arg0 iterations:(int)arg1 offset:(int)arg2 ;
-(void)saveCurrentScrollState;
-(void)saveFromSystemPaperCard:(id)arg0 ;
-(void)saveNote;
-(void)saveToolAsCurrentTool:(id)arg0 ;
-(void)sceneDidActivate:(id)arg0 ;
-(void)sceneWillDeactivate:(id)arg0 ;
-(void)scrollRangeToVisible:(struct _NSRange )arg0 animated:(BOOL)arg1 ;
-(void)scrollRangeToVisible:(struct _NSRange )arg0 animated:(BOOL)arg1 inSearchableString:(id)arg2 searchHighlightRegex:(id)arg3 ;
-(void)scrollRangeToVisibleWhenViewAppears:(struct _NSRange )arg0 animated:(BOOL)arg1 inSearchableString:(id)arg2 searchHighlightRegex:(id)arg3 ;
-(void)scrollViewDidEndDecelerating:(id)arg0 ;
-(void)scrollViewDidScroll:(id)arg0 ;
-(void)scrollViewWillBeginDecelerating:(id)arg0 ;
-(void)scrollViewWillBeginDragging:(id)arg0 ;
-(void)scrollViewWillEndDragging:(id)arg0 withVelocity:(struct CGPoint )arg1 targetContentOffset:(struct CGPoint *)arg2 ;
-(void)selectDrawingAttachmentIfNeeded:(id)arg0 ;
-(void)setBodyStyle:(id)arg0 ;
-(void)setBulletedListStyle:(id)arg0 ;
-(void)setCurrentTextStyle:(unsigned int)arg0 ;
-(void)setDashedListStyle:(id)arg0 ;
-(void)setEditing:(BOOL)arg0 animated:(BOOL)arg1 ;
-(void)setFixedWidthStyle:(id)arg0 ;
-(void)setHeadingStyle:(id)arg0 ;
-(void)setNeedsStatusBarAppearanceUpdate;
-(void)setNumberedListStyle:(id)arg0 ;
-(void)setSelectedRange:(struct _NSRange )arg0 ;
-(void)setSubheadingStyle:(id)arg0 ;
-(void)setTitleStyle:(id)arg0 ;
-(void)setUserInteractionEnabled:(BOOL)arg0 ;
-(void)setupForFingerDrawing;
-(void)setupLinedPaperOnNewNote:(id)arg0 willStartEditing:(BOOL)arg1 ;
-(void)shareButtonPressedWithSender:(id)arg0 ;
-(void)sharedWithYouControllerDidUpdateHighlights:(id)arg0 ;
-(void)shiftReturn:(id)arg0 ;
-(void)shiftTab:(id)arg0 ;
-(void)showActivityStreamToolbarForObject:(id)arg0 selection:(id)arg1 animated:(BOOL)arg2 ;
-(void)showDocumentCamera;
-(void)showDrawingUpdateAlert;
-(void)showHandwritingDebugWindow:(BOOL)arg0 ;
-(void)showInkPicker:(BOOL)arg0 animated:(BOOL)arg1 ;
-(void)showInkPicker:(id)arg0 ;
-(void)showInkPickerAndEndEditingIfNecessary;
-(void)showInlineDrawingIndicator;
-(void)showInsertUIForSourceType:(NSInteger)arg0 sender:(id)arg1 ;
-(void)showInsertUIWithPreferredSourceType:(NSInteger)arg0 ;
-(void)showOrHideLockIconCoverViewControllerIfNeededIsBackgrounding:(BOOL)arg0 ;
-(void)showOrHidePasswordEntryViewControllerIfNeeded;
-(void)showOrHideSearchPatternHighlightsIfNecessary;
-(void)showOrHideToolbarIfNecessaryAnimated:(BOOL)arg0 ;
-(void)showOverscrollContentAndScrollToTop;
-(void)showRecoverNoteAlert;
-(void)showStyleSelector:(BOOL)arg0 animated:(BOOL)arg1 ;
-(void)showStyleSelector:(BOOL)arg0 animated:(BOOL)arg1 sender:(id)arg2 ;
-(void)showStyleSelectorInputView:(BOOL)arg0 animated:(BOOL)arg1 doneEditing:(BOOL)arg2 ;
-(void)showStyleSelectorPopover:(BOOL)arg0 animated:(BOOL)arg1 sender:(id)arg2 ;
-(void)showTipAnimated:(BOOL)arg0 ;
-(void)showUserAndDateViewsIfNecessary;
-(void)startBlockingMerge;
-(void)startEditing;
-(void)stopBlockingMerge;
-(void)stopTextFindingIfNecessary;
-(void)strikethrough:(id)arg0 ;
-(void)styleSelector:(id)arg0 didChangeIndentAmount:(NSInteger)arg1 ;
-(void)styleSelector:(id)arg0 didSelectStyle:(unsigned int)arg1 ;
-(void)styleSelector:(id)arg0 presentViewController:(id)arg1 animated:(BOOL)arg2 completion:(id)arg3 ;
-(void)styleSelector:(id)arg0 toggleBIUS:(NSUInteger)arg1 ;
-(void)styleSelectorDidCancel:(id)arg0 ;
-(void)styleSelectorDidIndentLeft:(id)arg0 ;
-(void)styleSelectorDidIndentRight:(id)arg0 ;
-(void)submitChecklistAnalyticsEventForActionType:(NSInteger)arg0 ;
-(void)submitNoteEditEventIfNecessary;
-(void)systemPaperLinkBarVisibilityPreferenceChanged:(id)arg0 ;
-(void)tab:(id)arg0 ;
-(void)tableButtonPressed:(id)arg0 ;
-(void)tableCellFirstResponderChanged;
-(void)teardownSystemPaperLinkBarIfNecessary;
-(void)textView:(id)arg0 didRemoveDrawingAtIndex:(NSUInteger)arg1 ;
-(void)textView:(id)arg0 upgradeDrawingAtIndex:(NSUInteger)arg1 itemProviders:(id)arg2 insertionLocationInDrawing:(struct CGPoint )arg3 ;
-(void)textView:(id)arg0 willAddDrawingAtIndex:(NSUInteger)arg1 ;
-(void)textViewDidBeginEditing:(id)arg0 ;
-(void)textViewDidChange:(id)arg0 ;
-(void)textViewDidChangeSelection:(id)arg0 ;
-(void)textViewDidEndEditing:(id)arg0 ;
-(void)textViewDidEndStroke:(id)arg0 ;
-(void)textViewWillBeginStroke:(id)arg0 forTouch:(id)arg1 ;
-(void)toggleTodoChecked:(id)arg0 ;
-(void)toggleTodoStyle:(id)arg0 ;
-(void)traitCollectionDidChange:(id)arg0 ;
-(void)uncheckAll:(id)arg0 ;
-(void)undoAction:(id)arg0 ;
-(void)undoablySwitchToPPK:(BOOL)arg0 ;
-(void)updateActionMenu;
-(void)updateAuthorHighlightsIfNeeded;
-(void)updateBarButtons;
-(void)updateBarButtonsAnimated:(BOOL)arg0 ;
-(void)updateBarButtonsAnimated:(BOOL)arg0 checkIfVisible:(BOOL)arg1 ;
-(void)updateBottomContentPadding;
-(void)updateCenterToolbarButtonsVisibility;
-(void)updateChecklistButtonAccessibility;
-(void)updateDataOwnerForCopyAndPaste;
-(void)updateDateLabelAccessibility;
-(void)updateDrawingAttachmentsIfNeeded;
-(void)updateDrawingAttachmentsInNote;
-(void)updateForceLightContentIfNecessary;
-(void)updateFormatToolbarLayoutWithSize:(struct CGSize )arg0 ;
-(void)updateICloudShareNavBarButton;
-(void)updateICloudShareNavBarButtonAccessibility;
-(void)updateInkPickerAndTextViewToTool:(id)arg0 ;
-(void)updateInlineDrawings;
-(void)updateInlineDrawingsPaletteVisibility;
-(void)updateInlineSketchBarButtonItemForSelected:(BOOL)arg0 ;
-(void)updateInputAssistantItem;
-(void)updateLastViewedMetadataIfNessessary;
-(void)updateMergeabilityController;
-(void)updateNoteUserActivityState;
-(void)updateParticipantsInDrawings;
-(void)updatePencilKitPaperStyleType;
-(void)updatePencilKitSelectionViewEnabled;
-(void)updateSelectionOnUndo:(id)arg0 ;
-(void)updateStyleSelectorStateIfVisibleIgnoreTypingAttributes:(BOOL)arg0 ;
-(void)updateTableButtonsToShowMore:(BOOL)arg0 ;
-(void)updateTextInputAccessoryViewForDidBeginEditing:(id)arg0 ;
-(void)updateTextInputAccessoryViewForDidEndEditing:(id)arg0 ;
-(void)updateTextViewBackground;
-(void)updateTextViewContentInsetsAnimated:(BOOL)arg0 ;
-(void)updateTextViewContentOffset;
-(void)updateToolbarItems;
-(void)updateUIEnabledStatePencilActive:(BOOL)arg0 ;
-(void)updateUndoRedoBarButtons;
-(void)updateiPhoneSystemPaperBarButtons;
-(void)upgradeAllAttachmentsInNoteWithUpgradeHelper:(id)arg0 ;
-(void)userActivity:(id)arg0 didReceiveInputStream:(id)arg1 outputStream:(id)arg2 ;
-(void)userActivityWillSave:(id)arg0 ;
-(void)viewControllerWillStartEditModeNotification:(id)arg0 ;
-(void)viewDidAppear:(BOOL)arg0 ;
-(void)viewDidDisappear:(BOOL)arg0 ;
-(void)viewDidLayoutSubviews;
-(void)viewDidLoad;
-(void)viewDidMoveToWindow:(id)arg0 shouldAppearOrDisappear:(BOOL)arg1 ;
-(void)viewWillAppear:(BOOL)arg0 ;
-(void)viewWillDisappear:(BOOL)arg0 ;
-(void)viewWillTransitionToSize:(struct CGSize )arg0 withTransitionCoordinator:(id)arg1 ;
-(void)warnLimitExceededWithTitle:(id)arg0 andMessage:(id)arg1 ;
-(void)warnUserAttachmentLimitExceeded;
-(void)warnUserAttachmentSizeExceededWithAttachmentCount:(NSUInteger)arg0 ;
-(void)warnUserNoteLengthExceeded;
-(void)willAddAttachmentForNoteNotification:(id)arg0 ;


@end


#endif