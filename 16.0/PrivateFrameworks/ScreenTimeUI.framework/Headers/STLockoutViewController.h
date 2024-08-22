// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef STLOCKOUTVIEWCONTROLLER_H
#define STLOCKOUTVIEWCONTROLLER_H

@class UIViewController, SBSLockScreenService, UIAlertController, NSString, UIImageView, NSDictionary, UIResponder, UIButton, UILabel, UIVisualEffectView;
@protocol CNContactViewControllerDelegate, STLockoutPolicyControllerDelegate, OS_dispatch_group, STLockoutViewControllerDelegate;


#import "STHourglassView.h"
#import "STLockoutPolicyController.h"

@interface STLockoutViewController : UIViewController <CNContactViewControllerDelegate, STLockoutPolicyControllerDelegate>

 {
    NSInteger _style;
    NSUInteger _state;
    NSUInteger _stateBeforePending;
    NSUInteger _reuseIdentifier;
    SBSLockScreenService *_sbsLockScreenService;
    id *_restrictionsPINControllerCompletion;
    UIAlertController *_presentedAlertController;
    BOOL _isHourglassStateInitialized;
    BOOL _isApprovedAnimationWithApprovalPending;
    NSObject<OS_dispatch_group> *_initialAnimationGroup;
    NSObject<OS_dispatch_group> *_approvalAnimationGroup;
    NSObject<OS_dispatch_group> *_dismissingAnimationGroup;
}


@property (copy) id *addBlockedContactHandler; // ivar: _addBlockedContactHandler
@property (copy) id *addContactHandler; // ivar: _addContactHandler
@property (readonly) NSString *applicationName; // ivar: _applicationName
@property (copy) NSString *blockedContactsHandle; // ivar: _blockedContactsHandle
@property (copy, nonatomic) NSString *bundleIdentifier;
@property (weak) UIImageView *communicationLimitView; // ivar: _communicationLimitView
@property (readonly, copy) NSDictionary *contactNameByHandle; // ivar: _contactNameByHandle
@property (weak, nonatomic) UIResponder *customNextResponder; // ivar: _customNextResponder
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) BOOL didFinishDismissing; // ivar: _didFinishDismissing
@property (nonatomic, getter=isForSnapshot) BOOL forSnapshot; // ivar: _forSnapshot
@property (readonly) NSUInteger hash;
@property (weak) STHourglassView *hourglassView; // ivar: _hourglassView
@property (weak) UIButton *mainButton; // ivar: _mainButton
@property (nonatomic) BOOL mainButtonAlwaysHidden; // ivar: _mainButtonAlwaysHidden
@property (weak) UILabel *messageLabel; // ivar: _messageLabel
@property (weak, nonatomic) UIResponder *nextResponder;
@property (weak) UIButton *okButton; // ivar: _okButton
@property NSInteger okButtonAction; // ivar: _okButtonAction
@property (nonatomic) BOOL okButtonAlwaysHidden; // ivar: _okButtonAlwaysHidden
@property (retain, nonatomic) STLockoutPolicyController *policyController; // ivar: _policyController
@property (readonly) Class superclass;
@property (weak) UILabel *titleLabel; // ivar: _titleLabel
@property (retain, nonatomic) UIVisualEffectView *view;
@property (weak, nonatomic) NSObject<STLockoutViewControllerDelegate> *viewControllerDelegate; // ivar: _viewControllerDelegate
@property (readonly, nonatomic) UIVisualEffectView *viewIfLoaded;


+(id)_applicationNameForBundleIdentifier:(id)arg0 ;
+(id)_applicationNameForWebsiteURL:(id)arg0 ;
+(id)_bundleIdentifierForWebsiteURL:(id)arg0 ;
+(id)_messageForCategoryIdentifier:(id)arg0 ;
+(id)lockoutViewControllerWithBundleIdentifier:(id)arg0 ;
+(id)lockoutViewControllerWithBundleIdentifier:(id)arg0 contactsHandles:(id)arg1 ;
+(id)lockoutViewControllerWithBundleIdentifier:(id)arg0 contactsHandles:(id)arg1 contactNameByHandle:(id)arg2 ;
+(id)lockoutViewControllerWithBundleIdentifier:(id)arg0 conversationContext:(id)arg1 contactStore:(id)arg2 ;
+(id)lockoutViewControllerWithCategoryIdentifier:(id)arg0 ;
+(id)lockoutViewControllerWithConversationContext:(id)arg0 bundleIdentifier:(id)arg1 contactStore:(id)arg2 applicationName:(id)arg3 ;
+(id)lockoutViewControllerWithConversationContext:(id)arg0 bundleIdentifier:(id)arg1 contactStore:(id)arg2 applicationName:(id)arg3 contactNameByHandle:(id)arg4 ;
+(id)lockoutViewControllerWithWebsiteURL:(id)arg0 ;
+(id)messageForApplicationName:(id)arg0 style:(NSInteger)arg1 ;
+(id)messageForBundleIdentifier:(id)arg0 style:(NSInteger)arg1 ;
+(id)messageForWebsiteURL:(id)arg0 ;
-(BOOL)_actionDismiss;
-(BOOL)_actionUnlockedAskOrApproveActionSheet;
-(BOOL)_actionUnlockedEnterScreenTimePasscodeActionSheet;
-(BOOL)_authenticatedApproveActionSheet;
-(BOOL)_canShowWhileLocked;
-(BOOL)_isShowingInitialAnimation;
-(id)_updateMessageLabelAndReturnHandleWithPhoneNumberFormat:(id)arg0 emailAddressFormat:(id)arg1 contactNameFormat:(id)arg2 ;
-(id)initWithBundleIdentifier:(id)arg0 ;
-(id)initWithBundleIdentifier:(id)arg0 contactsHandles:(id)arg1 ;
-(id)initWithBundleIdentifier:(id)arg0 conversationContext:(id)arg1 contactStore:(id)arg2 ;
-(id)initWithWebsiteURL:(id)arg0 ;
-(void)_actionAddContact:(id)arg0 ;
-(void)_actionAskOrApproveActionSheet:(id)arg0 ;
-(void)_actionEnterScreenTimePasscodeActionSheet:(id)arg0 ;
-(void)_actionIgnoreLimitActionSheet:(id)arg0 ;
-(void)_actionOK:(id)arg0 ;
-(void)_actionUnlockedAddContact;
-(void)_authenticatedApproveForAdditionalTime:(CGFloat)arg0 ;
-(void)_changeMainButtonToAddContact:(id)arg0 ;
-(void)_changeMainButtonToAskForMore;
-(void)_changeMainButtonToEnterScreenTimePasscode;
-(void)_changeMainButtonToIgnoreLimit;
-(void)_changeMessageToInitial;
-(void)_changeStateToApproved;
-(void)_changeStateToAsk;
-(void)_changeStateToContactBlocked;
-(void)_changeStateToContactBlockedDuringDowntime;
-(void)_changeStateToDisapproved;
-(void)_changeStateToDismissing;
-(void)_changeStateToPending;
-(void)_changeStateToWarn;
-(void)_doInitialAnimationExitingGroup:(id)arg0 ;
-(void)_doInitialAnimationOfHourglassExitingGroup:(id)arg0 ;
-(void)_fadeInBackdropWithCompletion:(id)arg0 ;
-(void)_fadeInHourglass;
-(void)_fadeInTextAndButtons;
-(void)_fadeOutBackdropWithCompletion:(id)arg0 ;
-(void)_fadeOutHourglass;
-(void)_fadeOutTextAndButtons;
-(void)_handleRestrictionsPINNotification:(id)arg0 ;
-(void)_hideBackdrop;
-(void)_hideHourglass;
-(void)_hideTextAndButtons;
-(void)_presentAlertController:(id)arg0 ;
-(void)_restoreBackdrop;
-(void)_restoreHourglass;
-(void)_restoreTextAndButtons;
-(void)_restrictionsPINControllerDidFinish:(BOOL)arg0 ;
-(void)_setTextAndButtonsAlpha:(CGFloat)arg0 ;
-(void)_setupCommon;
-(void)_showApprovalAnimationIfNeeded;
-(void)_showDismissingAnimationIfNeeded;
-(void)_showInitialAnimationIfNeeded;
-(void)_showRestrictionsPINControllerWithMainCompletion:(id)arg0 ;
-(void)_startListeningForRestrictionsPINEntryNotification;
-(void)_stopListeningForRestrictionsPINEntryNotification;
-(void)_undoApprovalAnimationIfNeeded;
-(void)_unlockWithSuccessMainCompletion:(id)arg0 ;
-(void)_updateMainButtonVisibility;
-(void)_updateMainButtonWithTitle:(id)arg0 action:(SEL)arg1 ;
-(void)_updateOKButtonVisibility;
-(void)contactViewController:(id)arg0 didCompleteWithContact:(id)arg1 ;
-(void)contentSizeCategoryDidChangeNotification:(id)arg0 ;
-(void)dealloc;
-(void)stateDidChange:(NSUInteger)arg0 ;
-(void)viewDidAppear:(BOOL)arg0 ;
-(void)viewWillAppear:(BOOL)arg0 ;
-(void)viewWillDisappear:(BOOL)arg0 ;


@end


#endif