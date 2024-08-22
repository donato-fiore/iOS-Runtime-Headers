// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef WDCLINICALSETTINGSVIEWANALYTICSDATAVIEWCONTROLLER_H
#define WDCLINICALSETTINGSVIEWANALYTICSDATAVIEWCONTROLLER_H

@class UITableViewController, NSArray, HKHealthRecordsStore, _UIContentUnavailableView;



@interface WDClinicalSettingsViewAnalyticsDataViewController : UITableViewController

@property (retain) NSArray *filePaths; // ivar: _filePaths
@property (retain, nonatomic) HKHealthRecordsStore *healthRecordsStore; // ivar: _healthRecordsStore
@property (retain) _UIContentUnavailableView *noDataView; // ivar: _noDataView


-(NSInteger)numberOfSectionsInTableView:(id)arg0 ;
-(NSInteger)tableView:(id)arg0 numberOfRowsInSection:(NSInteger)arg1 ;
-(NSUInteger)supportedInterfaceOrientations;
-(id)description;
-(id)tableView:(id)arg0 cellForRowAtIndexPath:(id)arg1 ;
-(void)fetchClinicalOptInDataCollectionFilePaths;
-(void)tableView:(id)arg0 didSelectRowAtIndexPath:(id)arg1 ;
-(void)viewDidLoad;


@end


#endif