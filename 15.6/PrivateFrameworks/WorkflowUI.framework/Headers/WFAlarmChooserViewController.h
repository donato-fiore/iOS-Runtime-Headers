// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef WFALARMCHOOSERVIEWCONTROLLER_H
#define WFALARMCHOOSERVIEWCONTROLLER_H

@class UIViewController, MTAlarmDataSource, NSMutableOrderedSet, NSString, UITableView;
@protocol UITableViewDataSource, UITableViewDelegate, MTAlarmDataSourceObserver, WFAlarmChooserViewControllerDelegate;



@interface WFAlarmChooserViewController : UIViewController <UITableViewDataSource, UITableViewDelegate, MTAlarmDataSourceObserver>



@property (readonly, nonatomic) MTAlarmDataSource *alarmDataSource; // ivar: _alarmDataSource
@property (readonly, nonatomic) NSMutableOrderedSet *checkedAlarmIDs; // ivar: _checkedAlarmIDs
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<WFAlarmChooserViewControllerDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;
@property (readonly, nonatomic) UITableView *tableView; // ivar: _tableView


-(BOOL)isModalInPresentation;
-(NSInteger)tableView:(id)arg0 numberOfRowsInSection:(NSInteger)arg1 ;
-(id)initWithAlarmDataSource:(id)arg0 checkedAlarmIDs:(id)arg1 ;
-(id)tableView:(id)arg0 cellForRowAtIndexPath:(id)arg1 ;
-(void)cancel:(id)arg0 ;
-(void)checkForValidCheckedAlarmIDs;
-(void)dataSourceDidReload:(id)arg0 ;
-(void)finish:(id)arg0 ;
-(void)loadView;
-(void)tableView:(id)arg0 didSelectRowAtIndexPath:(id)arg1 ;
-(void)updateDoneButtonEnabled;
-(void)viewDidLoad;


@end


#endif