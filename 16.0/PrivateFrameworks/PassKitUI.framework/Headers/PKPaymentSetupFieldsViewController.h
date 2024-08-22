// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PKPAYMENTSETUPFIELDSVIEWCONTROLLER_H
#define PKPAYMENTSETUPFIELDSVIEWCONTROLLER_H

@class NSMapTable, NSArray, NSString, PKPaymentSetupFieldsModel, PKPaymentWebService;
@protocol UITextFieldDelegate, PKPaymentSetupFieldFooterViewDelegate, PKPaymentSetupFieldCellDelegate, PKNavigationItemController, PKPaymentSetupViewControllerDelegate;


#import "PKPaymentSetupTableViewController.h"
#import "PKTableHeaderView.h"
#import "PKFooterHyperlinkView.h"

@interface PKPaymentSetupFieldsViewController : PKPaymentSetupTableViewController <UITextFieldDelegate, PKPaymentSetupFieldFooterViewDelegate, PKPaymentSetupFieldCellDelegate, PKNavigationItemController>

 {
    PKTableHeaderView *_headerView;
    BOOL _hasScrolledToShowFields;
    BOOL _cellsAreEnabled;
    NSMapTable *_fieldIdentifierToCellMap;
    NSMapTable *_fieldIdentifierToFooterViewMap;
    PKFooterHyperlinkView *_footerHyperlinkView;
    id *_currentNextActionBlock;
    NSArray *_leftBarButtonItems;
    NSArray *_rightBarButtonItems;
    BOOL _navigationEnabled;
    BOOL _rightBarButtonItemsEnabled;
    BOOL _hidesBackButton;
}


@property (readonly, nonatomic, getter=isComplete) BOOL complete;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (retain, nonatomic) PKPaymentSetupFieldsModel *fieldsModel; // ivar: _fieldsModel
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic, getter=isPerformingNextActionLoop) BOOL performingNextActionLoop; // ivar: _performingNextActionLoop
@property (readonly, nonatomic, getter=isProvisioningPaymentAccount) BOOL provisioningPaymentAccount; // ivar: _provisioningPaymentAccount
@property (retain, nonatomic) NSArray *sectionIdentifiers; // ivar: _sectionIdentifiers
@property (weak, nonatomic) NSObject<PKPaymentSetupViewControllerDelegate> *setupDelegate; // ivar: _setupDelegate
@property (readonly, nonatomic, getter=isShowingActivitySpinner) BOOL showingActivitySpinner; // ivar: _showingActivitySpinner
@property (readonly) Class superclass;
@property (retain, nonatomic) PKPaymentWebService *webService; // ivar: _webService


-(BOOL)fieldCellEditableTextFieldShouldBeginEditing:(id)arg0 ;
-(BOOL)fieldCellEditableTextFieldShouldClear:(id)arg0 ;
-(BOOL)fieldCellEditableTextFieldShouldReturn:(id)arg0 ;
-(BOOL)isEmpty;
-(BOOL)shouldAppearWithFirstEmptyFieldAsFirstResponder;
-(BOOL)shouldDisplayFooterField;
-(BOOL)shouldDisplayFooterFieldInline:(id)arg0 ;
-(CGFloat)tableView:(id)arg0 heightForFooterInSection:(NSInteger)arg1 ;
-(CGFloat)tableView:(id)arg0 heightForRowAtIndexPath:(id)arg1 ;
-(NSInteger)numberOfSectionsInTableView:(id)arg0 ;
-(NSInteger)tableView:(id)arg0 numberOfRowsInSection:(NSInteger)arg1 ;
-(id)_contextSpecificStringForAggDKey:(id)arg0 ;
-(id)allCells;
-(id)cellForIdentifier:(id)arg0 ;
-(id)defaultFields;
-(id)defaultHeaderViewSubTitle;
-(id)defaultHeaderViewTitle;
-(id)displayedFooterField;
-(id)fieldForIdentifier:(id)arg0 ;
-(id)firstEmptyCell;
-(id)firstEmptyField;
-(id)firstEmptySetupField;
-(id)firstResponderCell;
-(id)footerHyperlinkView;
-(id)footerView;
-(id)footerViewForIdentifier:(id)arg0 ;
-(id)headerView;
-(id)identifierForIndexPath:(id)arg0 ;
-(id)initWithWebService:(id)arg0 context:(NSInteger)arg1 setupDelegate:(id)arg2 setupFieldsModel:(id)arg3 ;
-(id)nextResponderCellForCurrentIdentifier:(id)arg0 ;
-(id)readonlyFieldIdentifiers;
-(id)tableView:(id)arg0 cellForRowAtIndexPath:(id)arg1 ;
-(id)tableView:(id)arg0 viewForFooterInSection:(NSInteger)arg1 ;
-(id)visibleFieldIdentifiers;
-(id)visibleFieldIdentifiersForSection:(NSUInteger)arg0 ;
-(void)_continueNextActionLoop:(BOOL)arg0 ;
-(void)_destroyNavigationBarButtonItemsAnimated:(BOOL)arg0 ;
-(void)_fieldLabelDidTapButton:(id)arg0 ;
-(void)_handleNextButtonTapped:(id)arg0 ;
-(void)_noteFieldIdentifiersChangedUpdateHeaders:(BOOL)arg0 ;
-(void)_setCellsEnabled:(BOOL)arg0 ;
-(void)_setIdleTimerDisabled:(BOOL)arg0 title:(id)arg1 subtitle:(id)arg2 ;
-(void)_setLeftBarButtonItems:(id)arg0 animated:(BOOL)arg1 ;
-(void)_setNavigationBarEnabled:(BOOL)arg0 animated:(BOOL)arg1 ;
-(void)_setRightBarButtonItems:(id)arg0 animated:(BOOL)arg1 ;
-(void)_setRightBarButtonItemsEnabled:(BOOL)arg0 ;
-(void)_setTableViewHeaderActivityIndicatorActive:(BOOL)arg0 title:(id)arg1 subtitle:(id)arg2 animated:(BOOL)arg3 ;
-(void)_triggerNextActionLoop:(BOOL)arg0 ;
-(void)_updateNavigationItemAnimated:(BOOL)arg0 ;
-(void)_updateRightBarButtonState;
-(void)endUserInteraction;
-(void)fieldCellDidTapButton:(id)arg0 ;
-(void)fieldCellEditableTextFieldValueDidChange:(id)arg0 ;
-(void)fieldFooterViewDidTapButton:(id)arg0 ;
-(void)handleNextActionError:(id)arg0 shouldContinue:(BOOL)arg1 withCompletion:(id)arg2 ;
-(void)handleNextActionWithCompletion:(id)arg0 ;
-(void)handleNextButtonTapped:(id)arg0 ;
-(void)hideActivitySpinner;
-(void)hideActivitySpinnerWithTitle:(id)arg0 subtitle:(id)arg1 animated:(BOOL)arg2 ;
-(void)logAnalyticsCheckpointForKey:(id)arg0 ;
-(void)logAnalyticsContextSpecificCheckpointForKey:(id)arg0 ;
-(void)noteFieldIdentifiersChanged;
-(void)noteFieldIdentifiersChangedAndUpdateHeaders;
-(void)reloadHeaderView;
-(void)setHeaderViewTitle:(id)arg0 subtitle:(id)arg1 ;
-(void)setHidesBackButton:(BOOL)arg0 animated:(BOOL)arg1 ;
-(void)showActivitySpinnerWithTitle:(id)arg0 subtitle:(id)arg1 ;
-(void)showCheckmarkAnimated:(BOOL)arg0 ;
-(void)tableView:(id)arg0 willDisplayCell:(id)arg1 forRowAtIndexPath:(id)arg2 ;
-(void)triggerNextActionLoop;
-(void)viewDidAppear:(BOOL)arg0 ;
-(void)viewDidLayoutSubviews;
-(void)viewDidLoad;
-(void)viewWillAppear:(BOOL)arg0 ;
-(void)viewWillDisappear:(BOOL)arg0 ;


@end


#endif