// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef WFPREDICTEDLOCATIONTRANSITIONTRIGGERCONFIGURATIONVIEWCONTROLLER_H
#define WFPREDICTEDLOCATIONTRANSITIONTRIGGERCONFIGURATIONVIEWCONTROLLER_H

@class WFTriggerConfigurationViewController, NSString, NSArray, UITableView;
@protocol UITableViewDataSource, UITableViewDelegate;



@interface WFPredictedLocationTransitionTriggerConfigurationViewController : WFTriggerConfigurationViewController <UITableViewDataSource, UITableViewDelegate>



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
-(id)tableView:(id)arg0 cellForRowAtIndexPath:(id)arg1 ;
-(id)tableView:(id)arg0 titleForHeaderInSection:(NSInteger)arg1 ;
-(id)tableView:(id)arg0 viewForHeaderInSection:(NSInteger)arg1 ;
-(void)loadView;
-(void)tableView:(id)arg0 didSelectRowAtIndexPath:(id)arg1 ;
-(void)updateUI;
-(void)viewWillAppear:(BOOL)arg0 ;


@end


#endif