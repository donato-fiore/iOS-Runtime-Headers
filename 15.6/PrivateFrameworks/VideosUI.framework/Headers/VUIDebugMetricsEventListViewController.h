// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef VUIDEBUGMETRICSEVENTLISTVIEWCONTROLLER_H
#define VUIDEBUGMETRICSEVENTLISTVIEWCONTROLLER_H

@class UITableViewController, NSArray;



@interface VUIDebugMetricsEventListViewController : UITableViewController

@property (retain, nonatomic) NSArray *allEvents; // ivar: _allEvents
@property (retain, nonatomic) NSArray *buttonsInHeader; // ivar: _buttonsInHeader
@property (retain, nonatomic) NSArray *buttonsInHeaderSelected; // ivar: _buttonsInHeaderSelected
@property (retain, nonatomic) NSArray *visibleEvents; // ivar: _visibleEvents


-(CGFloat)tableView:(id)arg0 heightForRowAtIndexPath:(id)arg1 ;
-(NSInteger)numberOfSectionsInTableView:(id)arg0 ;
-(NSInteger)tableView:(id)arg0 numberOfRowsInSection:(NSInteger)arg1 ;
-(id)_formatKeyAndValue:(id)arg0 fromEvent:(id)arg1 ;
-(id)_imageFromPageContext:(id)arg0 ;
-(id)initWithEvents:(id)arg0 ;
-(id)tableView:(id)arg0 cellForRowAtIndexPath:(id)arg1 ;
-(id)tableView:(id)arg0 viewForHeaderInSection:(NSInteger)arg1 ;
-(void)_buttonClicked:(id)arg0 ;
-(void)finishValidation;
-(void)tableView:(id)arg0 didSelectRowAtIndexPath:(id)arg1 ;
-(void)toggleValidationMode;
-(void)viewDidLoad;


@end


#endif