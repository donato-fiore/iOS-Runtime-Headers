// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef STBLOCKINGVIEWCONTROLLER_H
#define STBLOCKINGVIEWCONTROLLER_H

@class UIViewController, UIButton, NSString, UIImageView, CNContactStore, SBSLockScreenService, STManagementState, UILabel;
@protocol CNContactViewControllerDelegate, STMenuButtonDelegate;


#import "STMenuButton.h"
#import "STHourglassView.h"

@interface STBlockingViewController : UIViewController <CNContactViewControllerDelegate, STMenuButtonDelegate>



@property (retain) UIButton *addContactButton; // ivar: _addContactButton
@property (copy) id *addContactHandler; // ivar: _addContactHandler
@property (retain) STMenuButton *askForMoreTimeButton; // ivar: _askForMoreTimeButton
@property (copy) NSString *bundleIdentifier; // ivar: _bundleIdentifier
@property (copy) NSString *categoryIdentifier; // ivar: _categoryIdentifier
@property (nonatomic, getter=isChangePolicyButtonHidden) BOOL changePolicyButtonHidden; // ivar: _changePolicyButtonHidden
@property (retain) UIImageView *communicationLimitView; // ivar: _communicationLimitView
@property (retain, nonatomic) CNContactStore *contactStore; // ivar: _contactStore
@property (retain) UIImageView *customImageView; // ivar: _customImageView
@property (retain) UIButton *customPrimaryButton; // ivar: _customPrimaryButton
@property (retain) UIButton *customSecondaryButton; // ivar: _customSecondaryButton
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (retain) UIButton *enterScreenTimePasscodeButton; // ivar: _enterScreenTimePasscodeButton
@property (copy) NSString *formattedContactHandle; // ivar: _formattedContactHandle
@property BOOL fullScreenBehavior; // ivar: _fullScreenBehavior
@property (readonly) NSUInteger hash;
@property (retain) STHourglassView *hourglassView; // ivar: _hourglassView
@property (retain) STMenuButton *ignoreLimitButton; // ivar: _ignoreLimitButton
@property (readonly) SBSLockScreenService *lockScreenService; // ivar: _lockScreenService
@property (readonly) STManagementState *managementState; // ivar: _managementState
@property (retain) UILabel *messageLabel; // ivar: _messageLabel
@property (retain) UIButton *okButton; // ivar: _okButton
@property (copy, nonatomic) id *okButtonHandler; // ivar: _okButtonHandler
@property NSInteger policy; // ivar: _policy
@property (readonly) BOOL shouldAllowOneMoreMinute;
@property (readonly) BOOL shouldRequestMoreTime;
@property (getter=isShowingPolicyOptions) BOOL showingPolicyOptions; // ivar: _showingPolicyOptions
@property (readonly) Class superclass;
@property (retain) UILabel *titleLabel; // ivar: _titleLabel
@property (copy) NSString *webDomain; // ivar: _webDomain


+(id)closeApplicationHandler:(SEL)arg0 ;
+(id)newTranslucentBlockingViewController;
-(BOOL)_canShowWhileLocked;
-(id)_askForMoreTimeMenuProvider:(SEL)arg0 ;
-(id)_askForTimeResource;
-(id)_enterScreenTimePasscodeAction;
-(id)_iCloudContainer;
-(id)_ignoreForTodayAction;
-(id)_ignoreLimitMenuProvider:(SEL)arg0 ;
-(id)_newContact;
-(id)_oneMoreMinuteAction;
-(id)_primaryButtonConfiguration;
-(id)_remindMeIn15MinutesAction;
-(id)_secondaryButtonConfiguration;
-(id)_sendRequestAction;
-(void)_addContact;
-(void)_addContact:(id)arg0 ;
-(void)_customButtonPressed:(id)arg0 ;
-(void)_didFinishEnteringScreenTimePasscode:(id)arg0 ;
-(void)_enterScreenTimePasscode:(id)arg0 ;
-(void)_handleCustomButtonResponse:(id)arg0 forAction:(NSInteger)arg1 error:(id)arg2 ;
-(void)_hideCustomButtons;
-(void)_ignoreLimitForAdditionalTime:(CGFloat)arg0 ;
-(void)_ok:(id)arg0 ;
-(void)_oneMoreMinute:(id)arg0 ;
-(void)_sendRequest:(id)arg0 ;
-(void)_showAskForMoreTimeOptions:(id)arg0 ;
-(void)_showDefaultHourglassView;
-(void)_showIgnoreLimitOptions:(id)arg0 ;
-(void)_showPasscodeApprovedOptions;
-(void)_unlockDeviceIfNeededWithCompletionHandler:(id)arg0 ;
-(void)_updateAddContactButton;
-(void)_updateAppearanceForAskPending;
-(void)_updateAppearanceForBlockedContent:(id)arg0 messageFormatKey:(id)arg1 messageKey:(id)arg2 ;
-(void)_updateAppearanceWithCustomConfiguration:(id)arg0 defaultMessageFormatKey:(id)arg1 defaultMessageArgument:(id)arg2 ;
-(void)_updateButtons;
-(void)contactViewController:(id)arg0 didCompleteWithContact:(id)arg1 ;
-(void)contextMenuWillDisplayForButton:(id)arg0 ;
-(void)contextMenuWillEndForButton:(id)arg0 ;
-(void)dealloc;
-(void)hideWithAnimation:(BOOL)arg0 completionHandler:(id)arg1 ;
-(void)showWithAnimation:(BOOL)arg0 completionHandler:(id)arg1 ;
-(void)updateAppearanceUsingBlockedContactHandles:(id)arg0 contactNameByHandle:(id)arg1 forBundleIdentifier:(id)arg2 isApplicationCurrentlyLimited:(BOOL)arg3 contactStore:(id)arg4 ;
-(void)updateAppearanceUsingPolicy:(NSInteger)arg0 forBundleIdentifier:(id)arg1 ;
-(void)updateAppearanceUsingPolicy:(NSInteger)arg0 forCategoryIdentifier:(id)arg1 ;
-(void)updateAppearanceUsingPolicy:(NSInteger)arg0 forWebpageURL:(id)arg1 ;
-(void)viewDidLoad;


@end


#endif