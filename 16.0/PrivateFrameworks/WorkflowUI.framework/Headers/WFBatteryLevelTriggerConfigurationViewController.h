// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef WFBATTERYLEVELTRIGGERCONFIGURATIONVIEWCONTROLLER_H
#define WFBATTERYLEVELTRIGGERCONFIGURATIONVIEWCONTROLLER_H

@class WFTriggerConfigurationViewController, NSString, NSArray, UITableView;
@protocol WFTriggerPercentageSliderCellDelegate, UITableViewDataSource, UITableViewDelegate;



@interface WFBatteryLevelTriggerConfigurationViewController : WFTriggerConfigurationViewController <WFTriggerPercentageSliderCellDelegate, UITableViewDataSource, UITableViewDelegate>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) NSArray *sections; // ivar: _sections
@property (readonly) Class superclass;
@property (readonly, nonatomic) UITableView *tableView; // ivar: _tableView


-(NSInteger)numberOfSectionsInTableView:(id)arg0 ;
-(NSInteger)tableView:(id)arg0 numberOfRowsInSection:(NSInteger)arg1 ;
-(id)infoForSection:(NSInteger)arg0 ;
-(id)initWithTrigger:(id)arg0 mode:(NSUInteger)arg1 ;
-(id)localizedTextForCellAtIndexPath:(id)arg0 value:(CGFloat)arg1 ;
-(id)tableView:(id)arg0 cellForRowAtIndexPath:(id)arg1 ;
-(id)tableView:(id)arg0 titleForHeaderInSection:(NSInteger)arg1 ;
-(id)tableView:(id)arg0 viewForHeaderInSection:(NSInteger)arg1 ;
-(void)disableRowVisibilityFor:(id)arg0 ;
-(void)enableRowVisibilityFor:(id)arg0 ;
-(void)loadView;
-(void)sliderValueChangedToValue:(CGFloat)arg0 ;
-(void)tableView:(id)arg0 didSelectRowAtIndexPath:(id)arg1 ;
-(void)updateCellLabelsWithValue:(CGFloat)arg0 ;


@end


#endif