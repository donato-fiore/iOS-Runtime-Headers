// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef STALLOWANCEDETAILLISTCONTROLLER_H
#define STALLOWANCEDETAILLISTCONTROLLER_H

@class PSListController, NSArray, PSSpecifier, NSString, UIColor;
@protocol PSDateTimePickerCellDelegate, STCustomizeDaysListControllerDelegate, STRootViewModelCoordinator, STAllowanceDetailListControllerDelegate;


#import "STAllowance.h"

@interface STAllowanceDetailListController : PSListController <PSDateTimePickerCellDelegate, STCustomizeDaysListControllerDelegate>



@property (copy, nonatomic) STAllowance *allowance; // ivar: _allowance
@property (retain, nonatomic) NSArray *budgetedItemSpecifiers; // ivar: _budgetedItemSpecifiers
@property (readonly, nonatomic) NSObject<STRootViewModelCoordinator> *coordinator; // ivar: _coordinator
@property (nonatomic) BOOL creatingNewAllowance; // ivar: _creatingNewAllowance
@property (retain, nonatomic) PSSpecifier *customizeDaysSpecifier; // ivar: _customizeDaysSpecifier
@property (readonly, copy) NSString *debugDescription;
@property (retain, nonatomic) UIColor *defaultTimeCellDetailTextColor; // ivar: _defaultTimeCellDetailTextColor
@property (weak, nonatomic) NSObject<STAllowanceDetailListControllerDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property BOOL didDeleteAllowance; // ivar: _didDeleteAllowance
@property (readonly) NSUInteger hash;
@property (nonatomic) BOOL isSetupController; // ivar: _isSetupController
@property (retain, nonatomic) PSSpecifier *selectedTimeSpecifier; // ivar: _selectedTimeSpecifier
@property (readonly) Class superclass;
@property (retain, nonatomic) PSSpecifier *timeGroupSpecifier; // ivar: _timeGroupSpecifier
@property (retain, nonatomic) PSSpecifier *timePickerSpecifier; // ivar: _timePickerSpecifier
@property (retain, nonatomic) PSSpecifier *timeSpecifier; // ivar: _timeSpecifier
@property BOOL useBackButton; // ivar: _useBackButton


-(BOOL)canBeShownFromSuspendedState;
-(BOOL)hasSetBudgetTime;
-(BOOL)hasSetBudgetTimeOrCustomSchedule;
-(BOOL)shouldReloadSpecifiersOnResume;
-(id)_allowanceEnabled:(id)arg0 ;
-(id)_askForMoreTime:(id)arg0 ;
-(id)_categoryDetailText:(id)arg0 ;
-(id)atEndOfLimitFooterText;
-(id)budgetTime;
-(id)createBudgetedItemSpecifiers;
-(id)datePickerForSpecifier:(id)arg0 ;
-(id)initWithCoordinator:(id)arg0 ;
-(id)specifiers;
-(id)tableView:(id)arg0 cellForRowAtIndexPath:(id)arg1 ;
-(id)timeFooterText;
-(void)_editListButtonPressed:(id)arg0 ;
-(void)_setAskForMoreTime:(id)arg0 specifier:(id)arg1 ;
-(void)_showOrHidePickerSpecifierForSpecifier:(id)arg0 highlight:(BOOL)arg1 ;
-(void)cancelButtonTapped:(id)arg0 ;
-(void)confirmDeletion:(id)arg0 ;
-(void)customizeDaysListController:(id)arg0 didFinishEditingTimeByDay:(id)arg1 ;
-(void)datePickerChanged:(id)arg0 ;
-(void)deleteAllowance:(id)arg0 ;
-(void)loadView;
-(void)saveButtonTapped:(id)arg0 ;
-(void)showCustomizeDaysController:(id)arg0 ;
-(void)showOrHideCustomizeDaysSpecifier;
-(void)tableView:(id)arg0 didSelectRowAtIndexPath:(id)arg1 ;
-(void)updateSaveButton;
-(void)viewDidAppear:(BOOL)arg0 ;
-(void)viewDidLoad;
-(void)viewWillDisappear:(BOOL)arg0 ;
-(void)willResignActive;


@end


#endif