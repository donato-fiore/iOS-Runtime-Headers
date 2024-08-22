// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef FBKBUGFORMTABLEVIEWCONTROLLER_H
#define FBKBUGFORMTABLEVIEWCONTROLLER_H

@class UITableViewController, UITableViewCell, UIBarButtonItem, NSPredicate, NSMutableDictionary, NSString, NSSet, NSDictionary;
@protocol FBKDraftingDelegate, FBKDeviceDiagnosticsDelegate, _TtP12FeedbackCore24FBKBugFormPickerDelegate_, _TtP12FeedbackCore35FBKAddAttachmentsControllerDelegate_, _TtP12FeedbackCore21FBKTeamPickerDelegate_, UIImagePickerControllerDelegate, UINavigationControllerDelegate, UITextViewDelegate, UIViewControllerTransitioningDelegate, UIAdaptivePresentationControllerDelegate, UITableViewDelegatePrivate, FBKBugFormEditorDelegate, FBKBugFormTableViewControllerProtocol;


#import "_TtC12FeedbackCore27FBKAddAttachmentsController.h"
#import "FBKBugForm.h"
#import "FBKDeviceDiagnosticsController.h"
#import "FBKBugFormDiffableDataSource.h"
#import "FBKDraftingController.h"
#import "FBKFormResponse.h"
#import "FBKLaunchAction.h"
#import "FBKManagedFeedbackObject.h"
#import "FBKBugFormStub.h"
#import "FBKTeam.h"

@interface FBKBugFormTableViewController : UITableViewController <FBKDraftingDelegate, FBKDeviceDiagnosticsDelegate, _TtP12FeedbackCore24FBKBugFormPickerDelegate_, _TtP12FeedbackCore35FBKAddAttachmentsControllerDelegate_, _TtP12FeedbackCore21FBKTeamPickerDelegate_, UIImagePickerControllerDelegate, UINavigationControllerDelegate, UITextViewDelegate, UIViewControllerTransitioningDelegate, UIAdaptivePresentationControllerDelegate, UITableViewDelegatePrivate, FBKBugFormEditorDelegate>



@property (weak, nonatomic) UITableViewCell *addAttachmentCell; // ivar: _addAttachmentCell
@property (retain, nonatomic) _TtC12FeedbackCore27FBKAddAttachmentsController *addAttachmentsController; // ivar: _addAttachmentsController
@property (nonatomic) BOOL allowKeyboardDismissalForSnapshot; // ivar: _allowKeyboardDismissalForSnapshot
@property (nonatomic) BOOL attemptedSubmission; // ivar: _attemptedSubmission
@property (readonly, nonatomic) FBKBugForm *bugForm;
@property (nonatomic) NSUInteger cachedCandidateStubsCount; // ivar: _cachedCandidateStubsCount
@property (nonatomic) BOOL canOpenFeedbackInFBA; // ivar: _canOpenFeedbackInFBA
@property (nonatomic) BOOL canShowTeamPicker; // ivar: _canShowTeamPicker
@property (nonatomic) BOOL canShowTopicPicker; // ivar: _canShowTopicPicker
@property (retain, nonatomic) UIBarButtonItem *cancelBarButtonItem; // ivar: _cancelBarButtonItem
@property (retain, nonatomic) NSPredicate *candidateFormStubsPredicate; // ivar: _candidateFormStubsPredicate
@property (retain, nonatomic) NSMutableDictionary *cellHeights; // ivar: _cellHeights
@property (readonly, copy) NSString *debugDescription;
@property (weak) NSObject<FBKBugFormTableViewControllerProtocol> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (retain, nonatomic) FBKDeviceDiagnosticsController *devicesController; // ivar: _devicesController
@property (retain, nonatomic) id *didRefreshFormStubsNotificationObserver; // ivar: _didRefreshFormStubsNotificationObserver
@property (retain, nonatomic) FBKBugFormDiffableDataSource *diffableDataSource; // ivar: _diffableDataSource
@property (retain, nonatomic) FBKDraftingController *draftingController; // ivar: _draftingController
@property (retain) NSSet *extensions; // ivar: _extensions
@property (readonly, nonatomic) FBKFormResponse *formResponse;
@property (nonatomic) BOOL hasLoadedFirstDraft; // ivar: _hasLoadedFirstDraft
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) NSString *identifierOfFirstDeviceSection; // ivar: _identifierOfFirstDeviceSection
@property (nonatomic) BOOL isEstablishingBugSession; // ivar: _isEstablishingBugSession
@property (nonatomic) BOOL isSubmissionPendingOnEnhancedLogging; // ivar: _isSubmissionPendingOnEnhancedLogging
@property (nonatomic) BOOL isUpdatingTable; // ivar: _isUpdatingTable
@property (nonatomic) CGFloat keyboardHeight; // ivar: _keyboardHeight
@property (retain, nonatomic) FBKLaunchAction *launchAction; // ivar: _launchAction
@property (copy, nonatomic) id *loadDraftCompletion; // ivar: _loadDraftCompletion
@property (retain, nonatomic) NSString *localizedAttachmentLegalText; // ivar: _localizedAttachmentLegalText
@property (retain) id *notificationObserver; // ivar: _notificationObserver
@property (retain) NSDictionary *pendingAttachments; // ivar: _pendingAttachments
@property (retain, nonatomic) FBKManagedFeedbackObject *pendingFeedbackObject; // ivar: _pendingFeedbackObject
@property (retain) NSDictionary *pendingQandA; // ivar: _pendingQandA
@property (retain, nonatomic) FBKBugFormStub *pendingStub; // ivar: _pendingStub
@property (retain, nonatomic) FBKTeam *pendingTeam; // ivar: _pendingTeam
@property (nonatomic) BOOL shouldHideAllCells; // ivar: _shouldHideAllCells
@property (nonatomic) BOOL shouldHideQuestions; // ivar: _shouldHideQuestions
@property (nonatomic) BOOL shouldShowUserSwitcherInForm; // ivar: _shouldShowUserSwitcherInForm
@property (nonatomic) NSUInteger submissionStyle; // ivar: _submissionStyle
@property (retain, nonatomic) UIBarButtonItem *submitBarButtonItem; // ivar: _submitBarButtonItem
@property (weak, nonatomic) UIBarButtonItem *submitButton; // ivar: _submitButton
@property (readonly) Class superclass;
@property (readonly, nonatomic) NSString *teamPickerRowIdentifier;
@property (readonly, nonatomic) NSString *topicPickerRowIdentifier;
@property BOOL viewHasBecomeVisible; // ivar: _viewHasBecomeVisible
@property (nonatomic) unsigned int whooshSoundID; // ivar: _whooshSoundID


-(BOOL)_tableView:(id)arg0 canEditRowAtIndexPath:(id)arg1 ;
-(BOOL)hasCandidateStubs;
-(BOOL)hasFileArea;
-(BOOL)isCaptiveModeEnabled;
-(BOOL)isCaptiveModeEnabledForLaunchAction:(id)arg0 ;
-(BOOL)isReadyForDropSessionFromController:(id)arg0 tableView:(id)arg1 dropSessionDidUpdate:(id)arg2 withDestinationIndexPath:(id)arg3 ;
-(BOOL)shouldDisplayChangeButton;
-(BOOL)shouldShowAttachments;
-(BOOL)shouldShowForm;
-(BOOL)shouldShowFormPicker;
-(BOOL)shouldShowTeamPicker;
-(BOOL)textView:(id)arg0 shouldChangeTextInRange:(struct _NSRange )arg1 replacementText:(id)arg2 ;
-(CGFloat)_separatorInset;
-(CGFloat)tableView:(id)arg0 estimatedHeightForRowAtIndexPath:(id)arg1 ;
-(id)alertControllerForDismissWithLaunchAction:(id)arg0 ;
-(id)currentTeam;
-(id)formStub;
-(id)initWithCoder:(id)arg0 ;
-(id)itemFromDraft;
-(id)presentationControllerForPresentedViewController:(id)arg0 presentingViewController:(id)arg1 sourceViewController:(id)arg2 ;
-(id)questionGroupForSection:(NSInteger)arg0 ;
-(id)questionsForQuestionGroupInSection:(NSInteger)arg0 ;
-(id)tableView:(id)arg0 cellForRowAtIndexPath:(id)arg1 withItemIdentifier:(id)arg2 ;
-(id)tableView:(id)arg0 trailingSwipeActionsConfigurationForRowAtIndexPath:(id)arg1 ;
-(void)_changeToBugFormStub:(id)arg0 force:(BOOL)arg1 ;
-(void)_changeToBugFormStub:(id)arg0 withTeam:(id)arg1 force:(BOOL)arg2 ;
-(void)_handleLoadingError:(id)arg0 ;
-(void)_hideDevices;
-(void)_reallyChangeToBugFormStub:(id)arg0 withTeam:(id)arg1 force:(BOOL)arg2 ;
-(void)_resizeAndScrollTableAfterTextChangeInTextView:(id)arg0 ;
-(void)_showFormPickerWithSender:(id)arg0 ;
-(void)_showInternalToolbarIfNeeded;
-(void)_showSpinnerWithStatus:(id)arg0 userInteractionEnabled:(BOOL)arg1 ;
-(void)_stopSpinner;
-(void)answerDidChangeForQuestion:(id)arg0 ;
-(void)attachmentsAlert:(id)arg0 needsDeviceDiagnosticsController:(id)arg1 ;
-(void)attachmentsAlertDidSelectOption:(id)arg0 ;
-(void)awakeFromNib;
-(void)beginPresubmissionCheck:(id)arg0 ;
-(void)bugFormPicker:(id)arg0 didSelectBugFormStub:(id)arg1 ;
-(void)bugFormPickerDidCancel:(id)arg0 ;
-(void)checkEnhancedLoggingAndSubmit;
-(void)checkLegalAndSubmit;
-(void)close;
-(void)closeDraftAndDelete:(BOOL)arg0 completion:(id)arg1 ;
-(void)closeDraftAndDelete:(BOOL)arg0 withError:(id)arg1 completion:(id)arg2 ;
-(void)closeWithCompletion:(id)arg0 ;
-(void)closeWithError:(id)arg0 completion:(id)arg1 ;
-(void)deviceDiagnosticsController:(id)arg0 didAddAttachment:(id)arg1 toDevice:(id)arg2 ;
-(void)deviceDiagnosticsController:(id)arg0 didAddDevice:(id)arg1 ;
-(void)deviceDiagnosticsController:(id)arg0 didAddDevices:(id)arg1 ;
-(void)deviceDiagnosticsController:(id)arg0 didChangeState:(NSInteger)arg1 ;
-(void)deviceDiagnosticsController:(id)arg0 didFailToAttach:(id)arg1 toDevice:(id)arg2 error:(id)arg3 ;
-(void)deviceDiagnosticsController:(id)arg0 didFailToConnectToDevice:(id)arg1 ;
-(void)deviceDiagnosticsController:(id)arg0 didRemoveAttachment:(id)arg1 fromDevice:(id)arg2 ;
-(void)deviceDiagnosticsController:(id)arg0 didRemoveDevice:(id)arg1 ;
-(void)deviceDiagnosticsController:(id)arg0 didUpdateAttachment:(id)arg1 onDevice:(id)arg2 ;
-(void)deviceDiagnosticsController:(id)arg0 didUpdateDevice:(id)arg1 ;
-(void)deviceDiagnosticsController:(id)arg0 needsSelectionFromDevices:(id)arg1 completion:(id)arg2 ;
-(void)didPressChangeBugForm:(id)arg0 ;
-(void)didTapAttachment:(id)arg0 indexPath:(id)arg1 ;
-(void)didTapDevice:(id)arg0 indexPath:(id)arg1 ;
-(void)dismiss:(id)arg0 ;
-(void)draftingController:(id)arg0 madeVisibilityUpdatesWithSnapshotDiff:(id)arg1 ;
-(void)draftingControllerDidBeginLoading:(id)arg0 ;
-(void)draftingControllerDidFinishLoading:(id)arg0 withError:(id)arg1 ;
-(void)editorDidDismissForQuestion:(id)arg0 ;
-(void)fillInAnswers;
-(void)hideAllCells;
-(void)hideQuestions;
-(void)keyboardDidHide:(id)arg0 ;
-(void)keyboardWasShown:(id)arg0 ;
-(void)launchModalViewWithModalQuestion:(id)arg0 ;
-(void)loadDraft:(id)arg0 ;
-(void)loadNewResponseForBugFormStub:(id)arg0 forTeam:(id)arg1 ;
-(void)loadNewResponseForBugFormStub:(id)arg0 forTeam:(id)arg1 completion:(id)arg2 ;
-(void)loadNewResponseForSurvey:(id)arg0 forTeam:(id)arg1 ;
-(void)postAttachFiles:(id)arg0 ;
-(void)preAttachFiles:(id)arg0 ;
-(void)prepareForSegue:(id)arg0 sender:(id)arg1 ;
-(void)presentationControllerDidAttemptToDismiss:(id)arg0 ;
-(void)presentationControllerDidDismiss:(id)arg0 ;
-(void)questionVisibilityDidUpdateForDraftingController:(id)arg0 ;
-(void)registerApplicationNotifications;
-(void)registerForKeyboardNotifications;
-(void)saveDraftWithIsClosing:(BOOL)arg0 completion:(id)arg1 ;
-(void)saveFormForResigningActive:(id)arg0 ;
-(void)showQuestions;
-(void)showSpinnerWithStatus:(id)arg0 ;
-(void)showSubmissionAlertWithCompletion:(id)arg0 ;
-(void)showThankYouAlertWithCompletion:(id)arg0 ;
-(void)submit;
-(void)tableView:(id)arg0 didSelectRowAtIndexPath:(id)arg1 ;
-(void)tableView:(id)arg0 willDisplayCell:(id)arg1 forRowAtIndexPath:(id)arg2 ;
-(void)teamPicker:(id)arg0 didSelectTeam:(id)arg1 ;
-(void)textViewDidBeginEditing:(id)arg0 ;
-(void)textViewDidChange:(id)arg0 ;
-(void)textViewDidEndEditing:(id)arg0 ;
-(void)unregisterApplicationNotifications;
-(void)unregisterForKeyboardNotifications;
-(void)unwindToBugForm:(id)arg0 ;
-(void)updateCachedCandidateStubsCount;
-(void)updateSubmitButtonState;
-(void)updateTitle;
-(void)updateUI:(BOOL)arg0 ;
-(void)updateUI:(BOOL)arg0 canDismissKeyboard:(BOOL)arg1 withCompletion:(id)arg2 ;
-(void)viewDidAppear:(BOOL)arg0 ;
-(void)viewDidDisappear:(BOOL)arg0 ;
-(void)viewDidLoad;
-(void)viewWillAppear:(BOOL)arg0 ;
-(void)viewWillDisappear:(BOOL)arg0 ;
-(void)willTransitionToTraitCollection:(id)arg0 withTransitionCoordinator:(id)arg1 ;


@end


#endif