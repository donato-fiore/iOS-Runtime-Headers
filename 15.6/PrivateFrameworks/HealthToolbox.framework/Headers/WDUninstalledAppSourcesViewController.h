// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef WDUNINSTALLEDAPPSOURCESVIEWCONTROLLER_H
#define WDUNINSTALLEDAPPSOURCESVIEWCONTROLLER_H

@class HKTableViewController, HKSourceListDataSource, UIImage, NSArray;
@protocol HKSourceListDataSourceObserver;


#import "WDProfile.h"

@interface WDUninstalledAppSourcesViewController : HKTableViewController <HKSourceListDataSourceObserver>



@property (retain, nonatomic) HKSourceListDataSource *dataSource; // ivar: _dataSource
@property (retain, nonatomic) WDProfile *profile; // ivar: _profile
@property (readonly) UIImage *uninistalledAppImage;
@property (copy, nonatomic) NSArray *uninstalledSources; // ivar: _uninstalledSources


-(NSInteger)numberOfSectionsInTableView:(id)arg0 ;
-(NSInteger)tableView:(id)arg0 numberOfRowsInSection:(NSInteger)arg1 ;
-(id)tableView:(id)arg0 cellForRowAtIndexPath:(id)arg1 ;
-(void)dealloc;
-(void)sourceListDataSourceDidUpdate:(id)arg0 ;
-(void)tableView:(id)arg0 didSelectRowAtIndexPath:(id)arg1 ;
-(void)updateUninstalledSources;
-(void)viewWillAppear:(BOOL)arg0 ;


@end


#endif