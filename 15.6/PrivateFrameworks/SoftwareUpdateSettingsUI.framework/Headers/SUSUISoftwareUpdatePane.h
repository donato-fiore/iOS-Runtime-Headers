// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef SUSUISOFTWAREUPDATEPANE_H
#define SUSUISOFTWAREUPDATEPANE_H

@class PSListController, SUSSoftwareUpdateTitleCell, SUSSoftwareUpdateScanCell, SUSSoftwareUpdateComingSoonTipCell, TPKContentController, TPKContent, SUDescriptor, NSString, NSError;
@protocol UITableViewDelegate, TPKContentControllerDelegate, SUSUISoftwareUpdatePaneDelegate><DevicePINControllerDelegate;


#import "SUSUISoftwareUpdatePane.h"
#import "SUSUISoftwareUpdateManager.h"

@interface SUSUISoftwareUpdatePane : PSListController <UITableViewDelegate, TPKContentControllerDelegate>

 {
    SUSSoftwareUpdateTitleCell *_titleCell;
    SUSSoftwareUpdateScanCell *_scanCell;
    SUSSoftwareUpdateComingSoonTipCell *_comingSoonCell;
    TPKContentController *_tipKitController;
    TPKContent *_tipKitContent;
}


@property (retain, nonatomic) SUSUISoftwareUpdatePane *alternatePane; // ivar: _alternatePane
@property (readonly, retain, nonatomic) SUDescriptor *alternateUpdateDescriptor;
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<SUSUISoftwareUpdatePaneDelegate><DevicePINControllerDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) SUSUISoftwareUpdateManager *manager; // ivar: _manager
@property (nonatomic) BOOL nonPromotedUpdate; // ivar: _nonPromotedUpdate
@property (retain, nonatomic) NSError *suError; // ivar: _suError
@property (readonly) Class superclass;
@property (readonly, retain, nonatomic) SUDescriptor *updateDescriptor;


-(BOOL)_errorIsInsufficientSpace:(id)arg0 ;
-(BOOL)clientIsSUSettings;
-(BOOL)downloadDescriptorPane;
-(BOOL)hasAlternateUpdate;
-(BOOL)shouldShowAlternateUpdateButtonForState:(int)arg0 ;
-(BOOL)shouldShowAlternateUpdateGroupForState:(int)arg0 ;
-(BOOL)shouldShowDeferredUpdateGroupForState:(int)arg0 ;
-(BOOL)shouldShowInstallButtonForState:(int)arg0 ;
-(BOOL)shouldShowNonPromotedButtonForState:(int)arg0 ;
-(BOOL)shouldShowNonPromotedGroupForState:(int)arg0 ;
-(BOOL)shouldShowScanGroupForState:(int)arg0 ;
-(BOOL)shouldShowScanStatusCellForState:(int)arg0 ;
-(BOOL)shouldShowTitleCellForState:(int)arg0 ;
-(BOOL)shouldShowTitleGroupForState:(int)arg0 ;
-(BOOL)specifier:(id)arg0 isEqualToSpecifier:(id)arg1 ;
-(BOOL)specifierArrayValue:(id)arg0 IsEqualToSpecifierArrayValue:(id)arg1 ;
-(BOOL)specifierClassValue:(Class)arg0 IsEqualToSpecifierClassValue:(Class)arg1 ;
-(BOOL)specifierDictionaryValue:(id)arg0 IsEqualToSpecifierDictionaryValue:(id)arg1 ;
-(BOOL)specifierIDValue:(id)arg0 IsEqualToSpecifierIDValue:(id)arg1 ;
-(BOOL)specifierIntValue:(NSInteger)arg0 IsEqualToSpecifierIntValue:(NSInteger)arg1 ;
-(BOOL)specifierSelectorValue:(SEL)arg0 IsEqualToSpecifierSelectorValue:(SEL)arg1 ;
-(BOOL)specifierStringValue:(id)arg0 IsEqualToSpecifierStringValue:(id)arg1 ;
-(BOOL)updateReadyToDownload;
-(BOOL)waitingOnSUAssetDownload:(id)arg0 ;
-(CGFloat)tableView:(id)arg0 heightForRowAtIndexPath:(id)arg1 ;
-(CGFloat)timeRemainingForProgress:(id)arg0 isValid:(*BOOL)arg1 ;
-(NSUInteger)alternateUpgradeType;
-(NSUInteger)preferredUpgradeType;
-(NSUInteger)upgradeType;
-(id)_alternateUpdateButtonSpecifierForState:(int)arg0 ;
-(id)_alternateUpdateGroupSpecifierForState:(int)arg0 ;
-(id)_autoInstallCancelButtonSpecifierForState:(int)arg0 ;
-(id)_autoInstallCancelGroupSpecifierForState:(int)arg0 ;
-(id)_automaticUpdateButtonSpecifierForState:(int)arg0 ;
-(id)_automaticUpdateGroupSpecifierForState:(int)arg0 ;
-(id)_deferredUpdateGroupSpecifierForState:(int)arg0 ;
-(id)_installButtonButtonSpecifier;
-(id)_installButtonGroupSpecifier;
-(id)_nonPromotedPrimaryUpdateButtonForState:(int)arg0 ;
-(id)_nonPromotedPrimaryUpdateGroupForState:(int)arg0 ;
-(id)_nonPromotedPrimaryUpdateHeaderGroupForState:(int)arg0 ;
-(id)_scanFooterGroupSpecifierForState:(int)arg0 ;
-(id)_scanHeaderGroupSpecifierForState:(int)arg0 ;
-(id)_scanStatusCellSpecifierForState:(int)arg0 ;
-(id)_scanStatusGroupForState:(int)arg0 ;
-(id)_setInstallButtonButtonSpecifierState:(id)arg0 ;
-(id)_tipKitComingSoonCellSpecifierForState:(int)arg0 ;
-(id)_tipKitComingSoonGroupSpecifierForState:(int)arg0 ;
-(id)_titleCellSpecifierForState:(int)arg0 ;
-(id)_titleGroupSpecifierForState:(int)arg0 ;
-(id)alsoAvailableGroupHeaderString;
-(id)alternateUpdateButtonString;
-(id)alternateUpdateFooterString;
-(id)alternateUpdateSubTextString;
-(id)alternateUpdateVersionString;
-(id)analyticsDownloadAndInstallNowTappedString;
-(id)analyticsDownloadAndInstallTonightTappedString;
-(id)analyticsDownloadOnlyTappedString;
-(id)analyticsOpenStorageTappedString;
-(id)autoUpdateScheduledString;
-(id)autoinstallEnabled;
-(id)buttonString;
-(id)contentController:(id)arg0 contentView:(id)arg1 iconForCustomizationID:(NSInteger)arg2 ;
-(id)currentSpecifiers;
-(id)init;
-(id)initWithDescriptor:(id)arg0 manager:(id)arg1 delegate:(id)arg2 ;
-(id)installLaterTappedString;
-(id)installNowTappedString;
-(id)installedOSVersionString;
-(id)learnMoreTappedString;
-(id)majorOSVersionString;
-(id)majorOSVersionStringForBuildVersion:(id)arg0 ;
-(id)nonPromotedPreferredUpdateButtonString;
-(id)preferredUpdateVersionString;
-(id)specifierWithID:(id)arg0 ;
-(id)specifiers;
-(id)statusString;
-(id)tableCellImageForImage:(id)arg0 ;
-(id)tableView:(id)arg0 cellForRowAtIndexPath:(id)arg1 ;
-(id)timeRemainingStringForProgress:(id)arg0 ;
-(id)updateVersionString:(id)arg0 ;
-(id)updatedSpecifiersArray;
-(int)displayStyle;
-(void)_setTitleCellSpecifierState:(id)arg0 ;
-(void)_setTitleGroupSpecifierState;
-(void)autoInstallCancel:(id)arg0 ;
-(void)autoInstallCancelPrompt:(id)arg0 ;
-(void)clearInstallButton:(id)arg0 ;
-(void)clearInstallButtonGroup:(id)arg0 ;
-(void)clearInstallButtonGroupCell:(id)arg0 ;
-(void)clearInstallButtonGroupFooter:(id)arg0 ;
-(void)clearNonPromotedPrimaryUpdateGroup:(id)arg0 ;
-(void)clearNonPromotedPrimaryUpdateHeaderGroup:(id)arg0 ;
-(void)contentController:(id)arg0 contentDidBecomeAvailable:(id)arg1 animated:(BOOL)arg2 ;
-(void)contentController:(id)arg0 didFinishWithContent:(id)arg1 animated:(BOOL)arg2 ;
-(void)contentController:(id)arg0 eventOccurred:(NSInteger)arg1 content:(id)arg2 context:(id)arg3 ;
-(void)deviceRotated:(id)arg0 ;
-(void)downloadAndInstall:(id)arg0 ;
-(void)downloadAndInstallTonight:(id)arg0 ;
-(void)downloadInstallLongPressPrompt;
-(void)downloadOnly:(id)arg0 ;
-(void)downloadingButtonForSpecifier:(id)arg0 ;
-(void)fixCustomCellSpecifiers;
-(void)handleLongPress:(id)arg0 ;
-(void)install:(id)arg0 ;
-(void)installLaterButtonForSpecifier:(id)arg0 ;
-(void)openStorage;
-(void)preferredContentSizeChanged:(id)arg0 ;
-(void)presentConfimationSpecifier:(id)arg0 ;
-(void)promptForPasscode:(BOOL)arg0 ;
-(void)readyToDownload:(NSUInteger)arg0 ;
-(void)readyToDownloadAndReplacePreferredPaneWithPane:(NSUInteger)arg0 ;
-(void)readyToInstall;
-(void)readyToUpgradeToUserInitiatedDownload;
-(void)readyToUpgradeToUserInitiatedDownloadAndReplacePreferredPaneWithPane;
-(void)refreshInstallButton;
-(void)refreshPane;
-(void)refreshupdateAutoUpdateButton;
-(void)registerForFontChanges;
-(void)registerForRotationChanges;
-(void)reloadCustomCells;
-(void)reloadScanSpacerCells:(*id)arg0 ;
-(void)reloadSpecifiers:(id)arg0 ;
-(void)reloadSpecifiersWithAddedSpecifiers:(id)arg0 changedSpecifiers:(id)arg1 removedSpecifierIDs:(id)arg2 ;
-(void)setInstallButtonDeleted:(id)arg0 ;
-(void)setInstallButtonDownloadAndInstall:(id)arg0 ;
-(void)setInstallButtonDownloading:(id)arg0 shouldRemove:(*BOOL)arg1 ;
-(void)setInstallButtonGroup:(id)arg0 ;
-(void)setInstallButtonInstallNow:(id)arg0 ;
-(void)setInstallButtonInstalling:(id)arg0 ;
-(void)setInstallButtonInstallingForSpecifier:(id)arg0 ;
-(void)setInstallButtonPaused:(id)arg0 ;
-(void)setInstallButtonReadyToInstall:(id)arg0 ;
-(void)setInstallButtonStalled:(id)arg0 shouldRemove:(*BOOL)arg1 ;
-(void)setInstallButtonStorage:(id)arg0 ;
-(void)setTermsLoading:(BOOL)arg0 ;
-(void)setupInstallButton:(id)arg0 shouldRemove:(*BOOL)arg1 ;
-(void)showPINSheetForSpecifier:(id)arg0 ;
-(void)showStorageHelpLinkOnFooterForGroup:(id)arg0 error:(id)arg1 ;
-(void)titleCell:(id)arg0 learnMoreButtonTapped:(id)arg1 ;
-(void)upgradeToUserInitiated:(id)arg0 ;
-(void)viewDidDisappear:(BOOL)arg0 ;
-(void)viewDidLoad;
-(void)viewWillAppear:(BOOL)arg0 ;
-(void)viewWillDisappear:(BOOL)arg0 ;


@end


#endif