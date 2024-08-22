// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef WFTIMEOFFSETPICKERVIEWCONTROLLER_H
#define WFTIMEOFFSETPICKERVIEWCONTROLLER_H

@class UIViewController, UIPickerView, NSString, NSArray, UITableView;
@protocol UITableViewDelegate, UITableViewDataSource, WFTimeOffsetPickerViewControllerDelegate;



@interface WFTimeOffsetPickerViewController : UIViewController <UITableViewDelegate, UITableViewDataSource>



@property (retain, nonatomic) UIPickerView *currentPickerView; // ivar: _currentPickerView
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<WFTimeOffsetPickerViewControllerDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) NSUInteger event; // ivar: _event
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) NSArray *sections; // ivar: _sections
@property (readonly) Class superclass;
@property (retain, nonatomic) UITableView *tableView; // ivar: _tableView
@property (readonly, nonatomic) NSArray *tableViewItems; // ivar: _tableViewItems
@property (nonatomic) NSUInteger timeOffset; // ivar: _timeOffset


-(NSInteger)numberOfSectionsInTableView:(id)arg0 ;
-(NSInteger)tableView:(id)arg0 numberOfRowsInSection:(NSInteger)arg1 ;
-(id)infoForSection:(NSInteger)arg0 ;
-(id)initWithTimeTriggerEvent:(NSUInteger)arg0 timeOffset:(NSUInteger)arg1 ;
-(id)tableView:(id)arg0 cellForRowAtIndexPath:(id)arg1 ;
-(id)tableView:(id)arg0 titleForHeaderInSection:(NSInteger)arg1 ;
-(id)titleForRow:(NSInteger)arg0 ;
-(void)cancel:(id)arg0 ;
-(void)done:(id)arg0 ;
-(void)loadView;
-(void)tableView:(id)arg0 didSelectRowAtIndexPath:(id)arg1 ;


@end


#endif