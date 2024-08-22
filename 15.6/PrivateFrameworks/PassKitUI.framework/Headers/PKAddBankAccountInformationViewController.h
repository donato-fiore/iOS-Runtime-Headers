// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef PKADDBANKACCOUNTINFORMATIONVIEWCONTROLLER_H
#define PKADDBANKACCOUNTINFORMATIONVIEWCONTROLLER_H

@class UIButton, PKBankAccountInformation, NSArray, NSMutableDictionary, NSString, PKAccount;
@protocol UITextFieldDelegate, PKAddBankAccountInformationViewControllerDelegate;


#import "PKPaymentSetupTableViewController.h"
#import "PKTableHeaderView.h"
#import "PKFindBankAccountInformationFooterView.h"

@interface PKAddBankAccountInformationViewController : PKPaymentSetupTableViewController <UITextFieldDelegate>

 {
    PKTableHeaderView *_tableHeader;
    PKFindBankAccountInformationFooterView *_footerView;
    UIButton *_deleteBankInformationButton;
    NSUInteger _state;
    PKBankAccountInformation *_bankInformation;
    NSArray *_cellText;
    NSArray *_cellPlaceholderText;
    NSMutableDictionary *_cells;
    NSString *_accountCountryCode;
    NSMutableDictionary *_userEnteredValues;
    BOOL _isEditingBankInformation;
    BOOL _hasInteractedWithCell;
    BOOL _prefilledFromKeychain;
    NSMutableDictionary *_cellHasPastedContent;
    PKAccount *_featureAccount;
}


@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<PKAddBankAccountInformationViewControllerDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (nonatomic) BOOL offerKeychainPreFill; // ivar: _offerKeychainPreFill
@property (readonly) Class superclass;


-(BOOL)_allCellsHavePastedContent;
-(BOOL)_cellValuesAreValid;
-(BOOL)_isAccountNumberCellValid;
-(BOOL)_isCellValidAtRow:(NSUInteger)arg0 ;
-(BOOL)_isRoutingNumberCellValid;
-(BOOL)pkui_disablesAutomaticDismissalUponEnteringBackground;
-(BOOL)textField:(id)arg0 shouldChangeCharactersInRange:(struct _NSRange )arg1 replacementString:(id)arg2 ;
-(CGFloat)_minimumRequiredWidthForCellText:(id)arg0 withFont:(id)arg1 ;
-(CGFloat)tableView:(id)arg0 heightForRowAtIndexPath:(id)arg1 ;
-(NSInteger)numberOfSectionsInTableView:(id)arg0 ;
-(NSInteger)tableView:(id)arg0 numberOfRowsInSection:(NSInteger)arg1 ;
-(NSUInteger)_maxTextLengthForRow:(NSUInteger)arg0 ;
-(NSUInteger)_minTextLengthForRow:(NSUInteger)arg0 ;
-(NSUInteger)_rowWithTextField:(id)arg0 ;
-(id)_bankInformationTextForRow:(NSUInteger)arg0 ;
-(id)_cellHasPastedContent;
-(id)_countrySpecificLocalizedStringKeyForKey:(id)arg0 ;
-(id)_countrySpecificLocalizedStringKeyForKey:(id)arg0 minDigits:(NSUInteger)arg1 maxDigits:(NSUInteger)arg2 ;
-(id)_countrySpecificLocalizedStringKeyForKey:(id)arg0 numberOfDigits:(NSUInteger)arg1 ;
-(id)_footerView;
-(id)_headerSubTitle;
-(id)_headerTitle;
-(id)_placeholderTextForRow:(NSUInteger)arg0 ;
-(id)_textForRow:(NSUInteger)arg0 ;
-(id)_userEnteredTextForCellAtRow:(NSUInteger)arg0 ;
-(id)init;
-(id)initWithDelegate:(id)arg0 bankInformation:(id)arg1 accountCountryCode:(id)arg2 ;
-(id)initWithDelegate:(id)arg0 bankInformation:(id)arg1 accountCountryCode:(id)arg2 featureAccount:(id)arg3 ;
-(id)initWithState:(NSUInteger)arg0 delegate:(id)arg1 bankInformation:(id)arg2 accountCountryCode:(id)arg3 featureAccount:(id)arg4 ;
-(id)tableView:(id)arg0 cellForRowAtIndexPath:(id)arg1 ;
-(void)_addPaymentFundingSourceWithCompletion:(id)arg0 ;
-(void)_deleteBankInformation;
-(void)_hideHeaderActivitySpinner;
-(void)_reloadTableSection;
-(void)_setCellHasPastedContent:(BOOL)arg0 forRow:(NSUInteger)arg1 ;
-(void)_setIdleTimerDisabled:(BOOL)arg0 title:(id)arg1 subtitle:(id)arg2 ;
-(void)_setNavigationBarEnabled:(BOOL)arg0 ;
-(void)_setNavigationBarItemsHidden:(BOOL)arg0 ;
-(void)_setState:(NSUInteger)arg0 ;
-(void)_setTableFooterView;
-(void)_setTableViewHeaderActivitySpinnerAnimated:(BOOL)arg0 title:(id)arg1 subtitle:(id)arg2 ;
-(void)_setText:(id)arg0 forForCellAtRow:(NSUInteger)arg1 ;
-(void)_showHeaderActivitySpinner;
-(void)_showHowToFindAccountInformationViewController:(id)arg0 ;
-(void)_updateBankAccountInformationWithValues:(id)arg0 completion:(id)arg1 ;
-(void)_updateHeaderAndNavigationItems;
-(void)cancel:(id)arg0 ;
-(void)dealloc;
-(void)loadView;
-(void)next:(id)arg0 ;
-(void)setHeaderViewTitle:(id)arg0 subtitle:(id)arg1 ;
-(void)tableView:(id)arg0 willDisplayCell:(id)arg1 forRowAtIndexPath:(id)arg2 ;
-(void)textFieldDidBeginEditing:(id)arg0 ;
-(void)textFieldDidChange:(id)arg0 ;
-(void)textFieldDidClear:(id)arg0 ;
-(void)viewDidAppear:(BOOL)arg0 ;
-(void)viewWillAppear:(BOOL)arg0 ;
-(void)viewWillLayoutSubviews;


@end


#endif