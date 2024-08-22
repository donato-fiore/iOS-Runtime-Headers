// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef HKCLINICALAUTHORIZATIONINTROVIEWCONTROLLER_H
#define HKCLINICALAUTHORIZATIONINTROVIEWCONTROLLER_H

@class NSString, UIBarButtonItem, UIViewController, UITableView;
@protocol UITableViewDataSource, UITableViewDelegate, HKHealthPrivacyServicePromptController, HKHealthPrivacyServicePromptControllerDelegate;


#import "HKViewController.h"
#import "HKClinicalAuthorizationSequenceContext.h"
#import "HKClinicalAuthorizationHeaderView.h"

@interface HKClinicalAuthorizationIntroViewController : HKViewController <UITableViewDataSource, UITableViewDelegate, HKHealthPrivacyServicePromptController>



@property (copy, nonatomic) NSString *buttonText;
@property (copy, nonatomic) NSString *buttonTitle; // ivar: _buttonTitle
@property (readonly, nonatomic) HKClinicalAuthorizationSequenceContext *context; // ivar: _context
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<HKHealthPrivacyServicePromptControllerDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (copy, nonatomic) NSString *headerText;
@property (copy, nonatomic) NSString *headerTitle; // ivar: _headerTitle
@property (readonly, nonatomic) HKClinicalAuthorizationHeaderView *headerView; // ivar: _headerView
@property (retain, nonatomic) UIBarButtonItem *navigationButton;
@property (copy, nonatomic) UIBarButtonItem *navigationRightButton; // ivar: _navigationRightButton
@property (retain, nonatomic) UIViewController *nextViewController; // ivar: _nextViewController
@property (readonly) Class superclass;
@property (readonly, nonatomic) UITableView *tableView; // ivar: _tableView


-(BOOL)_indexPathIsValidRow:(id)arg0 ;
-(NSInteger)_rowFromIndexPath:(id)arg0 ;
-(NSInteger)numberOfSectionsInTableView:(id)arg0 ;
-(NSInteger)tableView:(id)arg0 numberOfRowsInSection:(NSInteger)arg1 ;
-(id)_cellForDetailsAtIndexPath:(id)arg0 ;
-(id)_cellForViewHealthRecordsAtIndexPath:(id)arg0 ;
-(id)_createFooterView;
-(id)init;
-(id)initWithContext:(id)arg0 viewController:(id)arg1 ;
-(id)initWithNibName:(id)arg0 bundle:(id)arg1 ;
-(id)tableView:(id)arg0 cellForRowAtIndexPath:(id)arg1 ;
-(id)tableView:(id)arg0 titleForHeaderInSection:(NSInteger)arg1 ;
-(void)_cancelButtonPressed:(id)arg0 ;
-(void)_configureHeaderViewWithSource:(id)arg0 ;
-(void)_configureNavigationItem;
-(void)_configureTableView;
-(void)_finishWithError:(id)arg0 ;
-(void)_nextButtonPressed:(id)arg0 ;
-(void)_updateForCurrentContentSizeCategory;
-(void)_viewHealthRecordsCellTapped:(id)arg0 ;
-(void)loadView;
-(void)tableView:(id)arg0 didSelectRowAtIndexPath:(id)arg1 ;
-(void)traitCollectionDidChange:(id)arg0 ;
-(void)viewDidAppear:(BOOL)arg0 ;
-(void)viewDidLoad;


@end


#endif