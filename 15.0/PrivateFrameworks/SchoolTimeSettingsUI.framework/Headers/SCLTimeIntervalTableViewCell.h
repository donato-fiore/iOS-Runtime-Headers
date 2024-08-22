// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef SCLTIMEINTERVALTABLEVIEWCELL_H
#define SCLTIMEINTERVALTABLEVIEWCELL_H

@class PSTableCell, UITableViewDiffableDataSource, NSDateFormatter, NSString, UITableView;
@protocol UITableViewDelegate, SCLTimePickerTableViewCellDelegate;



@interface SCLTimeIntervalTableViewCell : PSTableCell <UITableViewDelegate, SCLTimePickerTableViewCellDelegate>



@property (retain, nonatomic) UITableViewDiffableDataSource *dataSource; // ivar: _dataSource
@property (readonly, nonatomic) NSDateFormatter *dateFormatter; // ivar: _dateFormatter
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (nonatomic, getter=isReloadingAnimated) BOOL reloadingAnimated; // ivar: _reloadingAnimated
@property (readonly) Class superclass;
@property (retain, nonatomic) UITableView *tableView; // ivar: _tableView


-(NSUInteger)pickerState;
-(id)constraintInterval;
-(id)dateConverter;
-(id)initWithStyle:(NSInteger)arg0 reuseIdentifier:(id)arg1 specifier:(id)arg2 ;
-(id)scheduleTimeFormatter;
-(id)snapshotForPickerState:(NSUInteger)arg0 ;
-(id)tableView:(id)arg0 cellForRowAtIndexPath:(id)arg1 itemIdentifier:(id)arg2 ;
-(id)tableView:(id)arg0 willSelectRowAtIndexPath:(id)arg1 ;
-(id)timeInterval;
-(void)configureTimeCell:(id)arg0 forRow:(NSUInteger)arg1 ;
-(void)configureTimePickerCell:(id)arg0 forRow:(NSUInteger)arg1 ;
-(void)refreshCellContentsWithSpecifier:(id)arg0 ;
-(void)reloadWithSpecifier:(id)arg0 animated:(BOOL)arg1 ;
-(void)tableView:(id)arg0 didSelectRowAtIndexPath:(id)arg1 ;
-(void)timePickerCell:(id)arg0 didUpdateDate:(id)arg1 ;


@end


#endif