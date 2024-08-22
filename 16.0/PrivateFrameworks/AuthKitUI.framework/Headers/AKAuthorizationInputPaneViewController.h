// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef AKAUTHORIZATIONINPUTPANEVIEWCONTROLLER_H
#define AKAUTHORIZATIONINPUTPANEVIEWCONTROLLER_H

@class NSArray, NSString, AKUserInformation, AKAuthorizationPresentationContext, UIBarButtonItem;
@protocol AKAuthorizationSubPaneConfirmButtonDelegate, AKAuthorizationPasswordAuthenticationDelegate, UITableViewDataSource, UITableViewDelegate, UITextFieldDelegate, AKAuthorizationEditableDataSources;


#import "AKAuthorizationPaneViewController.h"
#import "AKCATiburonInputUIReporter.h"
#import "AKAuthorizationSubPaneInfoLabel.h"
#import "AKAuthorizationViewController.h"
#import "AKAuthorizationSubPaneConfirmButton.h"
#import "AKAuthorizationScopeChoices.h"
#import "AKAuthorizationSubPaneImage.h"
#import "AKAuthorizationNameFormatter.h"

@interface AKAuthorizationInputPaneViewController : AKAuthorizationPaneViewController <AKAuthorizationSubPaneConfirmButtonDelegate, AKAuthorizationPasswordAuthenticationDelegate, UITableViewDataSource, UITableViewDelegate, UITextFieldDelegate, AKAuthorizationEditableDataSources>

 {
    BOOL _isEditingName;
    BOOL _isEmailExpanded;
    NSUInteger _editingGivenNameIndex;
    NSUInteger _editingFamilyNameIndex;
    CGFloat _nameEditHeightChange;
    NSArray *_validatedScopes;
    AKCATiburonInputUIReporter *_analyticsReport;
    AKAuthorizationSubPaneInfoLabel *_infoLabel;
}


@property (weak, nonatomic) AKAuthorizationViewController *authorizationViewController; // ivar: _authorizationViewController
@property (retain, nonatomic) AKAuthorizationSubPaneConfirmButton *confirmButton; // ivar: _confirmButton
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) AKAuthorizationScopeChoices *editableScopeChoices; // ivar: _editableScopeChoices
@property (nonatomic) BOOL editableScopeChoicesChanged; // ivar: _editableScopeChoicesChanged
@property (nonatomic, getter=isEditingName) BOOL editingName;
@property (copy, nonatomic) AKUserInformation *editingUserInformation; // ivar: _editingUserInformation
@property (nonatomic, getter=isEmailExpanded) BOOL emailExpanded;
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) AKAuthorizationSubPaneImage *imageSubPane; // ivar: _imageSubPane
@property (retain, nonatomic) AKAuthorizationNameFormatter *nameFormatter; // ivar: _nameFormatter
@property (readonly, nonatomic) AKAuthorizationPresentationContext *presentationContext; // ivar: _presentationContext
@property (retain, nonatomic) UIBarButtonItem *savedLeftBarButtonItem; // ivar: _savedLeftBarButtonItem
@property (retain, nonatomic) UIBarButtonItem *savedRightBarButtonItem; // ivar: _savedRightBarButtonItem
@property (readonly) Class superclass;


-(BOOL)_emailScopeAllowsAuthorization;
-(BOOL)_getValidEditingGivenName:(*id)arg0 familyName:(*id)arg1 ;
-(BOOL)_hasEmailScope;
-(BOOL)_hasNameScope;
-(BOOL)_hasOneLoginChoice;
-(BOOL)_isSubscriptionFlow;
-(BOOL)_isValidEditingName;
-(BOOL)_nameScopeAllowsAuthorization;
-(BOOL)_shouldAllowAuthorization;
-(BOOL)_shouldOverrideIntrinsicContentHeight;
-(BOOL)_shouldPresentCreateFlow;
-(BOOL)_shouldPresentUpgradeFlow;
-(BOOL)tableView:(id)arg0 shouldHighlightRowAtIndexPath:(id)arg1 ;
-(BOOL)textField:(id)arg0 shouldChangeCharactersInRange:(struct _NSRange )arg1 replacementString:(id)arg2 ;
-(BOOL)textFieldShouldReturn:(id)arg0 ;
-(BOOL)validateReadyForAuthorization;
-(CGFloat)_computeNameEditHeightChange;
-(CGFloat)_mainSectionScreenMaxY;
-(CGFloat)_padNameEditHeightChange;
-(CGFloat)_phoneNameEditHeightChange;
-(CGFloat)contentScrollOffset;
-(CGFloat)intrinsicContentHeight;
-(NSInteger)_numberOfRowsInValidatedScopes;
-(NSInteger)numberOfSectionsInTableView:(id)arg0 ;
-(NSInteger)tableView:(id)arg0 numberOfRowsInSection:(NSInteger)arg1 ;
-(NSUInteger)_numberOfRowsInScope:(id)arg0 ;
-(id)_cellForScope:(id)arg0 localRow:(NSInteger)arg1 ;
-(id)_clearButton;
-(id)_defaultSharedEmail;
-(id)_doneBarButtonItem;
-(id)_editingNameCellForRow:(NSUInteger)arg0 ;
-(id)_emailCellForLocalRow:(NSInteger)arg0 ;
-(id)_firstLoginChoice;
-(id)_hideMyEmailCell;
-(id)_localizedAuthorizationString;
-(id)_localizedChoiceString;
-(id)_localizedEmailKey;
-(id)_localizedInfoString;
-(id)_localizedNameKey;
-(id)_localizedPrivacyMessageStringForManagedAppleID;
-(id)_localizedSubscriptionString;
-(id)_localizedUpgradeString;
-(id)_loginChoiceCellForRow:(NSUInteger)arg0 ;
-(id)_nameCell;
-(id)_nameCellDetailLabelTextForManagedAppleID;
-(id)_scopeCellForRow:(NSUInteger)arg0 ;
-(id)_selectedLoginChoice;
-(id)_shareMyEmailCell;
-(id)_singleEmailCellForIndex:(NSInteger)arg0 ;
-(id)_textFieldForRow:(NSUInteger)arg0 ;
-(id)_textFromTextField:(id)arg0 ;
-(id)init;
-(id)initWithPresentationContext:(id)arg0 scopeChoices:(id)arg1 ;
-(id)tableView:(id)arg0 cellForRowAtIndexPath:(id)arg1 ;
-(void)_addAuthorizationButtonToPaneContext:(id)arg0 ;
-(void)_addShimToStackView:(id)arg0 ;
-(void)_addUseOtherIDButtonToContext:(id)arg0 ;
-(void)_beginEditing;
-(void)_beginEditingRow:(NSUInteger)arg0 ;
-(void)_createIconViewWithIcon:(id)arg0 ;
-(void)_didSelectEditScope:(id)arg0 options:(id)arg1 ;
-(void)_doneButtonSelected:(id)arg0 ;
-(void)_enableOrDisableConfirmButton;
-(void)_endEditing;
-(void)_handleAuthorizationError:(id)arg0 ;
-(void)_loadIconViewImage;
-(void)_nameEditDone;
-(void)_paneDelegate_authorizationPaneViewControllerDismissWithAuthorization:(id)arg0 error:(id)arg1 ;
-(void)_paneDelegate_didRequestAuthorizationWithUserProvidedInformation:(id)arg0 completion:(id)arg1 ;
-(void)_performAuthorizationWithRawPassword:(id)arg0 ;
-(void)_performAuthorizationWithRawPassword:(id)arg0 completionHandler:(id)arg1 ;
-(void)_performPasswordAuthentication;
-(void)_prepareScopeChoices:(id)arg0 withLoginChoice:(id)arg1 ;
-(void)_reloadDataAnimated:(BOOL)arg0 heightChange:(id)arg1 ;
// -(void)_reloadDataAnimated:(BOOL)arg0 heightChange:(id)arg1 animation:(unk)arg2  ;
// -(void)_reloadDataAnimated:(BOOL)arg0 heightChange:(id)arg1 animation:(unk)arg2 completion:(id)arg3  ;
-(void)_selectEmailLocalRow:(NSInteger)arg0 ;
-(void)_selectHideMyEmail;
-(void)_selectLoginChoiceCell;
-(void)_selectRow:(NSInteger)arg0 ;
-(void)_selectScope:(id)arg0 localRow:(NSInteger)arg1 ;
-(void)_selectShareMyEmail;
-(void)_selectSingleEmailAtIndex:(NSInteger)arg0 ;
-(void)_setCancelButtonEnabled:(BOOL)arg0 ;
-(void)_setFamilyNameFromTextField:(id)arg0 ;
-(void)_setGivenNameFromTextField:(id)arg0 ;
-(void)_setupAlternateButton;
-(void)_setupAnalyticsReport;
-(void)_setupEditableScopeChoices;
-(void)_setupFamilyNameCell:(id)arg0 ;
-(void)_setupGivenNameCell:(id)arg0 ;
-(void)_setupIconView;
-(void)_setupInfoLabel;
-(void)_setupLoginChoiceView;
-(void)_setupNameAndEmailScopeViews;
-(void)_setupPrivacyLink;
-(void)_setupTableView;
-(void)_setupUpgradeFromPasswordBulletPointViews;
-(void)_setupValidatedScopes;
-(void)_transitionFromEditingNameAnimated:(BOOL)arg0 ;
-(void)_transitionToEditingNameAnimated:(BOOL)arg0 ;
-(void)_updateAnalyticsReport;
-(void)_updateDataSourceWithValidEditingName;
-(void)_updateInfoLabelStringWithAppName:(id)arg0 ;
-(void)_updateLayoutForHeightChange:(CGFloat)arg0 ;
-(void)_updatePaneTitleForEditing:(BOOL)arg0 ;
-(void)_useOtherIDButtonSelected:(id)arg0 ;
-(void)dealloc;
-(void)passwordAuthenticationCompletedWithResults:(id)arg0 error:(id)arg1 ;
-(void)performAuthorization;
-(void)performPasswordAuthentication;
-(void)subPaneConfirmButtonDidEnterProcessingState:(id)arg0 ;
-(void)subPaneConfirmButtonPerformExternalAuthentication:(id)arg0 ;
-(void)subpaneConfirmButtonDidFailBiometry:(id)arg0 ;
-(void)tableView:(id)arg0 didSelectRowAtIndexPath:(id)arg1 ;
-(void)viewDidAppear:(BOOL)arg0 ;
-(void)viewDidDisappear:(BOOL)arg0 ;
-(void)viewDidLoad;
-(void)viewWillAppear:(BOOL)arg0 ;
-(void)viewWillDisappear:(BOOL)arg0 ;


@end


#endif