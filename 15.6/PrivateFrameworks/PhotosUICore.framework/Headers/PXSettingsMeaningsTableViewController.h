// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef PXSETTINGSMEANINGSTABLEVIEWCONTROLLER_H
#define PXSETTINGSMEANINGSTABLEVIEWCONTROLLER_H

@class UITableViewController, NSDictionary, NSArray;



@interface PXSettingsMeaningsTableViewController : UITableViewController

@property (retain, nonatomic) NSDictionary *meaningDataContainerByMeaningLabels; // ivar: _meaningDataContainerByMeaningLabels
@property (retain, nonatomic) NSArray *meaningLabels; // ivar: _meaningLabels


-(NSInteger)numberOfSectionsInTableView:(id)arg0 ;
-(NSInteger)tableView:(id)arg0 numberOfRowsInSection:(NSInteger)arg1 ;
-(id)_momentIdentifiersByMeaningLabel;
-(id)init;
-(id)tableView:(id)arg0 cellForRowAtIndexPath:(id)arg1 ;
-(void)tableView:(id)arg0 didSelectRowAtIndexPath:(id)arg1 ;
-(void)viewDidLoad;


@end


#endif