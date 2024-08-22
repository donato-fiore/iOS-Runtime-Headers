// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef WDIMPROVEMENTDATACOLLECTIONOPTINVIEWCONTROLLER_H
#define WDIMPROVEMENTDATACOLLECTIONOPTINVIEWCONTROLLER_H

@class HKViewController, HKClinicalAccount, UIButton, NSString, UIView, NSArray, UITableView;
@protocol UITableViewDataSource, UITableViewDelegate;


#import "WDClinicalAccountOnboardingSession.h"

@interface WDImprovementDataCollectionOptInViewController : HKViewController <UITableViewDataSource, UITableViewDelegate>



@property (readonly, nonatomic) HKClinicalAccount *account; // ivar: _account
@property (retain, nonatomic) UIButton *allowButton; // ivar: _allowButton
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (retain, nonatomic) UIButton *doNotAllowButton; // ivar: _doNotAllowButton
@property (retain, nonatomic) UIView *footerView; // ivar: _footerView
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) WDClinicalAccountOnboardingSession *onboardingSession; // ivar: _onboardingSession
@property (retain, nonatomic) NSArray *sections; // ivar: _sections
@property (readonly) Class superclass;
@property (retain, nonatomic) UITableView *tableView; // ivar: _tableView


-(CGFloat)tableView:(id)arg0 heightForFooterInSection:(NSInteger)arg1 ;
-(CGFloat)tableView:(id)arg0 heightForHeaderInSection:(NSInteger)arg1 ;
-(NSInteger)numberOfSectionsInTableView:(id)arg0 ;
-(NSInteger)tableView:(id)arg0 numberOfRowsInSection:(NSInteger)arg1 ;
-(NSUInteger)supportedInterfaceOrientations;
-(id)initWithOnboardingSession:(id)arg0 account:(id)arg1 ;
-(id)tableView:(id)arg0 cellForRowAtIndexPath:(id)arg1 ;
-(id)tableView:(id)arg0 titleForFooterInSection:(NSInteger)arg1 ;
-(id)tableView:(id)arg0 titleForHeaderInSection:(NSInteger)arg1 ;
-(id)tableView:(id)arg0 viewForFooterInSection:(NSInteger)arg1 ;
-(id)tableView:(id)arg0 viewForHeaderInSection:(NSInteger)arg1 ;
-(void)_computeSections;
-(void)_pushToNextView;
-(void)_setOptInStatus:(NSInteger)arg0 ;
-(void)_setupConstraints;
-(void)_setupSubviews;
-(void)aboutPrivacyButtonTapped:(id)arg0 ;
-(void)allowButtonTapped:(id)arg0 ;
-(void)cancelButtonTapped:(id)arg0 ;
-(void)doNotAllowButtonTapped:(id)arg0 ;
-(void)loadView;
-(void)viewDidAppear:(BOOL)arg0 ;
-(void)viewDidLoad;
-(void)viewWillAppear:(BOOL)arg0 ;


@end


#endif