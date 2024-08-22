// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef FBKDEVICECHOICESVIEWCONTROLLER_H
#define FBKDEVICECHOICESVIEWCONTROLLER_H

@class UITableViewController, _UIContentUnavailableView, NSSet, NSMutableSet, NSArray;
@protocol FBKDeviceChoiceDelegate;



@interface FBKDeviceChoicesViewController : UITableViewController

@property (weak, nonatomic) NSObject<FBKDeviceChoiceDelegate> *choiceDelegate; // ivar: _choiceDelegate
@property (retain, nonatomic) _UIContentUnavailableView *contentUnavailableView; // ivar: _contentUnavailableView
@property (retain, nonatomic) NSSet *deviceChoices; // ivar: _deviceChoices
@property BOOL isMultiSelect; // ivar: _isMultiSelect
@property (retain, nonatomic) NSMutableSet *selectedDevices; // ivar: _selectedDevices
@property (retain, nonatomic) NSArray *sortedChoices; // ivar: _sortedChoices


-(NSInteger)numberOfSectionsInTableView:(id)arg0 ;
-(NSInteger)tableView:(id)arg0 numberOfRowsInSection:(NSInteger)arg1 ;
-(id)init;
-(id)tableView:(id)arg0 cellForRowAtIndexPath:(id)arg1 ;
-(id)tableView:(id)arg0 titleForFooterInSection:(NSInteger)arg1 ;
-(id)tableView:(id)arg0 titleForHeaderInSection:(NSInteger)arg1 ;
-(void)didCancel;
-(void)didTapDone;
-(void)hideContentUnavailableView;
-(void)showContentUnavailableView;
-(void)tableView:(id)arg0 didSelectRowAtIndexPath:(id)arg1 ;
-(void)viewDidLoad;


@end


#endif