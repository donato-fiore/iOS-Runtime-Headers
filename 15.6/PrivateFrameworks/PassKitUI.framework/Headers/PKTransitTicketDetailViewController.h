// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef PKTRANSITTICKETDETAILVIEWCONTROLLER_H
#define PKTRANSITTICKETDETAILVIEWCONTROLLER_H

@class UITableViewController, UIColor;
@protocol PKTransitTicketDetailDataSource;



@interface PKTransitTicketDetailViewController : UITableViewController

@property (weak, nonatomic) NSObject<PKTransitTicketDetailDataSource> *dataSource; // ivar: _dataSource
@property (retain, nonatomic) UIColor *primaryTextColor; // ivar: _primaryTextColor
@property (retain, nonatomic) UIColor *secondaryTextColor; // ivar: _secondaryTextColor


-(NSInteger)numberOfSectionsInTableView:(id)arg0 ;
-(NSInteger)tableView:(id)arg0 numberOfRowsInSection:(NSInteger)arg1 ;
-(id)initWithTransitTicketDetailDataSource:(id)arg0 ;
-(id)tableView:(id)arg0 cellForRowAtIndexPath:(id)arg1 ;
-(id)tableView:(id)arg0 titleForHeaderInSection:(NSInteger)arg1 ;
-(void)_applyDefaultStaticStylingToCell:(id)arg0 ;
-(void)viewDidLoad;


@end


#endif