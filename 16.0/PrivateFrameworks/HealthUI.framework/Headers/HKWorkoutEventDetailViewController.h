// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef HKWORKOUTEVENTDETAILVIEWCONTROLLER_H
#define HKWORKOUTEVENTDETAILVIEWCONTROLLER_H

@class HKWorkoutEvent, NSMutableArray;


#import "HKTableViewController.h"

@interface HKWorkoutEventDetailViewController : HKTableViewController

@property (retain, nonatomic) HKWorkoutEvent *event; // ivar: _event
@property (retain, nonatomic) NSMutableArray *sections; // ivar: _sections


-(CGFloat)tableView:(id)arg0 estimatedHeightForRowAtIndexPath:(id)arg1 ;
-(CGFloat)tableView:(id)arg0 heightForHeaderInSection:(NSInteger)arg1 ;
-(CGFloat)tableView:(id)arg0 heightForRowAtIndexPath:(id)arg1 ;
-(NSInteger)numberOfSectionsInTableView:(id)arg0 ;
-(NSInteger)tableView:(id)arg0 numberOfRowsInSection:(NSInteger)arg1 ;
-(id)initWithEvent:(id)arg0 ;
-(id)tableView:(id)arg0 cellForRowAtIndexPath:(id)arg1 ;
-(id)tableView:(id)arg0 titleForHeaderInSection:(NSInteger)arg1 ;
-(void)_addSectionIfNotNil:(id)arg0 ;
-(void)_loadSections;


@end


#endif