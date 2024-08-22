// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef PXDEBUGCMMINCOMINGTABLEVIEWCONTROLLER_H
#define PXDEBUGCMMINCOMINGTABLEVIEWCONTROLLER_H

@class UITableViewController, NSString;
@protocol PXChangeObserver, PXSectionedDataSourceManagerObserver;


#import "PXCMMInvitationsDataSource.h"
#import "PXCMMInvitationsDataSourceManager.h"

@interface PXDebugCMMIncomingTableViewController : UITableViewController <PXChangeObserver, PXSectionedDataSourceManagerObserver>



@property (retain, nonatomic) PXCMMInvitationsDataSource *dataSource; // ivar: _dataSource
@property (readonly, nonatomic) PXCMMInvitationsDataSourceManager *dataSourceManager; // ivar: _dataSourceManager
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(NSInteger)numberOfSectionsInTableView:(id)arg0 ;
-(NSInteger)tableView:(id)arg0 numberOfRowsInSection:(NSInteger)arg1 ;
-(id)initWithDataSourceManager:(id)arg0 ;
-(id)tableView:(id)arg0 cellForRowAtIndexPath:(id)arg1 ;
-(void)observable:(id)arg0 didChange:(NSUInteger)arg1 context:(*void)arg2 ;
-(void)viewDidLoad;


@end


#endif