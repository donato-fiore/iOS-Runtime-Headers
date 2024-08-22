// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef WFALARMTRIGGERCONFIGURATIONVIEWCONTROLLER_H
#define WFALARMTRIGGERCONFIGURATIONVIEWCONTROLLER_H

@class WFTriggerConfigurationViewController, MTAlarmDataSource, NSString, NSArray, UITableView;
@protocol UITableViewDataSource, UITableViewDelegate, WFAlarmChooserViewControllerDelegate;



@interface WFAlarmTriggerConfigurationViewController : WFTriggerConfigurationViewController <UITableViewDataSource, UITableViewDelegate, WFAlarmChooserViewControllerDelegate>



@property (readonly, nonatomic) MTAlarmDataSource *alarmDataSource; // ivar: _alarmDataSource
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) NSArray *sections; // ivar: _sections
@property (readonly) Class superclass;
@property (readonly, nonatomic) UITableView *tableView; // ivar: _tableView


-(NSInteger)accessoryTypeForCellInSection:(id)arg0 item:(id)arg1 ;
-(NSInteger)numberOfSectionsInTableView:(id)arg0 ;
-(NSInteger)tableView:(id)arg0 numberOfRowsInSection:(NSInteger)arg1 ;
-(id)extraTextForCellInSection:(id)arg0 item:(id)arg1 ;
-(id)infoForSection:(NSInteger)arg0 ;
-(id)initWithTrigger:(id)arg0 mode:(NSUInteger)arg1 ;
-(id)tableView:(id)arg0 cellForRowAtIndexPath:(id)arg1 ;
-(id)tableView:(id)arg0 titleForHeaderInSection:(NSInteger)arg1 ;
-(id)tableView:(id)arg0 viewForHeaderInSection:(NSInteger)arg1 ;
-(id)titleForCellInSection:(id)arg0 item:(id)arg1 ;
-(void)alarmChooserViewController:(id)arg0 didFinishWithChosenAlarms:(id)arg1 ;
-(void)alarmChooserViewControllerDidCancel:(id)arg0 ;
-(void)loadView;
-(void)presentAlarmChooserViewController;
-(void)tableView:(id)arg0 didSelectRowAtIndexPath:(id)arg1 ;
-(void)viewWillAppear:(BOOL)arg0 ;


@end


#endif