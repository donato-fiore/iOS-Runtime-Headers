// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef HUTEMPERATUREUNITPICKERVIEWCONTROLLER_H
#define HUTEMPERATUREUNITPICKERVIEWCONTROLLER_H

@class UITableViewController, NSString, HFSimpleItemManager;
@protocol HFItemManagerDelegate;



@interface HUTemperatureUnitPickerViewController : UITableViewController <HFItemManagerDelegate>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) HFSimpleItemManager *itemManager; // ivar: _itemManager
@property (readonly) Class superclass;


-(NSInteger)_tableRowToTemperatureUnit:(NSUInteger)arg0 ;
-(NSInteger)tableView:(id)arg0 numberOfRowsInSection:(NSInteger)arg1 ;
-(id)_controlItem;
-(id)initWithUnitItem:(id)arg0 ;
-(id)tableView:(id)arg0 cellForRowAtIndexPath:(id)arg1 ;
-(void)itemManager:(id)arg0 didUpdateResultsForSourceItem:(id)arg1 ;
-(void)tableView:(id)arg0 didSelectRowAtIndexPath:(id)arg1 ;
-(void)viewDidLoad;


@end


#endif