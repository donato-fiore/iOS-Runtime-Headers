// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef HKSIGNEDCLINICALDATADETAILVIEWCONTROLLER_H
#define HKSIGNEDCLINICALDATADETAILVIEWCONTROLLER_H



#import "HKTableViewController.h"
#import "HKSignedClinicalDataDetailDataProvider.h"

@interface HKSignedClinicalDataDetailViewController : HKTableViewController

@property (retain, nonatomic) HKSignedClinicalDataDetailDataProvider *dataProvider; // ivar: _dataProvider


-(NSInteger)numberOfSectionsInTableView:(id)arg0 ;
-(NSInteger)tableView:(id)arg0 numberOfRowsInSection:(NSInteger)arg1 ;
-(id)configureSubtitleCellForItem:(id)arg0 tableView:(id)arg1 ;
-(id)configureValueCellForItem:(id)arg0 tableView:(id)arg1 ;
-(id)initWithSignedRecord:(id)arg0 medicalRecords:(id)arg1 ;
-(id)tableView:(id)arg0 cellForRowAtIndexPath:(id)arg1 ;
-(id)tableView:(id)arg0 titleForFooterInSection:(NSInteger)arg1 ;
-(id)tableView:(id)arg0 titleForHeaderInSection:(NSInteger)arg1 ;
-(void)_setUpTableView;
-(void)viewDidLoad;


@end


#endif