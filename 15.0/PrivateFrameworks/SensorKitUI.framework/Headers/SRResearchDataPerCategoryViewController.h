// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef SRRESEARCHDATAPERCATEGORYVIEWCONTROLLER_H
#define SRRESEARCHDATAPERCATEGORYVIEWCONTROLLER_H

@class UITableViewController, NSArray, SRAuthorizationStore, NSMutableSet, NSString, NSMutableArray, NSSet;
@protocol SRAuthorizationCellDelegate, SRSensorReaderDelegate, SRSensorPrunerDelegate, OS_dispatch_group;


#import "SRAuthorizationGroup.h"

@interface SRResearchDataPerCategoryViewController : UITableViewController <SRAuthorizationCellDelegate, SRSensorReaderDelegate, SRSensorPrunerDelegate>



@property (retain, nonatomic) NSArray *appBundles; // ivar: _appBundles
@property (retain, nonatomic) SRAuthorizationGroup *authGroup; // ivar: _authGroup
@property (retain) SRAuthorizationStore *authStore; // ivar: _authStore
@property (retain, nonatomic) NSMutableSet *authorizedBundleIds; // ivar: _authorizedBundleIds
@property (retain, nonatomic) NSMutableSet *authorizedWriterBundleIds; // ivar: _authorizedWriterBundleIds
@property (copy) id *cancelExportBlock; // ivar: _cancelExportBlock
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic) CGFloat end; // ivar: _end
@property (retain, nonatomic) NSObject<OS_dispatch_group> *fetchGroup; // ivar: _fetchGroup
@property (readonly) NSUInteger hash;
@property (nonatomic) NSInteger numberOfDays; // ivar: _numberOfDays
@property (retain, nonatomic) NSMutableArray *pruners; // ivar: _pruners
@property (retain, nonatomic) NSMutableArray *readers; // ivar: _readers
@property (retain, nonatomic) NSSet *sensorIdentifiers; // ivar: _sensorIdentifiers
@property (nonatomic) CGFloat start; // ivar: _start
@property (readonly) Class superclass;
@property (retain, nonatomic) NSMutableArray *tombstones; // ivar: _tombstones
@property (retain, nonatomic) NSArray *writerAppBundles; // ivar: _writerAppBundles


+(void)initialize;
-(BOOL)sensorReader:(id)arg0 fetchingRequest:(id)arg1 didFetchResult:(id)arg2 ;
-(NSInteger)daysFromDate:(id)arg0 toDate:(id)arg1 ;
-(NSInteger)numberOfSectionsInTableView:(id)arg0 ;
-(NSInteger)tableSectionFromIndexPathSection:(NSInteger)arg0 ;
-(NSInteger)tableView:(id)arg0 numberOfRowsInSection:(NSInteger)arg1 ;
-(id)bundleForIndexPath:(id)arg0 ;
-(id)prepareDayCell;
-(id)prepareDeleteCell;
-(id)prepareExportCell;
-(id)tableView:(id)arg0 cellForRowAtIndexPath:(id)arg1 ;
-(id)tableView:(id)arg0 titleForFooterInSection:(NSInteger)arg1 ;
-(id)tableView:(id)arg0 titleForHeaderInSection:(NSInteger)arg1 ;
-(void)authorizationSwitchToggledWithValue:(BOOL)arg0 indexPath:(id)arg1 ;
-(void)cancelExport;
-(void)confirmAuthChangeForBundle:(id)arg0 value:(BOOL)arg1 authService:(id)arg2 authorizedBundleIds:(id)arg3 setOverride:(BOOL)arg4 ;
-(void)dealloc;
-(void)deleteAllUnreleasedData;
-(void)exportData;
-(void)populateDays;
-(void)presentDownloadPath:(id)arg0 sandboxExtensionToken:(id)arg1 ;
-(void)sensorReader:(id)arg0 didCompleteFetch:(id)arg1 ;
-(void)sensorReader:(id)arg0 fetchingRequest:(id)arg1 failedWithError:(id)arg2 ;
-(void)showActionSheet;
-(void)tableView:(id)arg0 didSelectRowAtIndexPath:(id)arg1 ;
-(void)viewDidLoad;
-(void)viewWillAppear:(BOOL)arg0 ;
-(void)viewWillDisappear:(BOOL)arg0 ;


@end


#endif