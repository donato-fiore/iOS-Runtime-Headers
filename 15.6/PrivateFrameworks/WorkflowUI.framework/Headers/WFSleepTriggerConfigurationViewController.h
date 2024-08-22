// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef WFSLEEPTRIGGERCONFIGURATIONVIEWCONTROLLER_H
#define WFSLEEPTRIGGERCONFIGURATIONVIEWCONTROLLER_H

@class WFTriggerConfigurationViewController, NSString, WFHealthFeatureAvailability, NSArray, UITableView;
@protocol UITableViewDataSource, UITableViewDelegate, WFHealthFeatureObserver;



@interface WFSleepTriggerConfigurationViewController : WFTriggerConfigurationViewController <UITableViewDataSource, UITableViewDelegate, WFHealthFeatureObserver>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) WFHealthFeatureAvailability *healthFeatureAvailability; // ivar: _healthFeatureAvailability
@property (readonly, nonatomic) NSArray *sections; // ivar: _sections
@property (readonly) Class superclass;
@property (readonly, nonatomic) UITableView *tableView; // ivar: _tableView


-(BOOL)shouldEnableNextButton;
-(NSInteger)numberOfSectionsInTableView:(id)arg0 ;
-(NSInteger)tableView:(id)arg0 numberOfRowsInSection:(NSInteger)arg1 ;
-(id)footerLinkViewForTableView:(id)arg0 ;
-(id)infoForSection:(NSInteger)arg0 ;
-(id)initWithTrigger:(id)arg0 mode:(NSUInteger)arg1 ;
-(id)tableView:(id)arg0 cellForRowAtIndexPath:(id)arg1 ;
-(id)tableView:(id)arg0 titleForHeaderInSection:(NSInteger)arg1 ;
-(id)tableView:(id)arg0 viewForFooterInSection:(NSInteger)arg1 ;
-(id)tableView:(id)arg0 viewForHeaderInSection:(NSInteger)arg1 ;
-(void)healthFeatureAvailability:(id)arg0 sleepOnboardingStatusDidChange:(NSUInteger)arg1 ;
-(void)loadView;
-(void)setupParameterSectionCell:(id)arg0 atRow:(NSInteger)arg1 ;
-(void)tableView:(id)arg0 didSelectRowAtIndexPath:(id)arg1 ;
-(void)updateUI;
-(void)viewWillAppear:(BOOL)arg0 ;


@end


#endif