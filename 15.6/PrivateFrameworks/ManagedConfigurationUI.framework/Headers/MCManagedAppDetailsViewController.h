// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef MCMANAGEDAPPDETAILSVIEWCONTROLLER_H
#define MCMANAGEDAPPDETAILSVIEWCONTROLLER_H

@class LSApplicationProxy;


#import "MCUITableViewController.h"
#import "MCUIProfile.h"

@interface MCManagedAppDetailsViewController : MCUITableViewController

@property (retain, nonatomic) MCUIProfile *UIProfile; // ivar: _UIProfile
@property (retain, nonatomic) LSApplicationProxy *managedAppProxy; // ivar: _managedAppProxy


-(CGFloat)tableView:(id)arg0 estimatedHeightForRowAtIndexPath:(id)arg1 ;
-(NSInteger)numberOfSectionsInTableView:(id)arg0 ;
-(NSInteger)tableView:(id)arg0 numberOfRowsInSection:(NSInteger)arg1 ;
-(id)initWithUIProfile:(id)arg0 managedApp:(id)arg1 ;
-(id)initWithUIProfile:(id)arg0 managedAppID:(id)arg1 ;
-(id)tableView:(id)arg0 cellForRowAtIndexPath:(id)arg1 ;
-(void)_profileChanged:(id)arg0 ;
-(void)_setup;


@end


#endif