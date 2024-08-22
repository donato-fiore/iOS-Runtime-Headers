// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef HKVERIFIABLECLINICALRECORDDETAILVIEWCONTROLLER_H
#define HKVERIFIABLECLINICALRECORDDETAILVIEWCONTROLLER_H



#import "HKTableViewController.h"
#import "HKVerifiableClinicalRecordDetailDataProvider.h"

@interface HKVerifiableClinicalRecordDetailViewController : HKTableViewController

@property (retain, nonatomic) HKVerifiableClinicalRecordDetailDataProvider *dataProvider; // ivar: _dataProvider


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