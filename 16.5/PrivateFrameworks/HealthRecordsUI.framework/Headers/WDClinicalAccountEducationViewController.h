// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef WDCLINICALACCOUNTEDUCATIONVIEWCONTROLLER_H
#define WDCLINICALACCOUNTEDUCATIONVIEWCONTROLLER_H

@class HKViewController, HKClinicalAccount, NSString, UIView, UIButton, NSArray, UITableView;
@protocol UITableViewDataSource, UITableViewDelegate;


#import "_TtC15HealthRecordsUI26HealthRecordsNotifications.h"
#import "WDClinicalAccountOnboardingSession.h"
#import "HRProfile.h"

@interface WDClinicalAccountEducationViewController : HKViewController <UITableViewDataSource, UITableViewDelegate>



@property (readonly, copy, nonatomic) HKClinicalAccount *account; // ivar: _account
@property (copy, nonatomic) id *completionBlock; // ivar: _completionBlock
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (retain, nonatomic) UIView *footerView; // ivar: _footerView
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) UIButton *nextButton; // ivar: _nextButton
@property (retain, nonatomic) _TtC15HealthRecordsUI26HealthRecordsNotifications *notificationsManager; // ivar: _notificationsManager
@property (readonly, nonatomic) WDClinicalAccountOnboardingSession *onboardingSession; // ivar: _onboardingSession
@property (readonly, nonatomic) HRProfile *profile;
@property (nonatomic) BOOL promptForDataCollection; // ivar: _promptForDataCollection
@property (retain, nonatomic) NSArray *sections; // ivar: _sections
@property (readonly) Class superclass;
@property (retain, nonatomic) UITableView *tableView; // ivar: _tableView


-(BOOL)_shouldProceedToSharingToProviderOnboarding;
-(BOOL)tableView:(id)arg0 shouldDrawBottomSeparatorForSection:(NSInteger)arg1 ;
-(BOOL)tableView:(id)arg0 shouldDrawTopSeparatorForSection:(NSInteger)arg1 ;
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
-(void)_navigationAction:(id)arg0 ;
-(void)_setupConstraints;
-(void)_setupSubviews;
-(void)fetchShouldPromptForDataCollection;
-(void)loadView;
-(void)updateNextButton;
-(void)viewDidAppear:(BOOL)arg0 ;
-(void)viewDidLoad;
-(void)viewWillAppear:(BOOL)arg0 ;


@end


#endif