// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef HKWORKOUTROUTETABLEVIEWCONTROLLER_H
#define HKWORKOUTROUTETABLEVIEWCONTROLLER_H

@class HKHealthStore, NSMutableArray, HKWorkoutRoute;


#import "HKDataMetadataViewController.h"
#import "HKMapRouteTableViewCell.h"

@interface HKWorkoutRouteTableViewController : HKDataMetadataViewController

@property (retain, nonatomic) HKHealthStore *healthStore; // ivar: _healthStore
@property (retain, nonatomic) HKMapRouteTableViewCell *mapRouteTableViewCell; // ivar: _mapRouteTableViewCell
@property (retain, nonatomic) NSMutableArray *routeData; // ivar: _routeData
@property (readonly) HKWorkoutRoute *workoutRoute;


-(NSInteger)numberOfSectionsInTableView:(id)arg0 ;
-(NSInteger)tableView:(id)arg0 numberOfRowsInSection:(NSInteger)arg1 ;
-(id)_convertIndexPathToSuper:(id)arg0 ;
-(id)initWithSample:(id)arg0 usingInsetStyling:(BOOL)arg1 profileName:(id)arg2 delegate:(id)arg3 ;
-(id)initWithWorkoutRoute:(id)arg0 healthStore:(id)arg1 usingInsetStyling:(BOOL)arg2 profileName:(id)arg3 delegate:(id)arg4 ;
-(id)tableView:(id)arg0 cellForRowAtIndexPath:(id)arg1 ;
-(id)tableView:(id)arg0 titleForHeaderInSection:(NSInteger)arg1 ;
-(void)addRouteData:(id)arg0 hasFinishedQuery:(BOOL)arg1 ;
-(void)loadRoute;
-(void)parseAndDisplayRouteData;
-(void)tableView:(id)arg0 didSelectRowAtIndexPath:(id)arg1 ;
-(void)viewDidLoad;


@end


#endif