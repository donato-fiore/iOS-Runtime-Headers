// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef FBKPOWERLOGINDEXVIEWCONTROLLER_H
#define FBKPOWERLOGINDEXVIEWCONTROLLER_H

@class UITableViewController, PLDatabaseReader, NSString, NSURL, NSArray;
@protocol UITableViewDataSource, UITableViewDelegate;



@interface FBKPowerLogIndexViewController : UITableViewController <UITableViewDataSource, UITableViewDelegate>



@property (retain) PLDatabaseReader *databaseReader; // ivar: _databaseReader
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property BOOL enteringDetail; // ivar: _enteringDetail
@property (readonly) NSUInteger hash;
@property (retain) NSURL *logURL; // ivar: _logURL
@property (readonly) Class superclass;
@property (copy) NSArray *tableNames; // ivar: _tableNames


+(BOOL)canDisplayURL:(id)arg0 ;
-(NSInteger)numberOfSectionsInTableView:(id)arg0 ;
-(NSInteger)tableView:(id)arg0 numberOfRowsInSection:(NSInteger)arg1 ;
-(id)tableView:(id)arg0 cellForRowAtIndexPath:(id)arg1 ;
-(id)tableView:(id)arg0 titleForHeaderInSection:(NSInteger)arg1 ;
-(void)prepareForSegue:(id)arg0 sender:(id)arg1 ;
-(void)setPowerLogURL:(id)arg0 ;
-(void)viewDidLoad;
-(void)viewWillDisappear:(BOOL)arg0 ;


@end


#endif