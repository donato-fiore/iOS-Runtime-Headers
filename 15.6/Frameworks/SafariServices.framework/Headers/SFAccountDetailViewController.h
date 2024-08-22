// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef SFACCOUNTDETAILVIEWCONTROLLER_H
#define SFACCOUNTDETAILVIEWCONTROLLER_H

@class UITableViewController, WBSSavedAccount, UIBarButtonItem, NSString, UITableViewCell, UITableViewHeaderFooterView, WBSPasswordWarning, NSTimer, UIAlertController, NSArray, NSExtension, ASAccountAuthenticationModificationController;
@protocol _ASAccountAuthenticationModificationExtensionManagerObserver, ASAccountAuthenticationModificationControllerDelegate, ASAccountAuthenticationModificationControllerPresentationContextProviding, SFAccountOtpauthQRCodeScannerViewControllerDelegate, UITextFieldDelegate, _SFTableViewDiffableDataSourceDelegate, SFSecurityRecommendationInfoCellDelegate, PSStateRestoration, OS_dispatch_queue, SFAccountDetailViewControllerDelegate;


#import "SFEditableTableViewCell.h"
#import "SFAccountNoteTableViewCell.h"
#import "_SFTableViewDiffableDataSource.h"
#import "SFSecurityRecommendationInfoCell.h"
#import "SFSafariViewController.h"

@interface SFAccountDetailViewController : UITableViewController <_ASAccountAuthenticationModificationExtensionManagerObserver, ASAccountAuthenticationModificationControllerDelegate, ASAccountAuthenticationModificationControllerPresentationContextProviding, SFAccountOtpauthQRCodeScannerViewControllerDelegate, UITextFieldDelegate, _SFTableViewDiffableDataSourceDelegate, SFSecurityRecommendationInfoCellDelegate, PSStateRestoration>

 {
    WBSSavedAccount *_savedAccount;
    NSUInteger _options;
    UIBarButtonItem *_editBarButtonItem;
    UIBarButtonItem *_shareBarButtonItem;
    UIBarButtonItem *_cancelBarButtonItem;
    UIBarButtonItem *_doneBarButtonItem;
    UIBarButtonItem *_backBarButtonItem;
    SFEditableTableViewCell *_userCell;
    SFEditableTableViewCell *_passwordCell;
    NSString *_userForEditing;
    NSString *_passwordForEditing;
    UITableViewCell *_changePasswordOnWebsiteCell;
    UITableViewCell *_setupTOTPCodeCell;
    UITableViewHeaderFooterView *_totpFooterView;
    SFAccountNoteTableViewCell *_notesCell;
    UITableViewCell *_addNotesCell;
    BOOL _shouldDiffableDataSourceShowEditingState;
    BOOL _didSelectAddNotesButton;
    _SFTableViewDiffableDataSource *_tableViewDiffableDataSource;
    NSObject<OS_dispatch_queue> *_diffableDataSourceQueue;
    SFSecurityRecommendationInfoCell *_securityRecommendationInfoCell;
    WBSPasswordWarning *_passwordWarning;
    SFSafariViewController *_changePasswordSafariViewController;
    NSTimer *_TOTPTimer;
    BOOL _didAcceptTOTPQRCode;
    UIAlertController *_secretEntryAlertController;
    NSArray *_TOTPGenerators;
    UITableViewCell *_upgradeToSignInWithAppleCell;
    UITableViewCell *_changeToStrongPasswordCell;
    NSString *_rulesForStrongPasswordChange;
    NSExtension *_accountModificationExtension;
    BOOL _eligibleToChangeToStrongPassword;
    BOOL _eligibleToUpgradeToSignInWithApple;
    BOOL _completedUpgradeToStrongPassword;
    BOOL _completedUpgradeToSignInWithApple;
    ASAccountAuthenticationModificationController *_accountAuthenticationModificationController;
    BOOL _showPasswordAsBulletsWhenNotEditing;
    BOOL _didShowAccountOptionsHeaderText;
    NSInteger _accountUpgradeOriginType;
}


@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<SFAccountDetailViewControllerDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (nonatomic) BOOL showsChangePasswordControllerOnAppearance; // ivar: _showsChangePasswordControllerOnAppearance
@property (readonly) Class superclass;


-(BOOL)_allowAuditing;
-(BOOL)_allowEditing;
-(BOOL)_completedUpgrade;
-(BOOL)_shouldShowAccountOptionsHeader;
-(BOOL)_shouldShowMenuForItemIdentifier:(NSInteger)arg0 ;
-(BOOL)_shouldShowSecurityRecommendationSection;
-(BOOL)canBeShownFromSuspendedState;
-(BOOL)canBecomeFirstResponder;
-(BOOL)canPerformAction:(SEL)arg0 withSender:(id)arg1 ;
-(BOOL)dataSource:(id)arg0 canEditRowAtIndexPath:(id)arg1 ;
-(BOOL)tableView:(id)arg0 shouldIndentWhileEditingRowAtIndexPath:(id)arg1 ;
-(BOOL)tableView:(id)arg0 shouldShowMenuForRowAtIndexPath:(id)arg1 ;
-(BOOL)textFieldShouldReturn:(id)arg0 ;
-(CGFloat)tableView:(id)arg0 estimatedHeightForRowAtIndexPath:(id)arg1 ;
-(NSInteger)_itemTypeForIdentifier:(id)arg0 ;
-(NSInteger)_sectionTypeForSection:(NSInteger)arg0 ;
-(NSInteger)tableView:(id)arg0 editingStyleForRowAtIndexPath:(id)arg1 ;
-(id)_cellForIdentifier:(id)arg0 indexPath:(id)arg1 ;
-(id)_changePasswordURL;
-(id)_deleteCellForTableView:(id)arg0 ;
-(id)_editableCellWithCell:(id)arg0 ;
-(id)_formattedCodeFromGenerator:(id)arg0 font:(id)arg1 ;
-(id)_lastModifiedDateString;
-(id)_newSecretEntryAlertController;
-(id)_passwordAuditor;
-(id)_passwordEvaluator;
-(id)_passwordGenerator;
-(id)_passwordWarningManager;
-(id)_savedAccountWebsiteCellForTableView:(id)arg0 atIndexPath:(id)arg1 ;
-(id)_securePasswordPlaceholderText:(id)arg0 ;
-(id)_securityRecommendationSubtitleString;
-(id)_subtitleStringForSignInWithAppleUpgrade;
-(id)_subtitleStringForStrongPasswordUpgrade;
-(id)_totpFooterStringWithGenerator:(id)arg0 font:(id)arg1 ;
-(id)_warningTitleForPassword;
-(id)dataSource:(id)arg0 footerTextForSection:(NSInteger)arg1 ;
-(id)dataSource:(id)arg0 headerTextForSection:(NSInteger)arg1 ;
-(id)initWithSavedAccount:(id)arg0 passwordWarning:(id)arg1 options:(NSUInteger)arg2 ;
-(id)presentationAnchorForAccountAuthenticationModificationController:(id)arg0 ;
-(id)tableView:(id)arg0 viewForFooterInSection:(NSInteger)arg1 ;
-(void)QRCodeScannerViewController:(id)arg0 didScanQRCodeWithURLValue:(id)arg1 ;
-(void)_accountStoreDidUpdate;
-(void)_addAccountUpgradeItemsForSectionType:(NSInteger)arg0 toSnapshot:(id)arg1 ;
-(void)_addNotesSection;
-(void)_addTOTPGenerator:(id)arg0 ;
-(void)_addTOTPGeneratorsToSnapshot:(id)arg0 ;
-(void)_cancelBarButtonItemTapped:(id)arg0 ;
-(void)_cancelChangesAndFinishEditing;
-(void)_completedSignInWithAppleUpgrade;
-(void)_completedStrongPasswordUpgrade;
-(void)_configureCell:(id)arg0 withText:(id)arg1 detailText:(id)arg2 detailPlaceholderText:(id)arg3 secureEntry:(BOOL)arg4 ;
-(void)_configureHeaderViewCell:(id)arg0 ;
-(void)_configurePasswordCell:(id)arg0 ;
-(void)_configureSecurityRecommendationInfoCell;
-(void)_configureUserCell:(id)arg0 ;
-(void)_deleteTOTPGenerator:(id)arg0 ;
-(void)_deleteTOTPGeneratorWithConfirmation:(id)arg0 ;
-(void)_doneBarButtonItemTapped:(id)arg0 ;
-(void)_editBarButtonItemTapped:(id)arg0 ;
-(void)_hideSecurityRecommendation;
-(void)_initiateChangeToStrongPassword;
-(void)_initiateUpgradeToSignInWithApple;
-(void)_openChangePasswordURLInWebBrowser;
-(void)_openURLInSafariViewController:(id)arg0 shouldSupressPasswordUpdatePrompts:(BOOL)arg1 ;
-(void)_presentHideSecurityRecommendationConfirmationAlert;
-(void)_reloadDiffableDataSourceAnimated:(BOOL)arg0 ;
-(void)_reloadDiffableDataSourceOnInternalQueueAnimated:(BOOL)arg0 ;
-(void)_removeNotesSection;
-(void)_revealPasswordIfNecessary;
-(void)_saveAccountAndFinishEditing;
-(void)_setEditing:(BOOL)arg0 animated:(BOOL)arg1 ;
-(void)_setHighLyLegibleFontForDetailTextInCell:(id)arg0 ;
-(void)_shareBarButtonItemTapped:(id)arg0 ;
-(void)_sharePasswordWithPopoverPresentationControllerConfiguration:(id)arg0 ;
-(void)_showChangePasswordSafariViewController;
-(void)_showConfirmationToDeleteCredentialTypes:(NSInteger)arg0 ;
-(void)_startTOTPTimerIfNeeded;
-(void)_stopTOTPTimer;
-(void)_textFieldChanged:(id)arg0 ;
-(void)_updateAccountModificationOptions;
-(void)_updateAddButtonsInAccountOptionsSectionForSnapshot:(id)arg0 ;
-(void)_updateCachedTOTPGenerators;
-(void)_updateMenuItems;
-(void)_updateTOTPCell:(id)arg0 generator:(id)arg1 ;
-(void)_updateWarningForSavedAccount;
-(void)_willHideUIMenuController:(id)arg0 ;
-(void)accountAuthenticationModificationController:(id)arg0 didFailRequest:(id)arg1 withError:(id)arg2 ;
-(void)accountAuthenticationModificationController:(id)arg0 didSuccessfullyCompleteRequest:(id)arg1 withUserInfo:(id)arg2 ;
-(void)accountModificationExtensionManagerExtensionListDidChange:(id)arg0 ;
-(void)dataSource:(id)arg0 commitEditingStyle:(NSInteger)arg1 forItemIdentifier:(id)arg2 ;
-(void)dealloc;
-(void)safari_copyOneTimeCode:(id)arg0 ;
-(void)safari_copyPassword:(id)arg0 ;
-(void)safari_copyUserName:(id)arg0 ;
-(void)safari_copyWebsite:(id)arg0 ;
-(void)safari_sharePassword:(id)arg0 ;
-(void)securityRecommendationInfoCellHideButtonPressed:(id)arg0 ;
-(void)tableView:(id)arg0 didSelectRowAtIndexPath:(id)arg1 ;
-(void)tableView:(id)arg0 performAction:(SEL)arg1 forRowAtIndexPath:(id)arg2 withSender:(id)arg3 ;
-(void)textFieldDidEndEditing:(id)arg0 ;
-(void)viewDidAppear:(BOOL)arg0 ;
-(void)viewDidDisappear:(BOOL)arg0 ;
-(void)viewDidLoad;
-(void)viewWillAppear:(BOOL)arg0 ;
-(void)viewWillDisappear:(BOOL)arg0 ;


@end


#endif